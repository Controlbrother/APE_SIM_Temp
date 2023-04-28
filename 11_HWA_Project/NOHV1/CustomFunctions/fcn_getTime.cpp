#include <DsApplicationInterface.h>

extern "C" double fcn_getTimeCpuTics(){
 double SyncTime=DsCTime::getCurrentHwTime();
 return SyncTime; 
}
