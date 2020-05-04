/* Non Linear Systems */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 1495
type: ALGORITHM

  $cse3 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_2.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp0, &(data->localData[0]->integerVars[20] /* $cse3.phase DISCRETE */), &(data->localData[0]->integerVars[21] /* $cse3.region DISCRETE */), &(data->localData[0]->realVars[255] /* $cse3.p variable */), &(data->localData[0]->realVars[250] /* $cse3.T variable */), &(data->localData[0]->realVars[254] /* $cse3.h variable */), &(data->localData[0]->realVars[249] /* $cse3.R variable */), &(data->localData[0]->realVars[251] /* $cse3.cp variable */), &(data->localData[0]->realVars[252] /* $cse3.cv variable */), &(data->localData[0]->realVars[258] /* $cse3.rho variable */), &(data->localData[0]->realVars[259] /* $cse3.s variable */), &(data->localData[0]->realVars[257] /* $cse3.pt variable */), &(data->localData[0]->realVars[256] /* $cse3.pd variable */), &(data->localData[0]->realVars[261] /* $cse3.vt variable */), &(data->localData[0]->realVars[260] /* $cse3.vp variable */), &(data->localData[0]->realVars[262] /* $cse3.x variable */), &(data->localData[0]->realVars[253] /* $cse3.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1496
type: SIMPLE_ASSIGN
valve_2.state_a.d = $cse3.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  data->localData[0]->realVars[785] /* valve_2.state_a.d variable */ = data->localData[0]->realVars[258] /* $cse3.rho variable */;
  TRACE_POP
}
/*
equation index: 1497
type: SIMPLE_ASSIGN
valve_2.p = max(channel_2.Channel[1,5].p[2], channel_3.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  data->localData[0]->realVars[781] /* valve_2.p variable */ = fmax(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */,data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1498
type: SIMPLE_ASSIGN
valve_2.dp = channel_2.Channel[1,5].p[2] - channel_3.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  data->localData[0]->realVars[777] /* valve_2.dp variable */ = data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}
/*
equation index: 1499
type: SIMPLE_ASSIGN
valve_2.x = valve_2.dp / valve_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  data->localData[0]->realVars[788] /* valve_2.x variable */ = DIVISION_SIM(data->localData[0]->realVars[777] /* valve_2.dp variable */,data->localData[0]->realVars[781] /* valve_2.p variable */,"valve_2.p",equationIndexes);
  TRACE_POP
}
/*
equation index: 1500
type: SIMPLE_ASSIGN
$cse6 = min(valve_2.x, valve_2.Fxt)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  data->localData[0]->realVars[504] /* $cse6 variable */ = fmin(data->localData[0]->realVars[788] /* valve_2.x variable */,data->localData[0]->realVars[774] /* valve_2.Fxt variable */);
  TRACE_POP
}
/*
equation index: 1501
type: SIMPLE_ASSIGN
valve_2.xs = max(-valve_2.Fxt, $cse6)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  data->localData[0]->realVars[789] /* valve_2.xs variable */ = fmax((-data->localData[0]->realVars[774] /* valve_2.Fxt variable */),data->localData[0]->realVars[504] /* $cse6 variable */);
  TRACE_POP
}
/*
equation index: 1502
type: SIMPLE_ASSIGN
$cse5 = Modelica.Fluid.Utilities.regRoot2(valve_2.p * valve_2.xs, valve_2.dp_small, valve_2.state_a.d, valve_2.state_b.d, false, 1.0)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  data->localData[0]->realVars[427] /* $cse5 variable */ = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[781] /* valve_2.p variable */) * (data->localData[0]->realVars[789] /* valve_2.xs variable */), data->simulationInfo->realParameter[268] /* valve_2.dp_small PARAM */, data->localData[0]->realVars[785] /* valve_2.state_a.d variable */, data->localData[0]->realVars[787] /* valve_2.state_b.d variable */, 0, 1.0);
  TRACE_POP
}
/*
equation index: 1503
type: SIMPLE_ASSIGN
valve_2.Y = 1.0 + (-0.3333333333333333) * abs(valve_2.xs) / valve_2.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  data->localData[0]->realVars[776] /* valve_2.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[789] /* valve_2.xs variable */),data->localData[0]->realVars[774] /* valve_2.Fxt variable */,"valve_2.Fxt",equationIndexes));
  TRACE_POP
}

void residualFunc1505(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1505};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1495(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1496(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1497(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1498(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1499(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1500(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1501(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1502(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1503(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[338] /* $cse4 variable */) * ((data->simulationInfo->realParameter[261] /* valve_2.Av PARAM */) * ((data->localData[0]->realVars[776] /* valve_2.Y variable */) * (data->localData[0]->realVars[427] /* $cse5 variable */))) - data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1505(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1505(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_2.Channel[1,5].p[2] */
  sysData->nominal[i] = data->modelData->realVarsData[680].attribute /* channel_2.Channel[1,5].p[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[680].attribute /* channel_2.Channel[1,5].p[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[680].attribute /* channel_2.Channel[1,5].p[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1505(sysData);
}

void getIterationVarsNLS1505(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */;
}


/* inner equations */

/*
equation index: 1471
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[1] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,4].H[2] / channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */,"channel_3.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1475(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1475};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1471(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes)) - data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1475(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1475(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_3.Channel[1,4].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[703].attribute /* channel_3.Channel[1,4].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[703].attribute /* channel_3.Channel[1,4].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[703].attribute /* channel_3.Channel[1,4].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1475(sysData);
}

void getIterationVarsNLS1475(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */;
}


/* inner equations */

/*
equation index: 1464
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].H[1] = semiLinear(channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,3].H[2] / channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1468(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1468};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1464(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes)) - data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1468(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1468(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_3.Channel[1,3].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[701].attribute /* channel_3.Channel[1,3].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[701].attribute /* channel_3.Channel[1,3].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[701].attribute /* channel_3.Channel[1,3].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1468(sysData);
}

void getIterationVarsNLS1468(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */;
}


/* inner equations */

/*
equation index: 1457
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[2] = semiLinear(channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,2].hv, channel_3.Channel[1,3].H[1] / channel_3.Channel[1,2].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */ = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1461(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1461};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1457(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */) - data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1461(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1461(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_3.Channel[1,3].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[700].attribute /* channel_3.Channel[1,3].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[700].attribute /* channel_3.Channel[1,3].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[700].attribute /* channel_3.Channel[1,3].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1461(sysData);
}

void getIterationVarsNLS1461(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */;
}


/* inner equations */

/*
equation index: 1452
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[1] = semiLinear(channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,1].H[2] / channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1456(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1456};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1452(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */,data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */,"channel_3.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1456(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1456(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_3.Channel[1,1].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[697].attribute /* channel_3.Channel[1,1].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[697].attribute /* channel_3.Channel[1,1].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[697].attribute /* channel_3.Channel[1,1].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1456(sysData);
}

void getIterationVarsNLS1456(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */;
}


/* inner equations */

/*
equation index: 1400
type: ALGORITHM

  $cse21 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_1.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp0, &(data->localData[0]->integerVars[14] /* $cse21.phase DISCRETE */), &(data->localData[0]->integerVars[15] /* $cse21.region DISCRETE */), &(data->localData[0]->realVars[207] /* $cse21.p variable */), &(data->localData[0]->realVars[202] /* $cse21.T variable */), &(data->localData[0]->realVars[206] /* $cse21.h variable */), &(data->localData[0]->realVars[201] /* $cse21.R variable */), &(data->localData[0]->realVars[203] /* $cse21.cp variable */), &(data->localData[0]->realVars[204] /* $cse21.cv variable */), &(data->localData[0]->realVars[210] /* $cse21.rho variable */), &(data->localData[0]->realVars[211] /* $cse21.s variable */), &(data->localData[0]->realVars[209] /* $cse21.pt variable */), &(data->localData[0]->realVars[208] /* $cse21.pd variable */), &(data->localData[0]->realVars[213] /* $cse21.vt variable */), &(data->localData[0]->realVars[212] /* $cse21.vp variable */), &(data->localData[0]->realVars[214] /* $cse21.x variable */), &(data->localData[0]->realVars[205] /* $cse21.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1401
type: SIMPLE_ASSIGN
valve_1.state_a.d = $cse21.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  data->localData[0]->realVars[769] /* valve_1.state_a.d variable */ = data->localData[0]->realVars[210] /* $cse21.rho variable */;
  TRACE_POP
}
/*
equation index: 1402
type: SIMPLE_ASSIGN
valve_1.p = max(channel_1.Channel[1,5].p[2], channel_2.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  data->localData[0]->realVars[765] /* valve_1.p variable */ = fmax(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */,data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1403
type: SIMPLE_ASSIGN
valve_1.dp = channel_1.Channel[1,5].p[2] - channel_2.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  data->localData[0]->realVars[761] /* valve_1.dp variable */ = data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}
/*
equation index: 1404
type: SIMPLE_ASSIGN
valve_1.x = valve_1.dp / valve_1.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  data->localData[0]->realVars[772] /* valve_1.x variable */ = DIVISION_SIM(data->localData[0]->realVars[761] /* valve_1.dp variable */,data->localData[0]->realVars[765] /* valve_1.p variable */,"valve_1.p",equationIndexes);
  TRACE_POP
}
/*
equation index: 1405
type: SIMPLE_ASSIGN
$cse24 = min(valve_1.x, valve_1.Fxt)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  data->localData[0]->realVars[217] /* $cse24 variable */ = fmin(data->localData[0]->realVars[772] /* valve_1.x variable */,data->localData[0]->realVars[758] /* valve_1.Fxt variable */);
  TRACE_POP
}
/*
equation index: 1406
type: SIMPLE_ASSIGN
valve_1.xs = max(-valve_1.Fxt, $cse24)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  data->localData[0]->realVars[773] /* valve_1.xs variable */ = fmax((-data->localData[0]->realVars[758] /* valve_1.Fxt variable */),data->localData[0]->realVars[217] /* $cse24 variable */);
  TRACE_POP
}
/*
equation index: 1407
type: SIMPLE_ASSIGN
$cse23 = Modelica.Fluid.Utilities.regRoot2(valve_1.p * valve_1.xs, valve_1.dp_small, valve_1.state_a.d, valve_1.state_b.d, false, 1.0)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  data->localData[0]->realVars[216] /* $cse23 variable */ = omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[765] /* valve_1.p variable */) * (data->localData[0]->realVars[773] /* valve_1.xs variable */), data->simulationInfo->realParameter[235] /* valve_1.dp_small PARAM */, data->localData[0]->realVars[769] /* valve_1.state_a.d variable */, data->localData[0]->realVars[771] /* valve_1.state_b.d variable */, 0, 1.0);
  TRACE_POP
}
/*
equation index: 1408
type: SIMPLE_ASSIGN
valve_1.Y = 1.0 + (-0.3333333333333333) * abs(valve_1.xs) / valve_1.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  data->localData[0]->realVars[760] /* valve_1.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[773] /* valve_1.xs variable */),data->localData[0]->realVars[758] /* valve_1.Fxt variable */,"valve_1.Fxt",equationIndexes));
  TRACE_POP
}

