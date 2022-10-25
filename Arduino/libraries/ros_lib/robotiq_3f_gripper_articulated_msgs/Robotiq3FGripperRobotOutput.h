#ifndef _ROS_robotiq_3f_gripper_articulated_msgs_Robotiq3FGripperRobotOutput_h
#define _ROS_robotiq_3f_gripper_articulated_msgs_Robotiq3FGripperRobotOutput_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotiq_3f_gripper_articulated_msgs
{

  class Robotiq3FGripperRobotOutput : public ros::Msg
  {
    public:
      typedef uint8_t _rACT_type;
      _rACT_type rACT;
      typedef uint8_t _rMOD_type;
      _rMOD_type rMOD;
      typedef uint8_t _rGTO_type;
      _rGTO_type rGTO;
      typedef uint8_t _rATR_type;
      _rATR_type rATR;
      typedef uint8_t _rGLV_type;
      _rGLV_type rGLV;
      typedef uint8_t _rICF_type;
      _rICF_type rICF;
      typedef uint8_t _rICS_type;
      _rICS_type rICS;
      typedef uint8_t _rPRA_type;
      _rPRA_type rPRA;
      typedef uint8_t _rSPA_type;
      _rSPA_type rSPA;
      typedef uint8_t _rFRA_type;
      _rFRA_type rFRA;
      typedef uint8_t _rPRB_type;
      _rPRB_type rPRB;
      typedef uint8_t _rSPB_type;
      _rSPB_type rSPB;
      typedef uint8_t _rFRB_type;
      _rFRB_type rFRB;
      typedef uint8_t _rPRC_type;
      _rPRC_type rPRC;
      typedef uint8_t _rSPC_type;
      _rSPC_type rSPC;
      typedef uint8_t _rFRC_type;
      _rFRC_type rFRC;
      typedef uint8_t _rPRS_type;
      _rPRS_type rPRS;
      typedef uint8_t _rSPS_type;
      _rSPS_type rSPS;
      typedef uint8_t _rFRS_type;
      _rFRS_type rFRS;

    Robotiq3FGripperRobotOutput():
      rACT(0),
      rMOD(0),
      rGTO(0),
      rATR(0),
      rGLV(0),
      rICF(0),
      rICS(0),
      rPRA(0),
      rSPA(0),
      rFRA(0),
      rPRB(0),
      rSPB(0),
      rFRB(0),
      rPRC(0),
      rSPC(0),
      rFRC(0),
      rPRS(0),
      rSPS(0),
      rFRS(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->rACT >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rACT);
      *(outbuffer + offset + 0) = (this->rMOD >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rMOD);
      *(outbuffer + offset + 0) = (this->rGTO >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rGTO);
      *(outbuffer + offset + 0) = (this->rATR >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rATR);
      *(outbuffer + offset + 0) = (this->rGLV >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rGLV);
      *(outbuffer + offset + 0) = (this->rICF >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rICF);
      *(outbuffer + offset + 0) = (this->rICS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rICS);
      *(outbuffer + offset + 0) = (this->rPRA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rPRA);
      *(outbuffer + offset + 0) = (this->rSPA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rSPA);
      *(outbuffer + offset + 0) = (this->rFRA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rFRA);
      *(outbuffer + offset + 0) = (this->rPRB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rPRB);
      *(outbuffer + offset + 0) = (this->rSPB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rSPB);
      *(outbuffer + offset + 0) = (this->rFRB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rFRB);
      *(outbuffer + offset + 0) = (this->rPRC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rPRC);
      *(outbuffer + offset + 0) = (this->rSPC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rSPC);
      *(outbuffer + offset + 0) = (this->rFRC >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rFRC);
      *(outbuffer + offset + 0) = (this->rPRS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rPRS);
      *(outbuffer + offset + 0) = (this->rSPS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rSPS);
      *(outbuffer + offset + 0) = (this->rFRS >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rFRS);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->rACT =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rACT);
      this->rMOD =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rMOD);
      this->rGTO =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rGTO);
      this->rATR =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rATR);
      this->rGLV =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rGLV);
      this->rICF =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rICF);
      this->rICS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rICS);
      this->rPRA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rPRA);
      this->rSPA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rSPA);
      this->rFRA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rFRA);
      this->rPRB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rPRB);
      this->rSPB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rSPB);
      this->rFRB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rFRB);
      this->rPRC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rPRC);
      this->rSPC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rSPC);
      this->rFRC =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rFRC);
      this->rPRS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rPRS);
      this->rSPS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rSPS);
      this->rFRS =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->rFRS);
     return offset;
    }

    virtual const char * getType() override { return "robotiq_3f_gripper_articulated_msgs/Robotiq3FGripperRobotOutput"; };
    virtual const char * getMD5() override { return "31ba91390a569c669af204c3d006a806"; };

  };

}
#endif
