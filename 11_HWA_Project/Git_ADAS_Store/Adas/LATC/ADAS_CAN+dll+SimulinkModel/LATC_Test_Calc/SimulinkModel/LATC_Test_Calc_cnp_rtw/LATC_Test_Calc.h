/*
 * LATC_Test_Calc.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 1.47
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Nov 23 10:42:24 2021
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
  real_T SFunction_o2;                 /* '<S11>/S-Function' */
  real_T SFunction_o3;                 /* '<S11>/S-Function' */
  real_T SFunction_o2_j;               /* '<S12>/S-Function' */
  real_T SFunction_o3_p;               /* '<S12>/S-Function' */
  real_T SFunction_o2_l;               /* '<S14>/S-Function' */
  real_T SFunction_o3_o;               /* '<S14>/S-Function' */
  real_T SFunction_o2_f;               /* '<S7>/S-Function' */
  real_T SFunction_o3_m;               /* '<S7>/S-Function' */
  real_T SFunction_o2_a;               /* '<S1>/S-Function' */
  real_T SFunction_o3_a;               /* '<S1>/S-Function' */
  real_T SFunction_o2_g;               /* '<S8>/S-Function' */
  real_T SFunction_o3_n;               /* '<S8>/S-Function' */
  real_T SFunction_o2_n;               /* '<S9>/S-Function' */
  real_T SFunction_o3_l;               /* '<S9>/S-Function' */
  real_T SFunction_o2_gr;              /* '<S10>/S-Function' */
  real_T SFunction_o3_l1;              /* '<S10>/S-Function' */
  real_T SFunction_o2_k;               /* '<S15>/S-Function' */
  real_T SFunction_o3_az;              /* '<S15>/S-Function' */
  real_T SFunction_o2_fl;              /* '<S13>/S-Function' */
  real_T SFunction_o3_d;               /* '<S13>/S-Function' */
  real_T DataTypeConversion[40];       /* '<S22>/Data Type Conversion' */
  real_T SFunction_o2_ge;              /* '<S5>/S-Function' */
  real_T SFunction_o3_de;              /* '<S5>/S-Function' */
  real_T SFunction_o2_c;               /* '<S6>/S-Function' */
  real_T SFunction_o3_j;               /* '<S6>/S-Function' */
  real_T SFunction_o2_i;               /* '<S4>/S-Function' */
  real_T SFunction_o3_jf;              /* '<S4>/S-Function' */
  real_T Sum5;                         /* '<S16>/Sum5' */
  real_T Sum5_l;                       /* '<S17>/Sum5' */
  real_T Sum5_c;                       /* '<S18>/Sum5' */
  real_T DataTypeConversion_o;         /* '<S21>/Data Type Conversion' */
  real_T DataTypeConversion_j[40];     /* '<S39>/Data Type Conversion' */
  real_T DataTypeConversion_m;         /* '<S38>/Data Type Conversion' */
  real_T DataTypeConversion_c;         /* '<S37>/Data Type Conversion' */
  real_T DataTypeConversion_b;         /* '<S36>/Data Type Conversion' */
  real_T DataTypeConversion_b2;        /* '<S35>/Data Type Conversion' */
  real_T DataTypeConversion_ja;        /* '<S34>/Data Type Conversion' */
  real_T DataTypeConversion_k;         /* '<S33>/Data Type Conversion' */
  real_T DataTypeConversion_l;         /* '<S32>/Data Type Conversion' */
  real_T DataTypeConversion_d;         /* '<S31>/Data Type Conversion' */
  real_T DataTypeConversion_cf;        /* '<S30>/Data Type Conversion' */
  real_T DataTypeConversion_on;        /* '<S27>/Data Type Conversion' */
  real_T DataTypeConversion_g;         /* '<S26>/Data Type Conversion' */
  real_T DataTypeConversion_i;         /* '<S24>/Data Type Conversion' */
  real_T DataTypeConversion_e;         /* '<S29>/Data Type Conversion' */
  real_T SFunction_o2_kw;              /* '<S2>/S-Function' */
  real_T SFunction_o3_g;               /* '<S2>/S-Function' */
  real_T SFunction_o2_b;               /* '<S3>/S-Function' */
  real_T SFunction_o3_g4;              /* '<S3>/S-Function' */
  real_T DataTypeConversion_o5;        /* '<S48>/Data Type Conversion' */
  real32_T SFunction_o1;               /* '<S11>/S-Function' */
  real32_T SFunction_o1_p;             /* '<S12>/S-Function' */
  real32_T SFunction_o1_k;             /* '<S14>/S-Function' */
  real32_T SFunction_o1_o;             /* '<S7>/S-Function' */
  real32_T SFunction_o1_ph;            /* '<S1>/S-Function' */
  real32_T SFunction_o1_b;             /* '<S15>/S-Function' */
  real32_T SFunction_o1_oz;            /* '<S5>/S-Function' */
  real32_T SFunction_o1_h;             /* '<S6>/S-Function' */
  real32_T SFunction_o1_g;             /* '<S4>/S-Function' */
  real32_T Add6;                       /* '<Root>/Add6' */
  real32_T SFunction_o1_n;             /* '<S2>/S-Function' */
  real32_T SFunction_o1_c;             /* '<S3>/S-Function' */
  uint16_T Count;                      /* '<S44>/MATLAB Function1' */
  uint8_T SFunction_o1_oa;             /* '<S13>/S-Function' */
  uint8_T Flg;                         /* '<S44>/MATLAB Function1' */
} B_LATC_Test_Calc_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Memory2_PreviousInput;        /* '<S16>/Memory2' */
  real_T Memory2_PreviousInput_k;      /* '<S17>/Memory2' */
  real_T Memory2_PreviousInput_o;      /* '<S18>/Memory2' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T TappedDelay2_X[4];          /* '<Root>/Tapped Delay2' */
  real32_T TappedDelay1_X[4];          /* '<S41>/Tapped Delay1' */
  real32_T Memory2_PreviousInput_n;    /* '<S45>/Memory2' */
  uint16_T UnitDelay_DSTATE_d;         /* '<S44>/Unit Delay' */
  uint16_T UnitDelay3_DSTATE;          /* '<S40>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE;           /* '<S44>/Unit Delay2' */
  uint8_T UnitDelay1_DSTATE;           /* '<S44>/Unit Delay1' */
  uint8_T UnitDelay5_DSTATE;           /* '<S40>/Unit Delay5' */
  uint8_T UnitDelay4_DSTATE;           /* '<S40>/Unit Delay4' */
} DW_LATC_Test_Calc_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Saturation;           /* '<Root>/Saturation' */
} ConstB_LATC_Test_Calc_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1_Size[2];

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1[19];

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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
   */
  real_T pooled2;

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
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   */
  real_T SFunction_P4_Size[2];

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
   *   '<S14>/S-Function'
   *   '<S15>/S-Function'
   */
  real_T pooled3[5];

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
   */
  real_T pooled4[2];

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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
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
   *   '<S21>/S-Function'
   *   '<S22>/S-Function'
   *   '<S23>/S-Function'
   *   '<S24>/S-Function'
   *   '<S25>/S-Function'
   *   '<S26>/S-Function'
   *   '<S27>/S-Function'
   *   '<S28>/S-Function'
   *   '<S29>/S-Function'
   *   '<S30>/S-Function'
   *   '<S31>/S-Function'
   *   '<S32>/S-Function'
   *   '<S33>/S-Function'
   *   '<S34>/S-Function'
   *   '<S35>/S-Function'
   *   '<S36>/S-Function'
   *   '<S37>/S-Function'
   *   '<S38>/S-Function'
   *   '<S39>/S-Function'
   *   '<S48>/S-Function'
   */
  real_T pooled5;

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_Size_j[2];

  /* Computed Parameter: SFunction_P1_h
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_h[24];

  /* Computed Parameter: SFunction_P1_Size_jn
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_Size_jn[2];

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_l[15];

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_Size_n[2];

  /* Computed Parameter: SFunction_P1_i
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_i[24];

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S1>/S-Function'
   */
  real_T SFunction_P1_Size_c[2];

  /* Computed Parameter: SFunction_P1_hr
   * Referenced by: '<S1>/S-Function'
   */
  real_T SFunction_P1_hr[16];

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_Size_d[2];

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_p[16];

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_Size_b[2];

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_m[16];

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_Size_k[2];

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_d[16];

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_Size_l[2];

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_g[15];

  /* Computed Parameter: SFunction_P1_Size_da
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_Size_da[2];

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_j[22];

  /* Computed Parameter: SFunction_P4_Size_m
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P4_Size_m[2];

  /* Computed Parameter: SFunction_P4
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P4[5];

  /* Computed Parameter: SFunction_P1_Size_di
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_Size_di[2];

  /* Computed Parameter: SFunction_P1_ds
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_ds[22];

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_Size_p[2];

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_c[22];

  /* Computed Parameter: SFunction_P1_Size_cx
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_Size_cx[2];

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_o[31];

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S21>/S-Function'
   */
  real_T SFunction_P1_Size_f[2];

  /* Computed Parameter: SFunction_P1_ma
   * Referenced by: '<S21>/S-Function'
   */
  real_T SFunction_P1_ma[19];

  /* Computed Parameter: SFunction_P1_Size_p2
   * Referenced by: '<S22>/S-Function'
   */
  real_T SFunction_P1_Size_p2[2];

  /* Computed Parameter: SFunction_P1_gq
   * Referenced by: '<S22>/S-Function'
   */
  real_T SFunction_P1_gq[13];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S22>/S-Function'
   *   '<S39>/S-Function'
   */
  real_T SFunction_P2_Size_c[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S22>/S-Function'
   *   '<S39>/S-Function'
   */
  real_T pooled7[2];

  /* Computed Parameter: SFunction_P1_Size_b4
   * Referenced by: '<S23>/S-Function'
   */
  real_T SFunction_P1_Size_b4[2];

  /* Computed Parameter: SFunction_P1_mg
   * Referenced by: '<S23>/S-Function'
   */
  real_T SFunction_P1_mg[16];

  /* Computed Parameter: SFunction_P1_Size_np
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_Size_np[2];

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_b[18];

  /* Computed Parameter: SFunction_P1_Size_na
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_Size_na[2];

  /* Computed Parameter: SFunction_P1_lm
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_lm[15];

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S26>/S-Function'
   */
  real_T SFunction_P1_Size_i[2];

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S26>/S-Function'
   */
  real_T SFunction_P1_e[16];

  /* Computed Parameter: SFunction_P1_Size_ie
   * Referenced by: '<S27>/S-Function'
   */
  real_T SFunction_P1_Size_ie[2];

  /* Computed Parameter: SFunction_P1_bc
   * Referenced by: '<S27>/S-Function'
   */
  real_T SFunction_P1_bc[16];

  /* Computed Parameter: SFunction_P1_Size_l0
   * Referenced by: '<S28>/S-Function'
   */
  real_T SFunction_P1_Size_l0[2];

  /* Computed Parameter: SFunction_P1_l2
   * Referenced by: '<S28>/S-Function'
   */
  real_T SFunction_P1_l2[24];

  /* Computed Parameter: SFunction_P1_Size_bk
   * Referenced by: '<S29>/S-Function'
   */
  real_T SFunction_P1_Size_bk[2];

  /* Computed Parameter: SFunction_P1_ec
   * Referenced by: '<S29>/S-Function'
   */
  real_T SFunction_P1_ec[20];

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S30>/S-Function'
   */
  real_T SFunction_P1_Size_h[2];

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S30>/S-Function'
   */
  real_T SFunction_P1_a[24];

  /* Computed Parameter: SFunction_P1_Size_it
   * Referenced by: '<S31>/S-Function'
   */
  real_T SFunction_P1_Size_it[2];

  /* Computed Parameter: SFunction_P1_e1
   * Referenced by: '<S31>/S-Function'
   */
  real_T SFunction_P1_e1[19];

  /* Computed Parameter: SFunction_P1_Size_ly
   * Referenced by: '<S32>/S-Function'
   */
  real_T SFunction_P1_Size_ly[2];

  /* Computed Parameter: SFunction_P1_f
   * Referenced by: '<S32>/S-Function'
   */
  real_T SFunction_P1_f[16];

  /* Computed Parameter: SFunction_P1_Size_ke
   * Referenced by: '<S33>/S-Function'
   */
  real_T SFunction_P1_Size_ke[2];

  /* Computed Parameter: SFunction_P1_mz
   * Referenced by: '<S33>/S-Function'
   */
  real_T SFunction_P1_mz[19];

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S34>/S-Function'
   */
  real_T SFunction_P1_Size_o[2];

  /* Computed Parameter: SFunction_P1_co
   * Referenced by: '<S34>/S-Function'
   */
  real_T SFunction_P1_co[17];

  /* Computed Parameter: SFunction_P1_Size_ix
   * Referenced by: '<S35>/S-Function'
   */
  real_T SFunction_P1_Size_ix[2];

  /* Computed Parameter: SFunction_P1_mv
   * Referenced by: '<S35>/S-Function'
   */
  real_T SFunction_P1_mv[19];

  /* Computed Parameter: SFunction_P1_Size_jv
   * Referenced by: '<S36>/S-Function'
   */
  real_T SFunction_P1_Size_jv[2];

  /* Computed Parameter: SFunction_P1_je
   * Referenced by: '<S36>/S-Function'
   */
  real_T SFunction_P1_je[24];

  /* Computed Parameter: SFunction_P1_Size_h3
   * Referenced by: '<S37>/S-Function'
   */
  real_T SFunction_P1_Size_h3[2];

  /* Computed Parameter: SFunction_P1_os
   * Referenced by: '<S37>/S-Function'
   */
  real_T SFunction_P1_os[21];

  /* Computed Parameter: SFunction_P1_Size_ky
   * Referenced by: '<S38>/S-Function'
   */
  real_T SFunction_P1_Size_ky[2];

  /* Computed Parameter: SFunction_P1_gr
   * Referenced by: '<S38>/S-Function'
   */
  real_T SFunction_P1_gr[26];

  /* Computed Parameter: SFunction_P1_Size_ph
   * Referenced by: '<S39>/S-Function'
   */
  real_T SFunction_P1_Size_ph[2];

  /* Computed Parameter: SFunction_P1_i2
   * Referenced by: '<S39>/S-Function'
   */
  real_T SFunction_P1_i2[13];

  /* Computed Parameter: SFunction_P1_Size_lc
   * Referenced by: '<S2>/S-Function'
   */
  real_T SFunction_P1_Size_lc[2];

  /* Computed Parameter: SFunction_P1_bb
   * Referenced by: '<S2>/S-Function'
   */
  real_T SFunction_P1_bb[16];

  /* Computed Parameter: SFunction_P1_Size_pp
   * Referenced by: '<S3>/S-Function'
   */
  real_T SFunction_P1_Size_pp[2];

  /* Computed Parameter: SFunction_P1_h5
   * Referenced by: '<S3>/S-Function'
   */
  real_T SFunction_P1_h5[14];

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_Size_e[2];

  /* Computed Parameter: SFunction_P1_pa
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_pa[21];

  /* Computed Parameter: ActivePreviewT_TBL_tableData
   * Referenced by: '<S49>/ActivePreviewT_TBL'
   */
  real32_T ActivePreviewT_TBL_tableData[75];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/LC_start_slope'
   *   '<S49>/ActiveAyDtLimit_TBL'
   *   '<S49>/ActivePreviewT_TBL'
   */
  uint32_T pooled14[2];

  /* Computed Parameter: uDLookupTable2_maxIndex
   * Referenced by: '<S44>/2-D Lookup Table2'
   */
  uint32_T uDLookupTable2_maxIndex[2];

  /* Computed Parameter: DirectLookupTablenD1_table
   * Referenced by: '<S44>/Direct Lookup Table (n-D)1'
   */
  uint8_T DirectLookupTablenD1_table[10];
} ConstP_LATC_Test_Calc_T;

/* Backward compatible GRT Identifiers */
#define rtB                            LATC_Test_Calc_B
#define BlockIO                        B_LATC_Test_Calc_T
#define rtDWork                        LATC_Test_Calc_DW
#define D_Work                         DW_LATC_Test_Calc_T
#define tConstBlockIOType              ConstB_LATC_Test_Calc_T
#define rtC                            LATC_Test_Calc_ConstB
#define ConstParam                     ConstP_LATC_Test_Calc_T
#define rtcP                           LATC_Test_Calc_ConstP

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
    SimStruct childSFunctions[35];
    SimStruct *childSFunctionPtrs[35];
    struct _ssBlkInfo2 blkInfo2[35];
    struct _ssSFcnModelMethods2 methods2[35];
    struct _ssSFcnModelMethods3 methods3[35];
    struct _ssSFcnModelMethods4 methods4[35];
    struct _ssStatesInfo2 statesInfo2[35];
    ssPeriodicStatesInfo periodicStatesInfo[35];
    struct _ssPortInfo2 inputOutputPortInfo2[35];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[40];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn14;

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
    } Sfcn15;

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
    } Sfcn16;

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
    } Sfcn26;

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
    } Sfcn27;

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
    } Sfcn28;

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
    } Sfcn29;

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
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[40];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn31;

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
    } Sfcn32;

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
    } Sfcn33;

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
    } Sfcn34;
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
extern real_T LCS_HoldTime;            /* '<S40>/Product' */
extern real_T LCS_LCC_PlanIdex;        /* '<S42>/FrenetTrajectory' */
extern real_T LCS_LCC_NumTraj;         /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_IN_desLaneA1;      /* '<S8>/S-Function' */
extern real32_T LCS_IN_desLaneA2;      /* '<S9>/S-Function' */
extern real32_T LCS_IN_desLaneA3;      /* '<S10>/S-Function' */
extern real32_T LCS_LCC_Preview_Curve; /* '<S45>/Sum5' */
extern real32_T LCS_LCC_Preview_CurveFac;/* '<S44>/predis_ayFac1' */
extern real32_T LCS_LCC_PreviewFac;    /* '<S44>/2-D Lookup Table2' */
extern real32_T LCS_LCC_FinalPreviewT; /* '<S44>/Min' */
extern real32_T LCS_LCC_AyDtLimit;     /* '<S44>/Multiport Switch1' */
extern real32_T LCS_LCC_Max_Lateral_Acc;/* '<S40>/Multiport Switch2' */
extern real32_T LCS_StateActive_AngleSlope;/* '<S40>/Merge' */
extern real32_T LCS_LCC_StateAngleSlope;/* '<S40>/Multiport Switch1' */
extern real32_T LCS_ReqEPSTrgAngle;    /* '<Root>/Gain6' */
extern real32_T LCS_LCC_PlanX[40];     /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_PlanY[40];     /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_PlanTheta[40]; /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_PreviewX;      /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_PreviewY;      /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_PreviewTheta;  /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_ref_curve;     /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_Later_error;   /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_Later_error_rate;/* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_heading_error; /* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_heading_error_rate;/* '<S42>/FrenetTrajectory' */
extern real32_T LCS_LCC_TarAngle_deg;  /* '<Root>/MATLAB Function1' */
extern real32_T LCS_LCC_Feedforward;   /* '<Root>/MATLAB Function1' */
extern real32_T LCS_LCC_Feedback;      /* '<Root>/MATLAB Function1' */
extern real32_T LCS_LCC_Steer_Limit;   /* '<Root>/MATLAB Function1' */
extern uint16_T LCS_AngleSlope_Cnt;    /* '<S40>/MATLAB Function3' */
extern uint8_T LCS_LCType;             /* '<S44>/Direct Lookup Table (n-D)1' */
extern uint8_T LCS_AngleSlope_Flg;     /* '<S40>/MATLAB Function3' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_LCS_StateActive_HoldTime_BP[15];
                                      /* Variable: P_LCS_StateActive_HoldTime_BP
                                       * Referenced by:
                                       *   '<S52>/LC_start_slope'
                                       *   '<S49>/ActiveAyDtLimit_TBL'
                                       *   '<S49>/ActivePreviewT_TBL'
                                       */
extern real32_T P_LCS_A0_Dis_BP[19];   /* Variable: P_LCS_A0_Dis_BP
                                        * Referenced by: '<S44>/2-D Lookup Table2'
                                        */
extern real32_T P_LCS_A2S_FliterTime;  /* Variable: P_LCS_A2S_FliterTime
                                        * Referenced by: '<S44>/Constant20'
                                        */
extern real32_T P_LCS_A2_Curve_BP[10]; /* Variable: P_LCS_A2_Curve_BP
                                        * Referenced by:
                                        *   '<S44>/predis_ayFac1'
                                        *   '<S44>/predis_ayFac2'
                                        */
extern real32_T P_LCS_DeltaEps_SpdBp[16];/* Variable: P_LCS_DeltaEps_SpdBp
                                          * Referenced by: '<S44>/Plan_Py_Fac'
                                          */
extern real32_T P_LCS_LCC_AngleSlope_ELK[16];/* Variable: P_LCS_LCC_AngleSlope_ELK
                                              * Referenced by: '<S40>/ELK Active'
                                              */
extern real32_T P_LCS_LCC_AngleSlope_ESS[16];/* Variable: P_LCS_LCC_AngleSlope_ESS
                                              * Referenced by: '<S40>/ESS AES Active'
                                              */
extern real32_T P_LCS_LCC_AngleSlope_LCCancle[16];
                                      /* Variable: P_LCS_LCC_AngleSlope_LCCancle
                                       * Referenced by: '<S40>/LC Cancel'
                                       */
extern real32_T P_LCS_LCC_AngleSlope_LCEco[16];/* Variable: P_LCS_LCC_AngleSlope_LCEco
                                                * Referenced by: '<S40>/LCK//IE TO LC_Eco'
                                                */
extern real32_T P_LCS_LCC_AngleSlope_LCK[16];/* Variable: P_LCS_LCC_AngleSlope_LCK
                                              * Referenced by: '<S40>/No Function 2 LCK'
                                              */
extern real32_T P_LCS_LCC_AngleSlope_LCKIE[16];/* Variable: P_LCS_LCC_AngleSlope_LCKIE
                                                * Referenced by: '<S40>/LCKIE_Active'
                                                */
extern real32_T P_LCS_LCC_AngleSlope_LCNomal[16];/* Variable: P_LCS_LCC_AngleSlope_LCNomal
                                                  * Referenced by: '<S40>/LCK//IE TO LC_Nomal'
                                                  */
extern real32_T P_LCS_LCC_AngleSlope_LCSport[16];/* Variable: P_LCS_LCC_AngleSlope_LCSport
                                                  * Referenced by: '<S40>/LCK//IE TO LC_Sport'
                                                  */
extern real32_T P_LCS_LCC_AngleSlope_LKA[16];/* Variable: P_LCS_LCC_AngleSlope_LKA
                                              * Referenced by: '<S40>/LKA Active'
                                              */
extern real32_T P_LCS_LCC_ELK_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_ELK_AyDtLimit_TBL
                                                 * Referenced by: '<S44>/AyDtLimit_TB4'
                                                 */
extern real32_T P_LCS_LCC_ESS_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_ESS_AyDtLimit_TBL
                                                 * Referenced by: '<S44>/AyDtLimit_TB5'
                                                 */
extern real32_T P_LCS_LCC_Eco_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_Eco_AyDtLimit_TBL
                                                 * Referenced by: '<S44>/AyDtLimit_TB6'
                                                 */
extern real32_T P_LCS_LCC_LCK_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_LCK_AyDtLimit_TBL
                                                 * Referenced by:
                                                 *   '<S44>/AyDtLimit_TB'
                                                 *   '<S44>/AyDtLimit_TB1'
                                                 */
extern real32_T P_LCS_LCC_LC_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_LC_AyDtLimit_TBL
                                                * Referenced by: '<S44>/AyDtLimit_TB8'
                                                */
extern real32_T P_LCS_LCC_LC_Normal_AyDtLimit_TBL[16];
                                  /* Variable: P_LCS_LCC_LC_Normal_AyDtLimit_TBL
                                   * Referenced by: '<S44>/AyDtLimit_TB2'
                                   */
extern real32_T P_LCS_LCC_LKA_AyDtLimit_TBL[16];/* Variable: P_LCS_LCC_LKA_AyDtLimit_TBL
                                                 * Referenced by: '<S44>/AyDtLimit_TB3'
                                                 */
extern real32_T P_LCS_LCC_MaxLatAcc_ELK[16];/* Variable: P_LCS_LCC_MaxLatAcc_ELK
                                             * Referenced by: '<S40>/ELK Active1'
                                             */
extern real32_T P_LCS_LCC_MaxLatAcc_ESS[16];/* Variable: P_LCS_LCC_MaxLatAcc_ESS
                                             * Referenced by: '<S40>/ESS AES Active1'
                                             */
extern real32_T P_LCS_LCC_MaxLatAcc_LCCancel[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCCancel
                                                  * Referenced by: '<S40>/LC Cancel1'
                                                  */
extern real32_T P_LCS_LCC_MaxLatAcc_LCEco[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCEco
                                               * Referenced by: '<S40>/LCK//IE TO LC_Eco1'
                                               */
extern real32_T P_LCS_LCC_MaxLatAcc_LCK[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCK
                                             * Referenced by: '<S40>/No Function 2 LCK1'
                                             */
extern real32_T P_LCS_LCC_MaxLatAcc_LCKIE[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCKIE
                                               * Referenced by: '<S40>/LCKIE_Active1'
                                               */
extern real32_T P_LCS_LCC_MaxLatAcc_LCNomal[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCNomal
                                                 * Referenced by: '<S40>/LCK//IE TO LC_Nomal1'
                                                 */
extern real32_T P_LCS_LCC_MaxLatAcc_LCSport[16];/* Variable: P_LCS_LCC_MaxLatAcc_LCSport
                                                 * Referenced by: '<S40>/LCK//IE TO LC_Sport1'
                                                 */
extern real32_T P_LCS_LCC_MaxLatAcc_LKA[16];/* Variable: P_LCS_LCC_MaxLatAcc_LKA
                                             * Referenced by: '<S40>/LKA Active1'
                                             */
extern real32_T P_LCS_LCC_Min_Plan_Dis[16];/* Variable: P_LCS_LCC_Min_Plan_Dis
                                            * Referenced by: '<S44>/Plan_Py_Fac'
                                            */
extern real32_T P_LCS_LCC_PreCur_Min_Plan_Dis_Fac[10];
                                  /* Variable: P_LCS_LCC_PreCur_Min_Plan_Dis_Fac
                                   * Referenced by: '<S44>/predis_ayFac2'
                                   */
extern real32_T P_LCS_LCC_PreViewCurve_Fac[10];/* Variable: P_LCS_LCC_PreViewCurve_Fac
                                                * Referenced by: '<S44>/predis_ayFac1'
                                                */
extern real32_T P_LCS_LCC_PreViewT[16];/* Variable: P_LCS_LCC_PreViewT
                                        * Referenced by: '<S44>/Preview_T_TB'
                                        */
extern real32_T P_LCS_LCC_PreView_Fac[304];/* Variable: P_LCS_LCC_PreView_Fac
                                            * Referenced by: '<S44>/2-D Lookup Table2'
                                            */
extern real32_T P_LCS_LCC_PreView_s;   /* Variable: P_LCS_LCC_PreView_s
                                        * Referenced by: '<S44>/Constant28'
                                        */
extern real32_T P_LCS_LCC_Sport_AyDtLimit_TBL[16];
                                      /* Variable: P_LCS_LCC_Sport_AyDtLimit_TBL
                                       * Referenced by: '<S44>/AyDtLimit_TB7'
                                       */
extern real32_T P_LCS_LCC_StateActiv_AyDtLimit[75];
                                     /* Variable: P_LCS_LCC_StateActiv_AyDtLimit
                                      * Referenced by: '<S49>/ActiveAyDtLimit_TBL'
                                      */
extern real32_T P_LCS_StateActiv_AngleSlope[75];/* Variable: P_LCS_StateActiv_AngleSlope
                                                 * Referenced by: '<S52>/LC_start_slope'
                                                 */
extern real32_T P_LCS_preDis_spd[16];  /* Variable: P_LCS_preDis_spd
                                        * Referenced by:
                                        *   '<S40>/ELK Active'
                                        *   '<S40>/ELK Active1'
                                        *   '<S40>/ESS AES Active'
                                        *   '<S40>/ESS AES Active1'
                                        *   '<S40>/LC Cancel'
                                        *   '<S40>/LC Cancel1'
                                        *   '<S40>/LCK//IE TO LC_Eco'
                                        *   '<S40>/LCK//IE TO LC_Eco1'
                                        *   '<S40>/LCK//IE TO LC_Nomal'
                                        *   '<S40>/LCK//IE TO LC_Nomal1'
                                        *   '<S40>/LCK//IE TO LC_Sport'
                                        *   '<S40>/LCK//IE TO LC_Sport1'
                                        *   '<S40>/LCKIE_Active'
                                        *   '<S40>/LCKIE_Active1'
                                        *   '<S40>/LKA Active'
                                        *   '<S40>/LKA Active1'
                                        *   '<S40>/No Function 2 LCK'
                                        *   '<S40>/No Function 2 LCK1'
                                        *   '<S44>/2-D Lookup Table2'
                                        *   '<S44>/AyDtLimit_TB'
                                        *   '<S44>/AyDtLimit_TB1'
                                        *   '<S44>/AyDtLimit_TB2'
                                        *   '<S44>/AyDtLimit_TB3'
                                        *   '<S44>/AyDtLimit_TB4'
                                        *   '<S44>/AyDtLimit_TB5'
                                        *   '<S44>/AyDtLimit_TB6'
                                        *   '<S44>/AyDtLimit_TB7'
                                        *   '<S44>/AyDtLimit_TB8'
                                        *   '<S44>/Preview_T_TB'
                                        */
extern uint16_T P_LCS_LCC_StateActiveDelaytime;
                                     /* Variable: P_LCS_LCC_StateActiveDelaytime
                                      * Referenced by: '<S44>/Constant1'
                                      */
extern uint16_T P_LCS_StateHold_time;  /* Variable: P_LCS_StateHold_time
                                        * Referenced by: '<S40>/Constant2'
                                        */
extern uint8_T P_LCS_StateActiveFlg_BP[5];/* Variable: P_LCS_StateActiveFlg_BP
                                           * Referenced by:
                                           *   '<S52>/LC_start_slope'
                                           *   '<S49>/ActiveAyDtLimit_TBL'
                                           *   '<S49>/ActivePreviewT_TBL'
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
 * Block '<Root>/Data Type Conversion10' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<S8>'   : 'LATC_Test_Calc/Input2'
 * '<S9>'   : 'LATC_Test_Calc/Input3'
 * '<S10>'  : 'LATC_Test_Calc/Input4'
 * '<S11>'  : 'LATC_Test_Calc/Input5'
 * '<S12>'  : 'LATC_Test_Calc/Input6'
 * '<S13>'  : 'LATC_Test_Calc/Input7'
 * '<S14>'  : 'LATC_Test_Calc/Input8'
 * '<S15>'  : 'LATC_Test_Calc/Input9'
 * '<S16>'  : 'LATC_Test_Calc/LP filter'
 * '<S17>'  : 'LATC_Test_Calc/LP filter1'
 * '<S18>'  : 'LATC_Test_Calc/LP filter2'
 * '<S19>'  : 'LATC_Test_Calc/MATLAB Function1'
 * '<S20>'  : 'LATC_Test_Calc/Motion_Planning'
 * '<S21>'  : 'LATC_Test_Calc/Output1'
 * '<S22>'  : 'LATC_Test_Calc/Output10'
 * '<S23>'  : 'LATC_Test_Calc/Output11'
 * '<S24>'  : 'LATC_Test_Calc/Output12'
 * '<S25>'  : 'LATC_Test_Calc/Output13'
 * '<S26>'  : 'LATC_Test_Calc/Output14'
 * '<S27>'  : 'LATC_Test_Calc/Output15'
 * '<S28>'  : 'LATC_Test_Calc/Output16'
 * '<S29>'  : 'LATC_Test_Calc/Output17'
 * '<S30>'  : 'LATC_Test_Calc/Output18'
 * '<S31>'  : 'LATC_Test_Calc/Output19'
 * '<S32>'  : 'LATC_Test_Calc/Output2'
 * '<S33>'  : 'LATC_Test_Calc/Output3'
 * '<S34>'  : 'LATC_Test_Calc/Output4'
 * '<S35>'  : 'LATC_Test_Calc/Output5'
 * '<S36>'  : 'LATC_Test_Calc/Output6'
 * '<S37>'  : 'LATC_Test_Calc/Output7'
 * '<S38>'  : 'LATC_Test_Calc/Output8'
 * '<S39>'  : 'LATC_Test_Calc/Output9'
 * '<S40>'  : 'LATC_Test_Calc/SteerAngSlopeCalc'
 * '<S41>'  : 'LATC_Test_Calc/Subsystem'
 * '<S42>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory'
 * '<S43>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/FrenetTrajectory'
 * '<S44>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1'
 * '<S45>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/LP filter'
 * '<S46>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/MATLAB Function'
 * '<S47>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/MATLAB Function1'
 * '<S48>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/Output4'
 * '<S49>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/Switch Case Action Subsystem'
 * '<S50>'  : 'LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/Switch Case Action Subsystem1'
 * '<S51>'  : 'LATC_Test_Calc/SteerAngSlopeCalc/MATLAB Function3'
 * '<S52>'  : 'LATC_Test_Calc/SteerAngSlopeCalc/Switch Case Action Subsystem'
 * '<S53>'  : 'LATC_Test_Calc/SteerAngSlopeCalc/Switch Case Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_LATC_Test_Calc_h_ */
