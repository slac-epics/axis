/* axis_priv.h: private fields, which could be outside the record */

#ifndef INC_axis_priv_H
#define INC_axis_priv_H

#include "epicsTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

  struct axis_priv {
    struct {
      double position;           /**< Commanded motor position */
      double encoderPosition;    /**< Actual encoder position */
    } readBack;
    struct {
      double motorDialHighLimitRO;   /**< read only high limit from controller. */
      double motorDialLowLimitRO;    /**< read only low limit from controller. */
      int motorDialLimitsValid;
    } softLimitRO;
    struct {
      double motorMaxVelocityDial; /**< Maximum velocity */
      double motorDefVelocityDial; /**< Default velocity (moveAbs, moveRel) */
      double motorDefJogVeloDial;  /**< Default velocity (for jogging) */
      double motorDefJogAccDial;   /**< Default accelation (steps/sec2 or motorUnits/sec2) */
      double motorSDBDDial;        /**< Minimal movement */
      double motorRDBDDial;        /**< "At target position" deadband */
    } configRO;
    struct {
      double motorHighLimitRaw;  /* last from dev support in status */
      double motorLowLimitRaw;   /* last from dev support in status */
      double val;               /* last .VAL */
      double dval;               /* last .DVAL */
      double rval;               /* last .RVAL */
      double rlv;                /* Last Rel Value (EGU) */
      double alst;               /* Last Value Archived */
      double mlst;               /* Last Val Monitored */
      short  dmov;               /* last .DMOV */
    } last;
  };
  
#ifdef __cplusplus
}
#endif
#endif /* INC_axis_priv_H */
