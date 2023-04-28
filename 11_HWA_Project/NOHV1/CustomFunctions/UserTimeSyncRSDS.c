/* Start of feature parameter definition, must be at the beginning of the file, before all includes, etc. */
#define DS_BUS_CUSTOM_FEATURE_NAME usertimesyncRSDS          
/* End of feature parameter definition */

#include <stdio.h>
#include <stdlib.h>
#include <DsBusCustomCode_PduUserCode.h>
#include "fcn_checksum.h"

//extern unsigned long long fcn_getTimeCpuTics(); 


#define CUSTOM_CRC_OK                       0x00
#define CUSTOM_CRC_FAILED                   0x01

extern double fcn_getTimeCpuTics();

/* struct to store custom counter counter */
#ifndef UserCode_FeatureData_HDR
#define UserCode_FeatureData_HDR
struct UserCode_FeatureData
{
	uint32 counter_value;               /* current counter value */
	uint32 counter_is_initialized;      /* flag to indicate counter is initialized */
};
#endif

Std_ReturnType DsBusCustomCode_onApplicationInit(DsBusCustomCodePduFeatureHandle PduFeatureHandle)
{
	uint8* featureDataPtr;
	char* featureDescriptor;
    struct UserCode_FeatureData* featureInstanceData;

	DSBUSCUSTOMCODE_CHECK_NULL(g_DsBusCustomCodeDefaultDescriptor, PduFeatureHandle);
	DsBusCustomCode_getDescriptor(PduFeatureHandle, &featureDescriptor);

	/* Create feature user data pointer */
	featureInstanceData = (struct UserCode_FeatureData*)malloc(sizeof(struct UserCode_FeatureData));
	DSBUSCUSTOMCODE_CHECK_NULL(g_DsBusCustomCodeDefaultDescriptor, featureInstanceData);

	/* specific code, init counter to zero */
	featureInstanceData->counter_value = 0;
	featureInstanceData->counter_is_initialized = 0;

	featureDataPtr = (uint8*)featureInstanceData;
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePduFeature_setFeatureDataPtr(PduFeatureHandle, featureDataPtr));

	return E_OK;
}

Std_ReturnType DsBusCustomCode_onPduFeatureExecution(DsBusCustomCodePduFeatureHandle PduFeatureHandle)
{
	boolean isTx = FALSE;
	struct UserCode_FeatureData* featureDataPtr;
	char* featureDescriptor;
	DsBusCustomCodePduHandle pduHandle;
	uint8* IPdu_SduDataPtr;
	uint32 IPdu_SduLength;
	DsBusCustomCodeSignalHandle *Signals;
	uint32 SignalCount;
	uint32 ISignalCrcPos;


    uint8 tmpcrcval;
    uint32 tmpPos;
    uint32 tmpCrcPos;

    static uint8 userSYNCFLAG=0;
    static uint8 Sync_Counter=0;
    static unsigned long long SyncTime;
    static unsigned long long SyncTime_S, SyncTime_nS;
	/* Feature handle & data */
	DSBUSCUSTOMCODE_CHECK_NULL(g_DsBusCustomCodeDefaultDescriptor, PduFeatureHandle);
	// Declare pointer for name 
char* name; 
uint16 dataId;
// Let the pointer point to the name 
DsBusCustomCode_getName(PduFeatureHandle, &name);
	DSBUSCUSTOMCODE_TRY(g_DsBusCustomCodeDefaultDescriptor, DsBusCustomCode_getDescriptor(PduFeatureHandle, &featureDescriptor));
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePduFeature_getFeatureDataPtr(PduFeatureHandle, (uint8**)&featureDataPtr));



	/* PDU Handle & data */
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePduFeature_getPdu(PduFeatureHandle, &pduHandle));
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePdu_getSduLength(pduHandle, &IPdu_SduLength));
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePdu_getSduDataPtr(pduHandle, &IPdu_SduDataPtr));
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodePdu_getIsTx(pduHandle, &isTx));

