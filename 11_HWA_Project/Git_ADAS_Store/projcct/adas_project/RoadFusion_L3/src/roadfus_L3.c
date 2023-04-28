#include "roadfus_L3.h"
#include <string.h> 
//ip 192.168.1.73 port 7000 size:1344
void roadfusParse(uint8_T *input,L3_RFMResult_st *output)
{
    memcpy(output,input,sizeof(L3_RFMResult_st));
}