#ifndef _ROS_robotiq_3f_gripper_articulated_msgs_Robotiq3FGripperRobotInput_h
#define _ROS_robotiq_3f_gripper_articulated_msgs_Robotiq3FGripperRobotInput_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotiq_3f_gripper_articulated_msgs
{

  class Robotiq3FGripperRobotInput : public ros::Msg
  {
    public:
      typedef uint8_t _gACT_type;
      _gACT_type gACT;
      typedef uint8_t _gMOD_type;
      _gMOD_type gMOD;
      typedef uint8_t _gGTO_type;
      _gGTO_type gGTO;
      typedef uint8_t _gIMC_type;
      _gIMC_type gIMC;
      typedef uint8_t _gSTA_type;
      _gSTA_type gSTA;
      typedef uint8_t _gDTA_type;
      _gDTA_type gDTA;
      typedef uint8_t _gDTB_type;
      _gDTB_type gDTB;
      typedef uint8_t _gDTC_type;
      _gDTC_type gDTC;
      typedef uint8_t _gDTS_type;
      _gDTS_type gDTS;
      typedef uint8_t _gFLT_type;
      _gFLT_type gFLT;
      typedef uint8_t _gPRA_type;
      _gPRA_type gPRA;
      typedef uint8_t _gPOA_type;
      _gPOA_type gPOA;
      typedef uint8_t _gCUA_type;
      _gCUA_type gCUA;
      typedef uint8_t _gPRB_type;
      _gPRB_type gPRB;
      typedef uint8_t _gPOB_type;
      _gPOB_type gPOB;
      typedef uint8_t _gCUB_type;
      _gCUB_type gCUB;
      typedef uint8_t _gPRC_type;
      _gPRC_type gPRC;
      typedef uint8_t _gPOC_type;
      _gPOC_type gPOC;
      typedef uint8_t _gCUC_type;
      _gCUC_type gCUC;
      typedef uint8_t _gPRS_type;
      _gPRS_type gPRS;
      typedef uint8_t _gPOS_type;
      _gPOS_type gPOS;
      typedef uint8_t _gCUS_type;
      _gCUS_type gCUS;

    Robotiq3FGripperRobotInput():
      gACT(0),
      gMOD(0),
      gGTO(0),
      gIMC(0),
      gSTA(0),
      gDTA(0),
      gDTB(0),
      gDTC(0),
      gDTS(0),
      gFLT(0),
      gPRA(0),
      gPOA(0),
      gCUA(0),
      gPRB(0),
      gPOB(0),
      gCUB(0),
      gPRC(0),
      gPOC(0),
      gCUC(0),
      gPRS(0),
      gPOS(0),
      gCUS(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->gACT >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gACT);
      *(outbuffer + offset + 0) = (this->gMOD >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gMOD);
      *(outbuffer + offset + 0) = (this->gGTO >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gGTO);
      *(outbuffer + offset + 0) = (this->gIMC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gIMC);
      *(outbuffer + offset + 0) = (this->gSTA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gSTA);
      *(outbuffer + offset + 0) = (this->gDTA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gDTA);
      *(outbuffer + offset + 0) = (this->gDTB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gDTB);
      *(outbuffer + offset + 0) = (this->gDTC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gDTC);
      *(outbuffer + offset + 0) = (this->gDTS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gDTS);
      *(outbuffer + offset + 0) = (this->gFLT >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gFLT);
      *(outbuffer + offset + 0) = (this->gPRA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPRA);
      *(outbuffer + offset + 0) = (this->gPOA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPOA);
      *(outbuffer + offset + 0) = (this->gCUA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gCUA);
      *(outbuffer + offset + 0) = (this->gPRB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPRB);
      *(outbuffer + offset + 0) = (this->gPOB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPOB);
      *(outbuffer + offset + 0) = (this->gCUB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gCUB);
      *(outbuffer + offset + 0) = (this->gPRC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPRC);
      *(outbuffer + offset + 0) = (this->gPOC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPOC);
      *(outbuffer + offset + 0) = (this->gCUC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gCUC);
      *(outbuffer + offset + 0) = (this->gPRS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPRS);
      *(outbuffer + offset + 0) = (this->gPOS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gPOS);
      *(outbuffer + offset + 0) = (this->gCUS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gCUS);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->gACT =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gACT);
      this->gMOD =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gMOD);
      this->gGTO =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gGTO);
      this->gIMC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gIMC);
      this->gSTA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gSTA);
      this->gDTA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gDTA);
      this->gDTB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gDTB);
      this->gDTC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gDTC);
      this->gDTS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gDTS);
      this->gFLT =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gFLT);
      this->gPRA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPRA);
      this->gPOA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPOA);
      this->gCUA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gCUA);
      this->gPRB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPRB);
      this->gPOB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPOB);
      this->gCUB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gCUB);
      this->gPRC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPRC);
      this->gPOC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPOC);
      this->gCUC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gCUC);
      this->gPRS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPRS);
      this->gPOS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gPOS);
      this->gCUS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->gCUS);
     return offset;
    }

    virtual const char * getType() override { return "robotiq_3f_gripper_articulated_msgs/Robotiq3FGripperRobotInput"; };
    virtual const char * getMD5() override { return "4d0701156e580a420c48833f57bc83f3"; };

  };

}
#endif
