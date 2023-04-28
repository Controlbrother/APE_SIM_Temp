#ifndef _AF_ROAD_ERROR_H_
#define _AF_ROAD_ERROR_H_
/*
********************************************************************************
* Include files
********************************************************************************
*/
#include "aaMacro.h"

/*
********************************************************************************
* Error Deal
********************************************************************************
*/

typedef enum _tag_ARI_ErrorType {
	ERR_NO_ERROR = 0,
	ERR_NAN,
	ERR_INF
} ARI_ErrorType;

typedef enum _tag_ErrorType {
	ERR_PREPROCESS = 1,
	ERR_BOUNDMANAGE,
	ERR_FEATUREPTS,
	ERR_DRIVINGCOOR,
	ERR_LANELINEFIT
} ErrorType;

typedef struct _tag_RoadError {
	ABool bIsError;      
	ErrorType errorType; 
} RoadError;

typedef enum enAErrorCode {
	A_E_NOERROR = 0,           // no error
	A_E_SYSTEM = -1,          // system error
	A_E_BADPARAM = 100,         // param error
	A_E_BEGIN = 1000,        // begin error
	A_E_ASSERT = 1001,        // assert fail
	A_E_PRINT = 1002,        // print message for debug
	A_E_VERTIMEOUT = 1003,        // the version has timeout
	A_E_HANDLE = 1004,        // invalid handle, or <=0 or > 19 or not be open
	A_E_EXCL = 1005,        // the device or file has been used by other in exclusive mode
	A_E_EXIST = 1006,        // the file exists
	A_E_ID = 1007,        // error ID.
	A_E_OPEN = 1008,        // fail to open device or file
	A_E_CREATE = 1009,        // try to create a opening file
	A_E_PATH = 1010,        // fail to create a path
	A_E_MSGFULL = 1011,        // the messge queue is full
	A_E_NOMEMORY = 1012,        // No memory for new allocation
	ET_NETBIND = 1032,        // net bind call error
	ET_NETSOCKET = 1033,        // net socket call error
	ET_NOTCPIP = 1034,        // no tcpip support
	ET_NETIOCTL = 1035,        // net ioctl call error
	ET_USER = 1036,        // illigle user
	ET_DISKNOSPACE = 1040,        // disk no space to save data
	ET_OPENDIR = 1048,        // open directory fail
	ET_PATHOVERFLOW = 1049,        // path too long than 128
	ET_OBCREATE = 1052,        // fail to create the object
	ET_SYSPATHTOOLONG = 1053,        // the system install path is error
	ET_NETERROR = 1054,        // local error
	ET_ENOANSWER = 1055,        // no answer from thread
	ET_ETIMEOUT = 1056,        // operation time out
	ET_EHANGUP = 1057,        // hangup in communication
	ET_EBUSY = 1058,        // remote station busy
	ET_ELINE = 1059,        // communication line can not arrived that host
	ET_EPROTOCOL = 1060,        // the communication protocol doesn't support
	ET_EADDR = 1061,        // error address or local bind address
	ET_ERESOURCE = 1062,        // no resource can be used
	ET_EPHRASE = 1063,        // error call in current phrase
	ET_EINIT = 1064,        // not init or install the driver
	ET_NOTSUPPORT = 1065,        // the protocol can not be support
	ET_NOTSAMESERVER = 1067,        // not support link to another server
	ET_FILENAME = 1068,        // filename not support
	ET_HOSTNAME = 1069,        // hostname not support in [host]
	ET_HOSTROOT = 1070,        // hostroot not support in [host]
	ET_MOUNTID = 1071,        // mount id error in [export]
	ET_EXPORTPATH = 1072,        // export path error in [export]
	ET_SUBGRANT = 1073,        // no sub dir grant to del|copy|move
	ET_MONEYOVER = 1074,        // no money to login server
	ET_LICENSE = 1075,        // no license to use the software
	ET_NOLICSERVER = 1076,        // no license register server
	ET_INVLDLIC = 1077,        // invalid copy occured
	ET_CHECKIN = 1078,        // the file was flaged as check
	ET_RENAMELINK = 1079        // rename a link file
} AErrorCode;

#endif /* _HWA_ROAD_ERROR_H_ */