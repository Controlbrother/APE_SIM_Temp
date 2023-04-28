#ifndef fcn_checksum_HDR
#define fcn_checksum_HDR
unsigned char  fcn_checksum(unsigned char  dataID_L,unsigned char  dataID_H,unsigned char * data_byte_array, unsigned char  start_byte/*start from 0 unsigned char */);
void fcn_calcIFCProtnValue(unsigned char * data_byte_array);
unsigned char CRC8H2F(unsigned char *msg,unsigned char ByteIndex_Start,unsigned char ByteIndex_End);
#endif