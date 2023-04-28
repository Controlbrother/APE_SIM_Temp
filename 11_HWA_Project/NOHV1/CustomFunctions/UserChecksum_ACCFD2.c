/* Start of feature parameter definition, must be at the beginning of the file, before all includes, etc. */
#define DS_BUS_CUSTOM_FEATURE_NAME checksum_acc2           
/* End of feature parameter definition */

#include <stdio.h>
#include <stdlib.h>
#include <DsBusCustomCode_PduUserCode.h>
#include "fcn_checksum.h"
#define CUSTOM_CRC_OK                       0x00
#define CUSTOM_CRC_FAILED                   0x01


/* struct to store custom counter counter */
struct UserCode_FeatureData
{
	uint32 counter_value;               /* current counter value */
	uint32 counter_is_initialized;      /* flag to indicate counter is initialized */
};
extern int setFv(unsigned int newTripCnt,unsigned short newResetCnt);
extern void get_msg_secoc(int msgIndex,unsigned short msgID,unsigned char* msgData,unsigned char* msgSecOC);
extern unsigned int update_msgFv(int msgIndex);
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


	tmpcrcval = 0;
	tmpPos = IPdu_SduLength;
	tmpCrcPos = ISignalCrcPos;// >> 3;

	if (isTx)
	{
		/* iterate over pdu buffer and calculate new CRC-value */
		// while (tmpPos)
		// {
		// 	tmpPos--;
        //     /* exclude CRC position from calculation */
		// 	if (tmpPos != tmpCrcPos)
		// 		tmpcrcval += IPdu_SduDataPtr[tmpPos];
		// }


		/* write calculated CRC-value to its position */

		if (1)//acc pdu
		{
			// IPdu_SduDataPtr[0] =  fcn_checksum(0x53,0x00,IPdu_SduDataPtr,0);
			//IPdu_SduDataPtr[8] =  fcn_checksum(0x54,0x00,IPdu_SduDataPtr,8);
			//IPdu_SduDataPtr[16] = fcn_checksum(0x55,0x00,IPdu_SduDataPtr,16);
			//IPdu_SduDataPtr[24] = fcn_checksum(0xc8,0x00,IPdu_SduDataPtr,24);

			//fill ff

			// IPdu_SduDataPtr[1]=0xff;
			// IPdu_SduDataPtr[6]=IPdu_SduDataPtr[6]+1;
			// IPdu_SduDataPtr[9]=IPdu_SduDataPtr[9]+2;
			// IPdu_SduDataPtr[12]=IPdu_SduDataPtr[12]+19;
			// IPdu_SduDataPtr[15]=IPdu_SduDataPtr[15]+0xf0;
			// IPdu_SduDataPtr[17]=0xff;
			// IPdu_SduDataPtr[18]=0xff;
			// IPdu_SduDataPtr[22]=IPdu_SduDataPtr[22]+3;
			// IPdu_SduDataPtr[23]=IPdu_SduDataPtr[23]+112;
			// IPdu_SduDataPtr[25]=0xff;
			// IPdu_SduDataPtr[26]=0xff;
			// IPdu_SduDataPtr[29]=IPdu_SduDataPtr[29]+127;
			// IPdu_SduDataPtr[30]=0xff;
			// IPdu_SduDataPtr[31]=IPdu_SduDataPtr[31]+0xf0;

			// for (size_t ii = 32; ii < 56; ii++)
			// {
			// 	IPdu_SduDataPtr[ii]=0xff;
			// }
			

			//add secoc
			uint8 secocdata[8];
			get_msg_secoc(1,683,IPdu_SduDataPtr,secocdata);
			for (size_t i = 0; i < 8; i++)
			{
				/* code */
				IPdu_SduDataPtr[56+i]=secocdata[i];
			}
			update_msgFv(1);
			

		}else{ //ifc
			fcn_calcIFCProtnValue(IPdu_SduDataPtr);
			IPdu_SduDataPtr[8] =  fcn_checksum(0x4d,0x00,IPdu_SduDataPtr,8);
			IPdu_SduDataPtr[16] = fcn_checksum(0x4e,0x00,IPdu_SduDataPtr,16);			
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

				// 收到同步报文;
		uint32 tripcnt=(IPdu_SduDataPtr[0]<<16)+(IPdu_SduDataPtr[1]<<8)+IPdu_SduDataPtr[2];
		uint8 resetcnt=(IPdu_SduDataPtr[3]<<8)+IPdu_SduDataPtr[4];
		setFv(tripcnt,resetcnt);
		printf("setFv:tripcnt=%06x,resetcnt=%04x",tripcnt,resetcnt);
	}
	return E_OK;
}
