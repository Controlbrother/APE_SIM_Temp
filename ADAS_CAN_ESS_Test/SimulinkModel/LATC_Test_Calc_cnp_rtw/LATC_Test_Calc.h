/*
 * LATC_Test_Calc.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.55
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri Dec 31 09:15:34 2021
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LATC_Test_Calc_h_
#define RTW_HEADER_LATC_Test_Calc_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef LATC_Test_Calc_COMMON_INCLUDES_
#define LATC_Test_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 /* LATC_Test_Calc_COMMON_INCLUDES_ */

#include "LATC_Test_Calc_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define LATC_Test_Calc_rtModel         RT_MODEL_LATC_Test_Calc_T

/* Block signals (default storage) */
typedef struct {
  real_T SFunction_o2;                 /* '<S16>/S-Function' */
  real_T SFunction_o3;                 /* '<S16>/S-Function' */
  real_T SFunction_o2_e;               /* '<S13>/S-Function' */
  real_T SFunction_o3_h;               /* '<S13>/S-Function' */
  real_T SFunction_o2_k;               /* '<S14>/S-Function' */
  real_T SFunction_o3_n;               /* '<S14>/S-Function' */
  real_T SFunction_o2_ei;              /* '<S11>/S-Function' */
  real_T SFunction_o3_a;               /* '<S11>/S-Function' */
  real_T SFunction_o2_g;               /* '<S1>/S-Function' */
  real_T SFunction_o3_ax;              /* '<S1>/S-Function' */
  real_T SFunction_o2_a;               /* '<S15>/S-Function' */
  real_T SFunction_o3_c;               /* '<S15>/S-Function' */
  real_T SFunction_o2_i;               /* '<S6>/S-Function' */
  real_T SFunction_o3_f;               /* '<S6>/S-Function' */
  real_T SFunction_o2_ky;              /* '<S5>/S-Function' */
  real_T SFunction_o3_p;               /* '<S5>/S-Function' */
  real_T SFunction_o2_h;               /* '<S9>/S-Function' */
  real_T SFunction_o3_g;               /* '<S9>/S-Function' */
  real_T SFunction_o2_it;              /* '<S3>/S-Function' */
  real_T SFunction_o3_j;               /* '<S3>/S-Function' */
  real_T SFunction_o2_ae;              /* '<S4>/S-Function' */
  real_T SFunction_o3_m;               /* '<S4>/S-Function' */
  real_T SFunction_o2_b;               /* '<S2>/S-Function' */
  real_T SFunction_o3_nm;              /* '<S2>/S-Function' */
  real_T SFunction_o2_j;               /* '<S17>/S-Function' */
  real_T SFunction_o3_fe;              /* '<S17>/S-Function' */
  real_T SFunction_o2_jj;              /* '<S8>/S-Function' */
  real_T SFunction_o3_gt;              /* '<S8>/S-Function' */
  real_T DataTypeConversion;           /* '<S19>/Data Type Conversion' */
  real_T SFunction_o2_m;               /* '<S7>/S-Function' */
  real_T SFunction_o3_nu;              /* '<S7>/S-Function' */
  real_T SFunction_o2_n;               /* '<S10>/S-Function' */
  real_T SFunction_o3_o;               /* '<S10>/S-Function' */
  real_T SFunction_o2_o;               /* '<S12>/S-Function' */
  real_T SFunction_o3_gn;              /* '<S12>/S-Function' */
  real_T DataTypeConversion_k;         /* '<S24>/Data Type Conversion' */
  real_T DataTypeConversion_b;         /* '<S25>/Data Type Conversion' */
  real_T DataTypeConversion_g;         /* '<S45>/Data Type Conversion' */
  real_T DataTypeConversion_j;         /* '<S46>/Data Type Conversion' */
  real_T DataTypeConversion_e;         /* '<S48>/Data Type Conversion' */
  real_T DataTypeConversion_c;         /* '<S49>/Data Type Conversion' */
  real_T DataTypeConversion_i;         /* '<S50>/Data Type Conversion' */
  real_T Max;                          /* '<S41>/Max' */
  real_T Max_o;                        /* '<S40>/Max' */
  real32_T SFunction_o1;               /* '<S16>/S-Function' */
  real32_T SFunction_o1_n;             /* '<S13>/S-Function' */
  real32_T SFunction_o1_e;             /* '<S11>/S-Function' */
  real32_T SFunction_o1_p;             /* '<S15>/S-Function' */
  real32_T SFunction_o1_h;             /* '<S9>/S-Function' */
  real32_T SFunction_o1_f;             /* '<S8>/S-Function' */
  real32_T Min;                        /* '<S27>/Min' */
  real32_T SFunction_o1_d;             /* '<S7>/S-Function' */
  real32_T SFunction_o1_nk;            /* '<S10>/S-Function' */
  real32_T SFunction_o1_a;             /* '<S12>/S-Function' */
  real32_T Switch1;                    /* '<S39>/Switch1' */
  uint8_T SFunction_o1_p0;             /* '<S14>/S-Function' */
  uint8_T SFunction_o1_j;              /* '<S1>/S-Function' */
  uint8_T UnitDelay9;                  /* '<S20>/Unit Delay9' */
} B_LATC_Test_Calc_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S41>/Unit Delay' */
  real_T UnitDelay_DSTATE_n;           /* '<S40>/Unit Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<S28>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_b;         /* '<S27>/Unit Delay' */
  real32_T Memory2_PreviousInput;      /* '<S22>/Memory2' */
  real32_T Memory2_PreviousInput_b;    /* '<S44>/Memory2' */
  real32_T Memory2_PreviousInput_e;    /* '<S39>/Memory2' */
  uint16_T UnitDelay3_DSTATE;          /* '<S20>/Unit Delay3' */
  uint8_T UnitDelay9_DSTATE;           /* '<S20>/Unit Delay9' */
  uint8_T UnitDelay5_DSTATE;           /* '<S20>/Unit Delay5' */
  uint8_T UnitDelay4_DSTATE;           /* '<S20>/Unit Delay4' */
  uint8_T is_active_c4_LATC_Test_Calc; /* '<S26>/Chart' */
  uint8_T is_c4_LATC_Test_Calc;        /* '<S26>/Chart' */
} DW_LATC_Test_Calc_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Product4;             /* '<S39>/Product4' */
  const real32_T Add;                  /* '<S39>/Add' */
  const real32_T Product2;             /* '<S39>/Product2' */
  const real32_T Add1;                 /* '<S39>/Add1' */
} ConstB_LATC_Test_Calc_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S16>/S-Function'
   */
  real_T SFunction_P1_Size[2];

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S16>/S-Function'
   */
  real_T SFunction_P1[15];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  real_T SFunction_P2_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  real_T pooled3;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   */
  real_T SFunction_P4_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   */
  real_T pooled4[5];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   */
  real_T SFunction_P5_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   */
  real_T pooled5[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  real_T SFunction_P6_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S2>/S-Function'
   *   '<S3>/S-Function'
   *   '<S4>/S-Function'
   *   '<S5>/S-Function'
   *   '<S6>/S-Function'
   *   '<S7>/S-Function'
   *   '<S8>/S-Function'
   *   '<S9>/S-Function'
   *   '<S10>/S-Function'
   *   '<S11>/S-Function'
   *   '<S12>/S-Function'
   *   '<S13>/S-Function'
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   *   '<S16>/S-Function'
   *   '<S17>/S-Function'
   *   '<S19>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S50>/S-Function'
   */
  real_T pooled6;

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_Size_m[2];

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_j[20];

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_Size_i[2];

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_l[24];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S6>/S-Function'
   *   '<S14>/S-Function'
   */
  real_T SFunction_P4_Size_g[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/S-Function'
   *   '<S6>/S-Function'
   *   '<S14>/S-Function'
   */
  real_T pooled7[5];

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1_Size_l[2];

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1_g[20];

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S1>/S-Function'
   */
  real_T SFunction_P1_Size_f[2];

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S1>/S-Function'
   */
  real_T SFunction_P1_a[26];

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_Size_b[2];

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_m[25];

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_Size_g[2];

  /* Computed Parameter: SFunction_P1_jy
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_jy[22];

  /* Computed Parameter: SFunction_P1_Size_f0
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_Size_f0[2];

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_e[16];

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_Size_h[2];

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_o[23];

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S3>/S-Function'
   */
  real_T SFunction_P1_Size_k[2];

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S3>/S-Function'
   */
  real_T SFunction_P1_p[16];

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_Size_c[2];

  /* Computed Parameter: SFunction_P1_oj
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_oj[16];

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S2>/S-Function'
   */
  real_T SFunction_P1_Size_n[2];

  /* Computed Parameter: SFunction_P1_pl
   * Referenced by: '<S2>/S-Function'
   */
  real_T SFunction_P1_pl[16];

  /* Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P1_Size_a[2];

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P1_d[19];

  /* Computed Parameter: SFunction_P4_Size_f
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P4_Size_f[2];

  /* Computed Parameter: SFunction_P4
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P4[7];

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_Size_d[2];

  /* Computed Parameter: SFunction_P1_jh
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_jh[31];

  /* Computed Parameter: SFunction_P1_Size_mn
   * Referenced by: '<S19>/S-Function'
   */
  real_T SFunction_P1_Size_mn[2];

  /* Computed Parameter: SFunction_P1_gq
   * Referenced by: '<S19>/S-Function'
   */
  real_T SFunction_P1_gq[20];

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_Size_p[2];

  /* Computed Parameter: SFunction_P1_jr
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_jr[14];

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_Size_o[2];

  /* Computed Parameter: SFunction_P1_o3
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_o3[26];

  /* Computed Parameter: SFunction_P1_Size_n1
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_Size_n1[2];

  /* Computed Parameter: SFunction_P1_pq
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_pq[23];

  /* Computed Parameter: SFunction_P1_Size_pc
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_Size_pc[2];

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_b[23];

  /* Computed Parameter: SFunction_P1_Size_ct
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_Size_ct[2];

  /* Computed Parameter: SFunction_P1_m2
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_m2[16];

  /* Computed Parameter: SFunction_P1_Size_ij
   * Referenced by: '<S45>/S-Function'
   */
  real_T SFunction_P1_Size_ij[2];

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S45>/S-Function'
   */
  real_T SFunction_P1_c[18];

  /* Computed Parameter: SFunction_P1_Size_iv
   * Referenced by: '<S46>/S-Function'
   */
  real_T SFunction_P1_Size_iv[2];

  /* Computed Parameter: SFunction_P1_mb
   * Referenced by: '<S46>/S-Function'
   */
  real_T SFunction_P1_mb[25];

  /* Computed Parameter: SFunction_P1_Size_oq
   * Referenced by: '<S47>/S-Function'
   */
  real_T SFunction_P1_Size_oq[2];

  /* Computed Parameter: SFunction_P1_bj
   * Referenced by: '<S47>/S-Function'
   */
  real_T SFunction_P1_bj[15];

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_Size_e[2];

  /* Computed Parameter: SFunction_P1_mx
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_mx[21];

  /* Computed Parameter: SFunction_P1_Size_bf
   * Referenced by: '<S49>/S-Function'
   */
  real_T SFunction_P1_Size_bf[2];

  /* Computed Parameter: SFunction_P1_ay
   * Referenced by: '<S49>/S-Function'
   */
  real_T SFunction_P1_ay[5];

  /* Computed Parameter: SFunction_P1_Size_oh
   * Referenced by: '<S50>/S-Function'
   */
  real_T SFunction_P1_Size_oh[2];

  /* Computed Parameter: SFunction_P1_po
   * Referenced by: '<S50>/S-Function'
   */
  real_T SFunction_P1_po[5];

  /* Computed Parameter: tDeltaEpsTable1_tableData
   * Referenced by: '<S28>/tDeltaEpsTable1'
   */
  real32_T tDeltaEpsTable1_tableData[8];

  /* Computed Parameter: tDeltaEpsTable1_bp01Data
   * Referenced by: '<S28>/tDeltaEpsTable1'
   */
  real32_T tDeltaEpsTable1_bp01Data[8];

  /* Computed Parameter: LCS_LC_ELK_preDis_TB1_tableData
   * Referenced by: '<S18>/LCS_LC_ELK_preDis_TB1'
   */
  real32_T LCS_LC_ELK_preDis_TB1_tableData[304];

  /* Computed Parameter: Q1_tableData
   * Referenced by: '<S28>/Q1'
   */
  real32_T Q1_tableData[16];

  /* Computed Parameter: Q1_bp01Data
   * Referenced by: '<S28>/Q1'
   */
  real32_T Q1_bp01Data[16];

  /* Computed Parameter: LC_start_slope_maxIndex
   * Referenced by: '<S30>/LC_start_slope'
   */
  uint32_T LC_start_slope_maxIndex[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S32>/LC_Complete_slope'
   *   '<S32>/LC_Complete_slope1'
   */
  uint32_T pooled18[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S20>/ELK Active'
   *   '<S20>/ESS AES Active'
   *   '<S20>/LC Cancel'
   *   '<S20>/LCK//IE TO LC_Eco'
   *   '<S20>/LCK//IE TO LC_Nomal'
   *   '<S20>/LCK//IE TO LC_Sport'
   *   '<S20>/LCK//IE TO LC_Sport1'
   *   '<S20>/LCKIE_Active'
   *   '<S20>/LKA Active'
   *   '<S20>/No Function 2 LCK'
   *   '<S28>/ESS AES Active'
   */
  uint32_T pooled19[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S18>/2-D Lookup Table1'
   *   '<S18>/2-D Lookup Table2'
   *   '<S18>/LCS_LC_ELK_preDis_TB'
   *   '<S18>/LCS_LC_ELK_preDis_TB1'
   *   '<S18>/LCS_LC_ESSAES_preDis_TB'
   *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
   *   '<S18>/LCS_LC_Emergent_preDis_TB'
   *   '<S18>/LC_Medium_preDis_Fac_TB'
   */
  uint32_T pooled20[2];

  /* Computed Parameter: DirectLookupTablenD_table
   * Referenced by: '<S18>/Direct Lookup Table (n-D)'
   */
  uint8_T DirectLookupTablenD_table[11];
} ConstP_LATC_Test_Calc_T;

/* Backward compatible GRT Identifiers */
#define rtB                            LATC_Test_Calc_B
#define BlockIO                        B_LATC_Test_Calc_T
#define rtP                            LATC_Test_Calc_P
#define Parameters                     P_LATC_Test_Calc_T
#define rtDWork                        LATC_Test_Calc_DW
#define D_Work                         DW_LATC_Test_Calc_T
#define tConstBlockIOType              ConstB_LATC_Test_Calc_T
#define rtC                            LATC_Test_Calc_ConstB
#define ConstParam                     ConstP_LATC_Test_Calc_T
#define rtcP                           LATC_Test_Calc_ConstP

/* Parameters (default storage) */
struct P_LATC_Test_Calc_T_ {
  real_T P_LCS_NoOverRideTime_TH_s;    /* Variable: P_LCS_NoOverRideTime_TH_s
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T P_LCS_OverRideTime_TH_s;      /* Variable: P_LCS_OverRideTime_TH_s
                                        * Referenced by: '<S35>/Constant'
                                        */
  real32_T P_LCS_DetNoOverRide_DrvTrq_TH;
                                      /* Variable: P_LCS_DetNoOverRide_DrvTrq_TH
                                       * Referenced by: '<S38>/Constant'
                                       */
  real32_T P_LCS_DetOverRide_DrvTrq_TH;/* Variable: P_LCS_DetOverRide_DrvTrq_TH
                                        * Referenced by: '<S37>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LATC_Test_Calc_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[26];
    SimStruct *childSFunctionPtrs[26];
    struct _ssBlkInfo2 blkInfo2[26];
    struct _ssSFcnModelMethods2 methods2[26];
    struct _ssSFcnModelMethods3 methods3[26];
    struct _ssSFcnModelMethods4 methods4[26];
    struct _ssStatesInfo2 statesInfo2[26];
    ssPeriodicStatesInfo periodicStatesInfo[26];
    struct _ssPortInfo2 inputOutputPortInfo2[26];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn25;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (default storage) */
extern P_LATC_Test_Calc_T LATC_Test_Calc_P;

/* Block signals (default storage) */
extern B_LATC_Test_Calc_T LATC_Test_Calc_B;

/* Block states (default storage) */
extern DW_LATC_Test_Calc_T LATC_Test_Calc_DW;
extern const ConstB_LATC_Test_Calc_T LATC_Test_Calc_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_LATC_Test_Calc_T LATC_Test_Calc_ConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T LCS_HoldTime;            /* '<S20>/Product' */
extern real_T LCS_DeltaAngle;          /* '<S28>/TargetSteerAngleCalc' */
extern real32_T LCS_DisplaySpd_kph;    /* '<S18>/Sum' */
extern real32_T LCS_IN_SteerAngleSpd_degs;/* '<S18>/Product4' */
extern real32_T LCS_IN_CurSteerAngle_deg;/* '<S18>/Product5' */
extern real32_T LCS_CurSteerAngle_deg; /* '<S18>/Add1' */
extern real32_T LCS_IN_desLaneA0;      /* '<S5>/S-Function' */
extern real32_T LCS_IN_desLaneA2;      /* '<S3>/S-Function' */
extern real32_T LCS_IN_desLaneA1;      /* '<S4>/S-Function' */
extern real32_T LCS_IN_desLaneA3;      /* '<S2>/S-Function' */
extern real32_T LCS_Predis_BaseDis;    /* '<S18>/preDisMin_TB2' */
extern real32_T LCS_EqA0;              /* '<S18>/Divide' */
extern real32_T LCS_LC_NomalPredisFac; /* '<S18>/2-D Lookup Table1' */
extern real32_T LCS_LC_NomalPredis;    /* '<S18>/Product3' */
extern real32_T LCS_LC_EcoPredisFac;   /* '<S18>/LC_Medium_preDis_Fac_TB' */
extern real32_T LCS_LC_EcoPredis;      /* '<S18>/Product12' */
extern real32_T LCS_LC_SportPredisFac; /* '<S18>/LCS_LC_Emergent_preDis_TB' */
extern real32_T LCS_LC_SportPredis;    /* '<S18>/Product15' */
extern real32_T LCS_LC_Complete_PreDisFac;/* '<S20>/Merge2' */
extern real32_T LCS_LCKPredisFac;      /* '<S18>/2-D Lookup Table2' */
extern real32_T LCS_A2_LatAcc;         /* '<S18>/Product1' */
extern real32_T LCS_A2_LatAccFac;      /* '<S18>/predis_ayFac4' */
extern real32_T LCS_Predis_Curve;      /* '<S22>/Sum5' */
extern real32_T LCS_Predis_CurveFac;   /* '<S18>/predis_ayFac1' */
extern real32_T LCS_LCK_CurveFac;      /* '<S18>/Switch' */
extern real32_T LCS_LCKPredis;         /* '<S18>/Product2' */
extern real32_T LCS_LC_ELKPredisFac;   /* '<S18>/LCS_LC_ELK_preDis_TB' */
extern real32_T LCS_LC_ELKPredis;      /* '<S18>/Product6' */
extern real32_T LCS_LC_ESSPredisFac;   /* '<S18>/LCS_LC_ESSAES_preDis_TB' */
extern real32_T LCS_LC_ESSPredis;      /* '<S18>/Product7' */
extern real32_T LCS_LC_LCPredisFac;    /* '<S18>/LCS_LC_ELK_preDis_TB1' */
extern real32_T LCS_LC_LCPredis;       /* '<S18>/Product8' */
extern real32_T LCS_LC_AESPredisFac;   /* '<S18>/LCS_LC_ESSAES_preDis_TB1' */
extern real32_T LCS_finalPredis;       /* '<S18>/Multiport Switch4' */
extern real32_T LCS_Q;                 /* '<S28>/Q1' */
extern real32_T LCS_StateActive_AngleSlope;/* '<S20>/Merge' */
extern real32_T LCS_State_AngleSlope;  /* '<S20>/Multiport Switch1' */
extern real32_T LCS_TarSteerAngleSlope;/* '<S20>/Min' */
extern real32_T LCS_ESS_TarAngle2;     /* '<S28>/Add' */
extern real32_T LCS_TarSteerAngle_Filter;/* '<S44>/Sum5' */
extern real32_T LCS_ReqEPSTrgAngle;    /* '<S18>/Add6' */
extern real32_T LCS_OUT_ReqEPSTrgAngle;/* '<S18>/Gain' */
extern real32_T LCS_TarSteerAngle;     /* '<S28>/TargetSteerAngleCalc' */
extern real32_T LCS_TarSteerAngleEnd;  /* '<S28>/TargetSteerAngleCalc' */
extern real32_T LCS_TarSteerAngleCalc_Num;/* '<S28>/TargetSteerAngleCalc' */
extern uint16_T LCS_AngleSlope_Cnt;    /* '<S20>/MATLAB Function3' */
extern uint8_T LCS_IN_TarDangerlLevel; /* '<S6>/S-Function' */
extern uint8_T LCS_IN_TarDangerLevel;  /* '<S18>/Signal Copy' */
extern uint8_T LCS_LCType;             /* '<S18>/Direct Lookup Table (n-D)' */
extern uint8_T LCS_AngleSlope_Flg;     /* '<S20>/MATLAB Function3' */
extern boolean_T LCS_IN_desLaneValid;  /* '<S17>/S-Function' */
extern boolean_T LCS_IsOverRide;       /* '<S26>/Chart' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_LCS_ESSAngSlope_SW;    /* Variable: P_LCS_ESSAngSlope_SW
                                        * Referenced by: '<S28>/Constant2'
                                        */
extern real_T P_LCS_ESSAngleSW2;       /* Variable: P_LCS_ESSAngleSW2
                                        * Referenced by: '<S28>/Constant4'
                                        */
extern real_T P_LCS_StateActive_HoldTime_BP[15];
                                      /* Variable: P_LCS_StateActive_HoldTime_BP
                                       * Referenced by:
                                       *   '<S30>/LC_start_slope'
                                       *   '<S32>/LC_Complete_slope'
                                       *   '<S32>/LC_Complete_slope1'
                                       */
extern real32_T P_LCS_A0_Dis_BP[19];   /* Variable: P_LCS_A0_Dis_BP
                                        * Referenced by:
                                        *   '<S18>/2-D Lookup Table1'
                                        *   '<S18>/2-D Lookup Table2'
                                        *   '<S18>/LCS_LC_ELK_preDis_TB'
                                        *   '<S18>/LCS_LC_ELK_preDis_TB1'
                                        *   '<S18>/LCS_LC_ESSAES_preDis_TB'
                                        *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                        *   '<S18>/LCS_LC_Emergent_preDis_TB'
                                        *   '<S18>/LC_Medium_preDis_Fac_TB'
                                        *   '<S20>/ELK Active'
                                        *   '<S20>/ESS AES Active'
                                        *   '<S20>/LC Cancel'
                                        *   '<S20>/LCK//IE TO LC_Eco'
                                        *   '<S20>/LCK//IE TO LC_Nomal'
                                        *   '<S20>/LCK//IE TO LC_Sport'
                                        *   '<S20>/LCK//IE TO LC_Sport1'
                                        *   '<S20>/LCKIE_Active'
                                        *   '<S20>/LKA Active'
                                        *   '<S20>/No Function 2 LCK'
                                        *   '<S28>/ESS AES Active'
                                        */
extern real32_T P_LCS_A2S_FliterTime;  /* Variable: P_LCS_A2S_FliterTime
                                        * Referenced by: '<S18>/Constant20'
                                        */
extern real32_T P_LCS_A2_Curve_BP[10]; /* Variable: P_LCS_A2_Curve_BP
                                        * Referenced by:
                                        *   '<S18>/predis_ayFac1'
                                        *   '<S20>/LCK_A2_Fac'
                                        */
extern real32_T P_LCS_A2_LatAcc_BP[5]; /* Variable: P_LCS_A2_LatAcc_BP
                                        * Referenced by: '<S18>/predis_ayFac4'
                                        */
extern real32_T P_LCS_A2_Pretime;      /* Variable: P_LCS_A2_Pretime
                                        * Referenced by: '<S18>/Constant21'
                                        */
extern real32_T P_LCS_AngleFilterTime; /* Variable: P_LCS_AngleFilterTime
                                        * Referenced by: '<S28>/Constant'
                                        */
extern real32_T P_LCS_AngleSlope_AES_Active[228];/* Variable: P_LCS_AngleSlope_AES_Active
                                                  * Referenced by: '<S20>/LCK//IE TO LC_Sport1'
                                                  */
extern real32_T P_LCS_AngleSlope_ELK[228];/* Variable: P_LCS_AngleSlope_ELK
                                           * Referenced by: '<S20>/ELK Active'
                                           */
extern real32_T P_LCS_AngleSlope_ESS[228];/* Variable: P_LCS_AngleSlope_ESS
                                           * Referenced by: '<S20>/ESS AES Active'
                                           */
extern real32_T P_LCS_AngleSlope_ESS_Add[228];/* Variable: P_LCS_AngleSlope_ESS_Add
                                               * Referenced by: '<S28>/ESS AES Active'
                                               */
extern real32_T P_LCS_AngleSlope_LCK[228];/* Variable: P_LCS_AngleSlope_LCK
                                           * Referenced by: '<S20>/No Function 2 LCK'
                                           */
extern real32_T P_LCS_AngleSlope_LCKIE[228];/* Variable: P_LCS_AngleSlope_LCKIE
                                             * Referenced by: '<S20>/LCKIE_Active'
                                             */
extern real32_T P_LCS_AngleSlope_LCK_Curve_Fac[10];
                                     /* Variable: P_LCS_AngleSlope_LCK_Curve_Fac
                                      * Referenced by: '<S20>/LCK_A2_Fac'
                                      */
extern real32_T P_LCS_AngleSlope_LC_Cancel[228];/* Variable: P_LCS_AngleSlope_LC_Cancel
                                                 * Referenced by: '<S20>/LC Cancel'
                                                 */
extern real32_T P_LCS_AngleSlope_LC_Eco[228];/* Variable: P_LCS_AngleSlope_LC_Eco
                                              * Referenced by: '<S20>/LCK//IE TO LC_Eco'
                                              */
extern real32_T P_LCS_AngleSlope_LC_Nomal[228];/* Variable: P_LCS_AngleSlope_LC_Nomal
                                                * Referenced by: '<S20>/LCK//IE TO LC_Nomal'
                                                */
extern real32_T P_LCS_AngleSlope_LC_Sport[228];/* Variable: P_LCS_AngleSlope_LC_Sport
                                                * Referenced by: '<S20>/LCK//IE TO LC_Sport'
                                                */
extern real32_T P_LCS_AngleSlope_LKA[228];/* Variable: P_LCS_AngleSlope_LKA
                                           * Referenced by: '<S20>/LKA Active'
                                           */
extern real32_T P_LCS_AngleSlope_Spd_BP[12];/* Variable: P_LCS_AngleSlope_Spd_BP
                                             * Referenced by:
                                             *   '<S20>/ELK Active'
                                             *   '<S20>/ESS AES Active'
                                             *   '<S20>/LC Cancel'
                                             *   '<S20>/LCK//IE TO LC_Eco'
                                             *   '<S20>/LCK//IE TO LC_Nomal'
                                             *   '<S20>/LCK//IE TO LC_Sport'
                                             *   '<S20>/LCK//IE TO LC_Sport1'
                                             *   '<S20>/LCKIE_Active'
                                             *   '<S20>/LKA Active'
                                             *   '<S20>/No Function 2 LCK'
                                             *   '<S28>/ESS AES Active'
                                             */
extern real32_T P_LCS_DeltaEps_SpdBp[16];/* Variable: P_LCS_DeltaEps_SpdBp
                                          * Referenced by: '<S28>/tDeltaEpsTable'
                                          */
extern real32_T P_LCS_DeltaEps_TimeVal[16];/* Variable: P_LCS_DeltaEps_TimeVal
                                            * Referenced by: '<S28>/tDeltaEpsTable'
                                            */
extern real32_T P_LCS_ESS_AngleSlope_Limit;/* Variable: P_LCS_ESS_AngleSlope_Limit
                                            * Referenced by: '<S18>/Constant16'
                                            */
extern real32_T P_LCS_ESS_preDis_Nomal[16];/* Variable: P_LCS_ESS_preDis_Nomal
                                            * Referenced by: '<S18>/preDisMin_TB5'
                                            */
extern real32_T P_LCS_LCK_preDis_Nomal[16];/* Variable: P_LCS_LCK_preDis_Nomal
                                            * Referenced by:
                                            *   '<S18>/preDisMin_TB'
                                            *   '<S18>/preDisMin_TB1'
                                            *   '<S18>/preDisMin_TB2'
                                            *   '<S18>/preDisMin_TB3'
                                            *   '<S18>/preDisMin_TB4'
                                            */
extern real32_T P_LCS_LC_Complete_PreDisFac[60];/* Variable: P_LCS_LC_Complete_PreDisFac
                                                 * Referenced by: '<S32>/LC_Complete_slope1'
                                                 */
extern real32_T P_LCS_StateActiv_AngleSlope[90];/* Variable: P_LCS_StateActiv_AngleSlope
                                                 * Referenced by: '<S30>/LC_start_slope'
                                                 */
extern real32_T P_LCS_StateComplete_AngleSlope[60];
                                     /* Variable: P_LCS_StateComplete_AngleSlope
                                      * Referenced by: '<S32>/LC_Complete_slope'
                                      */
extern real32_T P_LCS_preDis_AES_Fac[304];/* Variable: P_LCS_preDis_AES_Fac
                                           * Referenced by: '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                           */
extern real32_T P_LCS_preDis_ELK_Fac[304];/* Variable: P_LCS_preDis_ELK_Fac
                                           * Referenced by: '<S18>/LCS_LC_ELK_preDis_TB'
                                           */
extern real32_T P_LCS_preDis_ESS_Fac[304];/* Variable: P_LCS_preDis_ESS_Fac
                                           * Referenced by: '<S18>/LCS_LC_ESSAES_preDis_TB'
                                           */
extern real32_T P_LCS_preDis_LCK_A2Curve_Fac[5];/* Variable: P_LCS_preDis_LCK_A2Curve_Fac
                                                 * Referenced by: '<S18>/predis_ayFac4'
                                                 */
extern real32_T P_LCS_preDis_LCK_A2Curve_Fac2[10];
                                      /* Variable: P_LCS_preDis_LCK_A2Curve_Fac2
                                       * Referenced by: '<S18>/predis_ayFac1'
                                       */
extern real32_T P_LCS_preDis_LCK_Fac[304];/* Variable: P_LCS_preDis_LCK_Fac
                                           * Referenced by: '<S18>/2-D Lookup Table2'
                                           */
extern real32_T P_LCS_preDis_LC_Eco_Fac[304];/* Variable: P_LCS_preDis_LC_Eco_Fac
                                              * Referenced by: '<S18>/LC_Medium_preDis_Fac_TB'
                                              */
extern real32_T P_LCS_preDis_LC_Nomal_Fac[304];/* Variable: P_LCS_preDis_LC_Nomal_Fac
                                                * Referenced by: '<S18>/2-D Lookup Table1'
                                                */
extern real32_T P_LCS_preDis_LC_Sport_Fac[304];/* Variable: P_LCS_preDis_LC_Sport_Fac
                                                * Referenced by: '<S18>/LCS_LC_Emergent_preDis_TB'
                                                */
extern real32_T P_LCS_preDis_spd[16];  /* Variable: P_LCS_preDis_spd
                                        * Referenced by:
                                        *   '<S18>/2-D Lookup Table1'
                                        *   '<S18>/2-D Lookup Table2'
                                        *   '<S18>/LCS_LC_ELK_preDis_TB'
                                        *   '<S18>/LCS_LC_ELK_preDis_TB1'
                                        *   '<S18>/LCS_LC_ESSAES_preDis_TB'
                                        *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                        *   '<S18>/LCS_LC_Emergent_preDis_TB'
                                        *   '<S18>/LC_Medium_preDis_Fac_TB'
                                        *   '<S18>/preDisMin_TB'
                                        *   '<S18>/preDisMin_TB1'
                                        *   '<S18>/preDisMin_TB2'
                                        *   '<S18>/preDisMin_TB3'
                                        *   '<S18>/preDisMin_TB4'
                                        *   '<S18>/preDisMin_TB5'
                                        */
extern uint16_T P_LCS_StateHold_time;  /* Variable: P_LCS_StateHold_time
                                        * Referenced by: '<S20>/Constant2'
                                        */
extern boolean_T P_LCS_ESSAngleSW;     /* Variable: P_LCS_ESSAngleSW
                                        * Referenced by: '<S28>/Constant3'
                                        */
extern uint8_T P_LCS_LatAcc2CurveSW;   /* Variable: P_LCS_LatAcc2CurveSW
                                        * Referenced by: '<S18>/Constant2'
                                        */
extern uint8_T P_LCS_StateActiveFlg_BP[6];/* Variable: P_LCS_StateActiveFlg_BP
                                           * Referenced by: '<S30>/LC_start_slope'
                                           */
extern uint8_T P_LCS_StateCompleteFlg_BP[4];/* Variable: P_LCS_StateCompleteFlg_BP
                                             * Referenced by:
                                             *   '<S32>/LC_Complete_slope'
                                             *   '<S32>/LC_Complete_slope1'
                                             */

/*====================*
 * External functions *
 *====================*/
extern LATC_Test_Calc_rtModel *LATC_Test_Calc(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_LATC_Test_Calc_T *const LATC_Test_Calc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<S18>/Constant15' : Unused code path elimination
 * Block '<S18>/Logical Operator1' : Unused code path elimination
 * Block '<S39>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S18>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy6' : Eliminate redundant signal conversion block
 * Block '<S47>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S26>/Constant13' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LATC_Test_Calc'
 * '<S1>'   : 'LATC_Test_Calc/Input1'
 * '<S2>'   : 'LATC_Test_Calc/Input10'
 * '<S3>'   : 'LATC_Test_Calc/Input11'
 * '<S4>'   : 'LATC_Test_Calc/Input12'
 * '<S5>'   : 'LATC_Test_Calc/Input13'
 * '<S6>'   : 'LATC_Test_Calc/Input14'
 * '<S7>'   : 'LATC_Test_Calc/Input15'
 * '<S8>'   : 'LATC_Test_Calc/Input16'
 * '<S9>'   : 'LATC_Test_Calc/Input17'
 * '<S10>'  : 'LATC_Test_Calc/Input2'
 * '<S11>'  : 'LATC_Test_Calc/Input3'
 * '<S12>'  : 'LATC_Test_Calc/Input4'
 * '<S13>'  : 'LATC_Test_Calc/Input5'
 * '<S14>'  : 'LATC_Test_Calc/Input6'
 * '<S15>'  : 'LATC_Test_Calc/Input7'
 * '<S16>'  : 'LATC_Test_Calc/Input8'
 * '<S17>'  : 'LATC_Test_Calc/Input9'
 * '<S18>'  : 'LATC_Test_Calc/LCS_Angle'
 * '<S19>'  : 'LATC_Test_Calc/Output1'
 * '<S20>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc'
 * '<S21>'  : 'LATC_Test_Calc/LCS_Angle/Compare To Constant1'
 * '<S22>'  : 'LATC_Test_Calc/LCS_Angle/LP filter'
 * '<S23>'  : 'LATC_Test_Calc/LCS_Angle/MATLAB Function'
 * '<S24>'  : 'LATC_Test_Calc/LCS_Angle/Output1'
 * '<S25>'  : 'LATC_Test_Calc/LCS_Angle/Output2'
 * '<S26>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect'
 * '<S27>'  : 'LATC_Test_Calc/LCS_Angle/Subsystem5'
 * '<S28>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc'
 * '<S29>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc/MATLAB Function3'
 * '<S30>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc/Switch Case Action Subsystem'
 * '<S31>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc/Switch Case Action Subsystem1'
 * '<S32>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc/Switch Case Action Subsystem2'
 * '<S33>'  : 'LATC_Test_Calc/LCS_Angle/AngSlopeCalc/Switch Case Action Subsystem3'
 * '<S34>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Chart'
 * '<S35>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Compare To Constant1'
 * '<S36>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Compare To Constant2'
 * '<S37>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Compare To Constant3'
 * '<S38>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Compare To Constant4'
 * '<S39>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/LP filter4'
 * '<S40>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Subsystem17'
 * '<S41>'  : 'LATC_Test_Calc/LCS_Angle/OverRideDetect/Subsystem4'
 * '<S42>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Compare To Constant'
 * '<S43>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Compare To Constant1'
 * '<S44>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/LP filter'
 * '<S45>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output1'
 * '<S46>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output2'
 * '<S47>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output3'
 * '<S48>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output4'
 * '<S49>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output5'
 * '<S50>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output6'
 * '<S51>'  : 'LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/TargetSteerAngleCalc'
 */
#endif                                 /* RTW_HEADER_LATC_Test_Calc_h_ */