void residualFunc1410(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1410};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1400(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1401(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1402(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1403(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1404(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1405(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1406(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1407(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1408(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[215] /* $cse22 variable */) * ((data->simulationInfo->realParameter[228] /* valve_1.Av PARAM */) * ((data->localData[0]->realVars[760] /* valve_1.Y variable */) * (data->localData[0]->realVars[216] /* $cse23 variable */))) - data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1410(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1410(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,5].p[2] */
  sysData->nominal[i] = data->modelData->realVarsData[613].attribute /* channel_1.Channel[1,5].p[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[613].attribute /* channel_1.Channel[1,5].p[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[613].attribute /* channel_1.Channel[1,5].p[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1410(sysData);
}

void getIterationVarsNLS1410(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */;
}


/* inner equations */

/*
equation index: 1376
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].H[2] = semiLinear(channel_2.Channel[1,4].D_flow_v, channel_2.Channel[1,4].hv, channel_2.Channel[1,5].H[1] / channel_2.Channel[1,4].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */ = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1380(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1380};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1376(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,"channel_2.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */) - data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1380(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1380(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_2.Channel[1,5].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[638].attribute /* channel_2.Channel[1,5].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[638].attribute /* channel_2.Channel[1,5].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[638].attribute /* channel_2.Channel[1,5].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1380(sysData);
}

void getIterationVarsNLS1380(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */;
}


/* inner equations */

/*
equation index: 1369
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[2] = semiLinear(channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,3].hv, channel_2.Channel[1,4].H[1] / channel_2.Channel[1,3].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */ = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1373(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1373};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1369(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */) - data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1373(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1373(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_2.Channel[1,4].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[636].attribute /* channel_2.Channel[1,4].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[636].attribute /* channel_2.Channel[1,4].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[636].attribute /* channel_2.Channel[1,4].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1373(sysData);
}

void getIterationVarsNLS1373(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */;
}


/* inner equations */

/*
equation index: 1362
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[1] = semiLinear(channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,2].H[2] / channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1366(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1366};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1362(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1366(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1366(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_2.Channel[1,2].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[633].attribute /* channel_2.Channel[1,2].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[633].attribute /* channel_2.Channel[1,2].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[633].attribute /* channel_2.Channel[1,2].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1366(sysData);
}

void getIterationVarsNLS1366(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */;
}


/* inner equations */

/*
equation index: 1357
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[2] = semiLinear(channel_2.Channel[1,1].D_flow_v, channel_2.Channel[1,1].hv, channel_2.Channel[1,2].H[1] / channel_2.Channel[1,1].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */ = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */,data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */,"channel_2.Channel[1,1].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1361(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1361};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1357(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */) - data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1361(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1361(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_2.Channel[1,2].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[632].attribute /* channel_2.Channel[1,2].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[632].attribute /* channel_2.Channel[1,2].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[632].attribute /* channel_2.Channel[1,2].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1361(sysData);
}

void getIterationVarsNLS1361(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */;
}


/* inner equations */

/*
equation index: 1310
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].H[2] = semiLinear(channel_1.Channel[1,4].D_flow_v, channel_1.Channel[1,4].hv, channel_1.Channel[1,5].H[1] / channel_1.Channel[1,4].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */ = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1314(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1314};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1310(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,"channel_1.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */) - data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1314(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1314(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,5].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[571].attribute /* channel_1.Channel[1,5].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[571].attribute /* channel_1.Channel[1,5].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[571].attribute /* channel_1.Channel[1,5].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1314(sysData);
}

void getIterationVarsNLS1314(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */;
}


/* inner equations */

/*
equation index: 1303
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[2] = semiLinear(channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,3].hv, channel_1.Channel[1,4].H[1] / channel_1.Channel[1,3].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */ = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes));
  TRACE_POP
}

void residualFunc1307(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1307};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1303(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */) - data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1307(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1307(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,4].H[1] */
  sysData->nominal[i] = data->modelData->realVarsData[569].attribute /* channel_1.Channel[1,4].H[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[569].attribute /* channel_1.Channel[1,4].H[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[569].attribute /* channel_1.Channel[1,4].H[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1307(sysData);
}

void getIterationVarsNLS1307(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */;
}


/* inner equations */

/*
equation index: 1296
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[1] = semiLinear(channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,2].H[2] / channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1300(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1300};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1296(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1300(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1300(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,2].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[566].attribute /* channel_1.Channel[1,2].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[566].attribute /* channel_1.Channel[1,2].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[566].attribute /* channel_1.Channel[1,2].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1300(sysData);
}

void getIterationVarsNLS1300(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */;
}


/* inner equations */

/*
equation index: 1291
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].H[1] = semiLinear(channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,1].H[2] / channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}

void residualFunc1295(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1295};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1291(data, threadData);
  /* body */
  res[0] = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */,data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */,"channel_1.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1295(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 1;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[0] = 1;
}
void initializeStaticDataNLS1295(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,1].H[2] */
  sysData->nominal[i] = data->modelData->realVarsData[564].attribute /* channel_1.Channel[1,1].H[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[564].attribute /* channel_1.Channel[1,1].H[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[564].attribute /* channel_1.Channel[1,1].H[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1295(sysData);
}

void getIterationVarsNLS1295(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */;
}


/* inner equations */

/*
equation index: 894
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,894};
  data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 895
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_piez = 9.806649999999999 * channel_1.Channel[1,1].stateFlow.d * channel_1.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[14] /* channel_1.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 896
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 897
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 898
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 899
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_piez = 9.806649999999999 * channel_1.Channel[1,2].stateFlow.d * channel_1.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[15] /* channel_1.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 900
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_fric = channel_1.Channel[1,1].pv - channel_1.Channel[1,2].pv - (channel_1.Channel[1,1].dp_piez + $DER.channel_1.Channel[1,1].D_flow_v * channel_1.Channel[1,1].deltaLpipe / channel_1.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */ = data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */ - data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[48] /* der(channel_1.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[19] /* channel_1.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */,"channel_1.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 901
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 902
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 903
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 904
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_piez = 9.806649999999999 * channel_1.Channel[1,3].stateFlow.d * channel_1.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[16] /* channel_1.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 905
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_fric = channel_1.Channel[1,2].pv - channel_1.Channel[1,3].pv - (channel_1.Channel[1,2].dp_piez + $DER.channel_1.Channel[1,2].D_flow_v * channel_1.Channel[1,2].deltaLpipe / channel_1.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */ = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[49] /* der(channel_1.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[20] /* channel_1.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */,"channel_1.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 906
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 907
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 908
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 909
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_piez = 9.806649999999999 * channel_1.Channel[1,4].stateFlow.d * channel_1.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[17] /* channel_1.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 910
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_fric = channel_1.Channel[1,3].pv - channel_1.Channel[1,4].pv - (channel_1.Channel[1,3].dp_piez + $DER.channel_1.Channel[1,3].D_flow_v * channel_1.Channel[1,3].deltaLpipe / channel_1.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */ = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[50] /* der(channel_1.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[21] /* channel_1.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */,"channel_1.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 911
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 912
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 913
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 914
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_piez = 9.806649999999999 * channel_1.Channel[1,5].stateFlow.d * channel_1.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[18] /* channel_1.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 915
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_fric = channel_1.Channel[1,4].pv - channel_1.Channel[1,5].pv - (channel_1.Channel[1,4].dp_piez + $DER.channel_1.Channel[1,4].D_flow_v * channel_1.Channel[1,4].deltaLpipe / channel_1.Channel[1,4].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */ = data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */ + (data->localData[0]->realVars[51] /* der(channel_1.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[22] /* channel_1.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */,"channel_1.Channel[1,4].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 916
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].H[2] = semiLinear(channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 917
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].Dv = (*Real*)(sign(channel_1.Channel[1,5].D_flow_v)) * max(abs(channel_1.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 918
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].w_flow_v = channel_1.Channel[1,5].Dv / (channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */),"channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 919
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,5].w_flow_v)) * channel_1.Channel[1,5].w_flow_v ^ 2.0 * channel_1.Channel[1,5].Xi_flow * channel_1.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[577] /* channel_1.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 920
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].D_flow_v = channel_1.Channel[1,5].deltaVFlow * (channel_1.Channel[1,5].drdp * $DER.channel_1.Channel[1,5].pv + channel_1.Channel[1,5].drdh * $DER.channel_1.Channel[1,5].hv) + channel_1.Channel[1,5].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[61] /* der(channel_1.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */)) + data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 921
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].Dv = (*Real*)(sign(channel_1.Channel[1,4].D_flow_v)) * max(abs(channel_1.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 922
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].w_flow_v = channel_1.Channel[1,4].Dv / (channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */),"channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 923
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].D_flow_v = channel_1.Channel[1,4].deltaVFlow * (channel_1.Channel[1,4].drdp * $DER.channel_1.Channel[1,4].pv + channel_1.Channel[1,4].drdh * $DER.channel_1.Channel[1,4].hv) + channel_1.Channel[1,4].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[60] /* der(channel_1.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */)) + data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 924
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].Dv = (*Real*)(sign(channel_1.Channel[1,3].D_flow_v)) * max(abs(channel_1.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 925
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].w_flow_v = channel_1.Channel[1,3].Dv / (channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */),"channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 926
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].D_flow_v = channel_1.Channel[1,3].deltaVFlow * (channel_1.Channel[1,3].drdp * $DER.channel_1.Channel[1,3].pv + channel_1.Channel[1,3].drdh * $DER.channel_1.Channel[1,3].hv) + channel_1.Channel[1,3].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[59] /* der(channel_1.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */)) + data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 927
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].Dv = (*Real*)(sign(channel_1.Channel[1,2].D_flow_v)) * max(abs(channel_1.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 928
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].w_flow_v = channel_1.Channel[1,2].Dv / (channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */),"channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 929
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].D_flow_v = channel_1.Channel[1,2].deltaVFlow * (channel_1.Channel[1,2].drdp * $DER.channel_1.Channel[1,2].pv + channel_1.Channel[1,2].drdh * $DER.channel_1.Channel[1,2].hv) + channel_1.Channel[1,2].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[58] /* der(channel_1.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */)) + data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 930
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].H[1] = semiLinear(channel_1.Channel[1,1].D_flow_v, Source_2.ports[1].h_outflow, channel_1.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 931
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].Dv = (*Real*)(sign(channel_1.Channel[1,1].D_flow_v)) * max(abs(channel_1.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 932
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].w_flow_v = channel_1.Channel[1,1].Dv / (channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */),"channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 933
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].H[2] = channel_1.Channel[1,1].H[1] - channel_1.Channel[1,1].deltaVFlow * channel_1.Channel[1,1].stateFlow.d * $DER.channel_1.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 934
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].H[1] = semiLinear(channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,1].H[2] / channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 935
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].H[2] = channel_1.Channel[1,2].H[1] - channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].stateFlow.d * $DER.channel_1.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 936
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[1] = semiLinear(channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,2].H[2] / channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 937
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].H[1] = channel_1.Channel[1,5].H[2] + channel_1.Channel[1,5].deltaVFlow * channel_1.Channel[1,5].stateFlow.d * $DER.channel_1.Channel[1,5].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ = data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */ + (data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */));
  TRACE_POP
}
/*
equation index: 938
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].H[2] = semiLinear(channel_1.Channel[1,4].D_flow_v, channel_1.Channel[1,4].hv, channel_1.Channel[1,5].H[1] / channel_1.Channel[1,4].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */ = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes));
  TRACE_POP
}
/*
equation index: 939
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].H[1] = channel_1.Channel[1,4].H[2] + channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].stateFlow.d * $DER.channel_1.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ = data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */ + (data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */));
  TRACE_POP
}
/*
equation index: 940
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[2] = semiLinear(channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,3].hv, channel_1.Channel[1,4].H[1] / channel_1.Channel[1,3].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */ = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes));
  TRACE_POP
}
/*
equation index: 941
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].p[2] = channel_1.Channel[1,5].pv - (channel_1.Channel[1,5].dp_fric + channel_1.Channel[1,5].dp_piez + $DER.channel_1.Channel[1,5].D_flow_v * channel_1.Channel[1,5].deltaLpipe / channel_1.Channel[1,5].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */ + (data->localData[0]->realVars[52] /* der(channel_1.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[23] /* channel_1.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */,"channel_1.Channel[1,5].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 942
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 943
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 944
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 945
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].D_flow_v = channel_1.Channel[1,5].D_flow_v - channel_2.Channel[1,1].deltaVFlow * (channel_2.Channel[1,1].drdp * $DER.channel_2.Channel[1,1].pv + channel_2.Channel[1,1].drdh * $DER.channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ = data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[72] /* der(channel_2.Channel[1,1].pv) STATE_DER */) + (data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 946
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[1] = semiLinear(channel_2.Channel[1,1].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 947
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].Dv = (*Real*)(sign(channel_2.Channel[1,1].D_flow_v)) * max(abs(channel_2.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 948
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].w_flow_v = channel_2.Channel[1,1].Dv / (channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */),"channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,1].w_flow_v)) * channel_2.Channel[1,1].w_flow_v ^ 2.0 * channel_2.Channel[1,1].Xi_flow * channel_2.Channel[1,1].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */;
  data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[640] /* channel_2.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[2] = channel_2.Channel[1,1].H[1] - channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].stateFlow.d * $DER.channel_2.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_piez = 9.806649999999999 * channel_2.Channel[1,1].stateFlow.d * channel_2.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[80] /* channel_2.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].pv = channel_2.Channel[1,1].pv - (channel_2.Channel[1,1].dp_fric + channel_2.Channel[1,1].dp_piez + $DER.channel_2.Channel[1,1].D_flow_v * channel_2.Channel[1,1].deltaLpipe / channel_2.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ - (data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */ + data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[62] /* der(channel_2.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[85] /* channel_2.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */,"channel_2.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].D_flow_v = channel_2.Channel[1,1].D_flow_v - channel_2.Channel[1,2].deltaVFlow * (channel_2.Channel[1,2].drdp * $DER.channel_2.Channel[1,2].pv + channel_2.Channel[1,2].drdh * $DER.channel_2.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ = data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[73] /* der(channel_2.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].H[1] = semiLinear(channel_2.Channel[1,2].D_flow_v, channel_2.Channel[1,1].H[2] / channel_2.Channel[1,2].D_flow_v, channel_2.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].Dv = (*Real*)(sign(channel_2.Channel[1,2].D_flow_v)) * max(abs(channel_2.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].w_flow_v = channel_2.Channel[1,2].Dv / (channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */),"channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,2].w_flow_v)) * channel_2.Channel[1,2].w_flow_v ^ 2.0 * channel_2.Channel[1,2].Xi_flow * channel_2.Channel[1,2].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */;
  data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[641] /* channel_2.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].H[2] = channel_2.Channel[1,2].H[1] - channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].stateFlow.d * $DER.channel_2.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_piez = 9.806649999999999 * channel_2.Channel[1,2].stateFlow.d * channel_2.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[81] /* channel_2.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].pv = channel_2.Channel[1,2].pv - (channel_2.Channel[1,2].dp_fric + channel_2.Channel[1,2].dp_piez + $DER.channel_2.Channel[1,2].D_flow_v * channel_2.Channel[1,2].deltaLpipe / channel_2.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ = data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */ + data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[63] /* der(channel_2.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[86] /* channel_2.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */,"channel_2.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].D_flow_v = channel_2.Channel[1,2].D_flow_v - channel_2.Channel[1,3].deltaVFlow * (channel_2.Channel[1,3].drdp * $DER.channel_2.Channel[1,3].pv + channel_2.Channel[1,3].drdh * $DER.channel_2.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ = data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[74] /* der(channel_2.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 968
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[1] = semiLinear(channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,2].H[2] / channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 969
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].Dv = (*Real*)(sign(channel_2.Channel[1,3].D_flow_v)) * max(abs(channel_2.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 970
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].w_flow_v = channel_2.Channel[1,3].Dv / (channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */),"channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 971
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,3].w_flow_v)) * channel_2.Channel[1,3].w_flow_v ^ 2.0 * channel_2.Channel[1,3].Xi_flow * channel_2.Channel[1,3].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */;
  data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[642] /* channel_2.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[2] = channel_2.Channel[1,3].H[1] - channel_2.Channel[1,3].deltaVFlow * channel_2.Channel[1,3].stateFlow.d * $DER.channel_2.Channel[1,3].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */ = data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ - ((data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_piez = 9.806649999999999 * channel_2.Channel[1,3].stateFlow.d * channel_2.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[82] /* channel_2.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].pv = channel_2.Channel[1,3].pv - (channel_2.Channel[1,3].dp_fric + channel_2.Channel[1,3].dp_piez + $DER.channel_2.Channel[1,3].D_flow_v * channel_2.Channel[1,3].deltaLpipe / channel_2.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ = data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */ + data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[64] /* der(channel_2.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[87] /* channel_2.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */,"channel_2.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 976
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 977
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 978
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].D_flow_v = channel_2.Channel[1,3].D_flow_v - channel_2.Channel[1,4].deltaVFlow * (channel_2.Channel[1,4].drdp * $DER.channel_2.Channel[1,4].pv + channel_2.Channel[1,4].drdh * $DER.channel_2.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ = data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[75] /* der(channel_2.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 979
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].H[1] = semiLinear(channel_2.Channel[1,4].D_flow_v, channel_2.Channel[1,3].H[2] / channel_2.Channel[1,4].D_flow_v, channel_2.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 980
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].Dv = (*Real*)(sign(channel_2.Channel[1,4].D_flow_v)) * max(abs(channel_2.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 981
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].w_flow_v = channel_2.Channel[1,4].Dv / (channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */),"channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 982
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,4].w_flow_v)) * channel_2.Channel[1,4].w_flow_v ^ 2.0 * channel_2.Channel[1,4].Xi_flow * channel_2.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[643] /* channel_2.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 983
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].H[2] = channel_2.Channel[1,4].H[1] - channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].stateFlow.d * $DER.channel_2.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */ = data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ - ((data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 984
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_piez = 9.806649999999999 * channel_2.Channel[1,4].stateFlow.d * channel_2.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[83] /* channel_2.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 985
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].pv = channel_2.Channel[1,4].pv - (channel_2.Channel[1,4].dp_fric + channel_2.Channel[1,4].dp_piez + $DER.channel_2.Channel[1,4].D_flow_v * channel_2.Channel[1,4].deltaLpipe / channel_2.Channel[1,4].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ = data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */ + (data->localData[0]->realVars[65] /* der(channel_2.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[88] /* channel_2.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */,"channel_2.Channel[1,4].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 986
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 987
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 988
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 989
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].D_flow_v = channel_2.Channel[1,4].D_flow_v - channel_2.Channel[1,5].deltaVFlow * (channel_2.Channel[1,5].drdp * $DER.channel_2.Channel[1,5].pv + channel_2.Channel[1,5].drdh * $DER.channel_2.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ = data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[76] /* der(channel_2.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 990
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].H[2] = semiLinear(channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 991
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].H[1] = semiLinear(channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,4].H[2] / channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,"channel_2.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 992
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].Dv = (*Real*)(sign(channel_2.Channel[1,5].D_flow_v)) * max(abs(channel_2.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 993
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].w_flow_v = channel_2.Channel[1,5].Dv / (channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */),"channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 994
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,5].w_flow_v)) * channel_2.Channel[1,5].w_flow_v ^ 2.0 * channel_2.Channel[1,5].Xi_flow * channel_2.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[644] /* channel_2.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 995
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_piez = 9.806649999999999 * channel_2.Channel[1,5].stateFlow.d * channel_2.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[84] /* channel_2.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 996
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].p[2] = channel_2.Channel[1,5].pv - (channel_2.Channel[1,5].dp_fric + channel_2.Channel[1,5].dp_piez + $DER.channel_2.Channel[1,5].D_flow_v * channel_2.Channel[1,5].deltaLpipe / channel_2.Channel[1,5].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ = data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */ + (data->localData[0]->realVars[66] /* der(channel_2.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[89] /* channel_2.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */,"channel_2.Channel[1,5].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 997
type: SIMPLE_ASSIGN
valve_1.dp = channel_1.Channel[1,5].p[2] - channel_2.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->localData[0]->realVars[761] /* valve_1.dp variable */ = data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}
/*
equation index: 998
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 999
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].D_flow_v = channel_2.Channel[1,5].D_flow_v - channel_3.Channel[1,1].deltaVFlow * (channel_3.Channel[1,1].drdp * $DER.channel_3.Channel[1,1].pv + channel_3.Channel[1,1].drdh * $DER.channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ = data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[87] /* der(channel_3.Channel[1,1].pv) STATE_DER */) + (data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].H[1] = semiLinear(channel_3.Channel[1,1].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].Dv = (*Real*)(sign(channel_3.Channel[1,1].D_flow_v)) * max(abs(channel_3.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].w_flow_v = channel_3.Channel[1,1].Dv / (channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */),"channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1005
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,1].w_flow_v)) * channel_3.Channel[1,1].w_flow_v ^ 2.0 * channel_3.Channel[1,1].Xi_flow * channel_3.Channel[1,1].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */;
  data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[706] /* channel_3.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].H[2] = channel_3.Channel[1,1].H[1] - channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].stateFlow.d * $DER.channel_3.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1007
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_piez = 9.806649999999999 * channel_3.Channel[1,1].stateFlow.d * channel_3.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[146] /* channel_3.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].pv = channel_3.Channel[1,1].pv - (channel_3.Channel[1,1].dp_fric + channel_3.Channel[1,1].dp_piez + $DER.channel_3.Channel[1,1].D_flow_v * channel_3.Channel[1,1].deltaLpipe / channel_3.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ - (data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */ + data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[77] /* der(channel_3.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[151] /* channel_3.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */,"channel_3.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1009
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].D_flow_v = channel_3.Channel[1,1].D_flow_v - channel_3.Channel[1,2].deltaVFlow * (channel_3.Channel[1,2].drdp * $DER.channel_3.Channel[1,2].pv + channel_3.Channel[1,2].drdh * $DER.channel_3.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ = data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[88] /* der(channel_3.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[1] = semiLinear(channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,1].H[2] / channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].Dv = (*Real*)(sign(channel_3.Channel[1,2].D_flow_v)) * max(abs(channel_3.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].w_flow_v = channel_3.Channel[1,2].Dv / (channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */),"channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,2].w_flow_v)) * channel_3.Channel[1,2].w_flow_v ^ 2.0 * channel_3.Channel[1,2].Xi_flow * channel_3.Channel[1,2].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */;
  data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[707] /* channel_3.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[2] = channel_3.Channel[1,2].H[1] - channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].stateFlow.d * $DER.channel_3.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_piez = 9.806649999999999 * channel_3.Channel[1,2].stateFlow.d * channel_3.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[147] /* channel_3.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1019
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].pv = channel_3.Channel[1,2].pv - (channel_3.Channel[1,2].dp_fric + channel_3.Channel[1,2].dp_piez + $DER.channel_3.Channel[1,2].D_flow_v * channel_3.Channel[1,2].deltaLpipe / channel_3.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ = data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */ + data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[78] /* der(channel_3.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[152] /* channel_3.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */,"channel_3.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1020
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 1021
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 1022
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 1023
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].D_flow_v = channel_3.Channel[1,2].D_flow_v - channel_3.Channel[1,3].deltaVFlow * (channel_3.Channel[1,3].drdp * $DER.channel_3.Channel[1,3].pv + channel_3.Channel[1,3].drdh * $DER.channel_3.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ = data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[89] /* der(channel_3.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1024
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].H[1] = semiLinear(channel_3.Channel[1,3].D_flow_v, channel_3.Channel[1,2].H[2] / channel_3.Channel[1,3].D_flow_v, channel_3.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1025
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].Dv = (*Real*)(sign(channel_3.Channel[1,3].D_flow_v)) * max(abs(channel_3.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 1026
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].w_flow_v = channel_3.Channel[1,3].Dv / (channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */),"channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1027
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,3].w_flow_v)) * channel_3.Channel[1,3].w_flow_v ^ 2.0 * channel_3.Channel[1,3].Xi_flow * channel_3.Channel[1,3].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */;
  data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[708] /* channel_3.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1028
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].H[2] = channel_3.Channel[1,3].H[1] - channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].stateFlow.d * $DER.channel_3.Channel[1,3].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */ = data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ - ((data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1029
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_piez = 9.806649999999999 * channel_3.Channel[1,3].stateFlow.d * channel_3.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[148] /* channel_3.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1030
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].pv = channel_3.Channel[1,3].pv - (channel_3.Channel[1,3].dp_fric + channel_3.Channel[1,3].dp_piez + $DER.channel_3.Channel[1,3].D_flow_v * channel_3.Channel[1,3].deltaLpipe / channel_3.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ = data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */ + data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[79] /* der(channel_3.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[153] /* channel_3.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */,"channel_3.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1031
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 1033
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 1034
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].D_flow_v = channel_3.Channel[1,3].D_flow_v - channel_3.Channel[1,4].deltaVFlow * (channel_3.Channel[1,4].drdp * $DER.channel_3.Channel[1,4].pv + channel_3.Channel[1,4].drdh * $DER.channel_3.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ = data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[90] /* der(channel_3.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1035
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].H[1] = semiLinear(channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,3].H[2] / channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1036
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].Dv = (*Real*)(sign(channel_3.Channel[1,4].D_flow_v)) * max(abs(channel_3.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 1037
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].w_flow_v = channel_3.Channel[1,4].Dv / (channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */),"channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1038
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,4].w_flow_v)) * channel_3.Channel[1,4].w_flow_v ^ 2.0 * channel_3.Channel[1,4].Xi_flow * channel_3.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[709] /* channel_3.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1039
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].H[2] = channel_3.Channel[1,4].H[1] - channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].stateFlow.d * $DER.channel_3.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */ = data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ - ((data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1040
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_piez = 9.806649999999999 * channel_3.Channel[1,4].stateFlow.d * channel_3.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[149] /* channel_3.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1041
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].pv = channel_3.Channel[1,4].pv - (channel_3.Channel[1,4].dp_fric + channel_3.Channel[1,4].dp_piez + $DER.channel_3.Channel[1,4].D_flow_v * channel_3.Channel[1,4].deltaLpipe / channel_3.Channel[1,4].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ = data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */ + (data->localData[0]->realVars[80] /* der(channel_3.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[154] /* channel_3.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */,"channel_3.Channel[1,4].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1042
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 1043
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 1044
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 1045
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].D_flow_v = channel_3.Channel[1,4].D_flow_v - channel_3.Channel[1,5].deltaVFlow * (channel_3.Channel[1,5].drdp * $DER.channel_3.Channel[1,5].pv + channel_3.Channel[1,5].drdh * $DER.channel_3.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */ = data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[91] /* der(channel_3.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 1046
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[1] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,4].H[2] / channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */,"channel_3.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1047
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[2] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv, Sink_2.ports[1].h_outflow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */);
  TRACE_POP
}
/*
equation index: 1048
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].Dv = (*Real*)(sign(channel_3.Channel[1,5].D_flow_v)) * max(abs(channel_3.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 1049
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].w_flow_v = channel_3.Channel[1,5].Dv / (channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */),"channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1050
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,5].w_flow_v)) * channel_3.Channel[1,5].w_flow_v ^ 2.0 * channel_3.Channel[1,5].Xi_flow * channel_3.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[710] /* channel_3.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1051
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_piez = 9.806649999999999 * channel_3.Channel[1,5].stateFlow.d * channel_3.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[150] /* channel_3.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1052
type: SIMPLE_ASSIGN
valve_2.dp = channel_2.Channel[1,5].p[2] - channel_3.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  data->localData[0]->realVars[777] /* valve_2.dp variable */ = data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}

