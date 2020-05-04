/* Initialization */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_11mix.h"
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
Sink_2.medium.MM = 0.018015268
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[534] /* Sink_2.medium.MM variable */ = 0.018015268;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
Sink_2.medium.R = 461.5229593031866
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[535] /* Sink_2.medium.R variable */ = 461.5229593031866;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
Sink_2.medium.X[1] = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[538] /* Sink_2.medium.X[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
Sink_2.state.phase = 1
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->integerVars[53] /* Sink_2.state.phase DISCRETE */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
Source_2.medium.MM = 0.018015268
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[547] /* Source_2.medium.MM variable */ = 0.018015268;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
Source_2.medium.R = 461.5229593031866
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[548] /* Source_2.medium.R variable */ = 461.5229593031866;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
Source_2.medium.X[1] = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[551] /* Source_2.medium.X[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
Source_2.X_in_internal[1] = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[546] /* Source_2.X_in_internal[1] variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
valve_1.state_a.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->integerVars[70] /* valve_1.state_a.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
valve_1.state_b.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->integerVars[71] /* valve_1.state_b.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
valve_2.state_a.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->integerVars[72] /* valve_2.state_a.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
valve_2.state_b.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->integerVars[73] /* valve_2.state_b.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].Xi_flow = 0.05476062083106394 * channel_3.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[709] /* channel_3.Channel[1,4].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[154] /* channel_3.Channel[1,4].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].Xi_flow = 0.05476062083106394 * channel_3.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[708] /* channel_3.Channel[1,3].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[153] /* channel_3.Channel[1,3].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].Xi_flow = 0.05476062083106394 * channel_3.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[707] /* channel_3.Channel[1,2].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[152] /* channel_3.Channel[1,2].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].Xi_flow = 0.05476062083106394 * channel_3.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[706] /* channel_3.Channel[1,1].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[151] /* channel_3.Channel[1,1].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].Xi_flow = 0.05476062083106394 * channel_2.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[644] /* channel_2.Channel[1,5].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[89] /* channel_2.Channel[1,5].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].Xi_flow = 0.05476062083106394 * channel_2.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[643] /* channel_2.Channel[1,4].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[88] /* channel_2.Channel[1,4].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].Xi_flow = 0.05476062083106394 * channel_2.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[642] /* channel_2.Channel[1,3].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[87] /* channel_2.Channel[1,3].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].Xi_flow = 0.05476062083106394 * channel_2.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[641] /* channel_2.Channel[1,2].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[86] /* channel_2.Channel[1,2].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].Xi_flow = 0.05476062083106394 * channel_2.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[640] /* channel_2.Channel[1,1].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[85] /* channel_2.Channel[1,1].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].Xi_flow = 0.05476062083106394 * channel_1.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[577] /* channel_1.Channel[1,5].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[23] /* channel_1.Channel[1,5].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].Xi_flow = 0.05476062083106394 * channel_1.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[576] /* channel_1.Channel[1,4].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[22] /* channel_1.Channel[1,4].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].Xi_flow = 0.05476062083106394 * channel_1.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[575] /* channel_1.Channel[1,3].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[21] /* channel_1.Channel[1,3].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].Xi_flow = 0.05476062083106394 * channel_1.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[574] /* channel_1.Channel[1,2].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[20] /* channel_1.Channel[1,2].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].Xi_flow = 0.05476062083106394 * channel_1.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[573] /* channel_1.Channel[1,1].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[19] /* channel_1.Channel[1,1].deltaLpipe PARAM */);
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
Sink_2.ports[1].h_outflow = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(Sink_2.p, Sink_2.T, 0).h
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
Sink_2.medium.phase = if Sink_2.ports[1].h_outflow < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(Sink_2.p).h or Sink_2.ports[1].h_outflow > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(Sink_2.p).h or Sink_2.p > 22064000.0 then 1 else 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp0 = Less(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */)._h);
  tmp1 = Greater(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */)._h);
  tmp2 = Greater(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,22064000.0);
  data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */ = (((tmp0 || tmp1) || tmp2)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
Sink_2.medium.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(Sink_2.p, Sink_2.ports[1].h_outflow, Sink_2.medium.phase, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[539] /* Sink_2.medium.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */, ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(DATA *data, threadData_t *threadData);


/*
equation index: 36
type: SIMPLE_ASSIGN
Sink_2.medium.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(Sink_2.p, Sink_2.ports[1].h_outflow, Sink_2.medium.phase, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[536] /* Sink_2.medium.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */, ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(DATA *data, threadData_t *threadData);


/*
equation index: 41
type: SIMPLE_ASSIGN
Source_2.ports[1].h_outflow = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(channel_1.Channel[1,1].pv, 573.15, 0).h
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, 573.15, ((modelica_integer) 0))._h;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
Source_2.medium.phase = if Source_2.ports[1].h_outflow < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(channel_1.Channel[1,1].pv).h or Source_2.ports[1].h_outflow > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(channel_1.Channel[1,1].pv).h or channel_1.Channel[1,1].pv > 22064000.0 then 1 else 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  tmp3 = Less(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */)._h);
  tmp4 = Greater(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */)._h);
  tmp5 = Greater(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */,22064000.0);
  data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */ = (((tmp3 || tmp4) || tmp5)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
Source_2.medium.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, Source_2.ports[1].h_outflow, Source_2.medium.phase, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[552] /* Source_2.medium.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */, ((modelica_integer) 0))._rho;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
Source_2.medium.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, Source_2.ports[1].h_outflow, Source_2.medium.phase, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->localData[0]->realVars[549] /* Source_2.medium.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */, ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(DATA *data, threadData_t *threadData);


/*
equation index: 47
type: SIMPLE_ASSIGN
valve_2.Av = 2.77e-05 * valve_2.Kv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[261] /* valve_2.Av PARAM */ = (2.77e-05) * (data->simulationInfo->realParameter[265] /* valve_2.Kv PARAM */);
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$DER.valve_2.filter.x[2] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[95] /* der(valve_2.filter.x[2]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
$DER.valve_2.filter.x[1] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->localData[0]->realVars[94] /* der(valve_2.filter.x[1]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 50
type: ARRAY_CALL_ASSIGN

valve_2.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, valve_2.filter.normalized)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  real_array tmp6;
  real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[272] /* valve_2.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), data->simulationInfo->booleanParameter[24] /* valve_2.filter.normalized PARAM */), &tmp6);
  TRACE_POP
}

/*
equation index: 51
type: ALGORITHM

  (valve_2.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valve_2.filter.cr, {}, {}, valve_2.filter.f_cut);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  real_array tmp7;
  base_array_t tmp8;
  base_array_t tmp9;
  real_array tmp10;
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[272] /* valve_2.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp8, 0, NULL);
  simple_alloc_1d_base_array(&tmp9, 0, NULL);
  real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[277] /* valve_2.filter.r[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp7, tmp8, tmp9, data->simulationInfo->realParameter[274] /* valve_2.filter.f_cut PARAM */ ,NULL ,NULL ,NULL), &tmp10);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
valve_2.filter.x[1] = $DER.valve_2.filter.x[1] / valve_2.filter.r[1] + valve_2.filter.uu[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->localData[0]->realVars[46] /* valve_2.filter.x[1] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[94] /* der(valve_2.filter.x[1]) STATE_DER */,data->simulationInfo->realParameter[277] /* valve_2.filter.r[1] PARAM */,"valve_2.filter.r[1]",equationIndexes) + data->localData[0]->realVars[779] /* valve_2.filter.uu[1] variable */;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
valve_2.filter.x[2] = $DER.valve_2.filter.x[2] / valve_2.filter.r[2] + valve_2.filter.x[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->localData[0]->realVars[47] /* valve_2.filter.x[2] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[95] /* der(valve_2.filter.x[2]) STATE_DER */,data->simulationInfo->realParameter[278] /* valve_2.filter.r[2] PARAM */,"valve_2.filter.r[2]",equationIndexes) + data->localData[0]->realVars[46] /* valve_2.filter.x[1] STATE(1) */;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(DATA *data, threadData_t *threadData);


/*
equation index: 55
type: SIMPLE_ASSIGN
valve_2.Fxt = valve_2.Fxt_full * Modelica.Fluid.Valves.ValveCompressible$valve_2.xtCharacteristic(valve_2.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[774] /* valve_2.Fxt variable */ = (data->simulationInfo->realParameter[263] /* valve_2.Fxt_full PARAM */) * (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_xtCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */));
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[81] /* der(channel_3.Channel[1,5].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[91] /* der(channel_3.Channel[1,5].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[80] /* der(channel_3.Channel[1,4].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[90] /* der(channel_3.Channel[1,4].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[79] /* der(channel_3.Channel[1,3].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->localData[0]->realVars[89] /* der(channel_3.Channel[1,3].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[78] /* der(channel_3.Channel[1,2].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[88] /* der(channel_3.Channel[1,2].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[77] /* der(channel_3.Channel[1,1].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[87] /* der(channel_3.Channel[1,1].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
valve_1.Av = 2.77e-05 * valve_1.Kv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->simulationInfo->realParameter[228] /* valve_1.Av PARAM */ = (2.77e-05) * (data->simulationInfo->realParameter[232] /* valve_1.Kv PARAM */);
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
$DER.valve_1.filter.x[2] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[93] /* der(valve_1.filter.x[2]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
$DER.valve_1.filter.x[1] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[92] /* der(valve_1.filter.x[1]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 74
type: ARRAY_CALL_ASSIGN

valve_1.filter.cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, valve_1.filter.normalized)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  real_array tmp11;
  real_array_create(&tmp11, ((modelica_real*)&((&data->simulationInfo->realParameter[239] /* valve_1.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), data->simulationInfo->booleanParameter[14] /* valve_1.filter.normalized PARAM */), &tmp11);
  TRACE_POP
}

/*
equation index: 75
type: ALGORITHM

  (valve_1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valve_1.filter.cr, {}, {}, valve_1.filter.f_cut);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  real_array tmp12;
  base_array_t tmp13;
  base_array_t tmp14;
  real_array tmp15;
  real_array_create(&tmp12, ((modelica_real*)&((&data->simulationInfo->realParameter[239] /* valve_1.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp13, 0, NULL);
  simple_alloc_1d_base_array(&tmp14, 0, NULL);
  real_array_create(&tmp15, ((modelica_real*)&((&data->simulationInfo->realParameter[244] /* valve_1.filter.r[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp12, tmp13, tmp14, data->simulationInfo->realParameter[241] /* valve_1.filter.f_cut PARAM */ ,NULL ,NULL ,NULL), &tmp15);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
valve_1.filter.x[1] = $DER.valve_1.filter.x[1] / valve_1.filter.r[1] + valve_1.filter.uu[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[44] /* valve_1.filter.x[1] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[92] /* der(valve_1.filter.x[1]) STATE_DER */,data->simulationInfo->realParameter[244] /* valve_1.filter.r[1] PARAM */,"valve_1.filter.r[1]",equationIndexes) + data->localData[0]->realVars[763] /* valve_1.filter.uu[1] variable */;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
valve_1.filter.x[2] = $DER.valve_1.filter.x[2] / valve_1.filter.r[2] + valve_1.filter.x[1]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->localData[0]->realVars[45] /* valve_1.filter.x[2] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[93] /* der(valve_1.filter.x[2]) STATE_DER */,data->simulationInfo->realParameter[245] /* valve_1.filter.r[2] PARAM */,"valve_1.filter.r[2]",equationIndexes) + data->localData[0]->realVars[44] /* valve_1.filter.x[1] STATE(1) */;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(DATA *data, threadData_t *threadData);


