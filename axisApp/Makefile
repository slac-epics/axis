TOP = ..
include $(TOP)/configure/CONFIG

# AxisSrc is required for all motor record configurations.  It MUST appear
# 1st in this list of directories.

DIRS += AxisSrc

# Select/deselect individual device driver modules by removing/adding a
# "#" comment.

# All the following modules require ASYN.
ifdef ASYN
DIRS += EthercatSrc
EthercatSrc_DEPEND_DIRS   = AxisSrc

DIRS += OmsAsynSrc
OmsAsynSrc_DEPEND_DIRS   = AxisSrc

DIRS += NewportSrc
NewportSrc_DEPEND_DIRS = AxisSrc

DIRS += PIGCS2Src
PIGCS2Src_DEPEND_DIRS = AxisSrc

DIRS += AttocubeSrc
AttocubeSrc_DEPEND_DIRS = AxisSrc



# Support for the IcePAP
ifdef EPICSAXISICEPAP
DIRS += IcePAPsrc
IcePAPsrc_DEPEND_DIRS = AxisSrc
endif


# The Hytec support requires ipac
ifdef IPAC
DIRS += HytecSrc
HytecSrc_DEPEND_DIRS = AxisSrc
endif

DIRS += ACRSrc
ACRSrc_DEPEND_DIRS = AxisSrc

DIRS += SmarActMCSSrc
SmarActMCSSrc_DEPEND_DIRS = AxisSrc

DIRS += NPointSrc
NPointSrc_DEPEND_DIRS = AxisSrc

DIRS += MicronixSrc
MicronixSrc_DEPEND_DIRS = AxisSrc

DIRS += PhytronSrc
PhytronSrc_DEPEND_DIRS = AxisSrc

endif

# Install the edl files
#DIRS += opi

DIRS += Db

include $(TOP)/configure/RULES_DIRS