void residualFunc1075(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1075};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<22; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<22; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ = xloc[0];
  data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ = xloc[1];
  data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ = xloc[2];
  data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ = xloc[3];
  data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ = xloc[4];
  data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ = xloc[5];
  data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ = xloc[6];
  data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */ = xloc[7];
  data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */ = xloc[8];
  data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */ = xloc[9];
  data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */ = xloc[10];
  data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */ = xloc[11];
  data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */ = xloc[12];
  data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */ = xloc[13];
  data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */ = xloc[14];
  data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */ = xloc[15];
  data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */ = xloc[16];
  data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */ = xloc[17];
  data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */ = xloc[18];
  data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */ = xloc[19];
  data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */ = xloc[20];
  data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */ = xloc[21];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_894(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_895(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_896(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_897(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_898(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_899(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_900(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_901(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_902(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_903(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_904(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_905(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_906(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_907(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_908(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_909(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_910(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_911(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_912(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_913(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_914(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_915(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_916(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_917(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_918(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_919(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_920(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_921(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_922(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_923(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_924(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_925(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_926(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_927(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_928(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_929(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_930(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_931(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_932(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_933(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_934(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_935(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_936(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_937(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_938(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_939(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_940(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_941(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_942(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_943(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_944(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_945(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_946(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_947(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_948(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_949(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_950(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_951(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_952(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_953(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_954(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_955(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_956(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_957(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_958(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_959(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_960(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_961(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_962(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_963(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_964(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_965(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_966(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_967(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_968(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_969(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_970(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_971(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_972(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_973(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_974(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_975(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_976(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_977(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_978(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_979(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_980(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_981(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_982(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_983(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_984(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_985(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_986(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_987(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_988(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_989(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_990(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_991(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_992(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_993(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_994(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_995(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_996(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_997(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_998(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_999(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1000(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1001(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1002(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1003(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1004(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1005(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1006(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1007(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1008(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1009(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1010(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1011(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1012(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1013(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1014(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1015(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1016(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1017(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1018(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1019(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1020(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1021(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1022(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1023(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1024(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1025(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1026(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1027(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1028(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1029(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1030(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1031(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1032(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1033(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1034(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1035(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1036(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1037(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1038(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1039(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1040(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1041(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1042(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1043(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1044(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1045(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1046(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1047(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1048(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1049(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1050(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1051(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1052(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ + (-data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */) - ((data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */)));

  res[1] = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */;

  tmp0 = data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */;
  res[2] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[574] /* channel_1.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */)))) - data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */;

  tmp1 = data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */;
  res[3] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */))) * (((tmp1 * tmp1)) * ((data->localData[0]->realVars[575] /* channel_1.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */)))) - data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */;

  tmp2 = data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */;
  res[4] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */))) * (((tmp2 * tmp2)) * ((data->localData[0]->realVars[576] /* channel_1.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */)))) - data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */;

  res[5] = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */;

  res[6] = data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ + (-data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */) - ((data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */)));

  res[7] = (data->localData[0]->realVars[81] /* der(channel_3.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[155] /* channel_3.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */,"channel_3.Channel[1,5].f_flow",equationIndexes)) + data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */ + data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */ + data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */ - data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */;

  res[8] = data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ + (-data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */) - ((data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */)));

  res[9] = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes)) - data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */;

  res[10] = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes)) - data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */;

  res[11] = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */;

  res[12] = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */,data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */,"channel_3.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */;

  res[13] = (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_valveCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */)) * ((data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[777] /* valve_2.dp variable */,data->simulationInfo->realParameter[267] /* valve_2.dp_nominal PARAM */,"valve_2.dp_nominal",equationIndexes))) - data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;

  res[14] = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes)) - data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */;

  res[15] = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes)) - data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */;

  res[16] = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */,data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */,"channel_2.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */;

  res[17] = (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_valveCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */)) * ((data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[761] /* valve_1.dp variable */,data->simulationInfo->realParameter[234] /* valve_1.dp_nominal PARAM */,"valve_1.dp_nominal",equationIndexes))) - data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;

  res[18] = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,"channel_1.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */) - data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */;

  res[19] = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */) - data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */;

  res[20] = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */,data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */,"channel_1.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */;

  tmp3 = data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */;
  res[21] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */))) * (((tmp3 * tmp3)) * ((data->localData[0]->realVars[573] /* channel_1.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */)))) - data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1075(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+22] = {0,7,13,22,10,8,6,5,9,15,11,10,7,6,4,3,5,9,12,15,7,5,4};
  const int rowIndex[193] = {7,8,9,10,11,12,13,5,6,7,8,9,10,11,12,13,14,15,16,17,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,1,2,3,4,17,18,19,20,21,0,1,2,3,4,19,20,21,0,1,2,3,20,21,0,1,2,20,21,0,1,2,3,4,18,19,20,21,0,5,6,7,8,9,10,11,12,13,14,15,16,18,19,5,6,7,8,9,10,11,12,13,14,15,6,7,8,9,10,11,12,13,14,15,6,7,8,9,10,11,12,7,8,9,10,11,12,7,8,9,10,7,8,9,7,8,9,10,11,6,7,8,9,10,11,12,13,14,5,6,7,8,9,10,11,12,13,14,15,16,0,1,2,3,4,5,6,14,15,16,17,18,19,20,21,0,1,2,3,19,20,21,0,1,2,20,21,0,1,20,21};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((22+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(193*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 193;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(22*sizeof(int));
  inSysData->sparsePattern->maxColors = 13;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (22+1)*sizeof(int));
  
  for(i=2;i<22+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 193*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[17] = 1;
  inSysData->sparsePattern->colorCols[16] = 2;
  inSysData->sparsePattern->colorCols[15] = 3;
  inSysData->sparsePattern->colorCols[21] = 3;
  inSysData->sparsePattern->colorCols[14] = 4;
  inSysData->sparsePattern->colorCols[20] = 4;
  inSysData->sparsePattern->colorCols[13] = 5;
  inSysData->sparsePattern->colorCols[19] = 5;
  inSysData->sparsePattern->colorCols[12] = 6;
  inSysData->sparsePattern->colorCols[18] = 6;
  inSysData->sparsePattern->colorCols[8] = 7;
  inSysData->sparsePattern->colorCols[7] = 8;
  inSysData->sparsePattern->colorCols[11] = 8;
  inSysData->sparsePattern->colorCols[6] = 9;
  inSysData->sparsePattern->colorCols[10] = 9;
  inSysData->sparsePattern->colorCols[5] = 10;
  inSysData->sparsePattern->colorCols[9] = 10;
  inSysData->sparsePattern->colorCols[2] = 11;
  inSysData->sparsePattern->colorCols[1] = 12;
  inSysData->sparsePattern->colorCols[4] = 12;
  inSysData->sparsePattern->colorCols[0] = 13;
  inSysData->sparsePattern->colorCols[3] = 13;
}
void initializeStaticDataNLS1075(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_3.Channel[1,1].pv */
  sysData->nominal[i] = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.max;
  /* static nls data for channel_2.Channel[1,1].pv */
  sysData->nominal[i] = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.max;
  /* static nls data for channel_1.Channel[1,5].D_flow_v */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* channel_1.Channel[1,5].D_flow_v */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* channel_1.Channel[1,5].D_flow_v */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* channel_1.Channel[1,5].D_flow_v */.max;
  /* static nls data for channel_1.Channel[1,5].pv */
  sysData->nominal[i] = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.max;
  /* static nls data for channel_1.Channel[1,4].pv */
  sysData->nominal[i] = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.max;
  /* static nls data for channel_1.Channel[1,3].pv */
  sysData->nominal[i] = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.max;
  /* static nls data for channel_1.Channel[1,2].pv */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.max;
  /* static nls data for channel_1.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.max;
  /* static nls data for channel_2.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.max;
  /* static nls data for channel_2.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.max;
  /* static nls data for channel_2.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.max;
  /* static nls data for channel_3.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.max;
  /* static nls data for channel_3.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.max;
  /* static nls data for channel_3.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.max;
  /* static nls data for channel_3.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.max;
  /* static nls data for channel_3.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.max;
  /* static nls data for channel_2.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.max;
  /* static nls data for channel_2.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.max;
  /* static nls data for channel_1.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.max;
  /* static nls data for channel_1.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.max;
  /* static nls data for channel_1.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.max;
  /* static nls data for channel_1.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1075(sysData);
}

void getIterationVarsNLS1075(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  array[1] = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  array[2] = data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;
  array[3] = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */;
  array[4] = data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */;
  array[5] = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */;
  array[6] = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */;
  array[7] = data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */;
  array[8] = data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */;
  array[9] = data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */;
  array[10] = data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */;
  array[11] = data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */;
  array[12] = data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */;
  array[13] = data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */;
  array[14] = data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */;
  array[15] = data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */;
  array[16] = data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */;
  array[17] = data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */;
  array[18] = data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */;
  array[19] = data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */;
  array[20] = data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */;
  array[21] = data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */;
}


/* inner equations */

/*
equation index: 110
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_piez = 9.806649999999999 * channel_1.Channel[1,1].stateFlow.d * channel_1.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[14] /* channel_1.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
valve_1.state_b.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[771] /* valve_1.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_piez = 9.806649999999999 * channel_2.Channel[1,1].stateFlow.d * channel_2.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[80] /* channel_2.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
valve_2.state_b.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->localData[0]->realVars[787] /* valve_2.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_piez = 9.806649999999999 * channel_3.Channel[1,1].stateFlow.d * channel_3.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[146] /* channel_3.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_piez = 9.806649999999999 * channel_1.Channel[1,2].stateFlow.d * channel_1.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[15] /* channel_1.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_fric = channel_1.Channel[1,1].pv - channel_1.Channel[1,2].pv - (channel_1.Channel[1,1].dp_piez + $DER.channel_1.Channel[1,1].D_flow_v * channel_1.Channel[1,1].deltaLpipe / channel_1.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */ = data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */ - data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[48] /* der(channel_1.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[19] /* channel_1.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */,"channel_1.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_piez = 9.806649999999999 * channel_1.Channel[1,3].stateFlow.d * channel_1.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[16] /* channel_1.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_fric = channel_1.Channel[1,2].pv - channel_1.Channel[1,3].pv - (channel_1.Channel[1,2].dp_piez + $DER.channel_1.Channel[1,2].D_flow_v * channel_1.Channel[1,2].deltaLpipe / channel_1.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */ = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[49] /* der(channel_1.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[20] /* channel_1.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */,"channel_1.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_piez = 9.806649999999999 * channel_3.Channel[1,2].stateFlow.d * channel_3.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[147] /* channel_3.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_fric = channel_3.Channel[1,1].pv - channel_3.Channel[1,2].pv - (channel_3.Channel[1,1].dp_piez + $DER.channel_3.Channel[1,1].D_flow_v * channel_3.Channel[1,1].deltaLpipe / channel_3.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */ = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ - data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[77] /* der(channel_3.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[151] /* channel_3.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */,"channel_3.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_piez = 9.806649999999999 * channel_3.Channel[1,3].stateFlow.d * channel_3.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[148] /* channel_3.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_fric = channel_3.Channel[1,2].pv - channel_3.Channel[1,3].pv - (channel_3.Channel[1,2].dp_piez + $DER.channel_3.Channel[1,2].D_flow_v * channel_3.Channel[1,2].deltaLpipe / channel_3.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */ = data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[78] /* der(channel_3.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[152] /* channel_3.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */,"channel_3.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_piez = 9.806649999999999 * channel_3.Channel[1,4].stateFlow.d * channel_3.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[149] /* channel_3.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_fric = channel_3.Channel[1,3].pv - channel_3.Channel[1,4].pv - (channel_3.Channel[1,3].dp_piez + $DER.channel_3.Channel[1,3].D_flow_v * channel_3.Channel[1,3].deltaLpipe / channel_3.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */ = data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[79] /* der(channel_3.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[153] /* channel_3.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */,"channel_3.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_piez = 9.806649999999999 * channel_3.Channel[1,5].stateFlow.d * channel_3.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[150] /* channel_3.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_fric = channel_3.Channel[1,4].pv - channel_3.Channel[1,5].pv - (channel_3.Channel[1,4].dp_piez + $DER.channel_3.Channel[1,4].D_flow_v * channel_3.Channel[1,4].deltaLpipe / channel_3.Channel[1,4].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */ = data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */ + (data->localData[0]->realVars[80] /* der(channel_3.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[154] /* channel_3.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */,"channel_3.Channel[1,4].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_fric = channel_3.Channel[1,5].pv - Sink_2.p - (channel_3.Channel[1,5].dp_piez + $DER.channel_3.Channel[1,5].D_flow_v * channel_3.Channel[1,5].deltaLpipe / channel_3.Channel[1,5].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */ = data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ - data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */ - (data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */ + (data->localData[0]->realVars[81] /* der(channel_3.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[155] /* channel_3.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */,"channel_3.Channel[1,5].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_piez = 9.806649999999999 * channel_2.Channel[1,2].stateFlow.d * channel_2.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[81] /* channel_2.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_fric = channel_2.Channel[1,1].pv - channel_2.Channel[1,2].pv - (channel_2.Channel[1,1].dp_piez + $DER.channel_2.Channel[1,1].D_flow_v * channel_2.Channel[1,1].deltaLpipe / channel_2.Channel[1,1].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */ = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ - data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */ + (data->localData[0]->realVars[62] /* der(channel_2.Channel[1,1].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[85] /* channel_2.Channel[1,1].deltaLpipe PARAM */,data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */,"channel_2.Channel[1,1].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_piez = 9.806649999999999 * channel_2.Channel[1,3].stateFlow.d * channel_2.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[82] /* channel_2.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_fric = channel_2.Channel[1,2].pv - channel_2.Channel[1,3].pv - (channel_2.Channel[1,2].dp_piez + $DER.channel_2.Channel[1,2].D_flow_v * channel_2.Channel[1,2].deltaLpipe / channel_2.Channel[1,2].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */ = data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */ + (data->localData[0]->realVars[63] /* der(channel_2.Channel[1,2].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[86] /* channel_2.Channel[1,2].deltaLpipe PARAM */,data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */,"channel_2.Channel[1,2].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_piez = 9.806649999999999 * channel_2.Channel[1,4].stateFlow.d * channel_2.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[83] /* channel_2.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_fric = channel_2.Channel[1,3].pv - channel_2.Channel[1,4].pv - (channel_2.Channel[1,3].dp_piez + $DER.channel_2.Channel[1,3].D_flow_v * channel_2.Channel[1,3].deltaLpipe / channel_2.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */ = data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[64] /* der(channel_2.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[87] /* channel_2.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */,"channel_2.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_piez = 9.806649999999999 * channel_2.Channel[1,5].stateFlow.d * channel_2.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[84] /* channel_2.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_fric = channel_2.Channel[1,4].pv - channel_2.Channel[1,5].pv - (channel_2.Channel[1,4].dp_piez + $DER.channel_2.Channel[1,4].D_flow_v * channel_2.Channel[1,4].deltaLpipe / channel_2.Channel[1,4].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */ = data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */ + (data->localData[0]->realVars[65] /* der(channel_2.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[88] /* channel_2.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */,"channel_2.Channel[1,4].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].H[2] = semiLinear(channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].Dv = (*Real*)(sign(channel_2.Channel[1,5].D_flow_v)) * max(abs(channel_2.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].w_flow_v = channel_2.Channel[1,5].Dv / (channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */),"channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,5].w_flow_v)) * channel_2.Channel[1,5].w_flow_v ^ 2.0 * channel_2.Channel[1,5].Xi_flow * channel_2.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[644] /* channel_2.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].D_flow_v = channel_2.Channel[1,5].deltaVFlow * (channel_2.Channel[1,5].drdp * $DER.channel_2.Channel[1,5].pv + channel_2.Channel[1,5].drdh * $DER.channel_2.Channel[1,5].hv) + channel_2.Channel[1,5].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[76] /* der(channel_2.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */)) + data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].Dv = (*Real*)(sign(channel_2.Channel[1,4].D_flow_v)) * max(abs(channel_2.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].w_flow_v = channel_2.Channel[1,4].Dv / (channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */),"channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].D_flow_v = channel_2.Channel[1,5].D_flow_v - channel_3.Channel[1,1].deltaVFlow * (channel_3.Channel[1,1].drdp * $DER.channel_3.Channel[1,1].pv + channel_3.Channel[1,1].drdh * $DER.channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ = data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[87] /* der(channel_3.Channel[1,1].pv) STATE_DER */) + (data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].H[1] = semiLinear(channel_3.Channel[1,1].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].Dv = (*Real*)(sign(channel_3.Channel[1,1].D_flow_v)) * max(abs(channel_3.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].w_flow_v = channel_3.Channel[1,1].Dv / (channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */),"channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].D_flow_v = channel_3.Channel[1,1].D_flow_v - channel_3.Channel[1,2].deltaVFlow * (channel_3.Channel[1,2].drdp * $DER.channel_3.Channel[1,2].pv + channel_3.Channel[1,2].drdh * $DER.channel_3.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ = data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[88] /* der(channel_3.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].Dv = (*Real*)(sign(channel_3.Channel[1,2].D_flow_v)) * max(abs(channel_3.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].w_flow_v = channel_3.Channel[1,2].Dv / (channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */),"channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].D_flow_v = channel_3.Channel[1,2].D_flow_v - channel_3.Channel[1,3].deltaVFlow * (channel_3.Channel[1,3].drdp * $DER.channel_3.Channel[1,3].pv + channel_3.Channel[1,3].drdh * $DER.channel_3.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ = data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[89] /* der(channel_3.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].Dv = (*Real*)(sign(channel_3.Channel[1,3].D_flow_v)) * max(abs(channel_3.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].w_flow_v = channel_3.Channel[1,3].Dv / (channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */),"channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].D_flow_v = channel_3.Channel[1,3].D_flow_v - channel_3.Channel[1,4].deltaVFlow * (channel_3.Channel[1,4].drdp * $DER.channel_3.Channel[1,4].pv + channel_3.Channel[1,4].drdh * $DER.channel_3.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ = data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[90] /* der(channel_3.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].Dv = (*Real*)(sign(channel_3.Channel[1,4].D_flow_v)) * max(abs(channel_3.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].w_flow_v = channel_3.Channel[1,4].Dv / (channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */),"channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].D_flow_v = channel_3.Channel[1,4].D_flow_v - channel_3.Channel[1,5].deltaVFlow * (channel_3.Channel[1,5].drdp * $DER.channel_3.Channel[1,5].pv + channel_3.Channel[1,5].drdh * $DER.channel_3.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */ = data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ - ((data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[91] /* der(channel_3.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[2] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv, Sink_2.ports[1].h_outflow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */);
  TRACE_POP
}
/*
equation index: 195
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].Dv = (*Real*)(sign(channel_3.Channel[1,5].D_flow_v)) * max(abs(channel_3.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 196
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].w_flow_v = channel_3.Channel[1,5].Dv / (channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */),"channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 197
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].D_flow_v = channel_2.Channel[1,4].deltaVFlow * (channel_2.Channel[1,4].drdp * $DER.channel_2.Channel[1,4].pv + channel_2.Channel[1,4].drdh * $DER.channel_2.Channel[1,4].hv) + channel_2.Channel[1,4].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[75] /* der(channel_2.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */)) + data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 198
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].Dv = (*Real*)(sign(channel_2.Channel[1,3].D_flow_v)) * max(abs(channel_2.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 199
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].w_flow_v = channel_2.Channel[1,3].Dv / (channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */),"channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 200
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].D_flow_v = channel_2.Channel[1,3].deltaVFlow * (channel_2.Channel[1,3].drdp * $DER.channel_2.Channel[1,3].pv + channel_2.Channel[1,3].drdh * $DER.channel_2.Channel[1,3].hv) + channel_2.Channel[1,3].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[74] /* der(channel_2.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */)) + data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 201
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].Dv = (*Real*)(sign(channel_2.Channel[1,2].D_flow_v)) * max(abs(channel_2.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 202
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].w_flow_v = channel_2.Channel[1,2].Dv / (channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */),"channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].D_flow_v = channel_2.Channel[1,2].deltaVFlow * (channel_2.Channel[1,2].drdp * $DER.channel_2.Channel[1,2].pv + channel_2.Channel[1,2].drdh * $DER.channel_2.Channel[1,2].hv) + channel_2.Channel[1,2].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[73] /* der(channel_2.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */)) + data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[1] = semiLinear(channel_2.Channel[1,1].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].Dv = (*Real*)(sign(channel_2.Channel[1,1].D_flow_v)) * max(abs(channel_2.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].w_flow_v = channel_2.Channel[1,1].Dv / (channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */),"channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].D_flow_v = channel_2.Channel[1,1].deltaVFlow * (channel_2.Channel[1,1].drdp * $DER.channel_2.Channel[1,1].pv + channel_2.Channel[1,1].drdh * $DER.channel_2.Channel[1,1].hv) + channel_2.Channel[1,1].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[72] /* der(channel_2.Channel[1,1].pv) STATE_DER */) + (data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */)) + data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].H[2] = semiLinear(channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].Dv = (*Real*)(sign(channel_1.Channel[1,5].D_flow_v)) * max(abs(channel_1.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 210
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[2] = channel_2.Channel[1,1].H[1] - channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].stateFlow.d * $DER.channel_2.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 211
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].H[1] = semiLinear(channel_2.Channel[1,2].D_flow_v, channel_2.Channel[1,1].H[2] / channel_2.Channel[1,2].D_flow_v, channel_2.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 212
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].H[2] = channel_2.Channel[1,2].H[1] - channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].stateFlow.d * $DER.channel_2.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 213
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[1] = semiLinear(channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,2].H[2] / channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 214
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].H[2] = channel_3.Channel[1,1].H[1] - channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].stateFlow.d * $DER.channel_3.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 215
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[1] = semiLinear(channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,1].H[2] / channel_3.Channel[1,2].D_flow_v, channel_3.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 216
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].H[2] = channel_3.Channel[1,2].H[1] - channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].stateFlow.d * $DER.channel_3.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 217
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].H[1] = semiLinear(channel_3.Channel[1,3].D_flow_v, channel_3.Channel[1,2].H[2] / channel_3.Channel[1,3].D_flow_v, channel_3.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 218
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].H[2] = channel_3.Channel[1,3].H[1] - channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].stateFlow.d * $DER.channel_3.Channel[1,3].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */ = data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ - ((data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 219
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].H[1] = semiLinear(channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,3].H[2] / channel_3.Channel[1,4].D_flow_v, channel_3.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 220
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].H[2] = channel_3.Channel[1,4].H[1] - channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].stateFlow.d * $DER.channel_3.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */ = data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ - ((data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 221
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[1] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,4].H[2] / channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */,"channel_3.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 222
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].H[1] = channel_2.Channel[1,5].H[2] + channel_2.Channel[1,5].deltaVFlow * channel_2.Channel[1,5].stateFlow.d * $DER.channel_2.Channel[1,5].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ = data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */ + (data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */));
  TRACE_POP
}
/*
equation index: 223
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].H[2] = semiLinear(channel_2.Channel[1,4].D_flow_v, channel_2.Channel[1,4].hv, channel_2.Channel[1,5].H[1] / channel_2.Channel[1,4].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */ = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes));
  TRACE_POP
}
/*
equation index: 224
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].H[1] = channel_2.Channel[1,4].H[2] + channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].stateFlow.d * $DER.channel_2.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ = data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */ + (data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */));
  TRACE_POP
}
/*
equation index: 225
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].H[2] = semiLinear(channel_2.Channel[1,3].D_flow_v, channel_2.Channel[1,3].hv, channel_2.Channel[1,4].H[1] / channel_2.Channel[1,3].D_flow_v)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */ = semiLinear(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */,data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,"channel_2.Channel[1,3].D_flow_v",equationIndexes));
  TRACE_POP
}
/*
equation index: 226
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].p[2] = channel_2.Channel[1,5].pv - (channel_2.Channel[1,5].dp_fric + channel_2.Channel[1,5].dp_piez + $DER.channel_2.Channel[1,5].D_flow_v * channel_2.Channel[1,5].deltaLpipe / channel_2.Channel[1,5].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ = data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */ + (data->localData[0]->realVars[66] /* der(channel_2.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[89] /* channel_2.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */,"channel_2.Channel[1,5].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 227
type: SIMPLE_ASSIGN
valve_2.state_a.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_2.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->localData[0]->realVars[785] /* valve_2.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 228
type: SIMPLE_ASSIGN
valve_2.p = max(channel_2.Channel[1,5].p[2], channel_3.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->localData[0]->realVars[781] /* valve_2.p variable */ = fmax(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */,data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}
/*
equation index: 229
type: SIMPLE_ASSIGN
valve_2.dp = channel_2.Channel[1,5].p[2] - channel_3.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->localData[0]->realVars[777] /* valve_2.dp variable */ = data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}
/*
equation index: 230
type: SIMPLE_ASSIGN
valve_2.x = valve_2.dp / valve_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->localData[0]->realVars[788] /* valve_2.x variable */ = DIVISION_SIM(data->localData[0]->realVars[777] /* valve_2.dp variable */,data->localData[0]->realVars[781] /* valve_2.p variable */,"valve_2.p",equationIndexes);
  TRACE_POP
}
/*
equation index: 231
type: SIMPLE_ASSIGN
valve_2.xs = max(-valve_2.Fxt, min(valve_2.x, valve_2.Fxt))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->localData[0]->realVars[789] /* valve_2.xs variable */ = fmax((-data->localData[0]->realVars[774] /* valve_2.Fxt variable */),fmin(data->localData[0]->realVars[788] /* valve_2.x variable */,data->localData[0]->realVars[774] /* valve_2.Fxt variable */));
  TRACE_POP
}
/*
equation index: 232
type: SIMPLE_ASSIGN
valve_2.Y = 1.0 + (-0.3333333333333333) * abs(valve_2.xs) / valve_2.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->localData[0]->realVars[776] /* valve_2.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[789] /* valve_2.xs variable */),data->localData[0]->realVars[774] /* valve_2.Fxt variable */,"valve_2.Fxt",equationIndexes));
  TRACE_POP
}
/*
equation index: 233
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 234
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 235
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 236
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_piez = 9.806649999999999 * channel_1.Channel[1,4].stateFlow.d * channel_1.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[17] /* channel_1.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_fric = channel_1.Channel[1,3].pv - channel_1.Channel[1,4].pv - (channel_1.Channel[1,3].dp_piez + $DER.channel_1.Channel[1,3].D_flow_v * channel_1.Channel[1,3].deltaLpipe / channel_1.Channel[1,3].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */ = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */ + (data->localData[0]->realVars[50] /* der(channel_1.Channel[1,3].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[21] /* channel_1.Channel[1,3].deltaLpipe PARAM */,data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */,"channel_1.Channel[1,3].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp9)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp10 = ((-((tmp1 * tmp1)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp2 * tmp2)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp3 * tmp3)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp7 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp7)
    {
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = DIVISION_SIM((-((tmp5 * tmp5))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp6 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp8 = ((-((tmp6 * tmp6)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).cp",equationIndexes));
    }
    tmp10 = tmp8;
  }
  data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp10);
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].stateFlow.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].w_flow_v = channel_1.Channel[1,5].Dv / (channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */),"channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,5].w_flow_v)) * channel_1.Channel[1,5].w_flow_v ^ 2.0 * channel_1.Channel[1,5].Xi_flow * channel_1.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[577] /* channel_1.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].D_flow_v = channel_1.Channel[1,5].deltaVFlow * (channel_1.Channel[1,5].drdp * $DER.channel_1.Channel[1,5].pv + channel_1.Channel[1,5].drdh * $DER.channel_1.Channel[1,5].hv) + channel_1.Channel[1,5].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */) * (data->localData[0]->realVars[61] /* der(channel_1.Channel[1,5].pv) STATE_DER */) + (data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */)) + data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].Dv = (*Real*)(sign(channel_1.Channel[1,4].D_flow_v)) * max(abs(channel_1.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].w_flow_v = channel_1.Channel[1,4].Dv / (channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */),"channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,4].w_flow_v)) * channel_1.Channel[1,4].w_flow_v ^ 2.0 * channel_1.Channel[1,4].Xi_flow * channel_1.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[576] /* channel_1.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].D_flow_v = channel_1.Channel[1,4].deltaVFlow * (channel_1.Channel[1,4].drdp * $DER.channel_1.Channel[1,4].pv + channel_1.Channel[1,4].drdh * $DER.channel_1.Channel[1,4].hv) + channel_1.Channel[1,4].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */) * (data->localData[0]->realVars[60] /* der(channel_1.Channel[1,4].pv) STATE_DER */) + (data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */)) + data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].Dv = (*Real*)(sign(channel_1.Channel[1,3].D_flow_v)) * max(abs(channel_1.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].w_flow_v = channel_1.Channel[1,3].Dv / (channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */),"channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].D_flow_v = channel_1.Channel[1,3].deltaVFlow * (channel_1.Channel[1,3].drdp * $DER.channel_1.Channel[1,3].pv + channel_1.Channel[1,3].drdh * $DER.channel_1.Channel[1,3].hv) + channel_1.Channel[1,3].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */) * (data->localData[0]->realVars[59] /* der(channel_1.Channel[1,3].pv) STATE_DER */) + (data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */)) + data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].Dv = (*Real*)(sign(channel_1.Channel[1,2].D_flow_v)) * max(abs(channel_1.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].w_flow_v = channel_1.Channel[1,2].Dv / (channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */),"channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].D_flow_v = channel_1.Channel[1,2].deltaVFlow * (channel_1.Channel[1,2].drdp * $DER.channel_1.Channel[1,2].pv + channel_1.Channel[1,2].drdh * $DER.channel_1.Channel[1,2].hv) + channel_1.Channel[1,2].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */ = (data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */) * (data->localData[0]->realVars[58] /* der(channel_1.Channel[1,2].pv) STATE_DER */) + (data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */)) + data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].H[1] = semiLinear(channel_1.Channel[1,1].D_flow_v, Source_2.ports[1].h_outflow, channel_1.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].Dv = (*Real*)(sign(channel_1.Channel[1,1].D_flow_v)) * max(abs(channel_1.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */))) * (fmax(fabs(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */),0.0001));
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].w_flow_v = channel_1.Channel[1,1].Dv / (channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */),"channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].H[2] = channel_1.Channel[1,1].H[1] - channel_1.Channel[1,1].deltaVFlow * channel_1.Channel[1,1].stateFlow.d * $DER.channel_1.Channel[1,1].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */ = data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ - ((data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */) * (data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].H[1] = semiLinear(channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,1].H[2] / channel_1.Channel[1,2].D_flow_v, channel_1.Channel[1,2].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes), data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].H[2] = channel_1.Channel[1,2].H[1] - channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].stateFlow.d * $DER.channel_1.Channel[1,2].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */ = data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ - ((data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * ((data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */) * (data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[1] = semiLinear(channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,2].H[2] / channel_1.Channel[1,3].D_flow_v, channel_1.Channel[1,3].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes), data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].H[2] = channel_1.Channel[1,3].H[1] - channel_1.Channel[1,3].deltaVFlow * channel_1.Channel[1,3].stateFlow.d * $DER.channel_1.Channel[1,3].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */ = data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ - ((data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].H[1] = semiLinear(channel_1.Channel[1,4].D_flow_v, channel_1.Channel[1,3].H[2] / channel_1.Channel[1,4].D_flow_v, channel_1.Channel[1,4].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].H[2] = channel_1.Channel[1,4].H[1] - channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].stateFlow.d * $DER.channel_1.Channel[1,4].hv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */ = data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ - ((data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * ((data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */) * (data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */)));
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].H[1] = semiLinear(channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,4].H[2] / channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,5].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,"channel_1.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_piez = 9.806649999999999 * channel_1.Channel[1,5].stateFlow.d * channel_1.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[18] /* channel_1.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].p[2] = channel_1.Channel[1,5].pv - (channel_1.Channel[1,5].dp_fric + channel_1.Channel[1,5].dp_piez + $DER.channel_1.Channel[1,5].D_flow_v * channel_1.Channel[1,5].deltaLpipe / channel_1.Channel[1,5].f_flow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */ + (data->localData[0]->realVars[52] /* der(channel_1.Channel[1,5].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[23] /* channel_1.Channel[1,5].deltaLpipe PARAM */,data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */,"channel_1.Channel[1,5].f_flow",equationIndexes)));
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
valve_1.state_a.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_1.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[769] /* valve_1.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
valve_1.p = max(channel_1.Channel[1,5].p[2], channel_2.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[765] /* valve_1.p variable */ = fmax(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */,data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
valve_1.dp = channel_1.Channel[1,5].p[2] - channel_2.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[761] /* valve_1.dp variable */ = data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ - data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
valve_1.x = valve_1.dp / valve_1.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[772] /* valve_1.x variable */ = DIVISION_SIM(data->localData[0]->realVars[761] /* valve_1.dp variable */,data->localData[0]->realVars[765] /* valve_1.p variable */,"valve_1.p",equationIndexes);
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
valve_1.xs = max(-valve_1.Fxt, min(valve_1.x, valve_1.Fxt))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[773] /* valve_1.xs variable */ = fmax((-data->localData[0]->realVars[758] /* valve_1.Fxt variable */),fmin(data->localData[0]->realVars[772] /* valve_1.x variable */,data->localData[0]->realVars[758] /* valve_1.Fxt variable */));
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
valve_1.Y = 1.0 + (-0.3333333333333333) * abs(valve_1.xs) / valve_1.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[760] /* valve_1.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[773] /* valve_1.xs variable */),data->localData[0]->realVars[758] /* valve_1.Fxt variable */,"valve_1.Fxt",equationIndexes));
  TRACE_POP
}

void residualFunc303(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,303};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  /* iteration variables */
  for (i=0; i<30; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<30; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ = xloc[0];
  data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ = xloc[1];
  data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ = xloc[2];
  data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ = xloc[3];
  data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ = xloc[4];
  data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ = xloc[5];
  data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ = xloc[6];
  data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ = xloc[7];
  data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ = xloc[8];
  data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ = xloc[9];
  data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ = xloc[10];
  data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ = xloc[11];
  data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ = xloc[12];
  data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ = xloc[13];
  data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ = xloc[14];
  data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */ = xloc[15];
  data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */ = xloc[16];
  data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */ = xloc[17];
  data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */ = xloc[18];
  data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */ = xloc[19];
  data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */ = xloc[20];
  data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */ = xloc[21];
  data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */ = xloc[22];
  data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */ = xloc[23];
  data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */ = xloc[24];
  data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */ = xloc[25];
  data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */ = xloc[26];
  data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */ = xloc[27];
  data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */ = xloc[28];
  data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */ = xloc[29];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_110(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_111(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_112(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_113(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_114(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_115(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_116(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_117(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_118(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_119(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_120(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_121(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_122(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_123(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_124(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_125(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_126(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_127(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_128(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_129(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_130(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_131(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_132(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_133(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_134(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_135(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_136(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_137(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_138(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_139(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_140(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_141(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_142(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_143(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_144(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_145(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_146(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_147(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_148(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_149(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_150(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_151(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_152(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_153(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_154(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_155(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_156(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_157(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_158(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_159(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_160(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_161(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_162(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_163(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_164(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_165(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_166(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_167(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_168(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_169(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_170(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_171(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_172(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_173(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_174(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_175(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_176(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_177(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_178(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_179(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_180(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_181(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_182(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_183(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_184(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_185(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_186(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_187(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_188(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_189(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_190(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_191(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_192(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_193(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_194(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_195(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_196(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_197(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_198(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_199(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_200(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_201(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_202(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_203(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_204(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_205(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_206(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_207(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_208(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_209(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_210(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_211(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_212(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_213(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_214(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_215(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_216(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_217(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_218(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_219(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_220(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_221(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_222(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_223(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_224(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_225(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_226(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_227(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_228(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_229(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_230(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_231(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_232(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_233(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_234(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_235(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_236(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_237(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_238(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_239(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_240(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_241(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_242(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_243(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_244(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_245(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_246(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_247(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_248(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_249(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_250(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_251(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_252(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_253(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_254(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_255(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_256(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_257(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_258(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_259(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_260(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_261(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_262(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_263(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_264(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_265(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_266(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_267(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_268(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_269(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_270(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_271(data, threadData);

  /* local constraints */
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_272(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ + (-data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */) - ((data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * ((data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */) * (data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */)));

  res[1] = semiLinear(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */,data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,"channel_2.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */;

  tmp0 = data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */;
  res[2] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[641] /* channel_2.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */)))) - data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */;

  tmp1 = data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */;
  res[3] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */))) * (((tmp1 * tmp1)) * ((data->localData[0]->realVars[642] /* channel_2.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */)))) - data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */;

  tmp2 = data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */;
  res[4] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */))) * (((tmp2 * tmp2)) * ((data->localData[0]->realVars[643] /* channel_2.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */)))) - data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */;

  tmp3 = data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */;
  res[5] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */))) * (((tmp3 * tmp3)) * ((data->localData[0]->realVars[706] /* channel_3.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */)))) - data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */;

  tmp4 = data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */;
  res[6] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */))) * (((tmp4 * tmp4)) * ((data->localData[0]->realVars[707] /* channel_3.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */)))) - data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */;

  tmp5 = data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */;
  res[7] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */))) * (((tmp5 * tmp5)) * ((data->localData[0]->realVars[710] /* channel_3.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */)))) - data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */;

  res[8] = data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ + (-data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */) - ((data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */)));

  tmp6 = data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */;
  res[9] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */))) * (((tmp6 * tmp6)) * ((data->localData[0]->realVars[708] /* channel_3.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */)))) - data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */;

  res[10] = semiLinear(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */,data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,"channel_3.Channel[1,3].D_flow_v",equationIndexes)) - data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */;

  res[11] = semiLinear(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */,data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,"channel_3.Channel[1,4].D_flow_v",equationIndexes)) - data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */;

  tmp7 = data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */;
  res[12] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */))) * (((tmp7 * tmp7)) * ((data->localData[0]->realVars[709] /* channel_3.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */)))) - data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */;

  res[13] = semiLinear(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */,data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,"channel_3.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */;

  res[14] = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */,data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */,"channel_3.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */;

  res[15] = homotopy((omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_valveCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */)) * ((data->simulationInfo->realParameter[261] /* valve_2.Av PARAM */) * ((data->localData[0]->realVars[776] /* valve_2.Y variable */) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[781] /* valve_2.p variable */) * (data->localData[0]->realVars[789] /* valve_2.xs variable */), data->simulationInfo->realParameter[268] /* valve_2.dp_small PARAM */, data->localData[0]->realVars[785] /* valve_2.state_a.d variable */, data->localData[0]->realVars[787] /* valve_2.state_b.d variable */, 0, 1.0)))), (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_valveCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */)) * ((data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[777] /* valve_2.dp variable */,data->simulationInfo->realParameter[267] /* valve_2.dp_nominal PARAM */,"valve_2.dp_nominal",equationIndexes)))) - data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;

  res[16] = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,"channel_2.Channel[1,5].D_flow_v",equationIndexes), data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */) - data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */;

  res[17] = semiLinear(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,"channel_2.Channel[1,4].D_flow_v",equationIndexes), data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */) - data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */;

  res[18] = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */,data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */,"channel_2.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */;

  tmp8 = data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */;
  res[19] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */))) * (((tmp8 * tmp8)) * ((data->localData[0]->realVars[640] /* channel_2.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */)))) - data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */;

  res[20] = homotopy((omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_valveCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */)) * ((data->simulationInfo->realParameter[228] /* valve_1.Av PARAM */) * ((data->localData[0]->realVars[760] /* valve_1.Y variable */) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, (data->localData[0]->realVars[765] /* valve_1.p variable */) * (data->localData[0]->realVars[773] /* valve_1.xs variable */), data->simulationInfo->realParameter[235] /* valve_1.dp_small PARAM */, data->localData[0]->realVars[769] /* valve_1.state_a.d variable */, data->localData[0]->realVars[771] /* valve_1.state_b.d variable */, 0, 1.0)))), (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_valveCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */)) * ((data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */) * (DIVISION_SIM(data->localData[0]->realVars[761] /* valve_1.dp variable */,data->simulationInfo->realParameter[234] /* valve_1.dp_nominal PARAM */,"valve_1.dp_nominal",equationIndexes)))) - data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;

  res[21] = data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ + (-data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */) - ((data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * ((data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */) * (data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */)));

  res[22] = semiLinear(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */,data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,"channel_1.Channel[1,4].D_flow_v",equationIndexes)) - data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */;

  res[23] = (data->localData[0]->realVars[51] /* der(channel_1.Channel[1,4].D_flow_v) STATE_DER */) * (DIVISION_SIM(data->simulationInfo->realParameter[22] /* channel_1.Channel[1,4].deltaLpipe PARAM */,data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */,"channel_1.Channel[1,4].f_flow",equationIndexes)) + data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */ + data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */;

  tmp9 = data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */;
  res[24] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */))) * (((tmp9 * tmp9)) * ((data->localData[0]->realVars[573] /* channel_1.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */)))) - data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */;

  tmp10 = data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */;
  res[25] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */))) * (((tmp10 * tmp10)) * ((data->localData[0]->realVars[574] /* channel_1.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */)))) - data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */;

  tmp11 = data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */;
  res[26] = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */))) * (((tmp11 * tmp11)) * ((data->localData[0]->realVars[575] /* channel_1.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */)))) - data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */;

  res[27] = semiLinear(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */,data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,"channel_1.Channel[1,2].D_flow_v",equationIndexes)) - data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */;

  res[28] = semiLinear(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */,data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,"channel_1.Channel[1,3].D_flow_v",equationIndexes)) - data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */;

  res[29] = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, DIVISION_SIM(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */,data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */,"channel_1.Channel[1,1].D_flow_v",equationIndexes)) - data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS303(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+30] = {0,10,9,30,20,18,16,15,4,6,8,10,8,7,11,14,6,7,8,14,17,14,5,7,3,9,25,19,15,13,9};
  const int rowIndex[357] = {20,21,22,23,24,25,26,27,28,29,21,22,23,24,25,26,27,28,29,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,3,4,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,3,4,17,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,3,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,18,19,20,21,22,23,24,25,26,27,28,29,7,8,11,12,7,8,9,10,11,12,6,7,8,9,10,11,12,13,5,6,7,8,9,10,11,12,13,14,21,22,24,25,26,27,28,29,21,22,24,25,27,28,29,5,6,7,8,9,10,11,12,13,14,15,0,1,18,19,20,21,22,23,24,25,26,27,28,29,21,22,24,27,28,29,21,22,24,25,27,28,29,21,22,24,25,26,27,28,29,0,1,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,3,17,18,19,20,21,22,23,24,25,26,27,28,29,0,5,6,7,8,9,10,11,12,13,14,15,16,17,7,8,10,11,12,7,8,9,10,11,12,13,7,8,11,6,7,8,9,10,11,12,13,14,0,1,2,3,4,8,10,11,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,3,4,16,17,18,19,20,21,22,23,24,25,26,27,28,29,0,1,2,18,19,20,21,22,23,24,25,26,27,28,29,0,1,18,20,21,22,23,24,25,26,27,28,29,21,22,23,24,25,26,27,28,29};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((30+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(357*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 357;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(30*sizeof(int));
  inSysData->sparsePattern->maxColors = 20;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (30+1)*sizeof(int));
  
  for(i=2;i<30+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 357*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[29] = 1;
  inSysData->sparsePattern->colorCols[28] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[26] = 4;
  inSysData->sparsePattern->colorCols[25] = 5;
  inSysData->sparsePattern->colorCols[19] = 6;
  inSysData->sparsePattern->colorCols[18] = 7;
  inSysData->sparsePattern->colorCols[17] = 8;
  inSysData->sparsePattern->colorCols[16] = 9;
  inSysData->sparsePattern->colorCols[15] = 10;
  inSysData->sparsePattern->colorCols[24] = 10;
  inSysData->sparsePattern->colorCols[14] = 11;
  inSysData->sparsePattern->colorCols[23] = 11;
  inSysData->sparsePattern->colorCols[12] = 12;
  inSysData->sparsePattern->colorCols[22] = 12;
  inSysData->sparsePattern->colorCols[11] = 13;
  inSysData->sparsePattern->colorCols[20] = 13;
  inSysData->sparsePattern->colorCols[6] = 14;
  inSysData->sparsePattern->colorCols[21] = 14;
  inSysData->sparsePattern->colorCols[5] = 15;
  inSysData->sparsePattern->colorCols[13] = 15;
  inSysData->sparsePattern->colorCols[4] = 16;
  inSysData->sparsePattern->colorCols[10] = 16;
  inSysData->sparsePattern->colorCols[3] = 17;
  inSysData->sparsePattern->colorCols[9] = 17;
  inSysData->sparsePattern->colorCols[2] = 18;
  inSysData->sparsePattern->colorCols[1] = 19;
  inSysData->sparsePattern->colorCols[8] = 19;
  inSysData->sparsePattern->colorCols[0] = 20;
  inSysData->sparsePattern->colorCols[7] = 20;
}
void initializeStaticDataNLS303(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for channel_1.Channel[1,5].pv */
  sysData->nominal[i] = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[13].attribute /* channel_1.Channel[1,5].pv */.max;
  /* static nls data for channel_1.Channel[1,4].pv */
  sysData->nominal[i] = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[12].attribute /* channel_1.Channel[1,4].pv */.max;
  /* static nls data for channel_2.Channel[1,5].D_flow_v */
  sysData->nominal[i] = data->modelData->realVarsData[18].attribute /* channel_2.Channel[1,5].D_flow_v */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[18].attribute /* channel_2.Channel[1,5].D_flow_v */.min;
  sysData->max[i++]   = data->modelData->realVarsData[18].attribute /* channel_2.Channel[1,5].D_flow_v */.max;
  /* static nls data for channel_2.Channel[1,5].pv */
  sysData->nominal[i] = data->modelData->realVarsData[28].attribute /* channel_2.Channel[1,5].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[28].attribute /* channel_2.Channel[1,5].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[28].attribute /* channel_2.Channel[1,5].pv */.max;
  /* static nls data for channel_2.Channel[1,4].pv */
  sysData->nominal[i] = data->modelData->realVarsData[27].attribute /* channel_2.Channel[1,4].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[27].attribute /* channel_2.Channel[1,4].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[27].attribute /* channel_2.Channel[1,4].pv */.max;
  /* static nls data for channel_2.Channel[1,3].pv */
  sysData->nominal[i] = data->modelData->realVarsData[26].attribute /* channel_2.Channel[1,3].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[26].attribute /* channel_2.Channel[1,3].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[26].attribute /* channel_2.Channel[1,3].pv */.max;
  /* static nls data for channel_2.Channel[1,2].pv */
  sysData->nominal[i] = data->modelData->realVarsData[25].attribute /* channel_2.Channel[1,2].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[25].attribute /* channel_2.Channel[1,2].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[25].attribute /* channel_2.Channel[1,2].pv */.max;
  /* static nls data for channel_3.Channel[1,5].pv */
  sysData->nominal[i] = data->modelData->realVarsData[43].attribute /* channel_3.Channel[1,5].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[43].attribute /* channel_3.Channel[1,5].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[43].attribute /* channel_3.Channel[1,5].pv */.max;
  /* static nls data for channel_3.Channel[1,4].pv */
  sysData->nominal[i] = data->modelData->realVarsData[42].attribute /* channel_3.Channel[1,4].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[42].attribute /* channel_3.Channel[1,4].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[42].attribute /* channel_3.Channel[1,4].pv */.max;
  /* static nls data for channel_3.Channel[1,3].pv */
  sysData->nominal[i] = data->modelData->realVarsData[41].attribute /* channel_3.Channel[1,3].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[41].attribute /* channel_3.Channel[1,3].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[41].attribute /* channel_3.Channel[1,3].pv */.max;
  /* static nls data for channel_3.Channel[1,2].pv */
  sysData->nominal[i] = data->modelData->realVarsData[40].attribute /* channel_3.Channel[1,2].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[40].attribute /* channel_3.Channel[1,2].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[40].attribute /* channel_3.Channel[1,2].pv */.max;
  /* static nls data for channel_1.Channel[1,3].pv */
  sysData->nominal[i] = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[11].attribute /* channel_1.Channel[1,3].pv */.max;
  /* static nls data for channel_1.Channel[1,2].pv */
  sysData->nominal[i] = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[10].attribute /* channel_1.Channel[1,2].pv */.max;
  /* static nls data for channel_3.Channel[1,1].pv */
  sysData->nominal[i] = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[39].attribute /* channel_3.Channel[1,1].pv */.max;
  /* static nls data for channel_2.Channel[1,1].pv */
  sysData->nominal[i] = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[24].attribute /* channel_2.Channel[1,1].pv */.max;
  /* static nls data for channel_1.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* channel_1.Channel[1,1].hv */.max;
  /* static nls data for channel_1.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[6].attribute /* channel_1.Channel[1,2].hv */.max;
  /* static nls data for channel_1.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* channel_1.Channel[1,3].hv */.max;
  /* static nls data for channel_2.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[19].attribute /* channel_2.Channel[1,1].hv */.max;
  /* static nls data for channel_2.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[21].attribute /* channel_2.Channel[1,3].hv */.max;
  /* static nls data for channel_3.Channel[1,1].hv */
  sysData->nominal[i] = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[34].attribute /* channel_3.Channel[1,1].hv */.max;
  /* static nls data for channel_3.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[37].attribute /* channel_3.Channel[1,4].hv */.max;
  /* static nls data for channel_3.Channel[1,3].hv */
  sysData->nominal[i] = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[36].attribute /* channel_3.Channel[1,3].hv */.max;
  /* static nls data for channel_3.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[38].attribute /* channel_3.Channel[1,5].hv */.max;
  /* static nls data for channel_3.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[35].attribute /* channel_3.Channel[1,2].hv */.max;
  /* static nls data for channel_2.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[23].attribute /* channel_2.Channel[1,5].hv */.max;
  /* static nls data for channel_2.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[22].attribute /* channel_2.Channel[1,4].hv */.max;
  /* static nls data for channel_2.Channel[1,2].hv */
  sysData->nominal[i] = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[20].attribute /* channel_2.Channel[1,2].hv */.max;
  /* static nls data for channel_1.Channel[1,5].hv */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* channel_1.Channel[1,5].hv */.max;
  /* static nls data for channel_1.Channel[1,4].hv */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* channel_1.Channel[1,4].hv */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS303(sysData);
}

void getIterationVarsNLS303(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */;
  array[1] = data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */;
  array[2] = data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;
  array[3] = data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */;
  array[4] = data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */;
  array[5] = data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */;
  array[6] = data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */;
  array[7] = data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */;
  array[8] = data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */;
  array[9] = data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */;
  array[10] = data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */;
  array[11] = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */;
  array[12] = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */;
  array[13] = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  array[14] = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  array[15] = data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */;
  array[16] = data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */;
  array[17] = data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */;
  array[18] = data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */;
  array[19] = data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */;
  array[20] = data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */;
  array[21] = data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */;
  array[22] = data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */;
  array[23] = data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */;
  array[24] = data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */;
  array[25] = data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */;
  array[26] = data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */;
  array[27] = data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */;
  array[28] = data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */;
  array[29] = data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[15].equationIndex = 1505;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0;
  nonLinearSystemData[15].mixedSystem = 0;
  nonLinearSystemData[15].residualFunc = residualFunc1505;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS1505;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS1505;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  
  nonLinearSystemData[14].equationIndex = 1475;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0;
  nonLinearSystemData[14].mixedSystem = 0;
  nonLinearSystemData[14].residualFunc = residualFunc1475;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac30_column;
  nonLinearSystemData[14].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac30;
  nonLinearSystemData[14].jacobianIndex = 11 /*jacInx*/;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS1475;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS1475;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  
  nonLinearSystemData[13].equationIndex = 1468;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0;
  nonLinearSystemData[13].mixedSystem = 0;
  nonLinearSystemData[13].residualFunc = residualFunc1468;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac29_column;
  nonLinearSystemData[13].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac29;
  nonLinearSystemData[13].jacobianIndex = 10 /*jacInx*/;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS1468;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS1468;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  
  nonLinearSystemData[12].equationIndex = 1461;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0;
  nonLinearSystemData[12].mixedSystem = 0;
  nonLinearSystemData[12].residualFunc = residualFunc1461;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac28_column;
  nonLinearSystemData[12].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac28;
  nonLinearSystemData[12].jacobianIndex = 9 /*jacInx*/;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS1461;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS1461;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  
  nonLinearSystemData[11].equationIndex = 1456;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0;
  nonLinearSystemData[11].mixedSystem = 0;
  nonLinearSystemData[11].residualFunc = residualFunc1456;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac27_column;
  nonLinearSystemData[11].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac27;
  nonLinearSystemData[11].jacobianIndex = 8 /*jacInx*/;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS1456;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS1456;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  
  nonLinearSystemData[10].equationIndex = 1410;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0;
  nonLinearSystemData[10].mixedSystem = 0;
  nonLinearSystemData[10].residualFunc = residualFunc1410;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1410;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1410;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  
  nonLinearSystemData[9].equationIndex = 1380;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 0;
  nonLinearSystemData[9].residualFunc = residualFunc1380;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac25_column;
  nonLinearSystemData[9].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac25;
  nonLinearSystemData[9].jacobianIndex = 7 /*jacInx*/;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS1380;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS1380;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 1373;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 0;
  nonLinearSystemData[8].residualFunc = residualFunc1373;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac24_column;
  nonLinearSystemData[8].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac24;
  nonLinearSystemData[8].jacobianIndex = 6 /*jacInx*/;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS1373;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS1373;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 1366;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 0;
  nonLinearSystemData[7].residualFunc = residualFunc1366;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac23_column;
  nonLinearSystemData[7].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac23;
  nonLinearSystemData[7].jacobianIndex = 5 /*jacInx*/;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS1366;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS1366;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 1361;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc1361;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac22_column;
  nonLinearSystemData[6].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac22;
  nonLinearSystemData[6].jacobianIndex = 4 /*jacInx*/;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS1361;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS1361;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 1314;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc1314;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac21_column;
  nonLinearSystemData[5].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac21;
  nonLinearSystemData[5].jacobianIndex = 3 /*jacInx*/;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS1314;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS1314;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 1307;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc1307;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac20_column;
  nonLinearSystemData[4].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac20;
  nonLinearSystemData[4].jacobianIndex = 2 /*jacInx*/;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS1307;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS1307;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 1300;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc1300;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac19_column;
  nonLinearSystemData[3].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac19;
  nonLinearSystemData[3].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS1300;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS1300;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 1295;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc1295;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac18_column;
  nonLinearSystemData[2].initialAnalyticalJacobian = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac18;
  nonLinearSystemData[2].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS1295;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS1295;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 1075;
  nonLinearSystemData[1].size = 22;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc1075;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS1075;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS1075;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 303;
  nonLinearSystemData[0].size = 30;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc303;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS303;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS303;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