/*
equation index: 79
type: SIMPLE_ASSIGN
valve_1.Fxt = valve_1.Fxt_full * Modelica.Fluid.Valves.ValveCompressible$valve_1.xtCharacteristic(valve_1.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[758] /* valve_1.Fxt variable */ = (data->simulationInfo->realParameter[230] /* valve_1.Fxt_full PARAM */) * (omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_xtCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */));
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[66] /* der(channel_2.Channel[1,5].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[76] /* der(channel_2.Channel[1,5].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[65] /* der(channel_2.Channel[1,4].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->localData[0]->realVars[75] /* der(channel_2.Channel[1,4].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->localData[0]->realVars[64] /* der(channel_2.Channel[1,3].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->localData[0]->realVars[74] /* der(channel_2.Channel[1,3].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->localData[0]->realVars[63] /* der(channel_2.Channel[1,2].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->localData[0]->realVars[73] /* der(channel_2.Channel[1,2].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[62] /* der(channel_2.Channel[1,1].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[72] /* der(channel_2.Channel[1,1].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[52] /* der(channel_1.Channel[1,5].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[61] /* der(channel_1.Channel[1,5].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[51] /* der(channel_1.Channel[1,4].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[60] /* der(channel_1.Channel[1,4].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[50] /* der(channel_1.Channel[1,3].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->localData[0]->realVars[59] /* der(channel_1.Channel[1,3].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[49] /* der(channel_1.Channel[1,2].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].pv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->localData[0]->realVars[58] /* der(channel_1.Channel[1,2].pv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,1].D_flow_v = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[48] /* der(channel_1.Channel[1,1].D_flow_v) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].Xi_flow = 0.05476062083106394 * channel_3.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[710] /* channel_3.Channel[1,5].Xi_flow variable */ = (0.05476062083106394) * (data->simulationInfo->realParameter[155] /* channel_3.Channel[1,5].deltaLpipe PARAM */);
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,1].hv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */ = 0.0;
  TRACE_POP
}

