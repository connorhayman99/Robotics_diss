/* Simple example code for Force Sensitive Resistor (FSR) with Arduino. More info: https://www.makerguides.com */

/* I need to send a message from the Arduino to my laptop of the weight measurements
 * As a part of every ROS Arduino program, you need to include the ros.h header file 
 * and header files for any messages that you will be using.
 */
 
#include <ros.h> 
#include <std_msgs/Float64.h>


/* Next, we need to instantiate the node handle, which allows our program to create 
publishers and subscribers. The node handle also takes care of serial port 
communications. */

// ros node initialised
ros::NodeHandle nh;

/* We need to instantiate the publishers and subscribers that we will be using. 
 *  Here we instantiate a Publisher with a topic name of "mass". 
 *  The second parameter of Publisher is a reference to the message instance to 
 *  be used for publishing.
 */
 

std_msgs::Float64 mass_msg;
ros::Publisher mass("mass", &mass_msg);
std_msgs::Float64 mass_msg2;
ros::Publisher mass2("mass2", &mass_msg2);
std_msgs::Float64 mass_msg3;
ros::Publisher mass3("mass3", &mass_msg3);

std_msgs::Float64 force_msg;
ros::Publisher force("force", &force_msg);
std_msgs::Float64 force_msg2;
ros::Publisher force2("force2", &force_msg2);
std_msgs::Float64 force_msg3;
ros::Publisher force3("force3", &force_msg3);


// Define FSR pin:
#define fsrpin1 A0
#define fsrpin2 A1
#define fsrpin3 A2
 
float fsr_ln_mass1; //Variable to store calibration curve mass values
float fsr_ln_mass2;
float fsr_ln_mass3;

float fsr_predicted_mass1_grams; //Variable to store calibration curve mass values
float fsr_predicted_mass2_grams;
float fsr_predicted_mass3_grams;

float fsr_predicted_force1_N;
float fsr_predicted_force2_N;
float fsr_predicted_force3_N;

void setup() {
  /* In the Arduino setup function you then need to initialize your ROS node handle, 
   * advertise any topics being published, and subscribe to any topics you wish to 
   * listen to.
  */
  nh.initNode();
  nh.advertise(mass);
  nh.advertise(mass2);
  nh.advertise(mass3);
  nh.advertise(force);
  nh.advertise(force2);
  nh.advertise(force3);
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
  /*fsr_ln_mass1 = 0.0000000153303396061458*(fsrreading1*fsrreading1*fsrreading1) - 0.0000207030177585524*(fsrreading1*fsrreading1)+ 0.010351283024522*(fsrreading1) + 1.56676867009482;*/
  fsr_ln_mass1 = 0.0000001156*analogRead(fsrpin1)*analogRead(fsrpin1)*analogRead(fsrpin1) - 0.0002490*analogRead(fsrpin1)*analogRead(fsrpin1) + 0.1803*analogRead(fsrpin1) - 46.28;  
  /*fsr_ln_mass2 = 0.0000000196299387372149*(fsrreading2*fsrreading2*fsrreading2) - 0.0000287964138069564*(fsrreading2*fsrreading2) + 0.0155610857027119*(fsrreading2) + 0.357843601476977;*/
  fsr_ln_mass2 = 0.0000001235*analogRead(fsrpin2)*analogRead(fsrpin2)*analogRead(fsrpin2) - 0.0002638*analogRead(fsrpin2)*analogRead(fsrpin2) + 0.1899*analogRead(fsrpin2) - 48.62;  
  /*fsr_ln_mass3 = 0.0000000248685159488148*(fsrreading3*fsrreading3*fsrreading3) - 0.0000404237249967031*(fsrreading3*fsrreading3) + 0.0238406098854353*(fsrreading3) - 1.62657981268288;*/
  fsr_ln_mass3 = 0.0000001487*analogRead(fsrpin3)*analogRead(fsrpin3)*analogRead(fsrpin3) - 0.0003236*analogRead(fsrpin3)*analogRead(fsrpin3) + 0.2360*analogRead(fsrpin3) - 60.44;  
  /*fsrreading0_mass_grams = exp((fsrreading0 + 389.06)/236.04);*/
  /*fsrreading0_weight_force = fsrreading0_mass_grams * 0.00981*/

  /* convert mass from ln(mass) to actual mass values */
  fsr_predicted_mass1_grams = exp(fsr_ln_mass1);
  fsr_predicted_mass2_grams = exp(fsr_ln_mass2);
  fsr_predicted_mass3_grams = exp(fsr_ln_mass3);

  /* equation to calculate the force values of the FSRs */
  fsr_predicted_force1_N = fsr_predicted_mass1_grams * 9.81;
  fsr_predicted_force2_N = fsr_predicted_mass2_grams * 9.81;
  fsr_predicted_force3_N = fsr_predicted_mass3_grams * 9.81;

  
  

  // Print the fsrreading in the serial monitor:
  // Print the string "Analog reading = ".
  Serial.print(F("Predicted ln(mass) reading = "));
  Serial.print('\t');
  Serial.print(fsr_ln_mass1);
  Serial.print('\t');
  Serial.print(fsr_ln_mass2);
  Serial.print('\t');
  Serial.print(fsr_ln_mass3);
  Serial.print('\t');
  Serial.print(F("Predicted mass (Kg) reading = "));
  Serial.print('\t');
  Serial.print(fsr_predicted_mass1_grams, 4);
  Serial.print('\t');
  Serial.print(fsr_predicted_mass2_grams, 4);
  Serial.print('\t');
  Serial.print(fsr_predicted_mass3_grams, 4);
  Serial.print('\t');
  /*Serial.print(fsrreading1_weight);Serial.write('\t');*/
  Serial. println(); 

  /*// maybe without the & so becomes mass_msg */


  // ros publisher on predicted weight value
  mass_msg.data = fsr_predicted_mass1_grams;
  mass_msg2.data = fsr_predicted_mass2_grams;
  mass_msg3.data = fsr_predicted_mass3_grams;
  mass.publish( &mass_msg );
  mass2.publish( &mass_msg2 );
  mass3.publish( &mass_msg3 );
  force_msg.data = fsr_predicted_force1_N;
  force_msg2.data = fsr_predicted_force2_N;
  force_msg3.data = fsr_predicted_force3_N;
  force.publish( &force_msg );
  force2.publish( &force_msg2 );
  force3.publish( &force_msg3 );
  nh.spinOnce();
  delay(1); //Delay 1 ms.
}
