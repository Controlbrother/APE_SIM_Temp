/** !------------------------------------------------------------------------->
*
*  @file BusConfigurationInterface.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*   
*!-------------------------------------------------------------------------->*/

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "S/IDC_L2/Rte/Rte_generated.h"
#include "S/IDC_L2/CanIf/CanIf_external.h"
#include "S/IDC_L2/Feature/Feature_generated.h"
#include "S/IDC_L2/Rte/Rte_generated.h"
#include "S/IDC_L2/CanIf/CanIf_external.h"
#include "S/IDC_L2/Feature/Feature_generated.h"
#include "BusManager_CR_PCANFD_8.h"
#include "BusManager_CR_PCANFD_9.h"
/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
EXTERN_C_DECL  void BM_Read_RtParameterRef_12247(UInt32 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_10997(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12314(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_10998(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12315(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12316(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12317(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12318(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12319(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12320(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12321(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12322(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12323(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12324(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12325(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12326(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12327(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12328(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12329(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12330(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_10999(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12331(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12332(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12333(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12334(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12335(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12336(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12337(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12338(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12339(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12340(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12341(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12342(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12343(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12344(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12345(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12346(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11000(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11001(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11002(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11003(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11004(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11005(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11006(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11007(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11008(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11009(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11010(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11011(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11012(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11013(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11014(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11015(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11016(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11017(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11018(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11019(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12347(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12348(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12349(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12350(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12351(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12352(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12353(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12354(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12355(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12356(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12357(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12358(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12359(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12360(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12361(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12362(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11020(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12363(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12364(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12365(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12366(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12367(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12368(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12369(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12370(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12371(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12372(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12373(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12374(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12375(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12376(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12377(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12378(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11021(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11022(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11023(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11024(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11025(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11026(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11027(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11028(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11029(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11030(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11031(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11032(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11033(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11034(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11035(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11036(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12379(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12380(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12381(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12382(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12383(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12384(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12385(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12386(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12387(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12388(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12389(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12390(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12391(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12392(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12393(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12394(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11037(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12395(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12396(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12397(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12398(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12399(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12400(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12401(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12402(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12403(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12404(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12405(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12406(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12407(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12408(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12409(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12410(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11038(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11039(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11040(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11041(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11042(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11043(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11044(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11045(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11046(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11047(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11048(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11049(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11050(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11051(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11052(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12248(UInt32 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11053(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12411(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11054(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12412(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12413(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12414(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12415(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12416(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12417(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12418(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12419(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12420(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12421(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12422(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12423(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12424(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12425(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12426(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12427(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11055(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12428(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12429(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12430(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12431(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12432(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12433(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12434(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12435(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12436(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12437(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12438(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12439(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12440(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12441(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12442(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12443(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11056(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11057(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11058(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11059(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11060(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11061(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11062(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11063(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11064(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11065(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11066(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11067(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11068(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11069(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11070(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11071(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11072(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11073(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11074(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11075(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12444(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12445(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12446(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12447(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12448(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12449(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12450(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12451(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12452(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12453(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12454(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12455(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12456(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12457(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12458(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12459(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11076(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12460(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12461(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12462(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12463(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12464(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12465(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12466(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12467(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12468(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12469(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12470(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12471(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12472(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12473(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12474(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12475(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11077(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11078(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11079(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11080(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11081(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11082(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11083(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11084(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11085(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11086(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11087(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11088(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11089(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11090(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11091(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11092(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12476(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12477(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12478(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12479(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12480(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12481(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12482(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12483(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12484(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12485(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12486(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12487(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12488(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12489(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12490(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12491(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11093(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12492(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12493(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12494(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12495(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12496(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12497(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12498(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12499(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12500(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12501(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12502(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12503(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12504(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12505(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12506(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_12507(Float64 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11094(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11095(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11096(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11097(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11098(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11099(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11100(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11101(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11102(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11103(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11104(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11105(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11106(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11107(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Read_RtParameterRef_11108(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12121(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12122(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12123(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12124(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12125(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12261(UInt32 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12126(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12127(UInt8 *ioValue);
#define BM_Read_RtParameter_12249(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_L_AD3_Counter_12249_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12288(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_L_AD3_State_12288_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12508(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_L_AD3_Time_12508_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12509(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_L_AD3_Delta_Time_12509_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12250(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_R_AD3_Counter_12250_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12289(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_R_AD3_State_12289_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12510(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_R_AD3_Time_12510_119553_232436_OUT, __VA_ARGS__)
#define BM_Read_RtParameter_12511(...) BM_CR_PCANFD_8_IDC_L2_Feature_GetValue(Feature_CR_R_AD3_Delta_Time_12511_119553_232436_OUT, __VA_ARGS__)
EXTERN_C_DECL  void BM_Write_RtParameterRef_12140(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12141(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12142(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12143(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12144(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12263(UInt32 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12145(UInt8 *ioValue);
EXTERN_C_DECL  void BM_Write_RtParameterRef_12146(UInt8 *ioValue);

