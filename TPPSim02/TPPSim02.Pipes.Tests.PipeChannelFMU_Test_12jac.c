/* Jacobians 17 */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 1293
type: SIMPLE_ASSIGN
channel_1.Channel.1.2.H.$pDERNLSJac18.dummyVarNLSJac18[1] = if channel_1.Channel[1,2].D_flow_v >= 0.0 then channel_1.Channel[1,1].H.SeedNLSJac18[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1293(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1293};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, 0.0, 8, GreaterEq);
  jacobian->tmpVars[0] /* channel_1.Channel.1.2.H.$pDERNLSJac18.dummyVarNLSJac18[1] JACOBIAN_DIFF_VAR */ = (tmp0?jacobian->seedVars[0] /* channel_1.Channel[1,1].H.SeedNLSJac18[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac18.dummyVarNLSJac18 = (if channel_1.Channel[1,1].D_flow_v >= 0.0 then 0.0 else channel_1.Channel.1.2.H.$pDERNLSJac18.dummyVarNLSJac18[1]) - channel_1.Channel[1,1].H.SeedNLSJac18[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1294(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1294};
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, 0.0, 7, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac18.dummyVarNLSJac18 JACOBIAN_VAR */ = (tmp1?0.0:jacobian->tmpVars[0] /* channel_1.Channel.1.2.H.$pDERNLSJac18.dummyVarNLSJac18[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_1.Channel[1,1].H.SeedNLSJac18[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac18_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac18;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac18_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac18;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1293(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1294(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1298
type: SIMPLE_ASSIGN
channel_1.Channel.1.3.H.$pDERNLSJac19.dummyVarNLSJac19[1] = if channel_1.Channel[1,3].D_flow_v >= 0.0 then channel_1.Channel[1,2].H.SeedNLSJac19[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1298(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1298};
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, 0.0, 9, GreaterEq);
  jacobian->tmpVars[0] /* channel_1.Channel.1.3.H.$pDERNLSJac19.dummyVarNLSJac19[1] JACOBIAN_DIFF_VAR */ = (tmp2?jacobian->seedVars[0] /* channel_1.Channel[1,2].H.SeedNLSJac19[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac19.dummyVarNLSJac19 = (if channel_1.Channel[1,2].D_flow_v >= 0.0 then 0.0 else channel_1.Channel.1.3.H.$pDERNLSJac19.dummyVarNLSJac19[1]) - channel_1.Channel[1,2].H.SeedNLSJac19[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1299(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1299};
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp3, data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, 0.0, 8, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac19.dummyVarNLSJac19 JACOBIAN_VAR */ = (tmp3?0.0:jacobian->tmpVars[0] /* channel_1.Channel.1.3.H.$pDERNLSJac19.dummyVarNLSJac19[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_1.Channel[1,2].H.SeedNLSJac19[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac19_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac19;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac19_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac19;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1298(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1299(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1305
type: SIMPLE_ASSIGN
channel_1.Channel.1.3.H.$pDERNLSJac20.dummyVarNLSJac20[2] = if channel_1.Channel[1,3].D_flow_v >= 0.0 then 0.0 else channel_1.Channel[1,4].H.SeedNLSJac20[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1305(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1305};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, 0.0, 9, GreaterEq);
  jacobian->tmpVars[0] /* channel_1.Channel.1.3.H.$pDERNLSJac20.dummyVarNLSJac20[2] JACOBIAN_DIFF_VAR */ = (tmp4?0.0:jacobian->seedVars[0] /* channel_1.Channel[1,4].H.SeedNLSJac20[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac20.dummyVarNLSJac20 = (if channel_1.Channel[1,4].D_flow_v >= 0.0 then channel_1.Channel.1.3.H.$pDERNLSJac20.dummyVarNLSJac20[2] else 0.0) - channel_1.Channel[1,4].H.SeedNLSJac20[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1306(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, 0.0, 10, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (tmp5?jacobian->tmpVars[0] /* channel_1.Channel.1.3.H.$pDERNLSJac20.dummyVarNLSJac20[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_1.Channel[1,4].H.SeedNLSJac20[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac20_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac20;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac20_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac20;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1305(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1306(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1312
type: SIMPLE_ASSIGN
channel_1.Channel.1.4.H.$pDERNLSJac21.dummyVarNLSJac21[2] = if channel_1.Channel[1,4].D_flow_v >= 0.0 then 0.0 else channel_1.Channel[1,5].H.SeedNLSJac21[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1312(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1312};
  modelica_boolean tmp6;
  RELATIONHYSTERESIS(tmp6, data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, 0.0, 10, GreaterEq);
  jacobian->tmpVars[0] /* channel_1.Channel.1.4.H.$pDERNLSJac21.dummyVarNLSJac21[2] JACOBIAN_DIFF_VAR */ = (tmp6?0.0:jacobian->seedVars[0] /* channel_1.Channel[1,5].H.SeedNLSJac21[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac21.dummyVarNLSJac21 = (if channel_1.Channel[1,5].D_flow_v >= 0.0 then channel_1.Channel.1.4.H.$pDERNLSJac21.dummyVarNLSJac21[2] else 0.0) - channel_1.Channel[1,5].H.SeedNLSJac21[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1313(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1313};
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp7, data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, 0.0, 11, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac21.dummyVarNLSJac21 JACOBIAN_VAR */ = (tmp7?jacobian->tmpVars[0] /* channel_1.Channel.1.4.H.$pDERNLSJac21.dummyVarNLSJac21[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_1.Channel[1,5].H.SeedNLSJac21[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac21_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac21;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac21_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac21;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1312(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1313(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1359
type: SIMPLE_ASSIGN
channel_2.Channel.1.1.H.$pDERNLSJac22.dummyVarNLSJac22[2] = if channel_2.Channel[1,1].D_flow_v >= 0.0 then 0.0 else channel_2.Channel[1,2].H.SeedNLSJac22[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1359(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1359};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, 0.0, 13, GreaterEq);
  jacobian->tmpVars[0] /* channel_2.Channel.1.1.H.$pDERNLSJac22.dummyVarNLSJac22[2] JACOBIAN_DIFF_VAR */ = (tmp8?0.0:jacobian->seedVars[0] /* channel_2.Channel[1,2].H.SeedNLSJac22[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac22.dummyVarNLSJac22 = (if channel_2.Channel[1,2].D_flow_v >= 0.0 then channel_2.Channel.1.1.H.$pDERNLSJac22.dummyVarNLSJac22[2] else 0.0) - channel_2.Channel[1,2].H.SeedNLSJac22[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1360(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1360};
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, 0.0, 12, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac22.dummyVarNLSJac22 JACOBIAN_VAR */ = (tmp9?jacobian->tmpVars[0] /* channel_2.Channel.1.1.H.$pDERNLSJac22.dummyVarNLSJac22[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_2.Channel[1,2].H.SeedNLSJac22[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac22_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac22;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac22_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac22;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1359(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1360(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1364
type: SIMPLE_ASSIGN
channel_2.Channel.1.3.H.$pDERNLSJac23.dummyVarNLSJac23[1] = if channel_2.Channel[1,3].D_flow_v >= 0.0 then channel_2.Channel[1,2].H.SeedNLSJac23[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1364(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1364};
  modelica_boolean tmp10;
  RELATIONHYSTERESIS(tmp10, data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, 0.0, 14, GreaterEq);
  jacobian->tmpVars[0] /* channel_2.Channel.1.3.H.$pDERNLSJac23.dummyVarNLSJac23[1] JACOBIAN_DIFF_VAR */ = (tmp10?jacobian->seedVars[0] /* channel_2.Channel[1,2].H.SeedNLSJac23[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac23.dummyVarNLSJac23 = (if channel_2.Channel[1,2].D_flow_v >= 0.0 then 0.0 else channel_2.Channel.1.3.H.$pDERNLSJac23.dummyVarNLSJac23[1]) - channel_2.Channel[1,2].H.SeedNLSJac23[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1365};
  modelica_boolean tmp11;
  RELATIONHYSTERESIS(tmp11, data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, 0.0, 12, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac23.dummyVarNLSJac23 JACOBIAN_VAR */ = (tmp11?0.0:jacobian->tmpVars[0] /* channel_2.Channel.1.3.H.$pDERNLSJac23.dummyVarNLSJac23[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_2.Channel[1,2].H.SeedNLSJac23[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac23_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac23;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac23_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac23;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1364(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1365(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1371
type: SIMPLE_ASSIGN
channel_2.Channel.1.3.H.$pDERNLSJac24.dummyVarNLSJac24[2] = if channel_2.Channel[1,3].D_flow_v >= 0.0 then 0.0 else channel_2.Channel[1,4].H.SeedNLSJac24[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1371(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1371};
  modelica_boolean tmp12;
  RELATIONHYSTERESIS(tmp12, data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, 0.0, 14, GreaterEq);
  jacobian->tmpVars[0] /* channel_2.Channel.1.3.H.$pDERNLSJac24.dummyVarNLSJac24[2] JACOBIAN_DIFF_VAR */ = (tmp12?0.0:jacobian->seedVars[0] /* channel_2.Channel[1,4].H.SeedNLSJac24[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac24.dummyVarNLSJac24 = (if channel_2.Channel[1,4].D_flow_v >= 0.0 then channel_2.Channel.1.3.H.$pDERNLSJac24.dummyVarNLSJac24[2] else 0.0) - channel_2.Channel[1,4].H.SeedNLSJac24[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1372(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1372};
  modelica_boolean tmp13;
  RELATIONHYSTERESIS(tmp13, data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, 0.0, 15, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac24.dummyVarNLSJac24 JACOBIAN_VAR */ = (tmp13?jacobian->tmpVars[0] /* channel_2.Channel.1.3.H.$pDERNLSJac24.dummyVarNLSJac24[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_2.Channel[1,4].H.SeedNLSJac24[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac24_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac24;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac24_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac24;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1371(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1372(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1378
type: SIMPLE_ASSIGN
channel_2.Channel.1.4.H.$pDERNLSJac25.dummyVarNLSJac25[2] = if channel_2.Channel[1,4].D_flow_v >= 0.0 then 0.0 else channel_2.Channel[1,5].H.SeedNLSJac25[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1378(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1378};
  modelica_boolean tmp14;
  RELATIONHYSTERESIS(tmp14, data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, 0.0, 15, GreaterEq);
  jacobian->tmpVars[0] /* channel_2.Channel.1.4.H.$pDERNLSJac25.dummyVarNLSJac25[2] JACOBIAN_DIFF_VAR */ = (tmp14?0.0:jacobian->seedVars[0] /* channel_2.Channel[1,5].H.SeedNLSJac25[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac25.dummyVarNLSJac25 = (if channel_2.Channel[1,5].D_flow_v >= 0.0 then channel_2.Channel.1.4.H.$pDERNLSJac25.dummyVarNLSJac25[2] else 0.0) - channel_2.Channel[1,5].H.SeedNLSJac25[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1379(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1379};
  modelica_boolean tmp15;
  RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, 0.0, 16, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac25.dummyVarNLSJac25 JACOBIAN_VAR */ = (tmp15?jacobian->tmpVars[0] /* channel_2.Channel.1.4.H.$pDERNLSJac25.dummyVarNLSJac25[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_2.Channel[1,5].H.SeedNLSJac25[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac25_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac25;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac25_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac25;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1378(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1379(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1454
type: SIMPLE_ASSIGN
channel_3.Channel.1.2.H.$pDERNLSJac27.dummyVarNLSJac27[1] = if channel_3.Channel[1,2].D_flow_v >= 0.0 then channel_3.Channel[1,1].H.SeedNLSJac27[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1454(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp16;
  RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, 0.0, 18, GreaterEq);
  jacobian->tmpVars[0] /* channel_3.Channel.1.2.H.$pDERNLSJac27.dummyVarNLSJac27[1] JACOBIAN_DIFF_VAR */ = (tmp16?jacobian->seedVars[0] /* channel_3.Channel[1,1].H.SeedNLSJac27[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1455
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac27.dummyVarNLSJac27 = (if channel_3.Channel[1,1].D_flow_v >= 0.0 then 0.0 else channel_3.Channel.1.2.H.$pDERNLSJac27.dummyVarNLSJac27[1]) - channel_3.Channel[1,1].H.SeedNLSJac27[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1455(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1455};
  modelica_boolean tmp17;
  RELATIONHYSTERESIS(tmp17, data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, 0.0, 17, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac27.dummyVarNLSJac27 JACOBIAN_VAR */ = (tmp17?0.0:jacobian->tmpVars[0] /* channel_3.Channel.1.2.H.$pDERNLSJac27.dummyVarNLSJac27[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_3.Channel[1,1].H.SeedNLSJac27[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac27_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac27;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac27_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac27;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1454(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1455(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1459
type: SIMPLE_ASSIGN
channel_3.Channel.1.2.H.$pDERNLSJac28.dummyVarNLSJac28[2] = if channel_3.Channel[1,2].D_flow_v >= 0.0 then 0.0 else channel_3.Channel[1,3].H.SeedNLSJac28[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1459(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1459};
  modelica_boolean tmp18;
  RELATIONHYSTERESIS(tmp18, data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, 0.0, 18, GreaterEq);
  jacobian->tmpVars[0] /* channel_3.Channel.1.2.H.$pDERNLSJac28.dummyVarNLSJac28[2] JACOBIAN_DIFF_VAR */ = (tmp18?0.0:jacobian->seedVars[0] /* channel_3.Channel[1,3].H.SeedNLSJac28[1] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac28.dummyVarNLSJac28 = (if channel_3.Channel[1,3].D_flow_v >= 0.0 then channel_3.Channel.1.2.H.$pDERNLSJac28.dummyVarNLSJac28[2] else 0.0) - channel_3.Channel[1,3].H.SeedNLSJac28[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1460(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp19;
  RELATIONHYSTERESIS(tmp19, data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, 0.0, 19, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac28.dummyVarNLSJac28 JACOBIAN_VAR */ = (tmp19?jacobian->tmpVars[0] /* channel_3.Channel.1.2.H.$pDERNLSJac28.dummyVarNLSJac28[2] JACOBIAN_DIFF_VAR */:0.0) - jacobian->seedVars[0] /* channel_3.Channel[1,3].H.SeedNLSJac28[1] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac28_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac28;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac28_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac28;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1459(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1460(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1466
type: SIMPLE_ASSIGN
channel_3.Channel.1.4.H.$pDERNLSJac29.dummyVarNLSJac29[1] = if channel_3.Channel[1,4].D_flow_v >= 0.0 then channel_3.Channel[1,3].H.SeedNLSJac29[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1466(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp20;
  RELATIONHYSTERESIS(tmp20, data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, 0.0, 20, GreaterEq);
  jacobian->tmpVars[0] /* channel_3.Channel.1.4.H.$pDERNLSJac29.dummyVarNLSJac29[1] JACOBIAN_DIFF_VAR */ = (tmp20?jacobian->seedVars[0] /* channel_3.Channel[1,3].H.SeedNLSJac29[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac29.dummyVarNLSJac29 = (if channel_3.Channel[1,3].D_flow_v >= 0.0 then 0.0 else channel_3.Channel.1.4.H.$pDERNLSJac29.dummyVarNLSJac29[1]) - channel_3.Channel[1,3].H.SeedNLSJac29[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1467(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp21;
  RELATIONHYSTERESIS(tmp21, data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, 0.0, 19, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac29.dummyVarNLSJac29 JACOBIAN_VAR */ = (tmp21?0.0:jacobian->tmpVars[0] /* channel_3.Channel.1.4.H.$pDERNLSJac29.dummyVarNLSJac29[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_3.Channel[1,3].H.SeedNLSJac29[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac29_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac29;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac29_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac29;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1466(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1467(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1473
type: SIMPLE_ASSIGN
channel_3.Channel.1.5.H.$pDERNLSJac30.dummyVarNLSJac30[1] = if channel_3.Channel[1,5].D_flow_v >= 0.0 then channel_3.Channel[1,4].H.SeedNLSJac30[2] else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1473};
  modelica_boolean tmp22;
  RELATIONHYSTERESIS(tmp22, data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, 0.0, 21, GreaterEq);
  jacobian->tmpVars[0] /* channel_3.Channel.1.5.H.$pDERNLSJac30.dummyVarNLSJac30[1] JACOBIAN_DIFF_VAR */ = (tmp22?jacobian->seedVars[0] /* channel_3.Channel[1,4].H.SeedNLSJac30[2] SEED_VAR */:0.0);
  TRACE_POP
}

/*
equation index: 1474
type: SIMPLE_ASSIGN
$res1.$pDERNLSJac30.dummyVarNLSJac30 = (if channel_3.Channel[1,4].D_flow_v >= 0.0 then 0.0 else channel_3.Channel.1.5.H.$pDERNLSJac30.dummyVarNLSJac30[1]) - channel_3.Channel[1,4].H.SeedNLSJac30[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp23;
  RELATIONHYSTERESIS(tmp23, data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, 0.0, 20, GreaterEq);
  jacobian->resultVars[0] /* $res1.$pDERNLSJac30.dummyVarNLSJac30 JACOBIAN_VAR */ = (tmp23?0.0:jacobian->tmpVars[0] /* channel_3.Channel.1.5.H.$pDERNLSJac30.dummyVarNLSJac30[1] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* channel_3.Channel[1,4].H.SeedNLSJac30[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac30_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac30;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacNLSJac30_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_NLSJac30;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1473(data, threadData, jacobian, parentJacobian);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1474(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac18(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac19(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac20(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac21(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac22(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac23(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac24(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac25(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac27(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac28(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac29(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianNLSJac30(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+48] = {0,4,6,7,7,6,4,6,7,7,7,4,4,4,4,5,7,7,7,6,8,7,7,7,7,4,4,4,4,4,5,7,7,7,5,8,7,7,7,5,4,4,4,4,4,2,2,2,2};
  const int rowIndex[258] = {0,5,6,10,1,5,6,7,10,11,2,6,7,8,10,11,12,3,7,8,9,11,12,13,4,8,9,12,13,24,0,5,6,10,1,5,6,7,10,11,2,6,7,8,10,11,12,3,7,8,9,11,12,13,4,8,9,12,13,19,24,0,1,6,10,1,2,7,11,2,3,8,12,3,4,9,13,14,19,20,24,25,15,19,20,21,24,25,26,16,20,21,22,25,26,27,17,21,22,23,26,27,28,18,22,23,27,28,39,4,9,13,14,19,20,24,25,15,19,20,21,24,25,26,16,20,21,22,25,26,27,17,21,22,23,26,27,28,18,22,23,27,28,34,39,4,14,19,24,14,15,20,25,15,16,21,26,16,17,22,27,17,18,23,28,29,34,35,39,40,30,34,35,36,39,40,41,31,35,36,37,40,41,42,32,36,37,38,41,42,43,33,37,38,42,43,18,23,28,29,34,35,39,40,30,34,35,36,39,40,41,31,35,36,37,40,41,42,32,36,37,38,41,42,43,33,37,38,42,43,18,29,34,39,29,30,35,40,30,31,36,41,31,32,37,42,32,33,38,43,44,45,4,45,46,47,18,47};
  int i = 0;
  
  jacobian->sizeCols = 48;
  jacobian->sizeRows = 48;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(48,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(48,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((48+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(258*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 258;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(48*sizeof(int));
  jacobian->sparsePattern->maxColors = 8;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (48+1)*sizeof(int));
  
  for(i=2;i<48+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 258*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[17] = 1;
  jacobian->sparsePattern->colorCols[32] = 1;
  jacobian->sparsePattern->colorCols[2] = 2;
  jacobian->sparsePattern->colorCols[16] = 2;
  jacobian->sparsePattern->colorCols[30] = 2;
  jacobian->sparsePattern->colorCols[7] = 3;
  jacobian->sparsePattern->colorCols[15] = 3;
  jacobian->sparsePattern->colorCols[35] = 3;
  jacobian->sparsePattern->colorCols[33] = 3;
  jacobian->sparsePattern->colorCols[47] = 3;
  jacobian->sparsePattern->colorCols[1] = 4;
  jacobian->sparsePattern->colorCols[13] = 4;
  jacobian->sparsePattern->colorCols[20] = 4;
  jacobian->sparsePattern->colorCols[18] = 4;
  jacobian->sparsePattern->colorCols[31] = 4;
  jacobian->sparsePattern->colorCols[10] = 5;
  jacobian->sparsePattern->colorCols[3] = 5;
  jacobian->sparsePattern->colorCols[14] = 5;
  jacobian->sparsePattern->colorCols[27] = 5;
  jacobian->sparsePattern->colorCols[45] = 5;
  jacobian->sparsePattern->colorCols[34] = 5;
  jacobian->sparsePattern->colorCols[42] = 5;
  jacobian->sparsePattern->colorCols[6] = 6;
  jacobian->sparsePattern->colorCols[12] = 6;
  jacobian->sparsePattern->colorCols[19] = 6;
  jacobian->sparsePattern->colorCols[26] = 6;
  jacobian->sparsePattern->colorCols[23] = 6;
  jacobian->sparsePattern->colorCols[40] = 6;
  jacobian->sparsePattern->colorCols[37] = 6;
  jacobian->sparsePattern->colorCols[0] = 7;
  jacobian->sparsePattern->colorCols[8] = 7;
  jacobian->sparsePattern->colorCols[24] = 7;
  jacobian->sparsePattern->colorCols[21] = 7;
  jacobian->sparsePattern->colorCols[28] = 7;
  jacobian->sparsePattern->colorCols[29] = 7;
  jacobian->sparsePattern->colorCols[41] = 7;
  jacobian->sparsePattern->colorCols[38] = 7;
  jacobian->sparsePattern->colorCols[5] = 8;
  jacobian->sparsePattern->colorCols[11] = 8;
  jacobian->sparsePattern->colorCols[9] = 8;
  jacobian->sparsePattern->colorCols[25] = 8;
  jacobian->sparsePattern->colorCols[22] = 8;
  jacobian->sparsePattern->colorCols[44] = 8;
  jacobian->sparsePattern->colorCols[39] = 8;
  jacobian->sparsePattern->colorCols[36] = 8;
  jacobian->sparsePattern->colorCols[43] = 8;
  jacobian->sparsePattern->colorCols[46] = 8;
  TRACE_POP
  return 0;
}


