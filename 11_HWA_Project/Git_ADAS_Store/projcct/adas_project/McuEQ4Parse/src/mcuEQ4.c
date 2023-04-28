#include "mcuEQ4.h"
#include <string.h>

unsigned char buf[16620] = {0};
//unsigned char tbuf[1500] = {0};
struct UDP_HEADER header;
unsigned char startflag = 0;
unsigned char desiredID = 0;
uint32_T dataSize = 0;
SPI2SOC_VISIONS_BUS toutmsg;
void udpParse(uint8_T *inputdata, uint32_T *inputSize,
			  uint8_T *msgComplite,
			  SPI2SOC_VISIONS_BUS *outMsg)
{

	memcpy(&header, inputdata, 12);
	//printf("Header.data_id=%d",header.data_id);
	if (header.data_id == VISIONS)
	{
		//printf("Header.data_id=%d",header.data_id)
		//printf("Header.packCount=%d totalpackcount=%d framecount=%d", header.pack_counter, header.total_pack_count, header.frame_counter);
		if (header.pack_counter == 0)
		{

			//memset(buf, 0, sizeof(buf));
			desiredID = 0;
			dataSize = 0;
			*msgComplite = 0;
		}
		if (header.pack_counter == desiredID)
		{

			memcpy(buf + dataSize, inputdata + 12, *inputSize - 12);
			dataSize += (*inputSize - 12);
			//printf("desiredID=%d dataSize=%d", dataSize);
			if (header.pack_counter == header.total_pack_count - 1)
			{
				//printf("complite!!! dataSize=%d cpysize=%d", dataSize, sizeof(SPI2SOC_VISIONS_BUS));
				memcpy(outMsg, buf, sizeof(SPI2SOC_VISIONS_BUS));

				//printf("APPINFO_H=%d,APPINFO_L=%d\n", outMsg->EQ4_LA.EQ4_APPINFO.H, outMsg->EQ4_LA.EQ4_APPINFO.L);
				//outEQ4_LA->EQ4_APPINFO.H=88888;
				//outEQ4_LA->EQ4_APPINFO.L=66666;
				//printf("APPINFO_H=%d,APPINFO_L=%d\n",outMsg->EQ4_LA.EQ4_APPINFO.H,outMsg->EQ4_LA.EQ4_APPINFO.L);
				*msgComplite = 1;
			}
			desiredID++;
		}
	}
}