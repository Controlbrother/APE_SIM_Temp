#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "aes_cbc_cmac.h"
typedef unsigned int uint32;

//const unsigned char keyAuth[]={
//	0x1e,0xa5,0x13,0x34,0x6c,0x0d,0xf4,0x4e,0xcb,0x0b,0x4a,0x4a,0x9e,0x51,0x1d,0x50
//};//125车辆
const unsigned char keyAuth[]={
	0x4B,0xBB,0x13,0x34,0x6C,0xF1,0x48,0x4E,0xCB,0xB7,0x4A,0x4A,0x27,0x52,0x1B,0x20
};//技术中心品确车
unsigned int TripCnt=0; //同步计数器 22bit
unsigned short ResetCnt = 0; //重置计数器 16bit

int MsgIndexNum=5;
unsigned int MsgCnt[5]; //消息计数器 22bit (高: 8bit 低: 14bit)


unsigned char ResetFlag=0; //重置低位 2bit

int ResetCycle = 30; //重置周期，30s ,重置计数器的自增周期
int TripCntLength = 22; //同步计数器长度 bit
int ResetCntLength = 16; //重置计数器长度 bit
int MsgCntLength = 22; //消息计数器长度 bit
int ResetFlagLength = 2; //重置低位长度 bit



unsigned short updateResetCnt(){
    //当重置计数器达到 最大值 时：重置 计数器 的值 不再变化，固定为最大值
    if(ResetCnt==255){
        return ResetCnt;
    }
    
    return ResetCnt++;
}
int setFv(unsigned int newTripCnt,unsigned short newResetCnt){
	int a=0;

	if(TripCnt!=newTripCnt){TripCnt=newTripCnt;a=1;}
    
	if(ResetCnt!=newResetCnt){ResetCnt=newResetCnt;a=1;}
    
	if(a==1){
		for (size_t i = 0; i < MsgIndexNum; i++)
		{
			/* 重置msgCnt */
			MsgCnt[i]=1;
		}
	}

    
    return 0;
}

int getFv(unsigned short msgId){

}

unsigned short get_msgFv(int msgIndex){
   return ((MsgCnt[msgIndex] & 0x3fff)<<2)+(ResetCnt&0x0003);
}

unsigned int update_msgFv(int msgIndex){
    if(MsgCnt[msgIndex]==0x3fffff){//保持最大值
        return MsgCnt[msgIndex];
    }
    return MsgCnt[msgIndex]++;
}

void get_msg_secoc(int msgIndex,unsigned short msgID,unsigned char* msgData,unsigned char* msgSecOC){
    unsigned short msgfv = get_msgFv(msgIndex);
	unsigned char msgData_cmac_in[66];//
    memset(msgData_cmac_in, 0, 66);
	msgData_cmac_in[0] = msgID >> 8;
    msgData_cmac_in[1] = msgID & 0x00ff;
	int i=0;
	for (i = 0; i < 56; i++)//msgData 长度64-8=56
    {
        msgData_cmac_in[i + 2] = msgData[i];
    }
	msgData_cmac_in[58] = TripCnt >> 16;
    msgData_cmac_in[59] = (TripCnt & 0x00ff00)>>8;
    msgData_cmac_in[60] = TripCnt & 0x0000ff;
    msgData_cmac_in[61] = ResetCnt>>8;
    msgData_cmac_in[62] = ResetCnt & 0x00ff;
    msgData_cmac_in[63] = MsgCnt[msgIndex] >> 14;
    msgData_cmac_in[64] = msgfv >> 8;
    msgData_cmac_in[65] = msgfv & 0x00ff;
	unsigned char SecOC_Orign[128];
	msgSecOC[0]=msgData_cmac_in[64];
	msgSecOC[1]=msgData_cmac_in[65];
	AES_CMAC(keyAuth, msgData_cmac_in, 66, SecOC_Orign);
	for (i = 0; i < 6; i++)
    {
        msgSecOC[i + 2] = SecOC_Orign[i];
    }
}

//Algorithm1 for secoc key.  in:raw key    vin:VIN code   out:authentication key
void SecOC_Algorithm1(const unsigned char *in, const unsigned char *vin, unsigned char *out)
{
	if(in == NULL || vin == NULL || out == NULL) {
		return;
	}
	int	i = 0;
	int j = 0;
	int	i_list[10] = {6,9,7,4,8,2,0,5,1,3};
	int	*switch_i = &i_list[0];

	unsigned char used_iv[16] = {0};
	unsigned char used_k[16] = {0};
	unsigned char used_sc[16] = {0};
    unsigned char t = 0;

	while (1) {
		switch (*switch_i) {
			case 2:
				switch_i++;
			    for (i = 0; i < 16; i++) {
				    used_k[i] = used_iv[i] ^ used_sc[i];
				}
				break;
			case 3:
			    switch_i++;
			    for (i = 0; i < 16 - 1; i++) {
					if (used_sc[i] < used_sc[i + 1]) {
						t = used_sc[i];
						used_sc[i] = used_sc[i + 1];
						used_sc[i + 1] = t;
					}
				}
			    return;
			case 1:
		        switch_i++;
				for (i = 0; i < 16; i++) {
					used_k[i] ^= in[i];
				}
				for(i = 0; i < j; i++) {
					if (out[i] % 2 == 1) {
						used_sc[i] ^= used_k[i];
					}
				}
				break;
			case 7:
				switch_i++;
			    for (i = 0; i < 16 - 1; i++) {
					if (used_sc[i] > used_sc[i + 1]) {
						t = used_sc[i];
						used_sc[i] = used_sc[i + 1];
						used_sc[i + 1] = t;
					}
				}
				break;
			case 5:
	            switch_i++;
				for(i = 0; i < j; i++) {
					if (used_iv[i] % 2 == 1) {
						out[i] = in[i] ^ used_k[i];
					} else {
						out[i] = in[i] ^ used_iv[i];
					}
				}
				break;
			case 9:
			    switch_i++;
			    for (i = 0; i < 16; i++) {
				    used_k[i] = in[i] ^ vin[16 - i];
				}
				break;
			case 4:
				switch_i++;
				for (i = 0; i < 16; i++) {
                    used_iv[i] = used_k[i] % (in[i] + i + 1);
				}
				break;
			case 0:
			    switch_i++;
				for (i = 0; i < 16 - 1; i++) {
				    if (used_k[i] & 0x1) {
						t = used_iv[i];
						used_iv[i] = used_iv[i + 1];
						used_iv[i + 1] = t;
					}
				}
				break;
			case 6:
				switch_i++;
				for (i = 0; i < 16; i++) {
					used_sc[i] ^= vin[i + 1] + i;
				}
				j = i;
				break;
			case 8:
			    switch_i++;
				for (i = 0; i < 16; i++) {
					used_sc[i] ^= in[i] + i;
				}
				break;
		}
	}
}