// DsBusCustomCodeSecuredIPdu_getDataId(pduHandle, &dataId); 
// printf("%s,,%s,%d",name,featureDescriptor,dataId);

	/* Signals handle & data */
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodeUserCodePduFeature_getUserSignals(PduFeatureHandle, &Signals));
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodeUserCodePduFeature_getNumberOfUserSignals(PduFeatureHandle, &SignalCount));

	/* signal array */
	DSBUSCUSTOMCODE_TRY(featureDescriptor, DsBusCustomCodeSignal_getStartBitPosition(Signals[0], &ISignalCrcPos));


	tmpPos = IPdu_SduLength;
	tmpCrcPos = ISignalCrcPos;// >> 3;
    
	if (isTx)
	{

        if(Sync_Counter>=15)Sync_Counter=0;
		if (userSYNCFLAG<1)//acc pdu        
		{
            SyncTime=fcn_getTimeCpuTics()*1000000000;
            SyncTime_S=SyncTime/1000000000;
            printf("SyncTimeS: %d",SyncTime_S);
            //printf("CPUTimeS: %lld",fcn_getTimeCpuTics()*1000000000);
            IPdu_SduDataPtr[0]= 0x20;
            IPdu_SduDataPtr[2]= Sync_Counter;
            IPdu_SduDataPtr[3]= 0;
            IPdu_SduDataPtr[4]=(SyncTime_S&0xff000000)>>24;
            IPdu_SduDataPtr[5]=(SyncTime_S&0x00ff0000)>>16;
            IPdu_SduDataPtr[6]=(SyncTime_S&0x0000ff00)>>8;
            IPdu_SduDataPtr[7]=(SyncTime_S&0x000000ff);
            IPdu_SduDataPtr[8]=0;
            IPdu_SduDataPtr[9]=0;
            IPdu_SduDataPtr[10]=0;
            IPdu_SduDataPtr[11]=0;
            IPdu_SduDataPtr[12]=0;
            IPdu_SduDataPtr[13]=0;
            IPdu_SduDataPtr[14]=0;
            IPdu_SduDataPtr[15]=0;
            //IPdu_SduDataPtr[16]=0xff;
            IPdu_SduDataPtr[1]=CRC8H2F(IPdu_SduDataPtr,2,15);
            userSYNCFLAG=1;

		}else{ //ifc
            SyncTime_nS=SyncTime%1000000000;
            IPdu_SduDataPtr[0]= 0x28;
            IPdu_SduDataPtr[2]= Sync_Counter++;
            IPdu_SduDataPtr[3]= 0;
            IPdu_SduDataPtr[4]=(SyncTime_nS&0xff000000)>>24;
            IPdu_SduDataPtr[5]=(SyncTime_nS&0x00ff0000)>>16;
            IPdu_SduDataPtr[6]=(SyncTime_nS&0x0000ff00)>>8;
            IPdu_SduDataPtr[7]=(SyncTime_nS&0x000000ff);
            IPdu_SduDataPtr[8]=0;
            IPdu_SduDataPtr[9]=0;
            IPdu_SduDataPtr[10]=0;
            IPdu_SduDataPtr[11]=0;
            IPdu_SduDataPtr[12]=0;
            IPdu_SduDataPtr[13]=0;
            IPdu_SduDataPtr[14]=0;
            IPdu_SduDataPtr[15]=0;
            //IPdu_SduDataPtr[16]=0xff;
            IPdu_SduDataPtr[1]=CRC8H2F(IPdu_SduDataPtr,2,15);
            userSYNCFLAG=0;		
		}
		

	}
	else
	{
		// uint32 status = CUSTOM_CRC_OK;
		// /* iterate over pdu buffer and calculate expected CRC-value */
		// if (IPdu_SduLength > tmpCrcPos) {
		// 	while (tmpPos)
		// 	{
		// 		tmpPos--;
		// 		if (tmpPos != tmpCrcPos)
		// 			tmpcrcval +=  IPdu_SduDataPtr[tmpPos];
		// 	}

		// 	/* compare calculated CRC-value with the received one */
		// 	if (tmpcrcval != IPdu_SduDataPtr[tmpCrcPos]) {
		// 		status |= CUSTOM_CRC_FAILED;
		// 	}
		// }
		// DsBusCustomCodeUserCodePduFeature_setResult(PduFeatureHandle, status);
	}
	return E_OK;
}
