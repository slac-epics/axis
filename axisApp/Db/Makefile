TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE

#----------------------------------------------------
#  Optimization of db files using dbst (DEFAULT: NO)
#DB_OPT = YES

#----------------------------------------------------
# Create and install (or just install) dbd files
# <name>.dbd will be created from <name>Include.dbd
#DBD += axis.dbd

#----------------------------------------------------
# Create and install (or just install)
# databases, templates, substitutions like this
DB += axis.db
DB += basic_axis.db
DB += basic_asyn_axis.db
DB += EthercatMC.template
DB += EthercatMCdebug.template
DB += EthercatMChome.template
ifdef EPICSAXISICEPAP
DB += IcePAP.template
endif
DB += IMS_extra.db
DB += XPSAuxAi.db
DB += XPSAuxAo.db
DB += XPSAuxBi.db
DB += XPSAuxBo.db
DB += XPSAuxLi.db
DB += XPSAuxLo.db
DB += XPS_extra.db
DB += XPSPositionCompare.db
DB += XPSTclScript.template
DB += HXP_extra.db
DB += HXP_coords.db
DB += ACRAux.template
DB += ACRAuxRead.template
DB += ACRAuxLi.template
DB += ACRAuxBi.template
DB += ACRAuxBo.template
DB += ACRAuxBoRBV.template
DB += TransPos.db
DB += axisUtil.db
DB += asyn_axis.db
DB += profileMoveController.template
DB += profileMoveAxis.template
DB += profileMoveControllerXPS.template
DB += profileMoveAxisXPS.template
DB += PI_Support.db PI_SupportCtrl.db
DB += Phytron_axis.db Phytron_I1AM01.db Phytron_MCM01.db
DB += asyn_auto_power.db

#----------------------------------------------------
# Declare template files which do not show up in DB
#USES_TEMPLATE += axis.template

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE
