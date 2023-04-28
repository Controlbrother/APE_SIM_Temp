/*
 * LATC_Test_Calc.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.98
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Mar  1 14:24:20 2022
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
#define rtmGetTaskCounters(rtm)        ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ((rtm)->Timing.TaskCounters = (val))
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
  real_T VehDynYawRate;                /* '<Root>/Rate Transition1' */
  real_T LongitudeAcc;                 /* '<Root>/Rate Transition1' */
  real_T SFunction_o1;                 /* '<S4>/S-Function' */
  real_T SFunction_o2;                 /* '<S4>/S-Function' */
  real_T SFunction_o3;                 /* '<S4>/S-Function' */
  real_T SFunction_o1_m;               /* '<S5>/S-Function' */
  real_T SFunction_o2_d;               /* '<S5>/S-Function' */
  real_T SFunction_o3_b;               /* '<S5>/S-Function' */
  real_T SFunction_o1_n;               /* '<S6>/S-Function' */
  real_T SFunction_o2_p;               /* '<S6>/S-Function' */
  real_T SFunction_o3_l;               /* '<S6>/S-Function' */
  real_T SFunction_o1_d;               /* '<S7>/S-Function' */
  real_T SFunction_o2_l;               /* '<S7>/S-Function' */
  real_T SFunction_o3_p;               /* '<S7>/S-Function' */
  real_T SFunction_o1_o;               /* '<S8>/S-Function' */
  real_T SFunction_o2_h;               /* '<S8>/S-Function' */
  real_T SFunction_o3_i;               /* '<S8>/S-Function' */
  real_T SFunction_o1_g;               /* '<S9>/S-Function' */
  real_T SFunction_o2_h4;              /* '<S9>/S-Function' */
  real_T SFunction_o3_h;               /* '<S9>/S-Function' */
  real_T SFunction_o1_j;               /* '<S10>/S-Function' */
  real_T SFunction_o2_a;               /* '<S10>/S-Function' */
  real_T SFunction_o3_lz;              /* '<S10>/S-Function' */
  real_T SFunction_o1_da;              /* '<S11>/S-Function' */
  real_T SFunction_o2_c;               /* '<S11>/S-Function' */
  real_T SFunction_o3_it;              /* '<S11>/S-Function' */
  real_T SFunction_o1_jg;              /* '<S12>/S-Function' */
  real_T SFunction_o2_po;              /* '<S12>/S-Function' */
  real_T SFunction_o3_pt;              /* '<S12>/S-Function' */
  real_T SFunction_o1_p;               /* '<S13>/S-Function' */
  real_T SFunction_o2_i;               /* '<S13>/S-Function' */
  real_T SFunction_o3_j;               /* '<S13>/S-Function' */
  real_T SFunction_o1_b;               /* '<S14>/S-Function' */
  real_T SFunction_o2_m;               /* '<S14>/S-Function' */
  real_T SFunction_o3_b0;              /* '<S14>/S-Function' */
  real_T SFunction_o1_gn;              /* '<S15>/S-Function' */
  real_T SFunction_o2_o;               /* '<S15>/S-Function' */
  real_T SFunction_o3_lq;              /* '<S15>/S-Function' */
  real_T SFunction_o1_f;               /* '<S16>/S-Function' */
  real_T SFunction_o2_n;               /* '<S16>/S-Function' */
  real_T SFunction_o3_d;               /* '<S16>/S-Function' */
  real_T SFunction_o1_go;              /* '<S17>/S-Function' */
  real_T SFunction_o2_if;              /* '<S17>/S-Function' */
  real_T SFunction_o3_a;               /* '<S17>/S-Function' */
  real_T SFunction_o1_k;               /* '<S18>/S-Function' */
  real_T SFunction_o2_dt;              /* '<S18>/S-Function' */
  real_T SFunction_o3_o;               /* '<S18>/S-Function' */
  real_T SFunction_o1_gp;              /* '<S19>/S-Function' */
  real_T SFunction_o2_g;               /* '<S19>/S-Function' */
  real_T SFunction_o3_a1;              /* '<S19>/S-Function' */
  real_T SFunction_o1_d4;              /* '<S20>/S-Function' */
  real_T SFunction_o2_lk;              /* '<S20>/S-Function' */
  real_T SFunction_o3_e;               /* '<S20>/S-Function' */
  real_T SFunction_o1_e;               /* '<S21>/S-Function' */
  real_T SFunction_o2_lv;              /* '<S21>/S-Function' */
  real_T SFunction_o3_of;              /* '<S21>/S-Function' */
  real_T SFunction_o1_fj;              /* '<S22>/S-Function' */
  real_T SFunction_o2_o1;              /* '<S22>/S-Function' */
  real_T SFunction_o3_n;               /* '<S22>/S-Function' */
  real_T SFunction_o1_pv;              /* '<S23>/S-Function' */
  real_T SFunction_o2_k;               /* '<S23>/S-Function' */
  real_T SFunction_o3_c;               /* '<S23>/S-Function' */
  real_T SFunction_o1_di;              /* '<S24>/S-Function' */
  real_T SFunction_o2_ao;              /* '<S24>/S-Function' */
  real_T SFunction_o3_bd;              /* '<S24>/S-Function' */
  real_T SFunction_o1_jf;              /* '<S25>/S-Function' */
  real_T SFunction_o2_pa;              /* '<S25>/S-Function' */
  real_T SFunction_o3_f;               /* '<S25>/S-Function' */
  real_T SFunction_o1_ph;              /* '<S26>/S-Function' */
  real_T SFunction_o2_an;              /* '<S26>/S-Function' */
  real_T SFunction_o3_a1v;             /* '<S26>/S-Function' */
  real_T SFunction_o1_pl;              /* '<S27>/S-Function' */
  real_T SFunction_o2_av;              /* '<S27>/S-Function' */
  real_T SFunction_o3_pp;              /* '<S27>/S-Function' */
  real_T SFunction_o1_gt;              /* '<S28>/S-Function' */
  real_T SFunction_o2_cr;              /* '<S28>/S-Function' */
  real_T SFunction_o3_db;              /* '<S28>/S-Function' */
  real_T SFunction_o1_pw;              /* '<S29>/S-Function' */
  real_T SFunction_o2_j;               /* '<S29>/S-Function' */
  real_T SFunction_o3_l0;              /* '<S29>/S-Function' */
  real_T SFunction_o1_k1;              /* '<S30>/S-Function' */
  real_T SFunction_o2_ky;              /* '<S30>/S-Function' */
  real_T SFunction_o3_pk;              /* '<S30>/S-Function' */
  real_T SFunction_o1_gq;              /* '<S31>/S-Function' */
  real_T SFunction_o2_it;              /* '<S31>/S-Function' */
  real_T SFunction_o3_jf;              /* '<S31>/S-Function' */
  real_T SFunction_o1_c;               /* '<S32>/S-Function' */
  real_T SFunction_o2_e;               /* '<S32>/S-Function' */
  real_T SFunction_o3_g;               /* '<S32>/S-Function' */
  real_T SFunction_o1_kz;              /* '<S33>/S-Function' */
  real_T SFunction_o2_b;               /* '<S33>/S-Function' */
  real_T SFunction_o3_g3;              /* '<S33>/S-Function' */
  real_T SFunction_o1_gf;              /* '<S34>/S-Function' */
  real_T SFunction_o2_bf;              /* '<S34>/S-Function' */
  real_T SFunction_o3_hy;              /* '<S34>/S-Function' */
  real_T SFunction_o1_je;              /* '<S35>/S-Function' */
  real_T SFunction_o2_ij;              /* '<S35>/S-Function' */
  real_T SFunction_o3_e2;              /* '<S35>/S-Function' */
  real_T SFunction_o1_i;               /* '<S36>/S-Function' */
  real_T SFunction_o2_iu;              /* '<S36>/S-Function' */
  real_T SFunction_o3_io;              /* '<S36>/S-Function' */
  real_T SFunction_o1_kr;              /* '<S37>/S-Function' */
  real_T SFunction_o2_di;              /* '<S37>/S-Function' */
  real_T SFunction_o3_k;               /* '<S37>/S-Function' */
  real_T SFunction_o1_c0;              /* '<S38>/S-Function' */
  real_T SFunction_o2_ay;              /* '<S38>/S-Function' */
  real_T SFunction_o3_o1;              /* '<S38>/S-Function' */
  real_T SFunction_o1_fi;              /* '<S39>/S-Function' */
  real_T SFunction_o2_bs;              /* '<S39>/S-Function' */
  real_T SFunction_o3_py;              /* '<S39>/S-Function' */
  real_T SFunction_o1_nk;              /* '<S40>/S-Function' */
  real_T SFunction_o2_f;               /* '<S40>/S-Function' */
  real_T SFunction_o3_kt;              /* '<S40>/S-Function' */
  real_T SFunction_o1_if;              /* '<S41>/S-Function' */
  real_T SFunction_o2_ok;              /* '<S41>/S-Function' */
  real_T SFunction_o3_cb;              /* '<S41>/S-Function' */
  real_T SFunction_o1_bf;              /* '<S42>/S-Function' */
  real_T SFunction_o2_b5;              /* '<S42>/S-Function' */
  real_T SFunction_o3_fn;              /* '<S42>/S-Function' */
  real_T SFunction_o1_fv;              /* '<S43>/S-Function' */
  real_T SFunction_o2_hn;              /* '<S43>/S-Function' */
  real_T SFunction_o3_go;              /* '<S43>/S-Function' */
  real_T SFunction_o1_oz;              /* '<S44>/S-Function' */
  real_T SFunction_o2_ge;              /* '<S44>/S-Function' */
  real_T SFunction_o3_de;              /* '<S44>/S-Function' */
  real_T SFunction_o1_h;               /* '<S45>/S-Function' */
  real_T SFunction_o2_ch;              /* '<S45>/S-Function' */
  real_T SFunction_o3_jl;              /* '<S45>/S-Function' */
  real_T SFunction_o1_o4;              /* '<S46>/S-Function' */
  real_T SFunction_o2_fs;              /* '<S46>/S-Function' */
  real_T SFunction_o3_m;               /* '<S46>/S-Function' */
  real_T SFunction_o1_m2;              /* '<S47>/S-Function' */
  real_T SFunction_o2_ds;              /* '<S47>/S-Function' */
  real_T SFunction_o3_gg;              /* '<S47>/S-Function' */
  real_T SFunction_o1_a;               /* '<S48>/S-Function' */
  real_T SFunction_o2_nu;              /* '<S48>/S-Function' */
  real_T SFunction_o3_f5;              /* '<S48>/S-Function' */
  real_T SFunction_o1_pz;              /* '<S49>/S-Function' */
  real_T SFunction_o2_ed;              /* '<S49>/S-Function' */
  real_T SFunction_o3_ioq;             /* '<S49>/S-Function' */
  real_T SFunction_o2_f1;              /* '<S51>/S-Function' */
  real_T SFunction_o3_ap;              /* '<S51>/S-Function' */
  real_T SFunction_o2_l3;              /* '<S52>/S-Function' */
  real_T SFunction_o3_ae;              /* '<S52>/S-Function' */
  real_T SFunction_o2_p4;              /* '<S53>/S-Function' */
  real_T SFunction_o3_hm;              /* '<S53>/S-Function' */
  real_T SFunction_o2_ni;              /* '<S54>/S-Function' */
  real_T SFunction_o3_cl;              /* '<S54>/S-Function' */
  real_T SFunction_o2_jj;              /* '<S55>/S-Function' */
  real_T SFunction_o3_j0;              /* '<S55>/S-Function' */
  real_T SFunction_o2_mv;              /* '<S111>/S-Function' */
  real_T SFunction_o3_fc;              /* '<S111>/S-Function' */
  real_T SFunction_o2_jb;              /* '<S112>/S-Function' */
  real_T SFunction_o3_oo;              /* '<S112>/S-Function' */
  real_T SFunction_o2_dg;              /* '<S113>/S-Function' */
  real_T SFunction_o3_m3;              /* '<S113>/S-Function' */
  real_T SFunction_o2_ik;              /* '<S56>/S-Function' */
  real_T SFunction_o3_gk;              /* '<S56>/S-Function' */
  real_T DataTypeConversion[101];      /* '<S108>/Data Type Conversion' */
  real_T DataTypeConversion_g[101];    /* '<S109>/Data Type Conversion' */
  real_T Gain3;                        /* '<S63>/Gain3' */
  real_T Gain2;                        /* '<S63>/Gain2' */
  real_T Gain1;                        /* '<S63>/Gain1' */
  real_T Gain;                         /* '<S63>/Gain' */
  real_T DataTypeConversion_d;         /* '<S74>/Data Type Conversion' */
  real_T Sum7;                         /* '<S104>/Sum7' */
  real32_T SFunction_o1_ay;            /* '<S52>/S-Function' */
  real32_T SFunction_o1_nx;            /* '<S53>/S-Function' */
  real32_T SFunction_o1_l;             /* '<S54>/S-Function' */
  real32_T SFunction_o1_fp;            /* '<S55>/S-Function' */
  real32_T SFunction_o1_mq;            /* '<S56>/S-Function' */
  real32_T vxvRefRaw;                  /* '<S63>/vsp_filtVxvRefRaw' */
  boolean_T SFunction_o1_mk;           /* '<S51>/S-Function' */
  boolean_T SFunction_o1_oq;           /* '<S111>/S-Function' */
  boolean_T SFunction_o1_hv;           /* '<S112>/S-Function' */
  boolean_T SFunction_o1_ox;           /* '<S113>/S-Function' */
} B_LATC_Test_Calc_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T TappedDelay_X[4];             /* '<S63>/Tapped Delay' */
  real_T TappedDelay1_X[4];            /* '<S63>/Tapped Delay1' */
  real_T TappedDelay2_X[4];            /* '<S63>/Tapped Delay2' */
  real_T TappedDelay3_X[4];            /* '<S63>/Tapped Delay3' */
  real_T TappedDelay_X_f[4];           /* '<S61>/Tapped Delay' */
  real_T TappedDelay_X_l[4];           /* '<S67>/Tapped Delay' */
  real_T TappedDelay4_X[9];            /* '<S74>/Tapped Delay4' */
  real_T RateTransition1_42_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_41_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_40_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_34_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_33_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_18_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_16_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_15_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_13_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_12_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_10_Buffer;    /* '<Root>/Rate Transition1' */
  real_T RateTransition1_9_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_7_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_3_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_1_Buffer;     /* '<Root>/Rate Transition1' */
  real_T Memory2_PreviousInput;        /* '<S65>/Memory2' */
  real_T Memory2_PreviousInput_h;      /* '<S58>/Memory2' */
  real_T Memory2_PreviousInput_d;      /* '<S63>/Memory2' */
  real_T Memory31_PreviousInput;       /* '<S63>/Memory31' */
  real_T Memory36_PreviousInput;       /* '<S63>/Memory36' */
  real_T Memory39_PreviousInput;       /* '<S63>/Memory39' */
  real_T Memory38_PreviousInput;       /* '<S63>/Memory38' */
  real_T Memory2_PreviousInput_n;      /* '<S68>/Memory2' */
  real_T Memory1_PreviousInput;        /* '<S67>/Memory1' */
  real_T Memory2_PreviousInput_dn;     /* '<S67>/Memory2' */
  real_T Memory_PreviousInput;         /* '<S58>/Memory' */
  real_T Memory1_PreviousInput_o;      /* '<S58>/Memory1' */
  real_T Memory30_PreviousInput;       /* '<S63>/Memory30' */
  real_T Memory24_PreviousInput;       /* '<S63>/Memory24' */
  real_T Memory25_PreviousInput;       /* '<S63>/Memory25' */
  real_T Memory26_PreviousInput;       /* '<S63>/Memory26' */
  real_T Memory27_PreviousInput;       /* '<S63>/Memory27' */
  real_T Memory4_PreviousInput;        /* '<S104>/Memory4' */
  real_T Memory2_PreviousInput_dk;     /* '<S62>/Memory2' */
  real_T Memory3_PreviousInput;        /* '<S62>/Memory3' */
  real32_T UnitDelay5_DSTATE[300];     /* '<S110>/Unit Delay5' */
  real32_T UnitDelay4_DSTATE[300];     /* '<S110>/Unit Delay4' */
  real32_T UnitDelay3_DSTATE[300];     /* '<S110>/Unit Delay3' */
  real32_T UnitDelay2_DSTATE[300];     /* '<S110>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE[300];     /* '<S110>/Unit Delay1' */
  real32_T UnitDelay_DSTATE[300];      /* '<S110>/Unit Delay' */
  real32_T TappedDelay8_X[4];          /* '<S63>/Tapped Delay8' */
  real32_T UnitDelay_DSTATE_k;         /* '<S74>/Unit Delay' */
  real32_T Memory34_PreviousInput;     /* '<S63>/Memory34' */
  real32_T Memory35_PreviousInput;     /* '<S63>/Memory35' */
  real32_T Memory37_PreviousInput;     /* '<S63>/Memory37' */
  real32_T Memory23_PreviousInput;     /* '<S63>/Memory23' */
  real32_T Memory22_PreviousInput;     /* '<S63>/Memory22' */
  real32_T Memory21_PreviousInput;     /* '<S63>/Memory21' */
  real32_T Memory29_PreviousInput;     /* '<S63>/Memory29' */
  real32_T Memory33_PreviousInput;     /* '<S63>/Memory33' */
  real32_T Memory1_PreviousInput_m;    /* '<S63>/Memory1' */
  real32_T Memory_PreviousInput_c;     /* '<S67>/Memory' */
  real32_T Memory3_PreviousInput_j;    /* '<S59>/Memory3' */
  real32_T Memory4_PreviousInput_n;    /* '<S58>/Memory4' */
  real32_T Memory28_PreviousInput;     /* '<S63>/Memory28' */
} DW_LATC_Test_Calc_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Product4;               /* '<S65>/Product4' */
  const real_T Product4_l;             /* '<S68>/Product4' */
  const real_T FilterTime;             /* '<S58>/FilterTime' */
} ConstB_LATC_Test_Calc_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S51>/S-Function'
   */
  real_T SFunction_P1_Size[2];

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S51>/S-Function'
   */
  real_T SFunction_P1[12];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T SFunction_P4_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T pooled7[7];

  /* Computed Parameter: SFunction_P1_Size_m
   * Referenced by: '<S52>/S-Function'
   */
  real_T SFunction_P1_Size_m[2];

  /* Computed Parameter: SFunction_P1_b
   * Referenced by: '<S52>/S-Function'
   */
  real_T SFunction_P1_b;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
   */
  real_T SFunction_P4_Size_d[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
   */
  real_T pooled8[5];

  /* Computed Parameter: SFunction_P1_Size_e
   * Referenced by: '<S53>/S-Function'
   */
  real_T SFunction_P1_Size_e[2];

  /* Computed Parameter: SFunction_P1_m
   * Referenced by: '<S53>/S-Function'
   */
  real_T SFunction_P1_m[9];

  /* Computed Parameter: SFunction_P1_Size_o
   * Referenced by: '<S54>/S-Function'
   */
  real_T SFunction_P1_Size_o[2];

  /* Computed Parameter: SFunction_P1_h
   * Referenced by: '<S54>/S-Function'
   */
  real_T SFunction_P1_h[18];

  /* Computed Parameter: SFunction_P1_Size_d
   * Referenced by: '<S55>/S-Function'
   */
  real_T SFunction_P1_Size_d[2];

  /* Computed Parameter: SFunction_P1_e
   * Referenced by: '<S55>/S-Function'
   */
  real_T SFunction_P1_e[9];

  /* Computed Parameter: SFunction_P1_Size_m2
   * Referenced by: '<S111>/S-Function'
   */
  real_T SFunction_P1_Size_m2[2];

  /* Computed Parameter: SFunction_P1_k
   * Referenced by: '<S111>/S-Function'
   */
  real_T SFunction_P1_k[3];

  /* Computed Parameter: SFunction_P1_Size_a
   * Referenced by: '<S112>/S-Function'
   */
  real_T SFunction_P1_Size_a[2];

  /* Computed Parameter: SFunction_P1_f
   * Referenced by: '<S112>/S-Function'
   */
  real_T SFunction_P1_f[5];

  /* Computed Parameter: SFunction_P1_Size_ez
   * Referenced by: '<S113>/S-Function'
   */
  real_T SFunction_P1_Size_ez[2];

  /* Computed Parameter: SFunction_P1_bb
   * Referenced by: '<S113>/S-Function'
   */
  real_T SFunction_P1_bb[4];

  /* Computed Parameter: SFunction_P1_Size_k
   * Referenced by: '<S56>/S-Function'
   */
  real_T SFunction_P1_Size_k[2];

  /* Computed Parameter: SFunction_P1_hd
   * Referenced by: '<S56>/S-Function'
   */
  real_T SFunction_P1_hd[8];

  /* Computed Parameter: SFunction_P1_Size_j
   * Referenced by: '<S108>/S-Function'
   */
  real_T SFunction_P1_Size_j[2];

  /* Computed Parameter: SFunction_P1_g
   * Referenced by: '<S108>/S-Function'
   */
  real_T SFunction_P1_g[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   */
  real_T SFunction_P2_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   */
  real_T pooled9[3];

  /* Computed Parameter: SFunction_P1_Size_b
   * Referenced by: '<S109>/S-Function'
   */
  real_T SFunction_P1_Size_b[2];

  /* Computed Parameter: SFunction_P1_gz
   * Referenced by: '<S109>/S-Function'
   */
  real_T SFunction_P1_gz[16];

  /* Computed Parameter: SFunction_P1_Size_c
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_Size_c[2];

  /* Computed Parameter: SFunction_P1_c
   * Referenced by: '<S4>/S-Function'
   */
  real_T SFunction_P1_c[7];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T SFunction_P2_Size_j[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T pooled14;

  /* Pooled Parameter (Expression: )
   * Referenced by:
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   */
  real_T SFunction_P4_Size_p[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   */
  real_T pooled15[6];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T SFunction_P5_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T pooled16[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T SFunction_P6_Size[2];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S51>/S-Function'
   *   '<S52>/S-Function'
   *   '<S53>/S-Function'
   *   '<S54>/S-Function'
   *   '<S55>/S-Function'
   *   '<S56>/S-Function'
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
   *   '<S18>/S-Function'
   *   '<S19>/S-Function'
   *   '<S20>/S-Function'
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
   *   '<S40>/S-Function'
   *   '<S41>/S-Function'
   *   '<S42>/S-Function'
   *   '<S43>/S-Function'
   *   '<S44>/S-Function'
   *   '<S45>/S-Function'
   *   '<S46>/S-Function'
   *   '<S47>/S-Function'
   *   '<S48>/S-Function'
   *   '<S49>/S-Function'
   *   '<S108>/S-Function'
   *   '<S109>/S-Function'
   *   '<S111>/S-Function'
   *   '<S112>/S-Function'
   *   '<S113>/S-Function'
   */
  real_T pooled17;

  /* Computed Parameter: SFunction_P1_Size_m1
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_Size_m1[2];

  /* Computed Parameter: SFunction_P1_kr
   * Referenced by: '<S5>/S-Function'
   */
  real_T SFunction_P1_kr[10];

  /* Computed Parameter: SFunction_P1_Size_n
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_Size_n[2];

  /* Computed Parameter: SFunction_P1_kri
   * Referenced by: '<S6>/S-Function'
   */
  real_T SFunction_P1_kri[7];

  /* Computed Parameter: SFunction_P1_Size_nu
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_Size_nu[2];

  /* Computed Parameter: SFunction_P1_p
   * Referenced by: '<S7>/S-Function'
   */
  real_T SFunction_P1_p[10];

  /* Computed Parameter: SFunction_P1_Size_f
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_Size_f[2];

  /* Computed Parameter: SFunction_P1_n
   * Referenced by: '<S8>/S-Function'
   */
  real_T SFunction_P1_n[32];

  /* Computed Parameter: SFunction_P1_Size_l
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_Size_l[2];

  /* Computed Parameter: SFunction_P1_l
   * Referenced by: '<S9>/S-Function'
   */
  real_T SFunction_P1_l[11];

  /* Computed Parameter: SFunction_P1_Size_o4
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_Size_o4[2];

  /* Computed Parameter: SFunction_P1_lh
   * Referenced by: '<S10>/S-Function'
   */
  real_T SFunction_P1_lh[19];

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1_Size_i[2];

  /* Computed Parameter: SFunction_P1_ko
   * Referenced by: '<S11>/S-Function'
   */
  real_T SFunction_P1_ko[22];

  /* Computed Parameter: SFunction_P1_Size_av
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_Size_av[2];

  /* Computed Parameter: SFunction_P1_ms
   * Referenced by: '<S12>/S-Function'
   */
  real_T SFunction_P1_ms[20];

  /* Computed Parameter: SFunction_P1_Size_lt
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_Size_lt[2];

  /* Computed Parameter: SFunction_P1_i
   * Referenced by: '<S13>/S-Function'
   */
  real_T SFunction_P1_i[23];

  /* Computed Parameter: SFunction_P1_Size_dx
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_Size_dx[2];

  /* Computed Parameter: SFunction_P1_lk
   * Referenced by: '<S14>/S-Function'
   */
  real_T SFunction_P1_lk[12];

  /* Computed Parameter: SFunction_P1_Size_p
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_Size_p[2];

  /* Computed Parameter: SFunction_P1_ir
   * Referenced by: '<S15>/S-Function'
   */
  real_T SFunction_P1_ir[11];

  /* Computed Parameter: SFunction_P1_Size_kh
   * Referenced by: '<S16>/S-Function'
   */
  real_T SFunction_P1_Size_kh[2];

  /* Computed Parameter: SFunction_P1_mn
   * Referenced by: '<S16>/S-Function'
   */
  real_T SFunction_P1_mn[15];

  /* Computed Parameter: SFunction_P1_Size_ih
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P1_Size_ih[2];

  /* Computed Parameter: SFunction_P1_l2
   * Referenced by: '<S17>/S-Function'
   */
  real_T SFunction_P1_l2[12];

  /* Computed Parameter: SFunction_P1_Size_a3
   * Referenced by: '<S18>/S-Function'
   */
  real_T SFunction_P1_Size_a3[2];

  /* Computed Parameter: SFunction_P1_j
   * Referenced by: '<S18>/S-Function'
   */
  real_T SFunction_P1_j[10];

  /* Computed Parameter: SFunction_P1_Size_f2
   * Referenced by: '<S19>/S-Function'
   */
  real_T SFunction_P1_Size_f2[2];

  /* Computed Parameter: SFunction_P1_o
   * Referenced by: '<S19>/S-Function'
   */
  real_T SFunction_P1_o[21];

  /* Computed Parameter: SFunction_P1_Size_le
   * Referenced by: '<S20>/S-Function'
   */
  real_T SFunction_P1_Size_le[2];

  /* Computed Parameter: SFunction_P1_ey
   * Referenced by: '<S20>/S-Function'
   */
  real_T SFunction_P1_ey[24];

  /* Computed Parameter: SFunction_P1_Size_pd
   * Referenced by: '<S21>/S-Function'
   */
  real_T SFunction_P1_Size_pd[2];

  /* Computed Parameter: SFunction_P1_p5
   * Referenced by: '<S21>/S-Function'
   */
  real_T SFunction_P1_p5[21];

  /* Computed Parameter: SFunction_P1_Size_g
   * Referenced by: '<S22>/S-Function'
   */
  real_T SFunction_P1_Size_g[2];

  /* Computed Parameter: SFunction_P1_d
   * Referenced by: '<S22>/S-Function'
   */
  real_T SFunction_P1_d[10];

  /* Computed Parameter: SFunction_P1_Size_h
   * Referenced by: '<S23>/S-Function'
   */
  real_T SFunction_P1_Size_h[2];

  /* Computed Parameter: SFunction_P1_a
   * Referenced by: '<S23>/S-Function'
   */
  real_T SFunction_P1_a[13];

  /* Computed Parameter: SFunction_P1_Size_gi
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_Size_gi[2];

  /* Computed Parameter: SFunction_P1_fr
   * Referenced by: '<S24>/S-Function'
   */
  real_T SFunction_P1_fr[21];

  /* Computed Parameter: SFunction_P1_Size_pn
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_Size_pn[2];

  /* Computed Parameter: SFunction_P1_mc
   * Referenced by: '<S25>/S-Function'
   */
  real_T SFunction_P1_mc[10];

  /* Computed Parameter: SFunction_P1_Size_cc
   * Referenced by: '<S26>/S-Function'
   */
  real_T SFunction_P1_Size_cc[2];

  /* Computed Parameter: SFunction_P1_hr
   * Referenced by: '<S26>/S-Function'
   */
  real_T SFunction_P1_hr[13];

  /* Computed Parameter: SFunction_P1_Size_li
   * Referenced by: '<S27>/S-Function'
   */
  real_T SFunction_P1_Size_li[2];

  /* Computed Parameter: SFunction_P1_fb
   * Referenced by: '<S27>/S-Function'
   */
  real_T SFunction_P1_fb[11];

  /* Computed Parameter: SFunction_P1_Size_pdc
   * Referenced by: '<S28>/S-Function'
   */
  real_T SFunction_P1_Size_pdc[2];

  /* Computed Parameter: SFunction_P1_iru
   * Referenced by: '<S28>/S-Function'
   */
  real_T SFunction_P1_iru[14];

  /* Computed Parameter: SFunction_P1_Size_ii
   * Referenced by: '<S29>/S-Function'
   */
  real_T SFunction_P1_Size_ii[2];

  /* Computed Parameter: SFunction_P1_au
   * Referenced by: '<S29>/S-Function'
   */
  real_T SFunction_P1_au[11];

  /* Computed Parameter: SFunction_P1_Size_i4
   * Referenced by: '<S30>/S-Function'
   */
  real_T SFunction_P1_Size_i4[2];

  /* Computed Parameter: SFunction_P1_jj
   * Referenced by: '<S30>/S-Function'
   */
  real_T SFunction_P1_jj[14];

  /* Computed Parameter: SFunction_P1_Size_cx
   * Referenced by: '<S31>/S-Function'
   */
  real_T SFunction_P1_Size_cx[2];

  /* Computed Parameter: SFunction_P1_ot
   * Referenced by: '<S31>/S-Function'
   */
  real_T SFunction_P1_ot[7];

  /* Computed Parameter: SFunction_P1_Size_px
   * Referenced by: '<S32>/S-Function'
   */
  real_T SFunction_P1_Size_px[2];

  /* Computed Parameter: SFunction_P1_jb
   * Referenced by: '<S32>/S-Function'
   */
  real_T SFunction_P1_jb[10];

  /* Computed Parameter: SFunction_P1_Size_g1
   * Referenced by: '<S33>/S-Function'
   */
  real_T SFunction_P1_Size_g1[2];

  /* Computed Parameter: SFunction_P1_f5
   * Referenced by: '<S33>/S-Function'
   */
  real_T SFunction_P1_f5[7];

  /* Computed Parameter: SFunction_P1_Size_fz
   * Referenced by: '<S34>/S-Function'
   */
  real_T SFunction_P1_Size_fz[2];

  /* Computed Parameter: SFunction_P1_fl
   * Referenced by: '<S34>/S-Function'
   */
  real_T SFunction_P1_fl[21];

  /* Computed Parameter: SFunction_P1_Size_e0
   * Referenced by: '<S35>/S-Function'
   */
  real_T SFunction_P1_Size_e0[2];

  /* Computed Parameter: SFunction_P1_pr
   * Referenced by: '<S35>/S-Function'
   */
  real_T SFunction_P1_pr[10];

  /* Computed Parameter: SFunction_P1_Size_nl
   * Referenced by: '<S36>/S-Function'
   */
  real_T SFunction_P1_Size_nl[2];

  /* Computed Parameter: SFunction_P1_al
   * Referenced by: '<S36>/S-Function'
   */
  real_T SFunction_P1_al[13];

  /* Computed Parameter: SFunction_P1_Size_oo
   * Referenced by: '<S37>/S-Function'
   */
  real_T SFunction_P1_Size_oo[2];

  /* Computed Parameter: SFunction_P1_jv
   * Referenced by: '<S37>/S-Function'
   */
  real_T SFunction_P1_jv[21];

  /* Computed Parameter: SFunction_P1_Size_kt
   * Referenced by: '<S38>/S-Function'
   */
  real_T SFunction_P1_Size_kt[2];

  /* Computed Parameter: SFunction_P1_jo
   * Referenced by: '<S38>/S-Function'
   */
  real_T SFunction_P1_jo[10];

  /* Computed Parameter: SFunction_P1_Size_kf
   * Referenced by: '<S39>/S-Function'
   */
  real_T SFunction_P1_Size_kf[2];

  /* Computed Parameter: SFunction_P1_bk
   * Referenced by: '<S39>/S-Function'
   */
  real_T SFunction_P1_bk[13];

  /* Computed Parameter: SFunction_P1_Size_pg
   * Referenced by: '<S40>/S-Function'
   */
  real_T SFunction_P1_Size_pg[2];

  /* Computed Parameter: SFunction_P1_mt
   * Referenced by: '<S40>/S-Function'
   */
  real_T SFunction_P1_mt[13];

  /* Computed Parameter: SFunction_P1_Size_k2
   * Referenced by: '<S41>/S-Function'
   */
  real_T SFunction_P1_Size_k2[2];

  /* Computed Parameter: SFunction_P1_an
   * Referenced by: '<S41>/S-Function'
   */
  real_T SFunction_P1_an[17];

  /* Computed Parameter: SFunction_P1_Size_h4
   * Referenced by: '<S42>/S-Function'
   */
  real_T SFunction_P1_Size_h4[2];

  /* Computed Parameter: SFunction_P1_o3
   * Referenced by: '<S42>/S-Function'
   */
  real_T SFunction_P1_o3[13];

  /* Computed Parameter: SFunction_P1_Size_ij
   * Referenced by: '<S43>/S-Function'
   */
  real_T SFunction_P1_Size_ij[2];

  /* Computed Parameter: SFunction_P1_ml
   * Referenced by: '<S43>/S-Function'
   */
  real_T SFunction_P1_ml[17];

  /* Computed Parameter: SFunction_P1_Size_di
   * Referenced by: '<S44>/S-Function'
   */
  real_T SFunction_P1_Size_di[2];

  /* Computed Parameter: SFunction_P1_ds
   * Referenced by: '<S44>/S-Function'
   */
  real_T SFunction_P1_ds[7];

  /* Computed Parameter: SFunction_P1_Size_pw
   * Referenced by: '<S45>/S-Function'
   */
  real_T SFunction_P1_Size_pw[2];

  /* Computed Parameter: SFunction_P1_ca
   * Referenced by: '<S45>/S-Function'
   */
  real_T SFunction_P1_ca[10];

  /* Computed Parameter: SFunction_P1_Size_nk
   * Referenced by: '<S46>/S-Function'
   */
  real_T SFunction_P1_Size_nk[2];

  /* Computed Parameter: SFunction_P1_in
   * Referenced by: '<S46>/S-Function'
   */
  real_T SFunction_P1_in[16];

  /* Computed Parameter: SFunction_P1_Size_bu
   * Referenced by: '<S47>/S-Function'
   */
  real_T SFunction_P1_Size_bu[2];

  /* Computed Parameter: SFunction_P1_lko
   * Referenced by: '<S47>/S-Function'
   */
  real_T SFunction_P1_lko[6];

  /* Computed Parameter: SFunction_P1_Size_ex
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_Size_ex[2];

  /* Computed Parameter: SFunction_P1_on
   * Referenced by: '<S48>/S-Function'
   */
  real_T SFunction_P1_on[9];

  /* Computed Parameter: SFunction_P1_Size_hm
   * Referenced by: '<S49>/S-Function'
   */
  real_T SFunction_P1_Size_hm[2];

  /* Computed Parameter: SFunction_P1_c1
   * Referenced by: '<S49>/S-Function'
   */
  real_T SFunction_P1_c1[13];

  /* Computed Parameter: t_tauAxvRef_tableData
   * Referenced by: '<S63>/t_tauAxvRef'
   */
  real32_T t_tauAxvRef_tableData[3];

  /* Computed Parameter: t_tauAxvRef_bp01Data
   * Referenced by: '<S63>/t_tauAxvRef'
   */
  real32_T t_tauAxvRef_bp01Data[3];

  /* Computed Parameter: t_FiltaxvRoadSlope_tableData
   * Referenced by: '<S67>/t_FiltaxvRoadSlope'
   */
  real32_T t_FiltaxvRoadSlope_tableData[4];

  /* Computed Parameter: t_FiltaxvRoadSlope_bp01Data
   * Referenced by: '<S67>/t_FiltaxvRoadSlope'
   */
  real32_T t_FiltaxvRoadSlope_bp01Data[4];
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
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[57];
    SimStruct *childSFunctionPtrs[57];
    struct _ssBlkInfo2 blkInfo2[57];
    struct _ssSFcnModelMethods2 methods2[57];
    struct _ssSFcnModelMethods3 methods3[57];
    struct _ssSFcnModelMethods4 methods4[57];
    struct _ssStatesInfo2 statesInfo2[57];
    ssPeriodicStatesInfo periodicStatesInfo[57];
    struct _ssPortInfo2 inputOutputPortInfo2[57];
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[101];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[101];
      int_T iDims0[2];
      uint_T attribs[4];
      mxArray *params[4];
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
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
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
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn18;

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
    } Sfcn19;

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
    } Sfcn20;

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
    } Sfcn21;

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
    } Sfcn22;

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
    } Sfcn23;

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
    } Sfcn24;

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
    } Sfcn25;

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
    } Sfcn26;

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
    } Sfcn27;

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
    } Sfcn28;

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
    } Sfcn29;

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
    } Sfcn30;

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
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      int_T oDims0[2];
      uint_T attribs[6];
      mxArray *params[6];
    } Sfcn34;

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
    } Sfcn35;

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
    } Sfcn36;

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
    } Sfcn37;

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
    } Sfcn38;

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
    } Sfcn39;

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
    } Sfcn40;

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
    } Sfcn41;

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
    } Sfcn42;

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
    } Sfcn43;

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
    } Sfcn44;

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
    } Sfcn45;

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
    } Sfcn46;

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
    } Sfcn47;

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
    } Sfcn48;

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
    } Sfcn49;

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
    } Sfcn50;

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
    } Sfcn51;

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
    } Sfcn52;

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
    } Sfcn53;

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
    } Sfcn54;

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
    } Sfcn55;

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
    } Sfcn56;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
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
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_Global_SteerAngleOffsetFilterTime;
                                /* Variable: P_Global_SteerAngleOffsetFilterTime
                                 * Referenced by: '<S104>/FilterTime1'
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
 * Block '<S58>/-K' : Unused code path elimination
 * Block '<S59>/Constant1' : Unused code path elimination
 * Block '<S59>/FilterTime1' : Unused code path elimination
 * Block '<S59>/Gain2' : Unused code path elimination
 * Block '<S59>/Memory1' : Unused code path elimination
 * Block '<S59>/Memory2' : Unused code path elimination
 * Block '<S59>/Product3' : Unused code path elimination
 * Block '<S59>/Product4' : Unused code path elimination
 * Block '<S59>/Sum4' : Unused code path elimination
 * Block '<S59>/Sum5' : Unused code path elimination
 * Block '<S59>/Sum6' : Unused code path elimination
 * Block '<S67>/Gain2' : Unused code path elimination
 * Block '<S67>/Gain3' : Unused code path elimination
 * Block '<S67>/Trigonometric Function' : Unused code path elimination
 * Block '<S58>/Constant2' : Unused code path elimination
 * Block '<S58>/Constant6' : Unused code path elimination
 * Block '<S58>/FilterTime2' : Unused code path elimination
 * Block '<S58>/FilterTime3' : Unused code path elimination
 * Block '<S58>/FilterTime4' : Unused code path elimination
 * Block '<S58>/FilterTime5' : Unused code path elimination
 * Block '<S58>/Memory3' : Unused code path elimination
 * Block '<S58>/Saturation' : Unused code path elimination
 * Block '<S58>/Sum4' : Unused code path elimination
 * Block '<S58>/Sum5' : Unused code path elimination
 * Block '<S58>/Sum8' : Unused code path elimination
 * Block '<S58>/Trigonometric Function' : Unused code path elimination
 * Block '<S58>/W' : Unused code path elimination
 * Block '<S58>/t_KapByWheelAngle' : Unused code path elimination
 * Block '<S57>/Data Type Conversion3' : Eliminate redundant data type conversion
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
 * '<S1>'   : 'LATC_Test_Calc/InputSignal1'
 * '<S2>'   : 'LATC_Test_Calc/LFunc'
 * '<S3>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2'
 * '<S4>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ABSActive'
 * '<S5>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ABSFailSts'
 * '<S6>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/BTCActive'
 * '<S7>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EBDFailSts'
 * '<S8>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_DrvInputTrqValue'
 * '<S9>'   : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_FailSts'
 * '<S10>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATorqOvrlDlvd'
 * '<S11>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATorqOvrlDlvdValid'
 * '<S12>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts'
 * '<S13>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts1'
 * '<S14>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts3'
 * '<S15>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts4'
 * '<S16>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_LKATrqOvlDlvdSts5'
 * '<S17>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/EPS_SteerMod'
 * '<S18>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESPFailSts'
 * '<S19>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESP_MasterCylindBrakePress'
 * '<S20>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/ESP_MasterCylindBrakePressValid'
 * '<S21>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelDriveDirection'
 * '<S22>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelSpd'
 * '<S23>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FLWheelSpdValid'
 * '<S24>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelDriveDirection'
 * '<S25>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelSpd'
 * '<S26>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/FRWheelSpdValid'
 * '<S27>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LateralAcce'
 * '<S28>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LateralAcceValid'
 * '<S29>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LongitudeAcc'
 * '<S30>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/LongitudeAccValid'
 * '<S31>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/MSRActive'
 * '<S32>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/NoBrakeForce'
 * '<S33>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/PTCActive'
 * '<S34>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelDriveDirection'
 * '<S35>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelSpd'
 * '<S36>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RLWheelSpdValid'
 * '<S37>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelDriveDirection'
 * '<S38>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelSpd'
 * '<S39>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/RRWheelSpdValid'
 * '<S40>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelAngle'
 * '<S41>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelAngleSign'
 * '<S42>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelSpd'
 * '<S43>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/SteerWheelSpdSign'
 * '<S44>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VDCActive'
 * '<S45>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehDynYawRate'
 * '<S46>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehDynYawRateValid'
 * '<S47>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleSpd'
 * '<S48>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleSpdValid'
 * '<S49>'  : 'LATC_Test_Calc/InputSignal1/CANapeIO_Veh icleRX_AD2/VehicleStandstill'
 * '<S50>'  : 'LATC_Test_Calc/LFunc/EVI'
 * '<S51>'  : 'LATC_Test_Calc/LFunc/Trigger_Init'
 * '<S52>'  : 'LATC_Test_Calc/LFunc/Trigger_Init1'
 * '<S53>'  : 'LATC_Test_Calc/LFunc/Trigger_Init2'
 * '<S54>'  : 'LATC_Test_Calc/LFunc/Trigger_Init3'
 * '<S55>'  : 'LATC_Test_Calc/LFunc/Trigger_Init4'
 * '<S56>'  : 'LATC_Test_Calc/LFunc/Trigger_Init5'
 * '<S57>'  : 'LATC_Test_Calc/LFunc/U_Road_Create'
 * '<S58>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1'
 * '<S59>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/AxRef'
 * '<S60>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/Compare To Constant1'
 * '<S61>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/FloatMeanValue'
 * '<S62>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/PsiDtStandstillCalc'
 * '<S63>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc'
 * '<S64>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/alpSumSlideCurveness'
 * '<S65>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/AxRef/LP filter'
 * '<S66>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/AxRef/MATLAB Function'
 * '<S67>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/AxRef/axvRoadSlope_calc'
 * '<S68>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/AxRef/axvRoadSlope_calc/LP filter'
 * '<S69>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/PsiDtStandstillCalc/MATLAB Function'
 * '<S70>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection'
 * '<S71>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection1'
 * '<S72>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection2'
 * '<S73>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection3'
 * '<S74>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc'
 * '<S75>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxwCorr'
 * '<S76>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/calcBrakeDriveState'
 * '<S77>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/calcVxwDiffAndModErr_v'
 * '<S78>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/detErrorBandMax'
 * '<S79>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/detErrorBandMin'
 * '<S80>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/transBrakeToDrive'
 * '<S81>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/vsp_calcNoCali_v'
 * '<S82>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/vsp_filtVxvRefRaw'
 * '<S83>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem'
 * '<S84>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem1'
 * '<S85>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem2'
 * '<S86>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem3'
 * '<S87>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem'
 * '<S88>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem1'
 * '<S89>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem2'
 * '<S90>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem3'
 * '<S91>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem'
 * '<S92>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem1'
 * '<S93>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem2'
 * '<S94>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem3'
 * '<S95>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem'
 * '<S96>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem1'
 * '<S97>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem2'
 * '<S98>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem3'
 * '<S99>'  : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Compare To Constant1'
 * '<S100>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Compare To Constant2'
 * '<S101>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Compare To Constant3'
 * '<S102>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Compare To Constant5'
 * '<S103>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Compare To Constant6'
 * '<S104>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/Enabled Subsystem'
 * '<S105>' : 'LATC_Test_Calc/LFunc/EVI/VehicleStsCalc1/VxvRef_Calc/VxvRef_Calc/YOD_Ackman'
 * '<S106>' : 'LATC_Test_Calc/LFunc/U_Road_Create/CalcEgoVehMove'
 * '<S107>' : 'LATC_Test_Calc/LFunc/U_Road_Create/MATLAB Function1'
 * '<S108>' : 'LATC_Test_Calc/LFunc/U_Road_Create/Output6'
 * '<S109>' : 'LATC_Test_Calc/LFunc/U_Road_Create/Output7'
 * '<S110>' : 'LATC_Test_Calc/LFunc/U_Road_Create/RoadCreate1'
 * '<S111>' : 'LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init1'
 * '<S112>' : 'LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init2'
 * '<S113>' : 'LATC_Test_Calc/LFunc/U_Road_Create/Trigger_Init3'
 * '<S114>' : 'LATC_Test_Calc/LFunc/U_Road_Create/RoadCreate1/Env'
 */
#endif                                 /* RTW_HEADER_LATC_Test_Calc_h_ */