void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_110(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_111(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_112(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_113(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_114(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_115(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_116(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_117(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_118(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_119(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_120(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_121(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_122(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_123(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_124(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_125(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_126(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_127(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_128(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_129(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_130(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_131(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_132(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_133(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_134(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_135(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_136(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_137(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_138(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_139(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_140(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_141(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_142(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_143(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_144(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_145(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_146(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_147(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_148(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_149(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_150(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_151(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_152(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_153(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_154(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_155(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_156(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_157(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_158(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_159(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_160(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_161(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_162(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_163(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_164(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_165(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_166(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_167(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_168(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_169(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_170(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_171(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_172(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_173(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_174(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_175(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_176(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_177(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_178(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_179(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_180(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_181(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_182(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_183(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_184(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_185(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_186(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_187(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_188(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_189(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_190(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_191(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_192(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_193(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_194(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_195(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_196(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_197(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_198(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_199(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_200(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_201(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_202(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_203(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_204(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_205(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_206(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_207(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_208(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_209(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_210(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_211(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_212(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_213(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_214(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_215(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_216(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_217(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_218(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_219(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_220(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_221(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_222(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_223(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_224(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_225(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_226(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_227(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_228(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_229(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_230(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_231(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_232(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_233(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_234(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_235(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_236(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_237(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_238(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_239(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_240(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_241(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_242(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_243(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_244(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_245(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_246(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_247(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_248(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_249(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_250(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_251(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_252(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_253(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_254(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_255(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_256(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_257(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_258(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_259(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_260(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_261(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_262(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_263(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_264(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_265(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_266(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_267(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_268(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_269(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_270(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_271(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_272(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_302(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_301(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_300(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_299(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_298(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_297(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_296(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_295(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_294(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_293(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_292(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_291(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_290(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_289(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_288(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_287(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_286(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_285(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_284(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_283(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_282(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_281(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_280(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_279(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_278(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_277(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_276(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_275(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_274(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_273(DATA*, threadData_t*);
/*
equation index: 303
indexNonlinear: 0
type: NONLINEAR

vars: {channel_1.Channel[1,5].pv, channel_1.Channel[1,4].pv, channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,5].pv, channel_2.Channel[1,4].pv, channel_2.Channel[1,3].pv, channel_2.Channel[1,2].pv, channel_3.Channel[1,5].pv, channel_3.Channel[1,4].pv, channel_3.Channel[1,3].pv, channel_3.Channel[1,2].pv, channel_1.Channel[1,3].pv, channel_1.Channel[1,2].pv, channel_3.Channel[1,1].pv, channel_2.Channel[1,1].pv, channel_1.Channel[1,1].hv, channel_1.Channel[1,2].hv, channel_1.Channel[1,3].hv, channel_2.Channel[1,1].hv, channel_2.Channel[1,3].hv, channel_3.Channel[1,1].hv, channel_3.Channel[1,4].hv, channel_3.Channel[1,3].hv, channel_3.Channel[1,5].hv, channel_3.Channel[1,2].hv, channel_2.Channel[1,5].hv, channel_2.Channel[1,4].hv, channel_2.Channel[1,2].hv, channel_1.Channel[1,5].hv, channel_1.Channel[1,4].hv}
eqns: {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 302, 301, 300, 299, 298, 297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 303 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[18] = data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[19] = data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[20] = data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[21] = data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[22] = data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[23] = data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[24] = data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[25] = data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[26] = data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[27] = data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[28] = data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[29] = data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,303};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 303 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[18];
  data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[19];
  data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[20];
  data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[21];
  data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[22];
  data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[23];
  data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[24];
  data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[25];
  data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[26];
  data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[27];
  data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[28];
  data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[0].nlsx[29];
  TRACE_POP
}

/*
equation index: 304
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->localData[0]->realVars[603] /* channel_1.Channel[1,1].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 305
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].drdp = min(4e-05, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).region == 3) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).region == 4) then Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho * (1.0 + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0) * (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).vp + (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).vt ^ 2.0 - Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho) / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp8 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp8)
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp9 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) + omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp1 * tmp1)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp2 * tmp2)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp6 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp6)
    {
      tmp7 = (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(1.0 + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT",equationIndexes)),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT",equationIndexes));
    }
    else
    {
      tmp4 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp5 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt;
      tmp7 = ((-((tmp4 * tmp4)))) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vp + DIVISION_SIM((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp5 * tmp5)) - (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho",equationIndexes)),omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp9 = tmp7;
  }
  data->localData[0]->realVars[593] /* channel_1.Channel[1,1].drdp variable */ = fmin(4e-05,tmp9);
  TRACE_POP
}

/*
equation index: 306
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].drdh = max(-0.0002, if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).region == 3) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt ^ 2.0) else if noEvent(Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).region == 4) then (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT) else (-Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0) * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).vt / Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_boolean tmp19;
  modelica_real tmp20;
  tmp19 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 3));
  if(tmp19)
  {
    tmp11 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp12 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
    tmp13 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt;
    tmp20 = ((-((tmp11 * tmp11)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pt,((tmp12 * tmp12)) * ((omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._pd) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cv)) + (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * ((tmp13 * tmp13)),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).rho ^ 2.0 * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pd * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cv + Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp17 = (modelica_boolean)(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._region == ((modelica_integer) 4));
    if(tmp17)
    {
      tmp15 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp18 = DIVISION_SIM((-((tmp15 * tmp15))),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._dpT),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).T * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).dpT",equationIndexes);
    }
    else
    {
      tmp16 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
      tmp18 = ((-((tmp16 * tmp16)))) * (DIVISION_SIM(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._vt,omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._cp,"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0).cp",equationIndexes));
    }
    tmp20 = tmp18;
  }
  data->localData[0]->realVars[588] /* channel_1.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp20);
  TRACE_POP
}

/*
equation index: 307
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->localData[0]->realVars[606] /* channel_1.Channel[1,4].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 308
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[607] /* channel_1.Channel[1,5].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 309
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->localData[0]->realVars[671] /* channel_2.Channel[1,2].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 310
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->localData[0]->realVars[672] /* channel_2.Channel[1,3].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 311
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->localData[0]->realVars[673] /* channel_2.Channel[1,4].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 312
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[674] /* channel_2.Channel[1,5].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 313
type: SIMPLE_ASSIGN
valve_2.state_a.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_2.Channel[1,5].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[784] /* valve_2.state_a.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 314
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->localData[0]->realVars[736] /* channel_3.Channel[1,1].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 315
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->localData[0]->realVars[737] /* channel_3.Channel[1,2].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 316
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->localData[0]->realVars[740] /* channel_3.Channel[1,5].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 317
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->localData[0]->realVars[739] /* channel_3.Channel[1,4].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 318
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->localData[0]->realVars[738] /* channel_3.Channel[1,3].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 319
type: SIMPLE_ASSIGN
valve_2.state_b.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->localData[0]->realVars[786] /* valve_2.state_b.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 320
type: SIMPLE_ASSIGN
valve_2.V_flow = channel_2.Channel[1,5].D_flow_v / Modelica.Fluid.Utilities.regStep(channel_2.Channel[1,5].D_flow_v, valve_2.state_a.d, valve_2.state_b.d, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->localData[0]->realVars[775] /* valve_2.V_flow variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[785] /* valve_2.state_a.d variable */, data->localData[0]->realVars[787] /* valve_2.state_b.d variable */, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */),"Modelica.Fluid.Utilities.regStep(channel_2.Channel[1,5].D_flow_v, valve_2.state_a.d, valve_2.state_b.d, valve_2.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
equation index: 321
type: SIMPLE_ASSIGN
valve_2.port_a_T = Modelica.Fluid.Utilities.regStep(channel_2.Channel[1,5].D_flow_v, valve_2.state_a.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_3.Channel[1,1].hv, 0, 0).T, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->localData[0]->realVars[782] /* valve_2.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[784] /* valve_2.state_a.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 322
type: SIMPLE_ASSIGN
valve_2.port_b_T = Modelica.Fluid.Utilities.regStep(-channel_2.Channel[1,5].D_flow_v, valve_2.state_b.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_2.Channel[1,5].hv, 0, 0).T, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->localData[0]->realVars[783] /* valve_2.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */), data->localData[0]->realVars[786] /* valve_2.state_b.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 323
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->localData[0]->realVars[670] /* channel_2.Channel[1,1].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 324
type: SIMPLE_ASSIGN
valve_1.state_b.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->localData[0]->realVars[770] /* valve_1.state_b.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 325
type: SIMPLE_ASSIGN
valve_1.port_b_T = Modelica.Fluid.Utilities.regStep(-channel_1.Channel[1,5].D_flow_v, valve_1.state_b.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_1.Channel[1,5].hv, 0, 0).T, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->localData[0]->realVars[767] /* valve_1.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */), data->localData[0]->realVars[770] /* valve_1.state_b.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 326
type: SIMPLE_ASSIGN
valve_1.V_flow = channel_1.Channel[1,5].D_flow_v / Modelica.Fluid.Utilities.regStep(channel_1.Channel[1,5].D_flow_v, valve_1.state_a.d, valve_1.state_b.d, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->localData[0]->realVars[759] /* valve_1.V_flow variable */ = DIVISION_SIM(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[769] /* valve_1.state_a.d variable */, data->localData[0]->realVars[771] /* valve_1.state_b.d variable */, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */),"Modelica.Fluid.Utilities.regStep(channel_1.Channel[1,5].D_flow_v, valve_1.state_a.d, valve_1.state_b.d, valve_1.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
equation index: 327
type: SIMPLE_ASSIGN
valve_1.state_a.T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_1.Channel[1,5].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->localData[0]->realVars[768] /* valve_1.state_a.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 328
type: SIMPLE_ASSIGN
valve_1.port_a_T = Modelica.Fluid.Utilities.regStep(channel_1.Channel[1,5].D_flow_v, valve_1.state_a.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_2.Channel[1,1].hv, 0, 0).T, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->localData[0]->realVars[766] /* valve_1.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[768] /* valve_1.state_a.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 329
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->localData[0]->realVars[604] /* channel_1.Channel[1,2].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 330
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].heatTransfer.Ts = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0).T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->localData[0]->realVars[605] /* channel_1.Channel[1,3].heatTransfer.Ts variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
equation index: 331
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].D[1] = channel_1.Channel[1,1].deltaVFlow * (channel_1.Channel[1,1].drdp * $DER.channel_1.Channel[1,1].pv + channel_1.Channel[1,1].drdh * $DER.channel_1.Channel[1,1].hv) + channel_1.Channel[1,1].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->localData[0]->realVars[557] /* channel_1.Channel[1,1].D[1] variable */ = (data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[593] /* channel_1.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[96] /* der(channel_1.Channel[1,1].pv) DUMMY_DER */) + (data->localData[0]->realVars[588] /* channel_1.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */)) + data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */;
  TRACE_POP
}

/*
equation index: 332
type: SIMPLE_ASSIGN
Sink_2.medium.sat.Tsat = Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.tsat(Sink_2.p)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->localData[0]->realVars[541] /* Sink_2.medium.sat.Tsat variable */ = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */);
  TRACE_POP
}

/*
equation index: 333
type: SIMPLE_ASSIGN
Sink_2.medium.p_bar = 1e-05 * Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->localData[0]->realVars[540] /* Sink_2.medium.p_bar variable */ = (1e-05) * (data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */);
  TRACE_POP
}

/*
equation index: 334
type: SIMPLE_ASSIGN
Source_2.T_in_internal = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->localData[0]->realVars[545] /* Source_2.T_in_internal variable */ = 573.15;
  TRACE_POP
}

/*
equation index: 335
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[598] /* channel_1.Channel[1,1].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 336
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->integerVars[55] /* channel_1.Channel[1,1].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 337
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[608] /* channel_1.Channel[1,1].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 338
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->localData[0]->realVars[599] /* channel_1.Channel[1,2].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 339
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->localData[0]->integerVars[56] /* channel_1.Channel[1,2].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 340
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->localData[0]->realVars[609] /* channel_1.Channel[1,2].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 341
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->localData[0]->realVars[600] /* channel_1.Channel[1,3].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->localData[0]->integerVars[57] /* channel_1.Channel[1,3].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->localData[0]->realVars[610] /* channel_1.Channel[1,3].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->localData[0]->realVars[601] /* channel_1.Channel[1,4].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 345
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->localData[0]->integerVars[58] /* channel_1.Channel[1,4].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 346
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->localData[0]->realVars[611] /* channel_1.Channel[1,4].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->localData[0]->realVars[602] /* channel_1.Channel[1,5].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->integerVars[59] /* channel_1.Channel[1,5].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 349
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[612] /* channel_1.Channel[1,5].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 350
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[665] /* channel_2.Channel[1,1].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 351
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->integerVars[60] /* channel_2.Channel[1,1].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 352
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->localData[0]->realVars[675] /* channel_2.Channel[1,1].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 353
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[666] /* channel_2.Channel[1,2].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 354
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->integerVars[61] /* channel_2.Channel[1,2].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 355
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[676] /* channel_2.Channel[1,2].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 356
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[667] /* channel_2.Channel[1,3].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->integerVars[62] /* channel_2.Channel[1,3].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 358
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[677] /* channel_2.Channel[1,3].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 359
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[668] /* channel_2.Channel[1,4].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 360
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->integerVars[63] /* channel_2.Channel[1,4].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 361
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[678] /* channel_2.Channel[1,4].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 362
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->localData[0]->realVars[669] /* channel_2.Channel[1,5].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->localData[0]->integerVars[64] /* channel_2.Channel[1,5].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->localData[0]->realVars[679] /* channel_2.Channel[1,5].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->localData[0]->realVars[731] /* channel_3.Channel[1,1].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->localData[0]->integerVars[65] /* channel_3.Channel[1,1].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->localData[0]->realVars[741] /* channel_3.Channel[1,1].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->localData[0]->realVars[732] /* channel_3.Channel[1,2].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->localData[0]->integerVars[66] /* channel_3.Channel[1,2].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->localData[0]->realVars[742] /* channel_3.Channel[1,2].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->localData[0]->realVars[733] /* channel_3.Channel[1,3].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->localData[0]->integerVars[67] /* channel_3.Channel[1,3].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->localData[0]->realVars[743] /* channel_3.Channel[1,3].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->localData[0]->realVars[734] /* channel_3.Channel[1,4].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 375
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->localData[0]->integerVars[68] /* channel_3.Channel[1,4].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->localData[0]->realVars[744] /* channel_3.Channel[1,4].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 377
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].heatTransfer.Q_flow = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->localData[0]->realVars[735] /* channel_3.Channel[1,5].heatTransfer.Q_flow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 378
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].stateFlow.phase = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->localData[0]->integerVars[69] /* channel_3.Channel[1,5].stateFlow.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].lambda_tr = 0.01642818624931918
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->localData[0]->realVars[745] /* channel_3.Channel[1,5].lambda_tr variable */ = 0.01642818624931918;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
Sink_2.state.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(Sink_2.p, Sink_2.T, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->localData[0]->realVars[544] /* Sink_2.state.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */, ((modelica_integer) 0))._rho;
  TRACE_POP
}

/*
equation index: 381
type: SIMPLE_ASSIGN
valve_2.Y_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[266] /* valve_2.Y_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 382
type: SIMPLE_ASSIGN
valve_2.xs_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->realParameter[293] /* valve_2.xs_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
valve_2.x_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[292] /* valve_2.x_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
valve_2.Fxt_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[264] /* valve_2.Fxt_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 385
type: SIMPLE_ASSIGN
valve_1.Y_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[233] /* valve_1.Y_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
valve_1.xs_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[260] /* valve_1.xs_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
valve_1.x_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[259] /* valve_1.x_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
valve_1.Fxt_nominal = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[231] /* valve_1.Fxt_nominal PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 396
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("WaterIF97", {"water"}, false, true, Sink_2.X, "FixedBoundary");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  static const MMC_DEFSTRINGLIT(tmp21,9,"WaterIF97");
  string_array tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,5,"water");
  real_array tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp22, 1, (modelica_string)MMC_REFSTRINGLIT(tmp23));
  real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */)[calc_base_index_dims_subs(1, 1, ((modelica_integer) 1))])), 1, 1);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp21), tmp22, 0, 1, tmp24, MMC_REFSTRINGLIT(tmp25));
  TRACE_POP
}

/*
equation index: 395
type: ALGORITHM

  assert(valve_1.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,22,"u_nominal > 0 required");
  static int tmp28 = 0;
  {
    tmp26 = Greater(data->simulationInfo->realParameter[246] /* valve_1.filter.u_nominal PARAM */,0.0);
    if(!tmp26)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp27)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 394
type: ALGORITHM

  assert(valve_1.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,21,"A_ripple > 0 required");
  static int tmp31 = 0;
  {
    tmp29 = Greater(data->simulationInfo->realParameter[238] /* valve_1.filter.A_ripple PARAM */,0.0);
    if(!tmp29)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp30)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 393
type: ALGORITHM

  assert(valve_1.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,18,"f_cut > 0 required");
  static int tmp34 = 0;
  {
    tmp32 = Greater(data->simulationInfo->realParameter[241] /* valve_1.filter.f_cut PARAM */,0.0);
    if(!tmp32)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp33)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 392
type: ALGORITHM

  assert(valve_2.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,22,"u_nominal > 0 required");
  static int tmp37 = 0;
  {
    tmp35 = Greater(data->simulationInfo->realParameter[279] /* valve_2.filter.u_nominal PARAM */,0.0);
    if(!tmp35)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 391
type: ALGORITHM

  assert(valve_2.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,21,"A_ripple > 0 required");
  static int tmp40 = 0;
  {
    tmp38 = Greater(data->simulationInfo->realParameter[271] /* valve_2.filter.A_ripple PARAM */,0.0);
    if(!tmp38)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp39)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 390
type: ALGORITHM

  assert(valve_2.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,18,"f_cut > 0 required");
  static int tmp43 = 0;
  {
    tmp41 = Greater(data->simulationInfo->realParameter[274] /* valve_2.filter.f_cut PARAM */,0.0);
    if(!tmp41)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 389
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("WaterIF97", {"water"}, false, true, {1.0}, "Boundary_pT");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  static const MMC_DEFSTRINGLIT(tmp44,9,"WaterIF97");
  string_array tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,5,"water");
  real_array tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp45, 1, (modelica_string)MMC_REFSTRINGLIT(tmp46));
  array_alloc_scalar_real_array(&tmp47, 1, (modelica_real)1.0);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp44), tmp45, 0, 1, tmp47, MMC_REFSTRINGLIT(tmp48));
  TRACE_POP
}
OMC_DISABLE_OPT
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_9(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_10(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_11(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_12(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_32(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_33(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_34(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_36(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_41(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_42(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_43(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_44(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_47(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_48(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_49(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_50(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_51(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_52(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_53(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_55(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_56(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_57(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_58(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_59(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_60(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_61(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_62(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_63(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_64(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_65(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_66(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_67(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_68(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_69(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_70(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_71(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_72(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_73(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_74(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_75(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_76(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_77(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_79(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_80(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_81(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_82(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_83(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_84(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_85(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_86(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_87(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_88(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_89(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_90(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_91(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_92(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_93(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_94(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_95(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_96(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_97(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_98(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_99(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_100(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_101(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_102(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_103(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_104(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_105(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_106(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_107(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_109(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_303(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_304(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_305(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_306(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_307(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_308(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_309(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_310(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_311(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_312(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_313(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_314(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_315(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_316(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_317(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_318(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_319(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_320(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_321(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_322(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_323(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_324(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_325(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_326(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_327(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_328(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_329(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_330(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_331(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_336(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_339(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_342(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_345(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_348(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_351(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_354(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_357(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_360(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_363(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_366(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_369(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_372(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_375(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_378(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_380(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_381(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_382(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_383(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_384(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_385(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_386(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_387(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_388(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_396(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_395(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_394(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_393(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_392(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_391(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_390(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_389(data, threadData);
  TRACE_POP
}


int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
equation index: 784
type: SIMPLE_ASSIGN
Sink_2.T = 773.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */ = 773.15;
  TRACE_POP
}

/*
equation index: 783
type: SIMPLE_ASSIGN
Sink_2.state.T = Sink_2.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->simulationInfo->realParameter[9] /* Sink_2.state.T PARAM */ = data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */;
  TRACE_POP
}

/*
equation index: 782
type: SIMPLE_ASSIGN
channel_1.Din = 0.3
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */ = 0.3;
  TRACE_POP
}

/*
equation index: 781
type: SIMPLE_ASSIGN
channel_1.n_parallel = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->simulationInfo->realParameter[77] /* channel_1.n_parallel PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 780
type: SIMPLE_ASSIGN
channel_1.Lpipe = 25.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->simulationInfo->realParameter[66] /* channel_1.Lpipe PARAM */ = 25.0;
  TRACE_POP
}

/*
equation index: 779
type: SIMPLE_ASSIGN
channel_1.numberOfVolumes = 5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->simulationInfo->integerParameter[22] /* channel_1.numberOfVolumes PARAM */ = ((modelica_integer) 5);
  TRACE_POP
}

/*
equation index: 778
type: SIMPLE_ASSIGN
channel_1.deltaLpipe = channel_1.Lpipe / (*Real*)(channel_1.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[66] /* channel_1.Lpipe PARAM */,((modelica_real)data->simulationInfo->integerParameter[22] /* channel_1.numberOfVolumes PARAM */),"/*Real*/(channel_1.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 777
type: SIMPLE_ASSIGN
channel_1.deltaSFlow = 3.141592653589793 * channel_1.n_parallel * channel_1.deltaLpipe * channel_1.Din
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */ = (3.141592653589793) * ((data->simulationInfo->realParameter[77] /* channel_1.n_parallel PARAM */) * ((data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */) * (data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */)));
  TRACE_POP
}

/*
equation index: 776
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].deltaSFlow = channel_1.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->simulationInfo->realParameter[24] /* channel_1.Channel[1,1].deltaSFlow PARAM */ = data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 775
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].heatTransfer.surfaceArea = channel_1.Channel[1,1].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->simulationInfo->realParameter[44] /* channel_1.Channel[1,1].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[24] /* channel_1.Channel[1,1].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 774
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].deltaSFlow = channel_1.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->simulationInfo->realParameter[25] /* channel_1.Channel[1,2].deltaSFlow PARAM */ = data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 773
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].heatTransfer.surfaceArea = channel_1.Channel[1,2].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->simulationInfo->realParameter[45] /* channel_1.Channel[1,2].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[25] /* channel_1.Channel[1,2].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 772
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].deltaSFlow = channel_1.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->simulationInfo->realParameter[26] /* channel_1.Channel[1,3].deltaSFlow PARAM */ = data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 771
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].heatTransfer.surfaceArea = channel_1.Channel[1,3].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->simulationInfo->realParameter[46] /* channel_1.Channel[1,3].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[26] /* channel_1.Channel[1,3].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 770
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].deltaSFlow = channel_1.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->simulationInfo->realParameter[27] /* channel_1.Channel[1,4].deltaSFlow PARAM */ = data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 769
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].heatTransfer.surfaceArea = channel_1.Channel[1,4].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->simulationInfo->realParameter[47] /* channel_1.Channel[1,4].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[27] /* channel_1.Channel[1,4].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 768
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].deltaSFlow = channel_1.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->simulationInfo->realParameter[28] /* channel_1.Channel[1,5].deltaSFlow PARAM */ = data->simulationInfo->realParameter[70] /* channel_1.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 767
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].heatTransfer.surfaceArea = channel_1.Channel[1,5].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->simulationInfo->realParameter[48] /* channel_1.Channel[1,5].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[28] /* channel_1.Channel[1,5].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 766
type: SIMPLE_ASSIGN
channel_2.Din = 0.3
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */ = 0.3;
  TRACE_POP
}

/*
equation index: 765
type: SIMPLE_ASSIGN
channel_2.n_parallel = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->simulationInfo->realParameter[143] /* channel_2.n_parallel PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 764
type: SIMPLE_ASSIGN
channel_2.Lpipe = 25.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->simulationInfo->realParameter[132] /* channel_2.Lpipe PARAM */ = 25.0;
  TRACE_POP
}

/*
equation index: 763
type: SIMPLE_ASSIGN
channel_2.numberOfVolumes = 5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->simulationInfo->integerParameter[41] /* channel_2.numberOfVolumes PARAM */ = ((modelica_integer) 5);
  TRACE_POP
}

/*
equation index: 762
type: SIMPLE_ASSIGN
channel_2.deltaLpipe = channel_2.Lpipe / (*Real*)(channel_2.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[132] /* channel_2.Lpipe PARAM */,((modelica_real)data->simulationInfo->integerParameter[41] /* channel_2.numberOfVolumes PARAM */),"/*Real*/(channel_2.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 761
type: SIMPLE_ASSIGN
channel_2.deltaSFlow = 3.141592653589793 * channel_2.n_parallel * channel_2.deltaLpipe * channel_2.Din
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */ = (3.141592653589793) * ((data->simulationInfo->realParameter[143] /* channel_2.n_parallel PARAM */) * ((data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */) * (data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */)));
  TRACE_POP
}

/*
equation index: 760
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].deltaSFlow = channel_2.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->simulationInfo->realParameter[90] /* channel_2.Channel[1,1].deltaSFlow PARAM */ = data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 759
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].heatTransfer.surfaceArea = channel_2.Channel[1,1].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->simulationInfo->realParameter[110] /* channel_2.Channel[1,1].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[90] /* channel_2.Channel[1,1].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 758
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].deltaSFlow = channel_2.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->simulationInfo->realParameter[91] /* channel_2.Channel[1,2].deltaSFlow PARAM */ = data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 757
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].heatTransfer.surfaceArea = channel_2.Channel[1,2].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->simulationInfo->realParameter[111] /* channel_2.Channel[1,2].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[91] /* channel_2.Channel[1,2].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 756
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].deltaSFlow = channel_2.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->simulationInfo->realParameter[92] /* channel_2.Channel[1,3].deltaSFlow PARAM */ = data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 755
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].heatTransfer.surfaceArea = channel_2.Channel[1,3].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->simulationInfo->realParameter[112] /* channel_2.Channel[1,3].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[92] /* channel_2.Channel[1,3].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 754
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].deltaSFlow = channel_2.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->simulationInfo->realParameter[93] /* channel_2.Channel[1,4].deltaSFlow PARAM */ = data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 753
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].heatTransfer.surfaceArea = channel_2.Channel[1,4].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->simulationInfo->realParameter[113] /* channel_2.Channel[1,4].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[93] /* channel_2.Channel[1,4].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 752
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].deltaSFlow = channel_2.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->simulationInfo->realParameter[94] /* channel_2.Channel[1,5].deltaSFlow PARAM */ = data->simulationInfo->realParameter[136] /* channel_2.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 751
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].heatTransfer.surfaceArea = channel_2.Channel[1,5].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->simulationInfo->realParameter[114] /* channel_2.Channel[1,5].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[94] /* channel_2.Channel[1,5].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 750
type: SIMPLE_ASSIGN
channel_3.Din = 0.3
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */ = 0.3;
  TRACE_POP
}

/*
equation index: 749
type: SIMPLE_ASSIGN
channel_3.n_parallel = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->simulationInfo->realParameter[210] /* channel_3.n_parallel PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 748
type: SIMPLE_ASSIGN
channel_3.Lpipe = 25.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->simulationInfo->realParameter[199] /* channel_3.Lpipe PARAM */ = 25.0;
  TRACE_POP
}

/*
equation index: 747
type: SIMPLE_ASSIGN
channel_3.numberOfVolumes = 5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->simulationInfo->integerParameter[60] /* channel_3.numberOfVolumes PARAM */ = ((modelica_integer) 5);
  TRACE_POP
}

/*
equation index: 746
type: SIMPLE_ASSIGN
channel_3.deltaLpipe = channel_3.Lpipe / (*Real*)(channel_3.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[199] /* channel_3.Lpipe PARAM */,((modelica_real)data->simulationInfo->integerParameter[60] /* channel_3.numberOfVolumes PARAM */),"/*Real*/(channel_3.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 745
type: SIMPLE_ASSIGN
channel_3.deltaSFlow = 3.141592653589793 * channel_3.n_parallel * channel_3.deltaLpipe * channel_3.Din
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */ = (3.141592653589793) * ((data->simulationInfo->realParameter[210] /* channel_3.n_parallel PARAM */) * ((data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */) * (data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */)));
  TRACE_POP
}

/*
equation index: 744
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].deltaSFlow = channel_3.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->simulationInfo->realParameter[156] /* channel_3.Channel[1,1].deltaSFlow PARAM */ = data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 743
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].heatTransfer.surfaceArea = channel_3.Channel[1,1].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->simulationInfo->realParameter[176] /* channel_3.Channel[1,1].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[156] /* channel_3.Channel[1,1].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 742
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].deltaSFlow = channel_3.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->simulationInfo->realParameter[157] /* channel_3.Channel[1,2].deltaSFlow PARAM */ = data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 741
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].heatTransfer.surfaceArea = channel_3.Channel[1,2].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->simulationInfo->realParameter[177] /* channel_3.Channel[1,2].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[157] /* channel_3.Channel[1,2].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 740
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].deltaSFlow = channel_3.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->simulationInfo->realParameter[158] /* channel_3.Channel[1,3].deltaSFlow PARAM */ = data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 739
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].heatTransfer.surfaceArea = channel_3.Channel[1,3].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->simulationInfo->realParameter[178] /* channel_3.Channel[1,3].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[158] /* channel_3.Channel[1,3].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 738
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].deltaSFlow = channel_3.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->simulationInfo->realParameter[159] /* channel_3.Channel[1,4].deltaSFlow PARAM */ = data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 737
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].heatTransfer.surfaceArea = channel_3.Channel[1,4].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->simulationInfo->realParameter[179] /* channel_3.Channel[1,4].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[159] /* channel_3.Channel[1,4].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 736
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].deltaSFlow = channel_3.deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->simulationInfo->realParameter[160] /* channel_3.Channel[1,5].deltaSFlow PARAM */ = data->simulationInfo->realParameter[203] /* channel_3.deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 735
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].heatTransfer.surfaceArea = channel_3.Channel[1,5].deltaSFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->simulationInfo->realParameter[180] /* channel_3.Channel[1,5].heatTransfer.surfaceArea PARAM */ = data->simulationInfo->realParameter[160] /* channel_3.Channel[1,5].deltaSFlow PARAM */;
  TRACE_POP
}

/*
equation index: 734
type: SIMPLE_ASSIGN
system.dp_small = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->simulationInfo->realParameter[220] /* system.dp_small PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 733
type: SIMPLE_ASSIGN
valve_1.dp_small = system.dp_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->simulationInfo->realParameter[235] /* valve_1.dp_small PARAM */ = data->simulationInfo->realParameter[220] /* system.dp_small PARAM */;
  TRACE_POP
}

/*
equation index: 732
type: SIMPLE_ASSIGN
valve_1.dp_turbulent = valve_1.dp_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->simulationInfo->realParameter[237] /* valve_1.dp_turbulent PARAM */ = data->simulationInfo->realParameter[235] /* valve_1.dp_small PARAM */;
  TRACE_POP
}

/*
equation index: 731
type: SIMPLE_ASSIGN
valve_2.dp_small = system.dp_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->simulationInfo->realParameter[268] /* valve_2.dp_small PARAM */ = data->simulationInfo->realParameter[220] /* system.dp_small PARAM */;
  TRACE_POP
}

/*
equation index: 730
type: SIMPLE_ASSIGN
valve_2.dp_turbulent = valve_2.dp_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->simulationInfo->realParameter[270] /* valve_2.dp_turbulent PARAM */ = data->simulationInfo->realParameter[268] /* valve_2.dp_small PARAM */;
  TRACE_POP
}

/*
equation index: 729
type: SIMPLE_ASSIGN
Sink_2.p = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 728
type: SIMPLE_ASSIGN
Sink_2.medium.sat.psat = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->simulationInfo->realParameter[5] /* Sink_2.medium.sat.psat PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 727
type: SIMPLE_ASSIGN
Sink_2.medium.state.p = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->simulationInfo->realParameter[6] /* Sink_2.medium.state.p PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 726
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].p[2] = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->simulationInfo->realParameter[191] /* channel_3.Channel[1,5].p[2] PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 725
type: SIMPLE_ASSIGN
channel_3.waterOut.p = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->simulationInfo->realParameter[213] /* channel_3.waterOut.p PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 724
type: SIMPLE_ASSIGN
Sink_2.ports[1].p = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->simulationInfo->realParameter[8] /* Sink_2.ports[1].p PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 723
type: SIMPLE_ASSIGN
Sink_2.medium.p = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->simulationInfo->realParameter[4] /* Sink_2.medium.p PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 722
type: SIMPLE_ASSIGN
Sink_2.state.p = Sink_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->simulationInfo->realParameter[10] /* Sink_2.state.p PARAM */ = data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */;
  TRACE_POP
}

/*
equation index: 721
type: SIMPLE_ASSIGN
valve_2.filter.nr = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->simulationInfo->integerParameter[83] /* valve_2.filter.nr PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 720
type: SIMPLE_ASSIGN
valve_2.filter.na = 0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->simulationInfo->integerParameter[80] /* valve_2.filter.na PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 719
type: SIMPLE_ASSIGN
valve_2.filter.nc0 = 0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->simulationInfo->integerParameter[81] /* valve_2.filter.nc0 PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 718
type: SIMPLE_ASSIGN
valve_2.filter.ncr = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->simulationInfo->integerParameter[82] /* valve_2.filter.ncr PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 717
type: SIMPLE_ASSIGN
valve_2.filter.u_nominal = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->simulationInfo->realParameter[279] /* valve_2.filter.u_nominal PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 716
type: SIMPLE_ASSIGN
valve_2.filter.y_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->simulationInfo->realParameter[282] /* valve_2.filter.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 715
type: SIMPLE_ASSIGN
valve_2.filter.x_start[2] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->simulationInfo->realParameter[281] /* valve_2.filter.x_start[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 714
type: SIMPLE_ASSIGN
valve_2.filter.x_start[1] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->simulationInfo->realParameter[280] /* valve_2.filter.x_start[1] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 713
type: SIMPLE_ASSIGN
valve_2.filter.nx = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->simulationInfo->integerParameter[84] /* valve_2.filter.nx PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 712
type: SIMPLE_ASSIGN
valve_2.filter.init = Modelica.Blocks.Types.Init.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->simulationInfo->integerParameter[79] /* valve_2.filter.init PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 711
type: SIMPLE_ASSIGN
valve_2.filter.normalized = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->simulationInfo->booleanParameter[24] /* valve_2.filter.normalized PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 710
type: SIMPLE_ASSIGN
valve_2.filter.f_min = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->simulationInfo->realParameter[275] /* valve_2.filter.f_min PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 709
type: SIMPLE_ASSIGN
valve_2.filter.A_ripple = 0.5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->simulationInfo->realParameter[271] /* valve_2.filter.A_ripple PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 708
type: SIMPLE_ASSIGN
valve_2.filter.gain = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->simulationInfo->realParameter[276] /* valve_2.filter.gain PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 707
type: SIMPLE_ASSIGN
valve_2.riseTime = 30.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->simulationInfo->realParameter[291] /* valve_2.riseTime PARAM */ = 30.0;
  TRACE_POP
}

/*
equation index: 706
type: SIMPLE_ASSIGN
valve_2.filter.f_cut = 5.0 / (6.283185307179586 * valve_2.riseTime)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->simulationInfo->realParameter[274] /* valve_2.filter.f_cut PARAM */ = DIVISION_SIM(5.0,(6.283185307179586) * (data->simulationInfo->realParameter[291] /* valve_2.riseTime PARAM */),"6.283185307179586 * valve_2.riseTime",equationIndexes);
  TRACE_POP
}

/*
equation index: 705
type: SIMPLE_ASSIGN
valve_2.filter.order = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->simulationInfo->integerParameter[85] /* valve_2.filter.order PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 704
type: SIMPLE_ASSIGN
valve_2.filter.filterType = Modelica.Blocks.Types.FilterType.LowPass
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->simulationInfo->integerParameter[78] /* valve_2.filter.filterType PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 703
type: SIMPLE_ASSIGN
valve_2.filter.analogFilter = Modelica.Blocks.Types.AnalogFilter.CriticalDamping
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->simulationInfo->integerParameter[77] /* valve_2.filter.analogFilter PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 702
type: SIMPLE_ASSIGN
valve_2.use_Re = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->simulationInfo->booleanParameter[31] /* valve_2.use_Re PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 701
type: SIMPLE_ASSIGN
valve_2.Fxt_full = 0.5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->simulationInfo->realParameter[263] /* valve_2.Fxt_full PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 700
type: SIMPLE_ASSIGN
valve_2.leakageOpening = 0.001
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->simulationInfo->realParameter[283] /* valve_2.leakageOpening PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
valve_2.minLimiter.uMin = valve_2.leakageOpening
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[287] /* valve_2.minLimiter.uMin PARAM */ = data->simulationInfo->realParameter[283] /* valve_2.leakageOpening PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
valve_2.checkValve = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->simulationInfo->booleanParameter[23] /* valve_2.checkValve PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
valve_2.filteredOpening = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->booleanParameter[25] /* valve_2.filteredOpening PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
valve_2.opening_nominal = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[288] /* valve_2.opening_nominal PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
valve_2.rho_nominal = 998.2060924679472
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[290] /* valve_2.rho_nominal PARAM */ = 998.2060924679472;
  TRACE_POP
}

/*
equation index: 694
type: SIMPLE_ASSIGN
valve_2.Cv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[262] /* valve_2.Cv PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 693
type: SIMPLE_ASSIGN
valve_2.Kv = 300.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->simulationInfo->realParameter[265] /* valve_2.Kv PARAM */ = 300.0;
  TRACE_POP
}

/*
equation index: 692
type: SIMPLE_ASSIGN
valve_2.CvData = Modelica.Fluid.Types.CvTypes.Kv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->simulationInfo->integerParameter[76] /* valve_2.CvData PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 691
type: SIMPLE_ASSIGN
valve_2.show_V_flow = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->simulationInfo->booleanParameter[30] /* valve_2.show_V_flow PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 690
type: SIMPLE_ASSIGN
valve_2.show_T = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->simulationInfo->booleanParameter[29] /* valve_2.show_T PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 689
type: SIMPLE_ASSIGN
system.m_flow_small = 0.01
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */ = 0.01;
  TRACE_POP
}

/*
equation index: 688
type: SIMPLE_ASSIGN
valve_2.m_flow_small = system.m_flow_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */ = data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */;
  TRACE_POP
}

/*
equation index: 687
type: SIMPLE_ASSIGN
valve_2.m_flow_start = valve_2.m_flow_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->simulationInfo->realParameter[286] /* valve_2.m_flow_start PARAM */ = data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
valve_2.dp_start = valve_2.dp_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[269] /* valve_2.dp_start PARAM */ = data->simulationInfo->realParameter[267] /* valve_2.dp_nominal PARAM */;
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
valve_2.showDesignFlowDirection = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->booleanParameter[28] /* valve_2.showDesignFlowDirection PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
valve_2.port_b_exposesState = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->booleanParameter[27] /* valve_2.port_b_exposesState PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
valve_2.port_a_exposesState = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->simulationInfo->booleanParameter[26] /* valve_2.port_a_exposesState PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
valve_2.allowFlowReversal = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->booleanParameter[22] /* valve_2.allowFlowReversal PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 681
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->integerParameter[56] /* channel_3.Channel[1,5].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 680
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->simulationInfo->integerParameter[51] /* channel_3.Channel[1,5].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 679
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->simulationInfo->integerParameter[46] /* channel_3.Channel[1,5].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->simulationInfo->realParameter[190] /* channel_3.Channel[1,5].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->simulationInfo->realParameter[175] /* channel_3.Channel[1,5].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->simulationInfo->realParameter[196] /* channel_3.Channel[1,5].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
channel_3.f_flow = 0.7853981633974483 * channel_3.n_parallel * channel_3.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */;
  data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[210] /* channel_3.n_parallel PARAM */) * ((tmp0 * tmp0)));
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].f_flow = channel_3.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */ = data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
channel_3.k_volume = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->simulationInfo->realParameter[207] /* channel_3.k_volume PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
channel_3.deltaVFlow = 0.7853981633974483 * channel_3.k_volume * channel_3.n_parallel * channel_3.deltaLpipe * channel_3.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  modelica_real tmp1;
  tmp1 = data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */;
  data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[207] /* channel_3.k_volume PARAM */) * ((data->simulationInfo->realParameter[210] /* channel_3.n_parallel PARAM */) * ((data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */) * ((tmp1 * tmp1)))));
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].deltaVFlow = channel_3.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */ = data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
channel_3.Lpiezo = -10.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[198] /* channel_3.Lpiezo PARAM */ = -10.0;
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
channel_3.deltaLpiezo = channel_3.Lpiezo / (*Real*)(channel_3.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[198] /* channel_3.Lpiezo PARAM */,((modelica_real)data->simulationInfo->integerParameter[60] /* channel_3.numberOfVolumes PARAM */),"/*Real*/(channel_3.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].deltaLpiezo = channel_3.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[150] /* channel_3.Channel[1,5].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].deltaLpipe = channel_3.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[155] /* channel_3.Channel[1,5].deltaLpipe PARAM */ = data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
channel_3.ke = 0.00014
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */ = 0.00014;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].ke = channel_3.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[185] /* channel_3.Channel[1,5].ke PARAM */ = data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->integerParameter[55] /* channel_3.Channel[1,4].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->integerParameter[50] /* channel_3.Channel[1,4].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->integerParameter[45] /* channel_3.Channel[1,4].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[189] /* channel_3.Channel[1,4].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[174] /* channel_3.Channel[1,4].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[195] /* channel_3.Channel[1,4].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].f_flow = channel_3.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */ = data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].deltaVFlow = channel_3.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */ = data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].deltaLpiezo = channel_3.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[149] /* channel_3.Channel[1,4].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].deltaLpipe = channel_3.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[154] /* channel_3.Channel[1,4].deltaLpipe PARAM */ = data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].ke = channel_3.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[184] /* channel_3.Channel[1,4].ke PARAM */ = data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */;
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->integerParameter[54] /* channel_3.Channel[1,3].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->integerParameter[49] /* channel_3.Channel[1,3].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->integerParameter[44] /* channel_3.Channel[1,3].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[188] /* channel_3.Channel[1,3].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[173] /* channel_3.Channel[1,3].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[194] /* channel_3.Channel[1,3].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].f_flow = channel_3.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */ = data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].deltaVFlow = channel_3.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */ = data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].deltaLpiezo = channel_3.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[148] /* channel_3.Channel[1,3].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].deltaLpipe = channel_3.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[153] /* channel_3.Channel[1,3].deltaLpipe PARAM */ = data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].ke = channel_3.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[183] /* channel_3.Channel[1,3].ke PARAM */ = data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */;
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->integerParameter[53] /* channel_3.Channel[1,2].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->simulationInfo->integerParameter[48] /* channel_3.Channel[1,2].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->integerParameter[43] /* channel_3.Channel[1,2].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[187] /* channel_3.Channel[1,2].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  data->simulationInfo->realParameter[172] /* channel_3.Channel[1,2].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[193] /* channel_3.Channel[1,2].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].f_flow = channel_3.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */ = data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].deltaVFlow = channel_3.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */ = data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].deltaLpiezo = channel_3.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[147] /* channel_3.Channel[1,2].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].deltaLpipe = channel_3.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[152] /* channel_3.Channel[1,2].deltaLpipe PARAM */ = data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].ke = channel_3.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[182] /* channel_3.Channel[1,2].ke PARAM */ = data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */;
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->integerParameter[52] /* channel_3.Channel[1,1].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->integerParameter[47] /* channel_3.Channel[1,1].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->integerParameter[42] /* channel_3.Channel[1,1].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[186] /* channel_3.Channel[1,1].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[171] /* channel_3.Channel[1,1].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[192] /* channel_3.Channel[1,1].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].f_flow = channel_3.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */ = data->simulationInfo->realParameter[205] /* channel_3.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].deltaVFlow = channel_3.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */ = data->simulationInfo->realParameter[204] /* channel_3.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].deltaLpiezo = channel_3.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[146] /* channel_3.Channel[1,1].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[201] /* channel_3.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].deltaLpipe = channel_3.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[151] /* channel_3.Channel[1,1].deltaLpipe PARAM */ = data->simulationInfo->realParameter[202] /* channel_3.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].ke = channel_3.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[181] /* channel_3.Channel[1,1].ke PARAM */ = data->simulationInfo->realParameter[208] /* channel_3.ke PARAM */;
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
channel_3.delta = 0.01
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[200] /* channel_3.delta PARAM */ = 0.01;
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
channel_3.m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[209] /* channel_3.m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
channel_3.h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[206] /* channel_3.h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
channel_3.t_start = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[212] /* channel_3.t_start PARAM */ = 573.15;
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
channel_3.p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[211] /* channel_3.p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
channel_3.momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->integerParameter[59] /* channel_3.momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
channel_3.massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->integerParameter[58] /* channel_3.massDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
channel_3.energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->integerParameter[57] /* channel_3.energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
valve_1.filter.nr = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->integerParameter[73] /* valve_1.filter.nr PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
valve_1.filter.na = 0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->integerParameter[70] /* valve_1.filter.na PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
valve_1.filter.nc0 = 0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->integerParameter[71] /* valve_1.filter.nc0 PARAM */ = ((modelica_integer) 0);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
valve_1.filter.ncr = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->integerParameter[72] /* valve_1.filter.ncr PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
valve_1.filter.u_nominal = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[246] /* valve_1.filter.u_nominal PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
valve_1.filter.y_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[249] /* valve_1.filter.y_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
valve_1.filter.x_start[2] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[248] /* valve_1.filter.x_start[2] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
valve_1.filter.x_start[1] = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[247] /* valve_1.filter.x_start[1] PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
valve_1.filter.nx = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->integerParameter[74] /* valve_1.filter.nx PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
valve_1.filter.init = Modelica.Blocks.Types.Init.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->integerParameter[69] /* valve_1.filter.init PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
valve_1.filter.normalized = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->booleanParameter[14] /* valve_1.filter.normalized PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
valve_1.filter.f_min = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[242] /* valve_1.filter.f_min PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
valve_1.filter.A_ripple = 0.5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->realParameter[238] /* valve_1.filter.A_ripple PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
valve_1.filter.gain = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[243] /* valve_1.filter.gain PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
valve_1.riseTime = 30.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[258] /* valve_1.riseTime PARAM */ = 30.0;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
valve_1.filter.f_cut = 5.0 / (6.283185307179586 * valve_1.riseTime)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[241] /* valve_1.filter.f_cut PARAM */ = DIVISION_SIM(5.0,(6.283185307179586) * (data->simulationInfo->realParameter[258] /* valve_1.riseTime PARAM */),"6.283185307179586 * valve_1.riseTime",equationIndexes);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
valve_1.filter.order = 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->integerParameter[75] /* valve_1.filter.order PARAM */ = ((modelica_integer) 2);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
valve_1.filter.filterType = Modelica.Blocks.Types.FilterType.LowPass
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->integerParameter[68] /* valve_1.filter.filterType PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
valve_1.filter.analogFilter = Modelica.Blocks.Types.AnalogFilter.CriticalDamping
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->integerParameter[67] /* valve_1.filter.analogFilter PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
valve_1.use_Re = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->booleanParameter[21] /* valve_1.use_Re PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
valve_1.Fxt_full = 0.5
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[230] /* valve_1.Fxt_full PARAM */ = 0.5;
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
valve_1.leakageOpening = 0.001
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[250] /* valve_1.leakageOpening PARAM */ = 0.001;
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
valve_1.minLimiter.uMin = valve_1.leakageOpening
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[254] /* valve_1.minLimiter.uMin PARAM */ = data->simulationInfo->realParameter[250] /* valve_1.leakageOpening PARAM */;
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
valve_1.checkValve = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->booleanParameter[13] /* valve_1.checkValve PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
valve_1.filteredOpening = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->booleanParameter[15] /* valve_1.filteredOpening PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
valve_1.opening_nominal = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[255] /* valve_1.opening_nominal PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
valve_1.rho_nominal = 998.2060924679472
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[257] /* valve_1.rho_nominal PARAM */ = 998.2060924679472;
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
valve_1.Cv = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[229] /* valve_1.Cv PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
valve_1.Kv = 300.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[232] /* valve_1.Kv PARAM */ = 300.0;
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
valve_1.CvData = Modelica.Fluid.Types.CvTypes.Kv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->integerParameter[66] /* valve_1.CvData PARAM */ = 2;
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
valve_1.show_V_flow = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->booleanParameter[20] /* valve_1.show_V_flow PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
valve_1.show_T = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->booleanParameter[19] /* valve_1.show_T PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
valve_1.m_flow_small = system.m_flow_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */ = data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */;
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
valve_1.m_flow_start = valve_1.m_flow_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->simulationInfo->realParameter[253] /* valve_1.m_flow_start PARAM */ = data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */;
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
valve_1.dp_start = valve_1.dp_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  data->simulationInfo->realParameter[236] /* valve_1.dp_start PARAM */ = data->simulationInfo->realParameter[234] /* valve_1.dp_nominal PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
valve_1.showDesignFlowDirection = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  data->simulationInfo->booleanParameter[18] /* valve_1.showDesignFlowDirection PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
valve_1.port_b_exposesState = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->booleanParameter[17] /* valve_1.port_b_exposesState PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
valve_1.port_a_exposesState = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->simulationInfo->booleanParameter[16] /* valve_1.port_a_exposesState PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
valve_1.allowFlowReversal = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->booleanParameter[12] /* valve_1.allowFlowReversal PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  data->simulationInfo->integerParameter[37] /* channel_2.Channel[1,5].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->simulationInfo->integerParameter[32] /* channel_2.Channel[1,5].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->integerParameter[27] /* channel_2.Channel[1,5].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 570
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[124] /* channel_2.Channel[1,5].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 569
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[109] /* channel_2.Channel[1,5].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 568
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[129] /* channel_2.Channel[1,5].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 567
type: SIMPLE_ASSIGN
channel_2.f_flow = 0.7853981633974483 * channel_2.n_parallel * channel_2.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  modelica_real tmp2;
  tmp2 = data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */;
  data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[143] /* channel_2.n_parallel PARAM */) * ((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 566
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].f_flow = channel_2.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */ = data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 565
type: SIMPLE_ASSIGN
channel_2.k_volume = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[140] /* channel_2.k_volume PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 564
type: SIMPLE_ASSIGN
channel_2.deltaVFlow = 0.7853981633974483 * channel_2.k_volume * channel_2.n_parallel * channel_2.deltaLpipe * channel_2.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  modelica_real tmp3;
  tmp3 = data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */;
  data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[140] /* channel_2.k_volume PARAM */) * ((data->simulationInfo->realParameter[143] /* channel_2.n_parallel PARAM */) * ((data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */) * ((tmp3 * tmp3)))));
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].deltaVFlow = channel_2.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */ = data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
channel_2.Lpiezo = -10.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[131] /* channel_2.Lpiezo PARAM */ = -10.0;
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
channel_2.deltaLpiezo = channel_2.Lpiezo / (*Real*)(channel_2.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[131] /* channel_2.Lpiezo PARAM */,((modelica_real)data->simulationInfo->integerParameter[41] /* channel_2.numberOfVolumes PARAM */),"/*Real*/(channel_2.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].deltaLpiezo = channel_2.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[84] /* channel_2.Channel[1,5].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].deltaLpipe = channel_2.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->simulationInfo->realParameter[89] /* channel_2.Channel[1,5].deltaLpipe PARAM */ = data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
channel_2.ke = 0.00014
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */ = 0.00014;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].ke = channel_2.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[119] /* channel_2.Channel[1,5].ke PARAM */ = data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */;
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->integerParameter[36] /* channel_2.Channel[1,4].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->integerParameter[31] /* channel_2.Channel[1,4].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->integerParameter[26] /* channel_2.Channel[1,4].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[123] /* channel_2.Channel[1,4].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[108] /* channel_2.Channel[1,4].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[128] /* channel_2.Channel[1,4].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].f_flow = channel_2.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */ = data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].deltaVFlow = channel_2.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */ = data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].deltaLpiezo = channel_2.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[83] /* channel_2.Channel[1,4].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].deltaLpipe = channel_2.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[88] /* channel_2.Channel[1,4].deltaLpipe PARAM */ = data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].ke = channel_2.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[118] /* channel_2.Channel[1,4].ke PARAM */ = data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->integerParameter[35] /* channel_2.Channel[1,3].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->integerParameter[30] /* channel_2.Channel[1,3].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->integerParameter[25] /* channel_2.Channel[1,3].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[122] /* channel_2.Channel[1,3].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->realParameter[107] /* channel_2.Channel[1,3].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[127] /* channel_2.Channel[1,3].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].f_flow = channel_2.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */ = data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].deltaVFlow = channel_2.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */ = data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].deltaLpiezo = channel_2.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[82] /* channel_2.Channel[1,3].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].deltaLpipe = channel_2.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[87] /* channel_2.Channel[1,3].deltaLpipe PARAM */ = data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].ke = channel_2.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->realParameter[117] /* channel_2.Channel[1,3].ke PARAM */ = data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */;
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->integerParameter[34] /* channel_2.Channel[1,2].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->simulationInfo->integerParameter[29] /* channel_2.Channel[1,2].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->integerParameter[24] /* channel_2.Channel[1,2].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[121] /* channel_2.Channel[1,2].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[106] /* channel_2.Channel[1,2].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[126] /* channel_2.Channel[1,2].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].f_flow = channel_2.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */ = data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].deltaVFlow = channel_2.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */ = data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].deltaLpiezo = channel_2.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[81] /* channel_2.Channel[1,2].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].deltaLpipe = channel_2.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[86] /* channel_2.Channel[1,2].deltaLpipe PARAM */ = data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].ke = channel_2.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[116] /* channel_2.Channel[1,2].ke PARAM */ = data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->integerParameter[33] /* channel_2.Channel[1,1].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->integerParameter[28] /* channel_2.Channel[1,1].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->integerParameter[23] /* channel_2.Channel[1,1].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[120] /* channel_2.Channel[1,1].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[105] /* channel_2.Channel[1,1].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[125] /* channel_2.Channel[1,1].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].f_flow = channel_2.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */ = data->simulationInfo->realParameter[138] /* channel_2.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].deltaVFlow = channel_2.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */ = data->simulationInfo->realParameter[137] /* channel_2.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].deltaLpiezo = channel_2.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[80] /* channel_2.Channel[1,1].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[134] /* channel_2.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].deltaLpipe = channel_2.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[85] /* channel_2.Channel[1,1].deltaLpipe PARAM */ = data->simulationInfo->realParameter[135] /* channel_2.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].ke = channel_2.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[115] /* channel_2.Channel[1,1].ke PARAM */ = data->simulationInfo->realParameter[141] /* channel_2.ke PARAM */;
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
channel_2.delta = 0.01
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[133] /* channel_2.delta PARAM */ = 0.01;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
channel_2.m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[142] /* channel_2.m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
channel_2.h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[139] /* channel_2.h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
channel_2.t_start = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[145] /* channel_2.t_start PARAM */ = 573.15;
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
channel_2.p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[144] /* channel_2.p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
channel_2.momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->integerParameter[40] /* channel_2.momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
channel_2.massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->integerParameter[39] /* channel_2.massDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
channel_2.energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->integerParameter[38] /* channel_2.energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->integerParameter[18] /* channel_1.Channel[1,5].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->integerParameter[13] /* channel_1.Channel[1,5].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->integerParameter[8] /* channel_1.Channel[1,5].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[58] /* channel_1.Channel[1,5].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[43] /* channel_1.Channel[1,5].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[63] /* channel_1.Channel[1,5].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
channel_1.f_flow = 0.7853981633974483 * channel_1.n_parallel * channel_1.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  modelica_real tmp4;
  tmp4 = data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */;
  data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[77] /* channel_1.n_parallel PARAM */) * ((tmp4 * tmp4)));
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].f_flow = channel_1.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */ = data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
channel_1.k_volume = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[74] /* channel_1.k_volume PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
channel_1.deltaVFlow = 0.7853981633974483 * channel_1.k_volume * channel_1.n_parallel * channel_1.deltaLpipe * channel_1.Din ^ 2.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  modelica_real tmp5;
  tmp5 = data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */;
  data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */ = (0.7853981633974483) * ((data->simulationInfo->realParameter[74] /* channel_1.k_volume PARAM */) * ((data->simulationInfo->realParameter[77] /* channel_1.n_parallel PARAM */) * ((data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */) * ((tmp5 * tmp5)))));
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].deltaVFlow = channel_1.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */ = data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
channel_1.Lpiezo = -10.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[65] /* channel_1.Lpiezo PARAM */ = -10.0;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
channel_1.deltaLpiezo = channel_1.Lpiezo / (*Real*)(channel_1.numberOfVolumes)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[65] /* channel_1.Lpiezo PARAM */,((modelica_real)data->simulationInfo->integerParameter[22] /* channel_1.numberOfVolumes PARAM */),"/*Real*/(channel_1.numberOfVolumes)",equationIndexes);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].deltaLpiezo = channel_1.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[18] /* channel_1.Channel[1,5].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].deltaLpipe = channel_1.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[23] /* channel_1.Channel[1,5].deltaLpipe PARAM */ = data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
channel_1.ke = 0.00014
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */ = 0.00014;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].ke = channel_1.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[53] /* channel_1.Channel[1,5].ke PARAM */ = data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */;
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->integerParameter[17] /* channel_1.Channel[1,4].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->integerParameter[12] /* channel_1.Channel[1,4].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->integerParameter[7] /* channel_1.Channel[1,4].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[57] /* channel_1.Channel[1,4].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[42] /* channel_1.Channel[1,4].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[62] /* channel_1.Channel[1,4].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].f_flow = channel_1.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */ = data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].deltaVFlow = channel_1.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */ = data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].deltaLpiezo = channel_1.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[17] /* channel_1.Channel[1,4].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].deltaLpipe = channel_1.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[22] /* channel_1.Channel[1,4].deltaLpipe PARAM */ = data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].ke = channel_1.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[52] /* channel_1.Channel[1,4].ke PARAM */ = data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->integerParameter[16] /* channel_1.Channel[1,3].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->integerParameter[11] /* channel_1.Channel[1,3].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->integerParameter[6] /* channel_1.Channel[1,3].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[56] /* channel_1.Channel[1,3].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[41] /* channel_1.Channel[1,3].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[61] /* channel_1.Channel[1,3].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].f_flow = channel_1.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */ = data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].deltaVFlow = channel_1.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */ = data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].deltaLpiezo = channel_1.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[16] /* channel_1.Channel[1,3].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].deltaLpipe = channel_1.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  data->simulationInfo->realParameter[21] /* channel_1.Channel[1,3].deltaLpipe PARAM */ = data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].ke = channel_1.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[51] /* channel_1.Channel[1,3].ke PARAM */ = data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->integerParameter[15] /* channel_1.Channel[1,2].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->integerParameter[10] /* channel_1.Channel[1,2].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->integerParameter[5] /* channel_1.Channel[1,2].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[55] /* channel_1.Channel[1,2].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[40] /* channel_1.Channel[1,2].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[60] /* channel_1.Channel[1,2].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].f_flow = channel_1.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */ = data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].deltaVFlow = channel_1.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */ = data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].deltaLpiezo = channel_1.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[15] /* channel_1.Channel[1,2].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].deltaLpipe = channel_1.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[20] /* channel_1.Channel[1,2].deltaLpipe PARAM */ = data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].ke = channel_1.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[50] /* channel_1.Channel[1,2].ke PARAM */ = data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */;
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->integerParameter[14] /* channel_1.Channel[1,1].momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->integerParameter[9] /* channel_1.Channel[1,1].massDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->integerParameter[4] /* channel_1.Channel[1,1].energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[54] /* channel_1.Channel[1,1].m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[39] /* channel_1.Channel[1,1].h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[59] /* channel_1.Channel[1,1].p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].f_flow = channel_1.f_flow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */ = data->simulationInfo->realParameter[72] /* channel_1.f_flow PARAM */;
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].deltaVFlow = channel_1.deltaVFlow
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */ = data->simulationInfo->realParameter[71] /* channel_1.deltaVFlow PARAM */;
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].deltaLpiezo = channel_1.deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[14] /* channel_1.Channel[1,1].deltaLpiezo PARAM */ = data->simulationInfo->realParameter[68] /* channel_1.deltaLpiezo PARAM */;
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].deltaLpipe = channel_1.deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  data->simulationInfo->realParameter[19] /* channel_1.Channel[1,1].deltaLpipe PARAM */ = data->simulationInfo->realParameter[69] /* channel_1.deltaLpipe PARAM */;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].ke = channel_1.ke
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[49] /* channel_1.Channel[1,1].ke PARAM */ = data->simulationInfo->realParameter[75] /* channel_1.ke PARAM */;
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
channel_1.delta = 0.01
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[67] /* channel_1.delta PARAM */ = 0.01;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
channel_1.m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[76] /* channel_1.m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
channel_1.h_start = 3074507.857519781
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[73] /* channel_1.h_start PARAM */ = 3074507.857519781;
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
channel_1.t_start = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  data->simulationInfo->realParameter[79] /* channel_1.t_start PARAM */ = 573.15;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
channel_1.p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[78] /* channel_1.p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
channel_1.momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->integerParameter[21] /* channel_1.momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 437
type: SIMPLE_ASSIGN
channel_1.massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  data->simulationInfo->integerParameter[20] /* channel_1.massDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 436
type: SIMPLE_ASSIGN
channel_1.energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  data->simulationInfo->integerParameter[19] /* channel_1.energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
ramp1.startTime = 60.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ = 60.0;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
ramp1.offset = 300000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[216] /* ramp1.offset PARAM */ = 300000.0;
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
ramp1.duration = 600.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */ = 600.0;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
ramp1.height = -50000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[215] /* ramp1.height PARAM */ = -50000.0;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
Source_2.X[1] = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[12] /* Source_2.X[1] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
Source_2.T = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[11] /* Source_2.T PARAM */ = 573.15;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
Source_2.p = 101325.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[13] /* Source_2.p PARAM */ = 101325.0;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
Source_2.use_C_in = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->booleanParameter[6] /* Source_2.use_C_in PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
Source_2.use_X_in = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->booleanParameter[8] /* Source_2.use_X_in PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
Source_2.use_T_in = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->booleanParameter[7] /* Source_2.use_T_in PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
Source_2.use_p_in = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->booleanParameter[9] /* Source_2.use_p_in PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
Source_2.flowDirection = Modelica.Fluid.Types.PortFlowDirection.Bidirectional
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->integerParameter[2] /* Source_2.flowDirection PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
Source_2.medium.standardOrderComponents = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->booleanParameter[5] /* Source_2.medium.standardOrderComponents PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
Source_2.medium.preferredMediumStates = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->booleanParameter[4] /* Source_2.medium.preferredMediumStates PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
Source_2.nPorts = 1
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->integerParameter[3] /* Source_2.nPorts PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
Sink_2.X[1] = 1.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */ = 1.0;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
Sink_2.h = 84013.05815259689
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[3] /* Sink_2.h PARAM */ = 84013.05815259689;
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
Sink_2.use_T = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->booleanParameter[2] /* Sink_2.use_T PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
Sink_2.d = 998.2060924679472
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[2] /* Sink_2.d PARAM */ = 998.2060924679472;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
Sink_2.use_p = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->booleanParameter[3] /* Sink_2.use_p PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
Sink_2.flowDirection = Modelica.Fluid.Types.PortFlowDirection.Bidirectional
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->integerParameter[0] /* Sink_2.flowDirection PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
Sink_2.medium.standardOrderComponents = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->booleanParameter[1] /* Sink_2.medium.standardOrderComponents PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
Sink_2.medium.preferredMediumStates = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->booleanParameter[0] /* Sink_2.medium.preferredMediumStates PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
Sink_2.nPorts = 1
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->integerParameter[1] /* Sink_2.nPorts PARAM */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
system.eps_m_flow = 0.0001
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[221] /* system.eps_m_flow PARAM */ = 0.0001;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
system.m_flow_nominal = 100.0 * system.m_flow_small
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[223] /* system.m_flow_nominal PARAM */ = (100.0) * (data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
system.use_eps_Re = false
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->booleanParameter[11] /* system.use_eps_Re PARAM */ = 0;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
system.T_start = 573.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[219] /* system.T_start PARAM */ = 573.15;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
system.p_start = 200000.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[227] /* system.p_start PARAM */ = 200000.0;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
system.m_flow_start = 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[225] /* system.m_flow_start PARAM */ = 0.0;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
system.momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->integerParameter[63] /* system.momentumDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
system.traceDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->integerParameter[65] /* system.traceDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
system.substanceDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->integerParameter[64] /* system.substanceDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
system.massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->integerParameter[62] /* system.massDynamics PARAM */ = 4;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
system.energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->integerParameter[61] /* system.energyDynamics PARAM */ = 3;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
system.allowFlowReversal = true
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->booleanParameter[10] /* system.allowFlowReversal PARAM */ = 1;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
system.g = 9.806649999999999
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[222] /* system.g PARAM */ = 9.806649999999999;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
system.T_ambient = 293.15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[218] /* system.T_ambient PARAM */ = 293.15;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
system.p_ambient = 101325.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[226] /* system.p_ambient PARAM */ = 101325.0;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_9(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_10(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_11(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_12(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_41(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_42(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_43(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_44(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_47(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_49(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_50(DATA *data, threadData_t *threadData);


/*
equation index: 835
type: ALGORITHM

  (valve_2.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valve_2.filter.cr, {}, {}, valve_2.filter.f_cut);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  real_array tmp6;
  base_array_t tmp7;
  base_array_t tmp8;
  real_array tmp9;
  real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[272] /* valve_2.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp7, 0, NULL);
  simple_alloc_1d_base_array(&tmp8, 0, NULL);
  real_array_create(&tmp9, ((modelica_real*)&((&data->simulationInfo->realParameter[277] /* valve_2.filter.r[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp6, tmp7, tmp8, data->simulationInfo->realParameter[274] /* valve_2.filter.f_cut PARAM */ ,NULL ,NULL ,NULL), &tmp9);
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_52(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_53(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_55(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_56(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_57(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_58(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_59(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_60(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_61(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_62(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_63(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_64(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_65(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_66(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_67(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_68(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_69(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_70(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_71(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_72(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_73(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_74(DATA *data, threadData_t *threadData);


/*
equation index: 859
type: ALGORITHM

  (valve_1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valve_1.filter.cr, {}, {}, valve_1.filter.f_cut);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  real_array tmp10;
  base_array_t tmp11;
  base_array_t tmp12;
  real_array tmp13;
  real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[239] /* valve_1.filter.cr[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp11, 0, NULL);
  simple_alloc_1d_base_array(&tmp12, 0, NULL);
  real_array_create(&tmp13, ((modelica_real*)&((&data->simulationInfo->realParameter[244] /* valve_1.filter.r[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp10, tmp11, tmp12, data->simulationInfo->realParameter[241] /* valve_1.filter.f_cut PARAM */ ,NULL ,NULL ,NULL), &tmp13);
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_76(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_77(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_79(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_80(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_81(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_82(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_83(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_84(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_85(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_86(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_87(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_88(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_89(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_90(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_91(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_92(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_93(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_94(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_95(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_96(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_97(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_98(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_99(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_100(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_101(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_102(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_103(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_104(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_105(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_106(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_107(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_109(DATA *data, threadData_t *threadData);


void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_894(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_895(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_896(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_897(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_898(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_899(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_900(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_901(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_902(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_903(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_904(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_905(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_906(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_907(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_908(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_909(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_910(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_911(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_912(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_913(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_914(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_915(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_916(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_917(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_918(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_919(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_920(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_921(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_922(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_923(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_924(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_925(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_926(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_927(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_928(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_929(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_930(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_931(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_932(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_933(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_934(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_935(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_936(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_937(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_938(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_939(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_940(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_941(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_942(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_943(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_944(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_945(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_946(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_947(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_948(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_949(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_950(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_951(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_952(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_953(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_954(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_955(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_956(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_957(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_958(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_959(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_960(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_961(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_962(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_963(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_964(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_965(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_966(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_967(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_968(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_969(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_970(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_971(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_972(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_973(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_974(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_975(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_976(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_977(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_978(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_979(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_980(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_981(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_982(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_983(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_984(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_985(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_986(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_987(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_988(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_989(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_990(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_991(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_992(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_993(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_994(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_995(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_996(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_997(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_998(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_999(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1000(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1001(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1002(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1003(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1004(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1005(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1006(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1007(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1008(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1009(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1010(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1011(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1012(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1013(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1014(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1015(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1016(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1017(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1018(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1019(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1020(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1021(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1022(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1023(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1024(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1025(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1026(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1027(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1028(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1029(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1030(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1031(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1032(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1033(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1034(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1035(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1036(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1037(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1038(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1039(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1040(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1041(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1042(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1043(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1044(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1045(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1046(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1047(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1048(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1049(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1050(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1051(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1052(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1074(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1073(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1072(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1071(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1070(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1069(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1068(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1067(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1066(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1065(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1064(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1063(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1062(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1061(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1060(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1059(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1058(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1057(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1056(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1055(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1054(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1053(DATA*, threadData_t*);
/*
equation index: 1075
indexNonlinear: 1
type: NONLINEAR

vars: {channel_3.Channel[1,1].pv, channel_2.Channel[1,1].pv, channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,5].pv, channel_1.Channel[1,4].pv, channel_1.Channel[1,3].pv, channel_1.Channel[1,2].pv, channel_1.Channel[1,4].hv, channel_2.Channel[1,1].hv, channel_2.Channel[1,3].hv, channel_2.Channel[1,4].hv, channel_3.Channel[1,1].hv, channel_3.Channel[1,2].hv, channel_3.Channel[1,4].hv, channel_3.Channel[1,5].hv, channel_3.Channel[1,3].hv, channel_2.Channel[1,5].hv, channel_2.Channel[1,2].hv, channel_1.Channel[1,5].hv, channel_1.Channel[1,3].hv, channel_1.Channel[1,2].hv, channel_1.Channel[1,1].hv}
eqns: {894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1074, 1073, 1072, 1071, 1070, 1069, 1068, 1067, 1066, 1065, 1064, 1063, 1062, 1061, 1060, 1059, 1058, 1057, 1056, 1055, 1054, 1053}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1075 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[18] = data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[19] = data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[20] = data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[21] = data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1075};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1075 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[18];
  data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[19];
  data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[20];
  data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */ = data->simulationInfo->nonlinearSystemData[1].nlsx[21];
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_304(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_305(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_306(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_329(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_330(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_307(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_308(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_323(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_310(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_309(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_311(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_312(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 1089
type: SIMPLE_ASSIGN
valve_2.state_a.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_2.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  data->localData[0]->realVars[785] /* valve_2.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_314(DATA *data, threadData_t *threadData);


/*
equation index: 1091
type: SIMPLE_ASSIGN
valve_2.p = max(channel_2.Channel[1,5].p[2], channel_3.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  data->localData[0]->realVars[781] /* valve_2.p variable */ = fmax(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */,data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}

/*
equation index: 1092
type: SIMPLE_ASSIGN
valve_2.x = valve_2.dp / valve_2.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  data->localData[0]->realVars[788] /* valve_2.x variable */ = DIVISION_SIM(data->localData[0]->realVars[777] /* valve_2.dp variable */,data->localData[0]->realVars[781] /* valve_2.p variable */,"valve_2.p",equationIndexes);
  TRACE_POP
}

/*
equation index: 1093
type: SIMPLE_ASSIGN
valve_2.xs = max(-valve_2.Fxt, min(valve_2.x, valve_2.Fxt))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  data->localData[0]->realVars[789] /* valve_2.xs variable */ = fmax((-data->localData[0]->realVars[774] /* valve_2.Fxt variable */),fmin(data->localData[0]->realVars[788] /* valve_2.x variable */,data->localData[0]->realVars[774] /* valve_2.Fxt variable */));
  TRACE_POP
}

/*
equation index: 1094
type: SIMPLE_ASSIGN
valve_2.Y = 1.0 + (-0.3333333333333333) * abs(valve_2.xs) / valve_2.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  data->localData[0]->realVars[776] /* valve_2.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[789] /* valve_2.xs variable */),data->localData[0]->realVars[774] /* valve_2.Fxt variable */,"valve_2.Fxt",equationIndexes));
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_315(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_318(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_317(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_316(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_319(DATA *data, threadData_t *threadData);


/*
equation index: 1100
type: SIMPLE_ASSIGN
valve_2.state_b.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  data->localData[0]->realVars[787] /* valve_2.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_320(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_321(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_322(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_324(DATA *data, threadData_t *threadData);


/*
equation index: 1105
type: SIMPLE_ASSIGN
valve_1.state_b.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  data->localData[0]->realVars[771] /* valve_1.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_325(DATA *data, threadData_t *threadData);


/*
equation index: 1107
type: SIMPLE_ASSIGN
valve_1.p = max(channel_1.Channel[1,5].p[2], channel_2.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  data->localData[0]->realVars[765] /* valve_1.p variable */ = fmax(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */,data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */);
  TRACE_POP
}

/*
equation index: 1108
type: SIMPLE_ASSIGN
valve_1.x = valve_1.dp / valve_1.p
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  data->localData[0]->realVars[772] /* valve_1.x variable */ = DIVISION_SIM(data->localData[0]->realVars[761] /* valve_1.dp variable */,data->localData[0]->realVars[765] /* valve_1.p variable */,"valve_1.p",equationIndexes);
  TRACE_POP
}

/*
equation index: 1109
type: SIMPLE_ASSIGN
valve_1.xs = max(-valve_1.Fxt, min(valve_1.x, valve_1.Fxt))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  data->localData[0]->realVars[773] /* valve_1.xs variable */ = fmax((-data->localData[0]->realVars[758] /* valve_1.Fxt variable */),fmin(data->localData[0]->realVars[772] /* valve_1.x variable */,data->localData[0]->realVars[758] /* valve_1.Fxt variable */));
  TRACE_POP
}

/*
equation index: 1110
type: SIMPLE_ASSIGN
valve_1.Y = 1.0 + (-0.3333333333333333) * abs(valve_1.xs) / valve_1.Fxt
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  data->localData[0]->realVars[760] /* valve_1.Y variable */ = 1.0 + (-0.3333333333333333) * (DIVISION_SIM(fabs(data->localData[0]->realVars[773] /* valve_1.xs variable */),data->localData[0]->realVars[758] /* valve_1.Fxt variable */,"valve_1.Fxt",equationIndexes));
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_327(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_328(DATA *data, threadData_t *threadData);


/*
equation index: 1113
type: SIMPLE_ASSIGN
valve_1.state_a.d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_1.Channel[1,5].hv, 0, 0).rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  data->localData[0]->realVars[769] /* valve_1.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_326(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_331(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_336(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_339(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_342(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_345(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_348(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_351(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_354(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_357(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_360(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_363(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_366(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_369(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_372(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_375(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_378(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_380(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_381(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_382(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_383(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_384(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_385(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_386(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_387(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_388(DATA *data, threadData_t *threadData);


int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_784(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_783(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_782(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_781(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_780(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_779(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_778(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_777(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_776(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_775(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_774(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_773(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_772(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_771(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_770(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_769(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_768(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_767(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_766(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_765(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_764(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_763(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_762(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_761(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_760(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_759(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_758(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_757(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_756(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_755(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_754(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_753(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_752(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_751(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_750(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_749(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_748(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_747(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_746(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_745(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_744(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_743(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_742(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_741(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_740(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_739(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_738(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_737(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_736(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_735(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_734(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_733(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_732(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_731(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_730(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_729(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_728(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_727(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_726(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_725(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_724(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_723(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_722(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_721(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_720(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_719(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_718(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_717(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_716(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_715(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_714(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_713(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_712(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_711(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_710(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_709(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_708(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_707(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_706(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_705(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_704(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_703(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_702(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_701(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_700(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_699(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_698(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_697(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_696(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_695(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_694(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_693(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_692(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_691(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_690(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_689(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_688(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_687(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_686(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_685(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_684(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_683(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_682(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_681(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_680(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_679(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_678(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_677(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_676(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_675(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_674(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_673(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_672(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_671(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_670(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_669(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_668(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_667(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_666(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_665(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_664(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_663(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_662(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_661(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_660(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_659(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_658(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_657(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_656(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_655(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_654(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_653(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_652(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_651(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_650(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_649(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_648(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_647(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_646(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_645(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_644(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_643(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_642(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_641(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_640(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_639(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_638(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_637(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_636(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_635(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_634(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_633(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_632(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_631(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_630(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_629(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_628(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_627(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_626(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_625(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_624(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_623(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_622(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_621(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_620(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_619(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_618(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_617(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_616(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_615(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_614(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_613(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_612(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_611(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_610(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_609(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_608(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_607(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_606(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_605(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_604(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_603(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_602(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_601(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_600(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_599(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_598(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_597(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_596(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_595(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_594(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_593(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_592(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_591(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_590(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_589(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_588(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_587(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_586(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_585(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_584(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_583(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_582(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_581(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_580(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_579(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_578(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_577(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_576(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_575(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_574(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_573(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_572(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_571(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_570(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_569(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_568(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_567(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_566(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_565(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_564(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_563(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_562(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_561(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_560(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_559(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_558(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_557(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_556(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_555(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_554(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_553(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_552(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_551(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_550(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_549(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_548(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_547(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_546(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_545(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_544(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_543(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_542(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_541(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_540(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_539(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_538(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_537(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_536(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_535(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_534(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_533(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_532(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_531(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_530(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_529(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_528(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_527(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_526(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_525(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_524(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_523(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_522(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_521(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_520(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_519(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_518(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_517(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_516(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_515(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_514(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_513(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_512(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_511(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_510(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_509(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_508(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_507(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_506(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_505(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_504(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_503(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_502(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_501(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_500(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_499(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_498(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_497(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_496(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_495(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_494(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_493(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_492(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_491(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_490(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_489(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_488(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_487(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_486(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_485(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_484(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_483(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_482(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_481(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_480(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_479(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_478(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_477(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_476(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_475(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_474(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_473(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_472(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_471(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_470(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_469(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_468(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_467(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_466(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_465(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_464(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_463(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_462(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_461(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_460(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_459(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_458(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_457(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_456(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_455(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_454(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_453(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_452(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_451(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_450(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_449(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_448(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_447(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_446(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_445(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_444(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_443(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_442(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_441(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_440(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_439(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_438(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_437(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_436(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_435(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_434(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_433(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_432(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_431(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_430(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_429(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_428(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_427(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_426(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_425(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_424(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_423(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_422(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_421(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_420(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_419(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_418(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_417(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_416(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_415(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_414(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_413(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_412(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_411(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_410(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_409(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_408(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_407(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_406(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_405(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_404(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_403(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_402(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_401(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_400(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_399(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_398(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_397(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_9(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_10(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_11(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_12(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_32(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_33(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_34(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_36(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_41(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_42(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_43(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_44(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_47(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_48(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_49(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_50(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_835(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_52(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_53(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_55(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_56(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_57(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_58(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_59(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_60(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_61(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_62(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_63(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_64(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_65(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_66(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_67(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_68(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_69(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_70(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_71(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_72(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_73(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_74(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_859(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_76(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_77(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_79(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_80(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_81(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_82(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_83(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_84(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_85(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_86(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_87(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_88(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_89(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_90(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_91(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_92(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_93(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_94(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_95(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_96(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_97(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_98(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_99(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_100(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_101(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_102(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_103(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_104(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_105(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_106(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_107(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_109(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1075(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_304(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_305(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_306(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_329(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_330(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_307(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_308(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_323(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_310(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_309(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_311(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_312(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_313(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1089(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_314(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1091(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1092(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1093(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1094(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_315(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_318(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_317(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_316(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_319(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1100(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_320(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_321(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_322(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_324(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1105(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_325(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1107(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1108(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1109(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1110(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_327(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_328(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1113(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_326(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_331(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_336(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_339(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_342(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_345(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_348(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_351(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_354(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_357(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_360(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_363(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_366(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_369(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_372(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_375(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_378(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_380(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_381(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_382(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_383(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_384(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_385(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_386(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_387(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_388(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = data->localData[0]->realVars[96] /* der(channel_1.Channel[1,1].pv) DUMMY_DER */;
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = $DER.channel_1.Channel[1,1].pv", res);
    return 1;
  }
  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

