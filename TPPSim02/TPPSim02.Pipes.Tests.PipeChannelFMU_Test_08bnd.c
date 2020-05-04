/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1523
type: SIMPLE_ASSIGN
$START.valve_2.dp = valve_2.dp_start
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  data->modelData->realVarsData[777].attribute /* valve_2.dp variable */.start = data->simulationInfo->realParameter[269] /* valve_2.dp_start PARAM */;
    data->localData[0]->realVars[777] /* valve_2.dp variable */ = data->modelData->realVarsData[777].attribute /* valve_2.dp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[777].info /* valve_2.dp */.name, (modelica_real) data->localData[0]->realVars[777] /* valve_2.dp variable */);
  TRACE_POP
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
$START.valve_1.dp = valve_1.dp_start
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  data->modelData->realVarsData[761].attribute /* valve_1.dp variable */.start = data->simulationInfo->realParameter[236] /* valve_1.dp_start PARAM */;
    data->localData[0]->realVars[761] /* valve_1.dp variable */ = data->modelData->realVarsData[761].attribute /* valve_1.dp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[761].info /* valve_1.dp */.name, (modelica_real) data->localData[0]->realVars[761] /* valve_1.dp variable */);
  TRACE_POP
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
$START.channel_2.Channel[1,5].D_flow_v = valve_2.m_flow_start
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  data->modelData->realVarsData[18].attribute /* channel_2.Channel[1,5].D_flow_v STATE(1) */.start = data->simulationInfo->realParameter[286] /* valve_2.m_flow_start PARAM */;
    data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ = data->modelData->realVarsData[18].attribute /* channel_2.Channel[1,5].D_flow_v STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[18].info /* channel_2.Channel[1,5].D_flow_v */.name, (modelica_real) data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */);
  TRACE_POP
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
$START.channel_1.Channel[1,5].D_flow_v = valve_1.m_flow_start
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  data->modelData->realVarsData[4].attribute /* channel_1.Channel[1,5].D_flow_v STATE(1) */.start = data->simulationInfo->realParameter[253] /* valve_1.m_flow_start PARAM */;
    data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ = data->modelData->realVarsData[4].attribute /* channel_1.Channel[1,5].D_flow_v STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* channel_1.Channel[1,5].D_flow_v */.name, (modelica_real) data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1523(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1524(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1525(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1526(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1527
type: ALGORITHM

  $cse52 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(Sink_2.p, Sink_2.T, 0);
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */, ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp0, &(data->localData[0]->integerVars[44] /* $cse52.phase DISCRETE */), &(data->localData[0]->integerVars[45] /* $cse52.region DISCRETE */), &(data->localData[0]->realVars[458] /* $cse52.p variable */), &(data->localData[0]->realVars[453] /* $cse52.T variable */), &(data->localData[0]->realVars[457] /* $cse52.h variable */), &(data->localData[0]->realVars[452] /* $cse52.R variable */), &(data->localData[0]->realVars[454] /* $cse52.cp variable */), &(data->localData[0]->realVars[455] /* $cse52.cv variable */), &(data->localData[0]->realVars[461] /* $cse52.rho variable */), &(data->localData[0]->realVars[462] /* $cse52.s variable */), &(data->localData[0]->realVars[460] /* $cse52.pt variable */), &(data->localData[0]->realVars[459] /* $cse52.pd variable */), &(data->localData[0]->realVars[464] /* $cse52.vt variable */), &(data->localData[0]->realVars[463] /* $cse52.vp variable */), &(data->localData[0]->realVars[465] /* $cse52.x variable */), &(data->localData[0]->realVars[456] /* $cse52.dpT variable */));;
  TRACE_POP
}

/*
equation index: 1528
type: ALGORITHM

  $cse54 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(Sink_2.p);
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp1;
  tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */);
  Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(tmp1, &(data->localData[0]->booleanVars[2] /* $cse54.region3boundary DISCRETE */), &(data->localData[0]->realVars[480] /* $cse54.R variable */), &(data->localData[0]->realVars[481] /* $cse54.T variable */), &(data->localData[0]->realVars[484] /* $cse54.d variable */), &(data->localData[0]->realVars[486] /* $cse54.h variable */), &(data->localData[0]->realVars[489] /* $cse54.s variable */), &(data->localData[0]->realVars[482] /* $cse54.cp variable */), &(data->localData[0]->realVars[483] /* $cse54.cv variable */), &(data->localData[0]->realVars[485] /* $cse54.dpT variable */), &(data->localData[0]->realVars[488] /* $cse54.pt variable */), &(data->localData[0]->realVars[487] /* $cse54.pd variable */), &(data->localData[0]->realVars[491] /* $cse54.vt variable */), &(data->localData[0]->realVars[490] /* $cse54.vp variable */));;
  TRACE_POP
}

/*
equation index: 1529
type: ALGORITHM

  $cse55 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(Sink_2.p);
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp2;
  tmp2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */);
  Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(tmp2, &(data->localData[0]->booleanVars[3] /* $cse55.region3boundary DISCRETE */), &(data->localData[0]->realVars[492] /* $cse55.R variable */), &(data->localData[0]->realVars[493] /* $cse55.T variable */), &(data->localData[0]->realVars[496] /* $cse55.d variable */), &(data->localData[0]->realVars[498] /* $cse55.h variable */), &(data->localData[0]->realVars[501] /* $cse55.s variable */), &(data->localData[0]->realVars[494] /* $cse55.cp variable */), &(data->localData[0]->realVars[495] /* $cse55.cv variable */), &(data->localData[0]->realVars[497] /* $cse55.dpT variable */), &(data->localData[0]->realVars[500] /* $cse55.pt variable */), &(data->localData[0]->realVars[499] /* $cse55.pd variable */), &(data->localData[0]->realVars[503] /* $cse55.vt variable */), &(data->localData[0]->realVars[502] /* $cse55.vp variable */));;
  TRACE_POP
}

/*
equation index: 1530
type: ALGORITHM

  $cse1 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(Sink_2.p, Sink_2.T, 0);
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */, ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp3, &(data->localData[0]->integerVars[0] /* $cse1.phase DISCRETE */), &(data->localData[0]->integerVars[1] /* $cse1.region DISCRETE */), &(data->localData[0]->realVars[103] /* $cse1.p variable */), &(data->localData[0]->realVars[98] /* $cse1.T variable */), &(data->localData[0]->realVars[102] /* $cse1.h variable */), &(data->localData[0]->realVars[97] /* $cse1.R variable */), &(data->localData[0]->realVars[99] /* $cse1.cp variable */), &(data->localData[0]->realVars[100] /* $cse1.cv variable */), &(data->localData[0]->realVars[106] /* $cse1.rho variable */), &(data->localData[0]->realVars[107] /* $cse1.s variable */), &(data->localData[0]->realVars[105] /* $cse1.pt variable */), &(data->localData[0]->realVars[104] /* $cse1.pd variable */), &(data->localData[0]->realVars[109] /* $cse1.vt variable */), &(data->localData[0]->realVars[108] /* $cse1.vp variable */), &(data->localData[0]->realVars[110] /* $cse1.x variable */), &(data->localData[0]->realVars[101] /* $cse1.dpT variable */));;
  TRACE_POP
}
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_783(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_778(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_777(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_776(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_775(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_774(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_773(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_772(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_771(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_770(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_769(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_768(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_767(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_762(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_761(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_760(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_759(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_758(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_757(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_756(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_755(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_754(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_753(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_752(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_751(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_746(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_745(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_744(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_743(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_742(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_741(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_740(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_739(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_738(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_737(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_736(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_735(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_733(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_732(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_731(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_730(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_728(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_727(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_726(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_725(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_724(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_723(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_722(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_721(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_720(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_719(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_718(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_713(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_712(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_706(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_705(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_704(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_703(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_702(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_699(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_698(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_697(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_692(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_688(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_687(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_686(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_685(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_684(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_683(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_682(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_681(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_680(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_679(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_678(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_677(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_676(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_675(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_674(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_672(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_671(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_669(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_668(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_667(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_665(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_664(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_663(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_662(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_661(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_660(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_659(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_658(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_657(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_656(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_655(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_654(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_653(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_652(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_651(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_650(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_649(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_648(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_647(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_646(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_645(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_644(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_643(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_642(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_641(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_640(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_639(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_638(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_637(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_636(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_635(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_634(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_633(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_632(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_631(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_630(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_629(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_628(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_627(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_626(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_625(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_624(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_623(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_622(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_621(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_619(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_618(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_617(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_616(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_615(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_614(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_613(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_612(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_611(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_610(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_609(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_604(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_603(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_597(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_596(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_595(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_594(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_593(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_590(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_589(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_588(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_583(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_580(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_579(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_578(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_577(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_576(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_575(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_574(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_573(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_572(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_571(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_570(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_569(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_568(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_567(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_566(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_564(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_563(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_561(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_560(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_559(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_557(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_556(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_555(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_554(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_553(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_552(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_551(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_550(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_549(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_548(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_547(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_546(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_545(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_544(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_543(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_542(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_541(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_540(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_539(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_538(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_537(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_536(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_535(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_534(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_533(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_532(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_531(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_530(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_529(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_528(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_527(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_526(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_525(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_524(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_523(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_522(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_521(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_520(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_519(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_518(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_517(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_516(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_515(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_514(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_513(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_511(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_510(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_509(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_508(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_507(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_506(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_505(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_504(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_503(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_502(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_501(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_500(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_499(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_498(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_497(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_495(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_494(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_492(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_491(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_490(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_488(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_487(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_486(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_485(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_484(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_483(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_482(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_481(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_480(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_479(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_478(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_477(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_476(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_475(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_474(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_473(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_472(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_471(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_470(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_469(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_468(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_467(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_466(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_465(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_464(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_463(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_462(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_461(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_460(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_459(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_458(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_457(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_456(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_455(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_454(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_453(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_452(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_451(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_450(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_449(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_448(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_447(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_446(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_445(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_444(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_442(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_441(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_440(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_439(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_438(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_437(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_436(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_431(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_430(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_429(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_428(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_427(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_426(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_425(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_424(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_423(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_422(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_421(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_418(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_417(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_416(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_415(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_414(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_413(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_412(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_410(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_409(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_408(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_407(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_406(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_405(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_404(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_403(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_402(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_401(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_400(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_397(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 1923
type: ALGORITHM

  assert(Sink_2.p >= 611.657 and Sink_2.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Sink_2.p <= 100000000.0, has value: " + String(Sink_2.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1923};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,86,"Variable violating min/max constraint: 611.657 <= Sink_2.p <= 100000000.0, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,611.657);
    tmp5 = LessEq(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,100000000.0);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.p >= 611.657 and Sink_2.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1924
type: ALGORITHM

  assert(Sink_2.T >= 273.15 and Sink_2.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= Sink_2.T <= 2273.15, has value: " + String(Sink_2.T, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1924};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,81,"Variable violating min/max constraint: 273.15 <= Sink_2.T <= 2273.15, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */,273.15);
    tmp10 = LessEq(data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */,2273.15);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[0] /* Sink_2.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.T >= 273.15 and Sink_2.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1925
type: ALGORITHM

  assert(Sink_2.state.T >= 273.15 and Sink_2.state.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= Sink_2.state.T <= 2273.15, has value: " + String(Sink_2.state.T, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1925};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,87,"Variable violating min/max constraint: 273.15 <= Sink_2.state.T <= 2273.15, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[9] /* Sink_2.state.T PARAM */,273.15);
    tmp15 = LessEq(data->simulationInfo->realParameter[9] /* Sink_2.state.T PARAM */,2273.15);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[9] /* Sink_2.state.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.state.T >= 273.15 and Sink_2.state.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1926
type: ALGORITHM

  assert(channel_1.Din >= 0.0, "Variable violating min constraint: 0.0 <= channel_1.Din, has value: " + String(channel_1.Din, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1926};
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,68,"Variable violating min constraint: 0.0 <= channel_1.Din, has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp19 = GreaterEq(data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */,0.0);
    if(!tmp19)
    {
      tmp21 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[64] /* channel_1.Din PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/PipeChannel.mo",7,3,8,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Din >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp22 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1927
type: ALGORITHM

  assert(channel_2.Din >= 0.0, "Variable violating min constraint: 0.0 <= channel_2.Din, has value: " + String(channel_2.Din, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,68,"Variable violating min constraint: 0.0 <= channel_2.Din, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp23 = GreaterEq(data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */,0.0);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[130] /* channel_2.Din PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/PipeChannel.mo",7,3,8,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Din >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1928
type: ALGORITHM

  assert(channel_3.Din >= 0.0, "Variable violating min constraint: 0.0 <= channel_3.Din, has value: " + String(channel_3.Din, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1928};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,68,"Variable violating min constraint: 0.0 <= channel_3.Din, has value: ");
  modelica_string tmp29;
  static int tmp30 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp30)
  {
    tmp27 = GreaterEq(data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */,0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[197] /* channel_3.Din PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/PipeChannel.mo",7,3,8,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Din >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1929
type: ALGORITHM

  assert(system.dp_small >= 0.0, "Variable violating min constraint: 0.0 <= system.dp_small, has value: " + String(system.dp_small, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,70,"Variable violating min constraint: 0.0 <= system.dp_small, has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp31 = GreaterEq(data->simulationInfo->realParameter[220] /* system.dp_small PARAM */,0.0);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[220] /* system.dp_small PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",60,3,62,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.dp_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1930
type: ALGORITHM

  assert(valve_1.dp_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= valve_1.dp_turbulent, has value: " + String(valve_1.dp_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,75,"Variable violating min constraint: 0.0 <= valve_1.dp_turbulent, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp35 = GreaterEq(data->simulationInfo->realParameter[237] /* valve_1.dp_turbulent PARAM */,0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[237] /* valve_1.dp_turbulent PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",215,5,217,128,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.dp_turbulent >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1931
type: ALGORITHM

  assert(valve_2.dp_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= valve_2.dp_turbulent, has value: " + String(valve_2.dp_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,75,"Variable violating min constraint: 0.0 <= valve_2.dp_turbulent, has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq(data->simulationInfo->realParameter[270] /* valve_2.dp_turbulent PARAM */,0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[270] /* valve_2.dp_turbulent PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",215,5,217,128,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.dp_turbulent >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1932
type: ALGORITHM

  assert(Sink_2.medium.sat.psat >= 611.657 and Sink_2.medium.sat.psat <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Sink_2.medium.sat.psat <= 100000000.0, has value: " + String(Sink_2.medium.sat.psat, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  modelica_boolean tmp43;
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,100,"Variable violating min/max constraint: 611.657 <= Sink_2.medium.sat.psat <= 100000000.0, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp43 = GreaterEq(data->simulationInfo->realParameter[5] /* Sink_2.medium.sat.psat PARAM */,611.657);
    tmp44 = LessEq(data->simulationInfo->realParameter[5] /* Sink_2.medium.sat.psat PARAM */,100000000.0);
    if(!(tmp43 && tmp44))
    {
      tmp46 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* Sink_2.medium.sat.psat PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",7156,7,7156,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.sat.psat >= 611.657 and Sink_2.medium.sat.psat <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1933
type: ALGORITHM

  assert(Sink_2.medium.state.p >= 611.657 and Sink_2.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Sink_2.medium.state.p <= 100000000.0, has value: " + String(Sink_2.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,99,"Variable violating min/max constraint: 611.657 <= Sink_2.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp51;
  static int tmp52 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp52)
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[6] /* Sink_2.medium.state.p PARAM */,611.657);
    tmp49 = LessEq(data->simulationInfo->realParameter[6] /* Sink_2.medium.state.p PARAM */,100000000.0);
    if(!(tmp48 && tmp49))
    {
      tmp51 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[6] /* Sink_2.medium.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",146,5,146,34,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.state.p >= 611.657 and Sink_2.medium.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp52 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1934
type: ALGORITHM

  assert(channel_3.Channel[1,5].p[2] >= 611.657 and channel_3.Channel[1,5].p[2] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].p[2] <= 100000000.0, has value: " + String(channel_3.Channel[1,5].p[2], "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,105,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].p[2] <= 100000000.0, has value: ");
  modelica_string tmp56;
  static int tmp57 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp57)
  {
    tmp53 = GreaterEq(data->simulationInfo->realParameter[191] /* channel_3.Channel[1,5].p[2] PARAM */,611.657);
    tmp54 = LessEq(data->simulationInfo->realParameter[191] /* channel_3.Channel[1,5].p[2] PARAM */,100000000.0);
    if(!(tmp53 && tmp54))
    {
      tmp56 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[191] /* channel_3.Channel[1,5].p[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",31,3,31,110,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].p[2] >= 611.657 and channel_3.Channel[1,5].p[2] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp57 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1935
type: ALGORITHM

  assert(channel_3.waterOut.p >= 611.657 and channel_3.waterOut.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.waterOut.p <= 100000000.0, has value: " + String(channel_3.waterOut.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1935};
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,98,"Variable violating min/max constraint: 611.657 <= channel_3.waterOut.p <= 100000000.0, has value: ");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp62)
  {
    tmp58 = GreaterEq(data->simulationInfo->realParameter[213] /* channel_3.waterOut.p PARAM */,611.657);
    tmp59 = LessEq(data->simulationInfo->realParameter[213] /* channel_3.waterOut.p PARAM */,100000000.0);
    if(!(tmp58 && tmp59))
    {
      tmp61 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[213] /* channel_3.waterOut.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.waterOut.p >= 611.657 and channel_3.waterOut.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp62 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1936
type: ALGORITHM

  assert(Sink_2.ports[1].p >= 611.657 and Sink_2.ports[1].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Sink_2.ports[1].p <= 100000000.0, has value: " + String(Sink_2.ports[1].p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1936};
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,95,"Variable violating min/max constraint: 611.657 <= Sink_2.ports[1].p <= 100000000.0, has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp63 = GreaterEq(data->simulationInfo->realParameter[8] /* Sink_2.ports[1].p PARAM */,611.657);
    tmp64 = LessEq(data->simulationInfo->realParameter[8] /* Sink_2.ports[1].p PARAM */,100000000.0);
    if(!(tmp63 && tmp64))
    {
      tmp66 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[8] /* Sink_2.ports[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.ports[1].p >= 611.657 and Sink_2.ports[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1937
type: ALGORITHM

  assert(Sink_2.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= Sink_2.medium.p, has value: " + String(Sink_2.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1937};
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,70,"Variable violating min constraint: 0.0 <= Sink_2.medium.p, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp68 = GreaterEq(data->simulationInfo->realParameter[4] /* Sink_2.medium.p PARAM */,0.0);
    if(!tmp68)
    {
      tmp70 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[4] /* Sink_2.medium.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4477,7,4477,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1938
type: ALGORITHM

  assert(Sink_2.state.p >= 611.657 and Sink_2.state.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Sink_2.state.p <= 100000000.0, has value: " + String(Sink_2.state.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,92,"Variable violating min/max constraint: 611.657 <= Sink_2.state.p <= 100000000.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp72 = GreaterEq(data->simulationInfo->realParameter[10] /* Sink_2.state.p PARAM */,611.657);
    tmp73 = LessEq(data->simulationInfo->realParameter[10] /* Sink_2.state.p PARAM */,100000000.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[10] /* Sink_2.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",146,5,146,34,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.state.p >= 611.657 and Sink_2.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp76 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1939
type: ALGORITHM

  assert(valve_2.filter.init >= Modelica.Blocks.Types.Init.NoInit and valve_2.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valve_2.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(valve_2.filter.init, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1939};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,152,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valve_2.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp77 = GreaterEq(data->simulationInfo->integerParameter[79] /* valve_2.filter.init PARAM */,1);
    tmp78 = LessEq(data->simulationInfo->integerParameter[79] /* valve_2.filter.init PARAM */,4);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[79] /* valve_2.filter.init PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1744,5,1746,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.init >= Modelica.Blocks.Types.Init.NoInit and valve_2.filter.init <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1940
type: ALGORITHM

  assert(valve_2.filter.order >= 1, "Variable violating min constraint: 1 <= valve_2.filter.order, has value: " + String(valve_2.filter.order, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,73,"Variable violating min constraint: 1 <= valve_2.filter.order, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp82 = GreaterEq(data->simulationInfo->integerParameter[85] /* valve_2.filter.order PARAM */,((modelica_integer) 1));
    if(!tmp82)
    {
      tmp84 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[85] /* valve_2.filter.order PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1731,5,1731,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.order >= 1", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1941
type: ALGORITHM

  assert(valve_2.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valve_2.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, "Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valve_2.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: " + String(valve_2.filter.filterType, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,166,"Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valve_2.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->simulationInfo->integerParameter[78] /* valve_2.filter.filterType PARAM */,1);
    tmp87 = LessEq(data->simulationInfo->integerParameter[78] /* valve_2.filter.filterType PARAM */,4);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[78] /* valve_2.filter.filterType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1729,5,1730,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valve_2.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1942
type: ALGORITHM

  assert(valve_2.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valve_2.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, "Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valve_2.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: " + String(valve_2.filter.analogFilter, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,182,"Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valve_2.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->simulationInfo->integerParameter[77] /* valve_2.filter.analogFilter PARAM */,1);
    tmp92 = LessEq(data->simulationInfo->integerParameter[77] /* valve_2.filter.analogFilter PARAM */,4);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[77] /* valve_2.filter.analogFilter PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1727,5,1728,86,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valve_2.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1943
type: ALGORITHM

  assert(valve_2.p_nominal >= 611.657 and valve_2.p_nominal <= 100000000.0, "Variable violating min/max constraint: 611.657 <= valve_2.p_nominal <= 100000000.0, has value: " + String(valve_2.p_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,95,"Variable violating min/max constraint: 611.657 <= valve_2.p_nominal <= 100000000.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->simulationInfo->realParameter[289] /* valve_2.p_nominal PARAM */,611.657);
    tmp97 = LessEq(data->simulationInfo->realParameter[289] /* valve_2.p_nominal PARAM */,100000000.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[289] /* valve_2.p_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",196,5,197,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.p_nominal >= 611.657 and valve_2.p_nominal <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1944
type: ALGORITHM

  assert(valve_2.leakageOpening >= 0.0 and valve_2.leakageOpening <= 1.0, "Variable violating min/max constraint: 0.0 <= valve_2.leakageOpening <= 1.0, has value: " + String(valve_2.leakageOpening, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,88,"Variable violating min/max constraint: 0.0 <= valve_2.leakageOpening <= 1.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->simulationInfo->realParameter[283] /* valve_2.leakageOpening PARAM */,0.0);
    tmp102 = LessEq(data->simulationInfo->realParameter[283] /* valve_2.leakageOpening PARAM */,1.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[283] /* valve_2.leakageOpening PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",466,7,468,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.leakageOpening >= 0.0 and valve_2.leakageOpening <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1945
type: ALGORITHM

  assert(valve_2.opening_nominal >= 0.0 and valve_2.opening_nominal <= 1.0, "Variable violating min/max constraint: 0.0 <= valve_2.opening_nominal <= 1.0, has value: " + String(valve_2.opening_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  modelica_boolean tmp106;
  modelica_boolean tmp107;
  static const MMC_DEFSTRINGLIT(tmp108,89,"Variable violating min/max constraint: 0.0 <= valve_2.opening_nominal <= 1.0, has value: ");
  modelica_string tmp109;
  static int tmp110 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp110)
  {
    tmp106 = GreaterEq(data->simulationInfo->realParameter[288] /* valve_2.opening_nominal PARAM */,0.0);
    tmp107 = LessEq(data->simulationInfo->realParameter[288] /* valve_2.opening_nominal PARAM */,1.0);
    if(!(tmp106 && tmp107))
    {
      tmp109 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[288] /* valve_2.opening_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp108),tmp109);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",456,7,458,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.opening_nominal >= 0.0 and valve_2.opening_nominal <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1946
type: ALGORITHM

  assert(valve_2.rho_nominal >= 0.0 and valve_2.rho_nominal <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_2.rho_nominal <= 100000.0, has value: " + String(valve_2.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,90,"Variable violating min/max constraint: 0.0 <= valve_2.rho_nominal <= 100000.0, has value: ");
  modelica_string tmp114;
  static int tmp115 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp115)
  {
    tmp111 = GreaterEq(data->simulationInfo->realParameter[290] /* valve_2.rho_nominal PARAM */,0.0);
    tmp112 = LessEq(data->simulationInfo->realParameter[290] /* valve_2.rho_nominal PARAM */,100000.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[290] /* valve_2.rho_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",452,7,455,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.rho_nominal >= 0.0 and valve_2.rho_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1947
type: ALGORITHM

  assert(valve_2.m_flow_nominal >= -100000.0 and valve_2.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_nominal <= 100000.0, has value: " + String(valve_2.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,99,"Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp116 = GreaterEq(data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */,-100000.0);
    tmp117 = LessEq(data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */,100000.0);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[284] /* valve_2.m_flow_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",450,7,451,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.m_flow_nominal >= -100000.0 and valve_2.m_flow_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1948
type: ALGORITHM

  assert(valve_2.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve_2.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, "Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve_2.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: " + String(valve_2.CvData, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1948};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,141,"Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve_2.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp121 = GreaterEq(data->simulationInfo->integerParameter[76] /* valve_2.CvData PARAM */,1);
    tmp122 = LessEq(data->simulationInfo->integerParameter[76] /* valve_2.CvData PARAM */,4);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[76] /* valve_2.CvData PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",433,7,435,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve_2.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1949
type: ALGORITHM

  assert(system.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= system.m_flow_small, has value: " + String(system.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1949};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,74,"Variable violating min constraint: 0.0 <= system.m_flow_small, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[224] /* system.m_flow_small PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",63,3,65,83,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.m_flow_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1950
type: ALGORITHM

  assert(valve_2.m_flow_small >= -100000.0 and valve_2.m_flow_small <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_small <= 100000.0, has value: " + String(valve_2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1950};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,97,"Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_small <= 100000.0, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */,-100000.0);
    tmp131 = LessEq(data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */,100000.0);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",314,3,316,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.m_flow_small >= -100000.0 and valve_2.m_flow_small <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1951
type: ALGORITHM

  assert(valve_2.m_flow_start >= -100000.0 and valve_2.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_start <= 100000.0, has value: " + String(valve_2.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,97,"Variable violating min/max constraint: -100000.0 <= valve_2.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->simulationInfo->realParameter[286] /* valve_2.m_flow_start PARAM */,-100000.0);
    tmp136 = LessEq(data->simulationInfo->realParameter[286] /* valve_2.m_flow_start PARAM */,100000.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[286] /* valve_2.m_flow_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",310,3,312,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.m_flow_start >= -100000.0 and valve_2.m_flow_start <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1952
type: ALGORITHM

  assert(valve_2.dp_start >= -9.999999999999999e+59 and valve_2.dp_start <= 100000000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= valve_2.dp_start <= 100000000.0, has value: " + String(valve_2.dp_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1952};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,109,"Variable violating min/max constraint: -9.999999999999999e+59 <= valve_2.dp_start <= 100000000.0, has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp140 = GreaterEq(data->simulationInfo->realParameter[269] /* valve_2.dp_start PARAM */,-9.999999999999999e+59);
    tmp141 = LessEq(data->simulationInfo->realParameter[269] /* valve_2.dp_start PARAM */,100000000.0);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[269] /* valve_2.dp_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",307,3,309,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.dp_start >= -9.999999999999999e+59 and valve_2.dp_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1953
type: ALGORITHM

  assert(channel_3.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,5].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp145 = GreaterEq(data->simulationInfo->integerParameter[56] /* channel_3.Channel[1,5].momentumDynamics PARAM */,1);
    tmp146 = LessEq(data->simulationInfo->integerParameter[56] /* channel_3.Channel[1,5].momentumDynamics PARAM */,4);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[56] /* channel_3.Channel[1,5].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1954
type: ALGORITHM

  assert(channel_3.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,5].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp153;
  static int tmp154 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp154)
  {
    tmp150 = GreaterEq(data->simulationInfo->integerParameter[51] /* channel_3.Channel[1,5].massDynamics PARAM */,1);
    tmp151 = LessEq(data->simulationInfo->integerParameter[51] /* channel_3.Channel[1,5].massDynamics PARAM */,4);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[51] /* channel_3.Channel[1,5].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp154 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1955
type: ALGORITHM

  assert(channel_3.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,5].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1955};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp155 = GreaterEq(data->simulationInfo->integerParameter[46] /* channel_3.Channel[1,5].energyDynamics PARAM */,1);
    tmp156 = LessEq(data->simulationInfo->integerParameter[46] /* channel_3.Channel[1,5].energyDynamics PARAM */,4);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[46] /* channel_3.Channel[1,5].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1956
type: ALGORITHM

  assert(channel_3.Channel[1,5].h_start >= -10000000000.0 and channel_3.Channel[1,5].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].h_start <= 10000000000.0, has value: " + String(channel_3.Channel[1,5].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,117,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].h_start <= 10000000000.0, has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp160 = GreaterEq(data->simulationInfo->realParameter[175] /* channel_3.Channel[1,5].h_start PARAM */,-10000000000.0);
    tmp161 = LessEq(data->simulationInfo->realParameter[175] /* channel_3.Channel[1,5].h_start PARAM */,10000000000.0);
    if(!(tmp160 && tmp161))
    {
      tmp163 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[175] /* channel_3.Channel[1,5].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].h_start >= -10000000000.0 and channel_3.Channel[1,5].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1957
type: ALGORITHM

  assert(channel_3.Channel[1,5].p_start >= 611.657 and channel_3.Channel[1,5].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].p_start <= 100000000.0, has value: " + String(channel_3.Channel[1,5].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,108,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].p_start <= 100000000.0, has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp165 = GreaterEq(data->simulationInfo->realParameter[196] /* channel_3.Channel[1,5].p_start PARAM */,611.657);
    tmp166 = LessEq(data->simulationInfo->realParameter[196] /* channel_3.Channel[1,5].p_start PARAM */,100000000.0);
    if(!(tmp165 && tmp166))
    {
      tmp168 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[196] /* channel_3.Channel[1,5].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].p_start >= 611.657 and channel_3.Channel[1,5].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1958
type: ALGORITHM

  assert(channel_3.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,4].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp173;
  static int tmp174 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp174)
  {
    tmp170 = GreaterEq(data->simulationInfo->integerParameter[55] /* channel_3.Channel[1,4].momentumDynamics PARAM */,1);
    tmp171 = LessEq(data->simulationInfo->integerParameter[55] /* channel_3.Channel[1,4].momentumDynamics PARAM */,4);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[55] /* channel_3.Channel[1,4].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1959
type: ALGORITHM

  assert(channel_3.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,4].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp175 = GreaterEq(data->simulationInfo->integerParameter[50] /* channel_3.Channel[1,4].massDynamics PARAM */,1);
    tmp176 = LessEq(data->simulationInfo->integerParameter[50] /* channel_3.Channel[1,4].massDynamics PARAM */,4);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[50] /* channel_3.Channel[1,4].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1960
type: ALGORITHM

  assert(channel_3.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,4].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->simulationInfo->integerParameter[45] /* channel_3.Channel[1,4].energyDynamics PARAM */,1);
    tmp181 = LessEq(data->simulationInfo->integerParameter[45] /* channel_3.Channel[1,4].energyDynamics PARAM */,4);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[45] /* channel_3.Channel[1,4].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1961
type: ALGORITHM

  assert(channel_3.Channel[1,4].h_start >= -10000000000.0 and channel_3.Channel[1,4].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].h_start <= 10000000000.0, has value: " + String(channel_3.Channel[1,4].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1961};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,117,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].h_start <= 10000000000.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->simulationInfo->realParameter[174] /* channel_3.Channel[1,4].h_start PARAM */,-10000000000.0);
    tmp186 = LessEq(data->simulationInfo->realParameter[174] /* channel_3.Channel[1,4].h_start PARAM */,10000000000.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[174] /* channel_3.Channel[1,4].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].h_start >= -10000000000.0 and channel_3.Channel[1,4].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1962
type: ALGORITHM

  assert(channel_3.Channel[1,4].p_start >= 611.657 and channel_3.Channel[1,4].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,4].p_start <= 100000000.0, has value: " + String(channel_3.Channel[1,4].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1962};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,108,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,4].p_start <= 100000000.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->simulationInfo->realParameter[195] /* channel_3.Channel[1,4].p_start PARAM */,611.657);
    tmp191 = LessEq(data->simulationInfo->realParameter[195] /* channel_3.Channel[1,4].p_start PARAM */,100000000.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[195] /* channel_3.Channel[1,4].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].p_start >= 611.657 and channel_3.Channel[1,4].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1963
type: ALGORITHM

  assert(channel_3.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,3].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1963};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->simulationInfo->integerParameter[54] /* channel_3.Channel[1,3].momentumDynamics PARAM */,1);
    tmp196 = LessEq(data->simulationInfo->integerParameter[54] /* channel_3.Channel[1,3].momentumDynamics PARAM */,4);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[54] /* channel_3.Channel[1,3].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1964
type: ALGORITHM

  assert(channel_3.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,3].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->simulationInfo->integerParameter[49] /* channel_3.Channel[1,3].massDynamics PARAM */,1);
    tmp201 = LessEq(data->simulationInfo->integerParameter[49] /* channel_3.Channel[1,3].massDynamics PARAM */,4);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[49] /* channel_3.Channel[1,3].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1965
type: ALGORITHM

  assert(channel_3.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,3].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1965};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->simulationInfo->integerParameter[44] /* channel_3.Channel[1,3].energyDynamics PARAM */,1);
    tmp206 = LessEq(data->simulationInfo->integerParameter[44] /* channel_3.Channel[1,3].energyDynamics PARAM */,4);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[44] /* channel_3.Channel[1,3].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1966
type: ALGORITHM

  assert(channel_3.Channel[1,3].h_start >= -10000000000.0 and channel_3.Channel[1,3].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].h_start <= 10000000000.0, has value: " + String(channel_3.Channel[1,3].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,117,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].h_start <= 10000000000.0, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp210 = GreaterEq(data->simulationInfo->realParameter[173] /* channel_3.Channel[1,3].h_start PARAM */,-10000000000.0);
    tmp211 = LessEq(data->simulationInfo->realParameter[173] /* channel_3.Channel[1,3].h_start PARAM */,10000000000.0);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[173] /* channel_3.Channel[1,3].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].h_start >= -10000000000.0 and channel_3.Channel[1,3].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1967
type: ALGORITHM

  assert(channel_3.Channel[1,3].p_start >= 611.657 and channel_3.Channel[1,3].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,3].p_start <= 100000000.0, has value: " + String(channel_3.Channel[1,3].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,108,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,3].p_start <= 100000000.0, has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp215 = GreaterEq(data->simulationInfo->realParameter[194] /* channel_3.Channel[1,3].p_start PARAM */,611.657);
    tmp216 = LessEq(data->simulationInfo->realParameter[194] /* channel_3.Channel[1,3].p_start PARAM */,100000000.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[194] /* channel_3.Channel[1,3].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].p_start >= 611.657 and channel_3.Channel[1,3].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1968
type: ALGORITHM

  assert(channel_3.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,2].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp220 = GreaterEq(data->simulationInfo->integerParameter[53] /* channel_3.Channel[1,2].momentumDynamics PARAM */,1);
    tmp221 = LessEq(data->simulationInfo->integerParameter[53] /* channel_3.Channel[1,2].momentumDynamics PARAM */,4);
    if(!(tmp220 && tmp221))
    {
      tmp223 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[53] /* channel_3.Channel[1,2].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1969
type: ALGORITHM

  assert(channel_3.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,2].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1969};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp225 = GreaterEq(data->simulationInfo->integerParameter[48] /* channel_3.Channel[1,2].massDynamics PARAM */,1);
    tmp226 = LessEq(data->simulationInfo->integerParameter[48] /* channel_3.Channel[1,2].massDynamics PARAM */,4);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[48] /* channel_3.Channel[1,2].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1970
type: ALGORITHM

  assert(channel_3.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,2].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp233;
  static int tmp234 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp234)
  {
    tmp230 = GreaterEq(data->simulationInfo->integerParameter[43] /* channel_3.Channel[1,2].energyDynamics PARAM */,1);
    tmp231 = LessEq(data->simulationInfo->integerParameter[43] /* channel_3.Channel[1,2].energyDynamics PARAM */,4);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[43] /* channel_3.Channel[1,2].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1971
type: ALGORITHM

  assert(channel_3.Channel[1,2].h_start >= -10000000000.0 and channel_3.Channel[1,2].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].h_start <= 10000000000.0, has value: " + String(channel_3.Channel[1,2].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,117,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].h_start <= 10000000000.0, has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp235 = GreaterEq(data->simulationInfo->realParameter[172] /* channel_3.Channel[1,2].h_start PARAM */,-10000000000.0);
    tmp236 = LessEq(data->simulationInfo->realParameter[172] /* channel_3.Channel[1,2].h_start PARAM */,10000000000.0);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[172] /* channel_3.Channel[1,2].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].h_start >= -10000000000.0 and channel_3.Channel[1,2].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1972
type: ALGORITHM

  assert(channel_3.Channel[1,2].p_start >= 611.657 and channel_3.Channel[1,2].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,2].p_start <= 100000000.0, has value: " + String(channel_3.Channel[1,2].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,108,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,2].p_start <= 100000000.0, has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp240 = GreaterEq(data->simulationInfo->realParameter[193] /* channel_3.Channel[1,2].p_start PARAM */,611.657);
    tmp241 = LessEq(data->simulationInfo->realParameter[193] /* channel_3.Channel[1,2].p_start PARAM */,100000000.0);
    if(!(tmp240 && tmp241))
    {
      tmp243 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[193] /* channel_3.Channel[1,2].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].p_start >= 611.657 and channel_3.Channel[1,2].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1973
type: ALGORITHM

  assert(channel_3.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,1].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp245 = GreaterEq(data->simulationInfo->integerParameter[52] /* channel_3.Channel[1,1].momentumDynamics PARAM */,1);
    tmp246 = LessEq(data->simulationInfo->integerParameter[52] /* channel_3.Channel[1,1].momentumDynamics PARAM */,4);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[52] /* channel_3.Channel[1,1].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1974
type: ALGORITHM

  assert(channel_3.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,1].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1974};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp253;
  static int tmp254 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp254)
  {
    tmp250 = GreaterEq(data->simulationInfo->integerParameter[47] /* channel_3.Channel[1,1].massDynamics PARAM */,1);
    tmp251 = LessEq(data->simulationInfo->integerParameter[47] /* channel_3.Channel[1,1].massDynamics PARAM */,4);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[47] /* channel_3.Channel[1,1].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp254 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1975
type: ALGORITHM

  assert(channel_3.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.Channel[1,1].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1975};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp255 = GreaterEq(data->simulationInfo->integerParameter[42] /* channel_3.Channel[1,1].energyDynamics PARAM */,1);
    tmp256 = LessEq(data->simulationInfo->integerParameter[42] /* channel_3.Channel[1,1].energyDynamics PARAM */,4);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[42] /* channel_3.Channel[1,1].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1976
type: ALGORITHM

  assert(channel_3.Channel[1,1].h_start >= -10000000000.0 and channel_3.Channel[1,1].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].h_start <= 10000000000.0, has value: " + String(channel_3.Channel[1,1].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1976};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,117,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].h_start <= 10000000000.0, has value: ");
  modelica_string tmp263;
  static int tmp264 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp264)
  {
    tmp260 = GreaterEq(data->simulationInfo->realParameter[171] /* channel_3.Channel[1,1].h_start PARAM */,-10000000000.0);
    tmp261 = LessEq(data->simulationInfo->realParameter[171] /* channel_3.Channel[1,1].h_start PARAM */,10000000000.0);
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[171] /* channel_3.Channel[1,1].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].h_start >= -10000000000.0 and channel_3.Channel[1,1].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1977
type: ALGORITHM

  assert(channel_3.Channel[1,1].p_start >= 611.657 and channel_3.Channel[1,1].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,1].p_start <= 100000000.0, has value: " + String(channel_3.Channel[1,1].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,108,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,1].p_start <= 100000000.0, has value: ");
  modelica_string tmp268;
  static int tmp269 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp269)
  {
    tmp265 = GreaterEq(data->simulationInfo->realParameter[192] /* channel_3.Channel[1,1].p_start PARAM */,611.657);
    tmp266 = LessEq(data->simulationInfo->realParameter[192] /* channel_3.Channel[1,1].p_start PARAM */,100000000.0);
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[192] /* channel_3.Channel[1,1].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].p_start >= 611.657 and channel_3.Channel[1,1].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1978
type: ALGORITHM

  assert(channel_3.t_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_3.t_start, has value: " + String(channel_3.t_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1978};
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,72,"Variable violating min constraint: 0.0 <= channel_3.t_start, has value: ");
  modelica_string tmp272;
  static int tmp273 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp273)
  {
    tmp270 = GreaterEq(data->simulationInfo->realParameter[212] /* channel_3.t_start PARAM */,0.0);
    if(!tmp270)
    {
      tmp272 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[212] /* channel_3.t_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",22,3,22,161,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.t_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp273 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1979
type: ALGORITHM

  assert(channel_3.p_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_3.p_start, has value: " + String(channel_3.p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1979};
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,72,"Variable violating min constraint: 0.0 <= channel_3.p_start, has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp274 = GreaterEq(data->simulationInfo->realParameter[211] /* channel_3.p_start PARAM */,0.0);
    if(!tmp274)
    {
      tmp276 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[211] /* channel_3.p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",21,3,21,166,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.p_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1980
type: ALGORITHM

  assert(channel_3.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  modelica_boolean tmp278;
  modelica_boolean tmp279;
  static const MMC_DEFSTRINGLIT(tmp280,175,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp281;
  static int tmp282 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp282)
  {
    tmp278 = GreaterEq(data->simulationInfo->integerParameter[59] /* channel_3.momentumDynamics PARAM */,1);
    tmp279 = LessEq(data->simulationInfo->integerParameter[59] /* channel_3.momentumDynamics PARAM */,4);
    if(!(tmp278 && tmp279))
    {
      tmp281 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[59] /* channel_3.momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp280),tmp281);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",19,3,19,213,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp282 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1981
type: ALGORITHM

  assert(channel_3.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1981};
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp286;
  static int tmp287 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp287)
  {
    tmp283 = GreaterEq(data->simulationInfo->integerParameter[58] /* channel_3.massDynamics PARAM */,1);
    tmp284 = LessEq(data->simulationInfo->integerParameter[58] /* channel_3.massDynamics PARAM */,4);
    if(!(tmp283 && tmp284))
    {
      tmp286 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[58] /* channel_3.massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",18,3,18,201,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp287 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1982
type: ALGORITHM

  assert(channel_3.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_3.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1982};
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_3.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp291;
  static int tmp292 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp292)
  {
    tmp288 = GreaterEq(data->simulationInfo->integerParameter[57] /* channel_3.energyDynamics PARAM */,1);
    tmp289 = LessEq(data->simulationInfo->integerParameter[57] /* channel_3.energyDynamics PARAM */,4);
    if(!(tmp288 && tmp289))
    {
      tmp291 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[57] /* channel_3.energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",17,3,17,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_3.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp292 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1983
type: ALGORITHM

  assert(valve_1.filter.init >= Modelica.Blocks.Types.Init.NoInit and valve_1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valve_1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(valve_1.filter.init, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  modelica_boolean tmp293;
  modelica_boolean tmp294;
  static const MMC_DEFSTRINGLIT(tmp295,152,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valve_1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp296;
  static int tmp297 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp297)
  {
    tmp293 = GreaterEq(data->simulationInfo->integerParameter[69] /* valve_1.filter.init PARAM */,1);
    tmp294 = LessEq(data->simulationInfo->integerParameter[69] /* valve_1.filter.init PARAM */,4);
    if(!(tmp293 && tmp294))
    {
      tmp296 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[69] /* valve_1.filter.init PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp295),tmp296);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1744,5,1746,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.init >= Modelica.Blocks.Types.Init.NoInit and valve_1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp297 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1984
type: ALGORITHM

  assert(valve_1.filter.order >= 1, "Variable violating min constraint: 1 <= valve_1.filter.order, has value: " + String(valve_1.filter.order, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,73,"Variable violating min constraint: 1 <= valve_1.filter.order, has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp298 = GreaterEq(data->simulationInfo->integerParameter[75] /* valve_1.filter.order PARAM */,((modelica_integer) 1));
    if(!tmp298)
    {
      tmp300 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[75] /* valve_1.filter.order PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1731,5,1731,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.order >= 1", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1985
type: ALGORITHM

  assert(valve_1.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valve_1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, "Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valve_1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: " + String(valve_1.filter.filterType, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1985};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,166,"Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valve_1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: ");
  modelica_string tmp305;
  static int tmp306 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp306)
  {
    tmp302 = GreaterEq(data->simulationInfo->integerParameter[68] /* valve_1.filter.filterType PARAM */,1);
    tmp303 = LessEq(data->simulationInfo->integerParameter[68] /* valve_1.filter.filterType PARAM */,4);
    if(!(tmp302 && tmp303))
    {
      tmp305 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[68] /* valve_1.filter.filterType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1729,5,1730,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valve_1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1986
type: ALGORITHM

  assert(valve_1.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valve_1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, "Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valve_1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: " + String(valve_1.filter.analogFilter, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1986};
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,182,"Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valve_1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp307 = GreaterEq(data->simulationInfo->integerParameter[67] /* valve_1.filter.analogFilter PARAM */,1);
    tmp308 = LessEq(data->simulationInfo->integerParameter[67] /* valve_1.filter.analogFilter PARAM */,4);
    if(!(tmp307 && tmp308))
    {
      tmp310 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[67] /* valve_1.filter.analogFilter PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1727,5,1728,86,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valve_1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1987
type: ALGORITHM

  assert(valve_1.p_nominal >= 611.657 and valve_1.p_nominal <= 100000000.0, "Variable violating min/max constraint: 611.657 <= valve_1.p_nominal <= 100000000.0, has value: " + String(valve_1.p_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1987};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,95,"Variable violating min/max constraint: 611.657 <= valve_1.p_nominal <= 100000000.0, has value: ");
  modelica_string tmp315;
  static int tmp316 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp316)
  {
    tmp312 = GreaterEq(data->simulationInfo->realParameter[256] /* valve_1.p_nominal PARAM */,611.657);
    tmp313 = LessEq(data->simulationInfo->realParameter[256] /* valve_1.p_nominal PARAM */,100000000.0);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[256] /* valve_1.p_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",196,5,197,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.p_nominal >= 611.657 and valve_1.p_nominal <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1988
type: ALGORITHM

  assert(valve_1.leakageOpening >= 0.0 and valve_1.leakageOpening <= 1.0, "Variable violating min/max constraint: 0.0 <= valve_1.leakageOpening <= 1.0, has value: " + String(valve_1.leakageOpening, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1988};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,88,"Variable violating min/max constraint: 0.0 <= valve_1.leakageOpening <= 1.0, has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp317 = GreaterEq(data->simulationInfo->realParameter[250] /* valve_1.leakageOpening PARAM */,0.0);
    tmp318 = LessEq(data->simulationInfo->realParameter[250] /* valve_1.leakageOpening PARAM */,1.0);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[250] /* valve_1.leakageOpening PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",466,7,468,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.leakageOpening >= 0.0 and valve_1.leakageOpening <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1989
type: ALGORITHM

  assert(valve_1.opening_nominal >= 0.0 and valve_1.opening_nominal <= 1.0, "Variable violating min/max constraint: 0.0 <= valve_1.opening_nominal <= 1.0, has value: " + String(valve_1.opening_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1989};
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,89,"Variable violating min/max constraint: 0.0 <= valve_1.opening_nominal <= 1.0, has value: ");
  modelica_string tmp325;
  static int tmp326 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp326)
  {
    tmp322 = GreaterEq(data->simulationInfo->realParameter[255] /* valve_1.opening_nominal PARAM */,0.0);
    tmp323 = LessEq(data->simulationInfo->realParameter[255] /* valve_1.opening_nominal PARAM */,1.0);
    if(!(tmp322 && tmp323))
    {
      tmp325 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[255] /* valve_1.opening_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",456,7,458,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.opening_nominal >= 0.0 and valve_1.opening_nominal <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp326 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1990
type: ALGORITHM

  assert(valve_1.rho_nominal >= 0.0 and valve_1.rho_nominal <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_1.rho_nominal <= 100000.0, has value: " + String(valve_1.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1990};
  modelica_boolean tmp327;
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,90,"Variable violating min/max constraint: 0.0 <= valve_1.rho_nominal <= 100000.0, has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp327 = GreaterEq(data->simulationInfo->realParameter[257] /* valve_1.rho_nominal PARAM */,0.0);
    tmp328 = LessEq(data->simulationInfo->realParameter[257] /* valve_1.rho_nominal PARAM */,100000.0);
    if(!(tmp327 && tmp328))
    {
      tmp330 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[257] /* valve_1.rho_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",452,7,455,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.rho_nominal >= 0.0 and valve_1.rho_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1991
type: ALGORITHM

  assert(valve_1.m_flow_nominal >= -100000.0 and valve_1.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_nominal <= 100000.0, has value: " + String(valve_1.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1991};
  modelica_boolean tmp332;
  modelica_boolean tmp333;
  static const MMC_DEFSTRINGLIT(tmp334,99,"Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp335;
  static int tmp336 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp336)
  {
    tmp332 = GreaterEq(data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */,-100000.0);
    tmp333 = LessEq(data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */,100000.0);
    if(!(tmp332 && tmp333))
    {
      tmp335 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[251] /* valve_1.m_flow_nominal PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp334),tmp335);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",450,7,451,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.m_flow_nominal >= -100000.0 and valve_1.m_flow_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp336 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1992
type: ALGORITHM

  assert(valve_1.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve_1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, "Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve_1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: " + String(valve_1.CvData, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1992};
  modelica_boolean tmp337;
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,141,"Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve_1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: ");
  modelica_string tmp340;
  static int tmp341 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp341)
  {
    tmp337 = GreaterEq(data->simulationInfo->integerParameter[66] /* valve_1.CvData PARAM */,1);
    tmp338 = LessEq(data->simulationInfo->integerParameter[66] /* valve_1.CvData PARAM */,4);
    if(!(tmp337 && tmp338))
    {
      tmp340 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[66] /* valve_1.CvData PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",433,7,435,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve_1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp341 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1993
type: ALGORITHM

  assert(valve_1.m_flow_small >= -100000.0 and valve_1.m_flow_small <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_small <= 100000.0, has value: " + String(valve_1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1993};
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,97,"Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_small <= 100000.0, has value: ");
  modelica_string tmp345;
  static int tmp346 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp346)
  {
    tmp342 = GreaterEq(data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */,-100000.0);
    tmp343 = LessEq(data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */,100000.0);
    if(!(tmp342 && tmp343))
    {
      tmp345 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",314,3,316,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.m_flow_small >= -100000.0 and valve_1.m_flow_small <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1994
type: ALGORITHM

  assert(valve_1.m_flow_start >= -100000.0 and valve_1.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_start <= 100000.0, has value: " + String(valve_1.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1994};
  modelica_boolean tmp347;
  modelica_boolean tmp348;
  static const MMC_DEFSTRINGLIT(tmp349,97,"Variable violating min/max constraint: -100000.0 <= valve_1.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp350;
  static int tmp351 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp351)
  {
    tmp347 = GreaterEq(data->simulationInfo->realParameter[253] /* valve_1.m_flow_start PARAM */,-100000.0);
    tmp348 = LessEq(data->simulationInfo->realParameter[253] /* valve_1.m_flow_start PARAM */,100000.0);
    if(!(tmp347 && tmp348))
    {
      tmp350 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[253] /* valve_1.m_flow_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp349),tmp350);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",310,3,312,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.m_flow_start >= -100000.0 and valve_1.m_flow_start <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1995
type: ALGORITHM

  assert(valve_1.dp_start >= -9.999999999999999e+59 and valve_1.dp_start <= 100000000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= valve_1.dp_start <= 100000000.0, has value: " + String(valve_1.dp_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1995};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,109,"Variable violating min/max constraint: -9.999999999999999e+59 <= valve_1.dp_start <= 100000000.0, has value: ");
  modelica_string tmp355;
  static int tmp356 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp356)
  {
    tmp352 = GreaterEq(data->simulationInfo->realParameter[236] /* valve_1.dp_start PARAM */,-9.999999999999999e+59);
    tmp353 = LessEq(data->simulationInfo->realParameter[236] /* valve_1.dp_start PARAM */,100000000.0);
    if(!(tmp352 && tmp353))
    {
      tmp355 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[236] /* valve_1.dp_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",307,3,309,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.dp_start >= -9.999999999999999e+59 and valve_1.dp_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp356 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1996
type: ALGORITHM

  assert(channel_2.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,5].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1996};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp357 = GreaterEq(data->simulationInfo->integerParameter[37] /* channel_2.Channel[1,5].momentumDynamics PARAM */,1);
    tmp358 = LessEq(data->simulationInfo->integerParameter[37] /* channel_2.Channel[1,5].momentumDynamics PARAM */,4);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[37] /* channel_2.Channel[1,5].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1997
type: ALGORITHM

  assert(channel_2.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,5].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1997};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp365;
  static int tmp366 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp366)
  {
    tmp362 = GreaterEq(data->simulationInfo->integerParameter[32] /* channel_2.Channel[1,5].massDynamics PARAM */,1);
    tmp363 = LessEq(data->simulationInfo->integerParameter[32] /* channel_2.Channel[1,5].massDynamics PARAM */,4);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[32] /* channel_2.Channel[1,5].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp366 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1998
type: ALGORITHM

  assert(channel_2.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,5].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1998};
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp367 = GreaterEq(data->simulationInfo->integerParameter[27] /* channel_2.Channel[1,5].energyDynamics PARAM */,1);
    tmp368 = LessEq(data->simulationInfo->integerParameter[27] /* channel_2.Channel[1,5].energyDynamics PARAM */,4);
    if(!(tmp367 && tmp368))
    {
      tmp370 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[27] /* channel_2.Channel[1,5].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1999
type: ALGORITHM

  assert(channel_2.Channel[1,5].h_start >= -10000000000.0 and channel_2.Channel[1,5].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].h_start <= 10000000000.0, has value: " + String(channel_2.Channel[1,5].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1999};
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,117,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].h_start <= 10000000000.0, has value: ");
  modelica_string tmp375;
  static int tmp376 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp376)
  {
    tmp372 = GreaterEq(data->simulationInfo->realParameter[109] /* channel_2.Channel[1,5].h_start PARAM */,-10000000000.0);
    tmp373 = LessEq(data->simulationInfo->realParameter[109] /* channel_2.Channel[1,5].h_start PARAM */,10000000000.0);
    if(!(tmp372 && tmp373))
    {
      tmp375 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[109] /* channel_2.Channel[1,5].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].h_start >= -10000000000.0 and channel_2.Channel[1,5].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2000
type: ALGORITHM

  assert(channel_2.Channel[1,5].p_start >= 611.657 and channel_2.Channel[1,5].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].p_start <= 100000000.0, has value: " + String(channel_2.Channel[1,5].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2000};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,108,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].p_start <= 100000000.0, has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp377 = GreaterEq(data->simulationInfo->realParameter[129] /* channel_2.Channel[1,5].p_start PARAM */,611.657);
    tmp378 = LessEq(data->simulationInfo->realParameter[129] /* channel_2.Channel[1,5].p_start PARAM */,100000000.0);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[129] /* channel_2.Channel[1,5].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].p_start >= 611.657 and channel_2.Channel[1,5].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2001
type: ALGORITHM

  assert(channel_2.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,4].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2001};
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp385;
  static int tmp386 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp386)
  {
    tmp382 = GreaterEq(data->simulationInfo->integerParameter[36] /* channel_2.Channel[1,4].momentumDynamics PARAM */,1);
    tmp383 = LessEq(data->simulationInfo->integerParameter[36] /* channel_2.Channel[1,4].momentumDynamics PARAM */,4);
    if(!(tmp382 && tmp383))
    {
      tmp385 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[36] /* channel_2.Channel[1,4].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2002
type: ALGORITHM

  assert(channel_2.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,4].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2002};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp387 = GreaterEq(data->simulationInfo->integerParameter[31] /* channel_2.Channel[1,4].massDynamics PARAM */,1);
    tmp388 = LessEq(data->simulationInfo->integerParameter[31] /* channel_2.Channel[1,4].massDynamics PARAM */,4);
    if(!(tmp387 && tmp388))
    {
      tmp390 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[31] /* channel_2.Channel[1,4].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2003
type: ALGORITHM

  assert(channel_2.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,4].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2003};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp395;
  static int tmp396 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp396)
  {
    tmp392 = GreaterEq(data->simulationInfo->integerParameter[26] /* channel_2.Channel[1,4].energyDynamics PARAM */,1);
    tmp393 = LessEq(data->simulationInfo->integerParameter[26] /* channel_2.Channel[1,4].energyDynamics PARAM */,4);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[26] /* channel_2.Channel[1,4].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp396 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2004
type: ALGORITHM

  assert(channel_2.Channel[1,4].h_start >= -10000000000.0 and channel_2.Channel[1,4].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].h_start <= 10000000000.0, has value: " + String(channel_2.Channel[1,4].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2004};
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,117,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].h_start <= 10000000000.0, has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp397 = GreaterEq(data->simulationInfo->realParameter[108] /* channel_2.Channel[1,4].h_start PARAM */,-10000000000.0);
    tmp398 = LessEq(data->simulationInfo->realParameter[108] /* channel_2.Channel[1,4].h_start PARAM */,10000000000.0);
    if(!(tmp397 && tmp398))
    {
      tmp400 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[108] /* channel_2.Channel[1,4].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].h_start >= -10000000000.0 and channel_2.Channel[1,4].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2005
type: ALGORITHM

  assert(channel_2.Channel[1,4].p_start >= 611.657 and channel_2.Channel[1,4].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,4].p_start <= 100000000.0, has value: " + String(channel_2.Channel[1,4].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2005};
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,108,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,4].p_start <= 100000000.0, has value: ");
  modelica_string tmp405;
  static int tmp406 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp406)
  {
    tmp402 = GreaterEq(data->simulationInfo->realParameter[128] /* channel_2.Channel[1,4].p_start PARAM */,611.657);
    tmp403 = LessEq(data->simulationInfo->realParameter[128] /* channel_2.Channel[1,4].p_start PARAM */,100000000.0);
    if(!(tmp402 && tmp403))
    {
      tmp405 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[128] /* channel_2.Channel[1,4].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].p_start >= 611.657 and channel_2.Channel[1,4].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp406 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2006
type: ALGORITHM

  assert(channel_2.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,3].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2006};
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp410;
  static int tmp411 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp411)
  {
    tmp407 = GreaterEq(data->simulationInfo->integerParameter[35] /* channel_2.Channel[1,3].momentumDynamics PARAM */,1);
    tmp408 = LessEq(data->simulationInfo->integerParameter[35] /* channel_2.Channel[1,3].momentumDynamics PARAM */,4);
    if(!(tmp407 && tmp408))
    {
      tmp410 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[35] /* channel_2.Channel[1,3].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp411 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2007
type: ALGORITHM

  assert(channel_2.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,3].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2007};
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp415;
  static int tmp416 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp416)
  {
    tmp412 = GreaterEq(data->simulationInfo->integerParameter[30] /* channel_2.Channel[1,3].massDynamics PARAM */,1);
    tmp413 = LessEq(data->simulationInfo->integerParameter[30] /* channel_2.Channel[1,3].massDynamics PARAM */,4);
    if(!(tmp412 && tmp413))
    {
      tmp415 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[30] /* channel_2.Channel[1,3].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp416 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2008
type: ALGORITHM

  assert(channel_2.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,3].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2008};
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp417 = GreaterEq(data->simulationInfo->integerParameter[25] /* channel_2.Channel[1,3].energyDynamics PARAM */,1);
    tmp418 = LessEq(data->simulationInfo->integerParameter[25] /* channel_2.Channel[1,3].energyDynamics PARAM */,4);
    if(!(tmp417 && tmp418))
    {
      tmp420 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[25] /* channel_2.Channel[1,3].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2009
type: ALGORITHM

  assert(channel_2.Channel[1,3].h_start >= -10000000000.0 and channel_2.Channel[1,3].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].h_start <= 10000000000.0, has value: " + String(channel_2.Channel[1,3].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2009};
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,117,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].h_start <= 10000000000.0, has value: ");
  modelica_string tmp425;
  static int tmp426 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp426)
  {
    tmp422 = GreaterEq(data->simulationInfo->realParameter[107] /* channel_2.Channel[1,3].h_start PARAM */,-10000000000.0);
    tmp423 = LessEq(data->simulationInfo->realParameter[107] /* channel_2.Channel[1,3].h_start PARAM */,10000000000.0);
    if(!(tmp422 && tmp423))
    {
      tmp425 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[107] /* channel_2.Channel[1,3].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].h_start >= -10000000000.0 and channel_2.Channel[1,3].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp426 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2010
type: ALGORITHM

  assert(channel_2.Channel[1,3].p_start >= 611.657 and channel_2.Channel[1,3].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,3].p_start <= 100000000.0, has value: " + String(channel_2.Channel[1,3].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2010};
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,108,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,3].p_start <= 100000000.0, has value: ");
  modelica_string tmp430;
  static int tmp431 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp431)
  {
    tmp427 = GreaterEq(data->simulationInfo->realParameter[127] /* channel_2.Channel[1,3].p_start PARAM */,611.657);
    tmp428 = LessEq(data->simulationInfo->realParameter[127] /* channel_2.Channel[1,3].p_start PARAM */,100000000.0);
    if(!(tmp427 && tmp428))
    {
      tmp430 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[127] /* channel_2.Channel[1,3].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].p_start >= 611.657 and channel_2.Channel[1,3].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp431 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2011
type: ALGORITHM

  assert(channel_2.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,2].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2011};
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp435;
  static int tmp436 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp436)
  {
    tmp432 = GreaterEq(data->simulationInfo->integerParameter[34] /* channel_2.Channel[1,2].momentumDynamics PARAM */,1);
    tmp433 = LessEq(data->simulationInfo->integerParameter[34] /* channel_2.Channel[1,2].momentumDynamics PARAM */,4);
    if(!(tmp432 && tmp433))
    {
      tmp435 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[34] /* channel_2.Channel[1,2].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp436 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2012
type: ALGORITHM

  assert(channel_2.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,2].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2012};
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp440;
  static int tmp441 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp441)
  {
    tmp437 = GreaterEq(data->simulationInfo->integerParameter[29] /* channel_2.Channel[1,2].massDynamics PARAM */,1);
    tmp438 = LessEq(data->simulationInfo->integerParameter[29] /* channel_2.Channel[1,2].massDynamics PARAM */,4);
    if(!(tmp437 && tmp438))
    {
      tmp440 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[29] /* channel_2.Channel[1,2].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp441 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2013
type: ALGORITHM

  assert(channel_2.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,2].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2013};
  modelica_boolean tmp442;
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp445;
  static int tmp446 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp446)
  {
    tmp442 = GreaterEq(data->simulationInfo->integerParameter[24] /* channel_2.Channel[1,2].energyDynamics PARAM */,1);
    tmp443 = LessEq(data->simulationInfo->integerParameter[24] /* channel_2.Channel[1,2].energyDynamics PARAM */,4);
    if(!(tmp442 && tmp443))
    {
      tmp445 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[24] /* channel_2.Channel[1,2].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp446 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2014
type: ALGORITHM

  assert(channel_2.Channel[1,2].h_start >= -10000000000.0 and channel_2.Channel[1,2].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].h_start <= 10000000000.0, has value: " + String(channel_2.Channel[1,2].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2014};
  modelica_boolean tmp447;
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,117,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].h_start <= 10000000000.0, has value: ");
  modelica_string tmp450;
  static int tmp451 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp451)
  {
    tmp447 = GreaterEq(data->simulationInfo->realParameter[106] /* channel_2.Channel[1,2].h_start PARAM */,-10000000000.0);
    tmp448 = LessEq(data->simulationInfo->realParameter[106] /* channel_2.Channel[1,2].h_start PARAM */,10000000000.0);
    if(!(tmp447 && tmp448))
    {
      tmp450 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[106] /* channel_2.Channel[1,2].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].h_start >= -10000000000.0 and channel_2.Channel[1,2].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp451 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2015
type: ALGORITHM

  assert(channel_2.Channel[1,2].p_start >= 611.657 and channel_2.Channel[1,2].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,2].p_start <= 100000000.0, has value: " + String(channel_2.Channel[1,2].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2015};
  modelica_boolean tmp452;
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,108,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,2].p_start <= 100000000.0, has value: ");
  modelica_string tmp455;
  static int tmp456 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp456)
  {
    tmp452 = GreaterEq(data->simulationInfo->realParameter[126] /* channel_2.Channel[1,2].p_start PARAM */,611.657);
    tmp453 = LessEq(data->simulationInfo->realParameter[126] /* channel_2.Channel[1,2].p_start PARAM */,100000000.0);
    if(!(tmp452 && tmp453))
    {
      tmp455 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[126] /* channel_2.Channel[1,2].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].p_start >= 611.657 and channel_2.Channel[1,2].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp456 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2016
type: ALGORITHM

  assert(channel_2.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,1].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2016};
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp457 = GreaterEq(data->simulationInfo->integerParameter[33] /* channel_2.Channel[1,1].momentumDynamics PARAM */,1);
    tmp458 = LessEq(data->simulationInfo->integerParameter[33] /* channel_2.Channel[1,1].momentumDynamics PARAM */,4);
    if(!(tmp457 && tmp458))
    {
      tmp460 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[33] /* channel_2.Channel[1,1].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp461 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2017
type: ALGORITHM

  assert(channel_2.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,1].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2017};
  modelica_boolean tmp462;
  modelica_boolean tmp463;
  static const MMC_DEFSTRINGLIT(tmp464,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp465;
  static int tmp466 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp466)
  {
    tmp462 = GreaterEq(data->simulationInfo->integerParameter[28] /* channel_2.Channel[1,1].massDynamics PARAM */,1);
    tmp463 = LessEq(data->simulationInfo->integerParameter[28] /* channel_2.Channel[1,1].massDynamics PARAM */,4);
    if(!(tmp462 && tmp463))
    {
      tmp465 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[28] /* channel_2.Channel[1,1].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp464),tmp465);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp466 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2018
type: ALGORITHM

  assert(channel_2.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.Channel[1,1].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2018};
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp470;
  static int tmp471 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp471)
  {
    tmp467 = GreaterEq(data->simulationInfo->integerParameter[23] /* channel_2.Channel[1,1].energyDynamics PARAM */,1);
    tmp468 = LessEq(data->simulationInfo->integerParameter[23] /* channel_2.Channel[1,1].energyDynamics PARAM */,4);
    if(!(tmp467 && tmp468))
    {
      tmp470 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[23] /* channel_2.Channel[1,1].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp471 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2019
type: ALGORITHM

  assert(channel_2.Channel[1,1].h_start >= -10000000000.0 and channel_2.Channel[1,1].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].h_start <= 10000000000.0, has value: " + String(channel_2.Channel[1,1].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2019};
  modelica_boolean tmp472;
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,117,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].h_start <= 10000000000.0, has value: ");
  modelica_string tmp475;
  static int tmp476 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp476)
  {
    tmp472 = GreaterEq(data->simulationInfo->realParameter[105] /* channel_2.Channel[1,1].h_start PARAM */,-10000000000.0);
    tmp473 = LessEq(data->simulationInfo->realParameter[105] /* channel_2.Channel[1,1].h_start PARAM */,10000000000.0);
    if(!(tmp472 && tmp473))
    {
      tmp475 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[105] /* channel_2.Channel[1,1].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].h_start >= -10000000000.0 and channel_2.Channel[1,1].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp476 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2020
type: ALGORITHM

  assert(channel_2.Channel[1,1].p_start >= 611.657 and channel_2.Channel[1,1].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,1].p_start <= 100000000.0, has value: " + String(channel_2.Channel[1,1].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2020};
  modelica_boolean tmp477;
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,108,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,1].p_start <= 100000000.0, has value: ");
  modelica_string tmp480;
  static int tmp481 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp481)
  {
    tmp477 = GreaterEq(data->simulationInfo->realParameter[125] /* channel_2.Channel[1,1].p_start PARAM */,611.657);
    tmp478 = LessEq(data->simulationInfo->realParameter[125] /* channel_2.Channel[1,1].p_start PARAM */,100000000.0);
    if(!(tmp477 && tmp478))
    {
      tmp480 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[125] /* channel_2.Channel[1,1].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].p_start >= 611.657 and channel_2.Channel[1,1].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp481 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2021
type: ALGORITHM

  assert(channel_2.t_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_2.t_start, has value: " + String(channel_2.t_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2021};
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,72,"Variable violating min constraint: 0.0 <= channel_2.t_start, has value: ");
  modelica_string tmp484;
  static int tmp485 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp485)
  {
    tmp482 = GreaterEq(data->simulationInfo->realParameter[145] /* channel_2.t_start PARAM */,0.0);
    if(!tmp482)
    {
      tmp484 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[145] /* channel_2.t_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",22,3,22,161,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.t_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp485 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2022
type: ALGORITHM

  assert(channel_2.p_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_2.p_start, has value: " + String(channel_2.p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2022};
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,72,"Variable violating min constraint: 0.0 <= channel_2.p_start, has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp486 = GreaterEq(data->simulationInfo->realParameter[144] /* channel_2.p_start PARAM */,0.0);
    if(!tmp486)
    {
      tmp488 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[144] /* channel_2.p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",21,3,21,166,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.p_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2023
type: ALGORITHM

  assert(channel_2.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2023};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,175,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp493;
  static int tmp494 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp494)
  {
    tmp490 = GreaterEq(data->simulationInfo->integerParameter[40] /* channel_2.momentumDynamics PARAM */,1);
    tmp491 = LessEq(data->simulationInfo->integerParameter[40] /* channel_2.momentumDynamics PARAM */,4);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[40] /* channel_2.momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",19,3,19,213,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp494 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2024
type: ALGORITHM

  assert(channel_2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2024};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp495 = GreaterEq(data->simulationInfo->integerParameter[39] /* channel_2.massDynamics PARAM */,1);
    tmp496 = LessEq(data->simulationInfo->integerParameter[39] /* channel_2.massDynamics PARAM */,4);
    if(!(tmp495 && tmp496))
    {
      tmp498 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[39] /* channel_2.massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",18,3,18,201,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp499 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2025
type: ALGORITHM

  assert(channel_2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_2.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2025};
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  static const MMC_DEFSTRINGLIT(tmp502,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp503;
  static int tmp504 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp504)
  {
    tmp500 = GreaterEq(data->simulationInfo->integerParameter[38] /* channel_2.energyDynamics PARAM */,1);
    tmp501 = LessEq(data->simulationInfo->integerParameter[38] /* channel_2.energyDynamics PARAM */,4);
    if(!(tmp500 && tmp501))
    {
      tmp503 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[38] /* channel_2.energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp502),tmp503);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",17,3,17,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_2.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp504 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2026
type: ALGORITHM

  assert(channel_1.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,5].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2026};
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp505 = GreaterEq(data->simulationInfo->integerParameter[18] /* channel_1.Channel[1,5].momentumDynamics PARAM */,1);
    tmp506 = LessEq(data->simulationInfo->integerParameter[18] /* channel_1.Channel[1,5].momentumDynamics PARAM */,4);
    if(!(tmp505 && tmp506))
    {
      tmp508 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[18] /* channel_1.Channel[1,5].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2027
type: ALGORITHM

  assert(channel_1.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,5].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2027};
  modelica_boolean tmp510;
  modelica_boolean tmp511;
  static const MMC_DEFSTRINGLIT(tmp512,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp513;
  static int tmp514 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp514)
  {
    tmp510 = GreaterEq(data->simulationInfo->integerParameter[13] /* channel_1.Channel[1,5].massDynamics PARAM */,1);
    tmp511 = LessEq(data->simulationInfo->integerParameter[13] /* channel_1.Channel[1,5].massDynamics PARAM */,4);
    if(!(tmp510 && tmp511))
    {
      tmp513 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[13] /* channel_1.Channel[1,5].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp512),tmp513);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp514 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2028
type: ALGORITHM

  assert(channel_1.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,5].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2028};
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp518;
  static int tmp519 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp519)
  {
    tmp515 = GreaterEq(data->simulationInfo->integerParameter[8] /* channel_1.Channel[1,5].energyDynamics PARAM */,1);
    tmp516 = LessEq(data->simulationInfo->integerParameter[8] /* channel_1.Channel[1,5].energyDynamics PARAM */,4);
    if(!(tmp515 && tmp516))
    {
      tmp518 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[8] /* channel_1.Channel[1,5].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp517),tmp518);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,5].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp519 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2029
type: ALGORITHM

  assert(channel_1.Channel[1,5].h_start >= -10000000000.0 and channel_1.Channel[1,5].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].h_start <= 10000000000.0, has value: " + String(channel_1.Channel[1,5].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2029};
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,117,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].h_start <= 10000000000.0, has value: ");
  modelica_string tmp523;
  static int tmp524 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp524)
  {
    tmp520 = GreaterEq(data->simulationInfo->realParameter[43] /* channel_1.Channel[1,5].h_start PARAM */,-10000000000.0);
    tmp521 = LessEq(data->simulationInfo->realParameter[43] /* channel_1.Channel[1,5].h_start PARAM */,10000000000.0);
    if(!(tmp520 && tmp521))
    {
      tmp523 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[43] /* channel_1.Channel[1,5].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].h_start >= -10000000000.0 and channel_1.Channel[1,5].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp524 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2030
type: ALGORITHM

  assert(channel_1.Channel[1,5].p_start >= 611.657 and channel_1.Channel[1,5].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].p_start <= 100000000.0, has value: " + String(channel_1.Channel[1,5].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2030};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,108,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].p_start <= 100000000.0, has value: ");
  modelica_string tmp528;
  static int tmp529 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp529)
  {
    tmp525 = GreaterEq(data->simulationInfo->realParameter[63] /* channel_1.Channel[1,5].p_start PARAM */,611.657);
    tmp526 = LessEq(data->simulationInfo->realParameter[63] /* channel_1.Channel[1,5].p_start PARAM */,100000000.0);
    if(!(tmp525 && tmp526))
    {
      tmp528 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[63] /* channel_1.Channel[1,5].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].p_start >= 611.657 and channel_1.Channel[1,5].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp529 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2031
type: ALGORITHM

  assert(channel_1.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,4].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  static const MMC_DEFSTRINGLIT(tmp532,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp533;
  static int tmp534 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp534)
  {
    tmp530 = GreaterEq(data->simulationInfo->integerParameter[17] /* channel_1.Channel[1,4].momentumDynamics PARAM */,1);
    tmp531 = LessEq(data->simulationInfo->integerParameter[17] /* channel_1.Channel[1,4].momentumDynamics PARAM */,4);
    if(!(tmp530 && tmp531))
    {
      tmp533 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[17] /* channel_1.Channel[1,4].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp532),tmp533);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp534 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2032
type: ALGORITHM

  assert(channel_1.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,4].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  static const MMC_DEFSTRINGLIT(tmp537,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp538;
  static int tmp539 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp539)
  {
    tmp535 = GreaterEq(data->simulationInfo->integerParameter[12] /* channel_1.Channel[1,4].massDynamics PARAM */,1);
    tmp536 = LessEq(data->simulationInfo->integerParameter[12] /* channel_1.Channel[1,4].massDynamics PARAM */,4);
    if(!(tmp535 && tmp536))
    {
      tmp538 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[12] /* channel_1.Channel[1,4].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp537),tmp538);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp539 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2033
type: ALGORITHM

  assert(channel_1.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,4].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  modelica_boolean tmp540;
  modelica_boolean tmp541;
  static const MMC_DEFSTRINGLIT(tmp542,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp543;
  static int tmp544 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp544)
  {
    tmp540 = GreaterEq(data->simulationInfo->integerParameter[7] /* channel_1.Channel[1,4].energyDynamics PARAM */,1);
    tmp541 = LessEq(data->simulationInfo->integerParameter[7] /* channel_1.Channel[1,4].energyDynamics PARAM */,4);
    if(!(tmp540 && tmp541))
    {
      tmp543 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[7] /* channel_1.Channel[1,4].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp542),tmp543);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,4].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp544 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2034
type: ALGORITHM

  assert(channel_1.Channel[1,4].h_start >= -10000000000.0 and channel_1.Channel[1,4].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].h_start <= 10000000000.0, has value: " + String(channel_1.Channel[1,4].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  static const MMC_DEFSTRINGLIT(tmp547,117,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].h_start <= 10000000000.0, has value: ");
  modelica_string tmp548;
  static int tmp549 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp549)
  {
    tmp545 = GreaterEq(data->simulationInfo->realParameter[42] /* channel_1.Channel[1,4].h_start PARAM */,-10000000000.0);
    tmp546 = LessEq(data->simulationInfo->realParameter[42] /* channel_1.Channel[1,4].h_start PARAM */,10000000000.0);
    if(!(tmp545 && tmp546))
    {
      tmp548 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[42] /* channel_1.Channel[1,4].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp547),tmp548);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].h_start >= -10000000000.0 and channel_1.Channel[1,4].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp549 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2035
type: ALGORITHM

  assert(channel_1.Channel[1,4].p_start >= 611.657 and channel_1.Channel[1,4].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,4].p_start <= 100000000.0, has value: " + String(channel_1.Channel[1,4].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,108,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,4].p_start <= 100000000.0, has value: ");
  modelica_string tmp553;
  static int tmp554 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp554)
  {
    tmp550 = GreaterEq(data->simulationInfo->realParameter[62] /* channel_1.Channel[1,4].p_start PARAM */,611.657);
    tmp551 = LessEq(data->simulationInfo->realParameter[62] /* channel_1.Channel[1,4].p_start PARAM */,100000000.0);
    if(!(tmp550 && tmp551))
    {
      tmp553 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[62] /* channel_1.Channel[1,4].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].p_start >= 611.657 and channel_1.Channel[1,4].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp554 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2036
type: ALGORITHM

  assert(channel_1.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,3].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2036};
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp558;
  static int tmp559 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp559)
  {
    tmp555 = GreaterEq(data->simulationInfo->integerParameter[16] /* channel_1.Channel[1,3].momentumDynamics PARAM */,1);
    tmp556 = LessEq(data->simulationInfo->integerParameter[16] /* channel_1.Channel[1,3].momentumDynamics PARAM */,4);
    if(!(tmp555 && tmp556))
    {
      tmp558 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[16] /* channel_1.Channel[1,3].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp557),tmp558);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp559 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2037
type: ALGORITHM

  assert(channel_1.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,3].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2037};
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp563;
  static int tmp564 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp564)
  {
    tmp560 = GreaterEq(data->simulationInfo->integerParameter[11] /* channel_1.Channel[1,3].massDynamics PARAM */,1);
    tmp561 = LessEq(data->simulationInfo->integerParameter[11] /* channel_1.Channel[1,3].massDynamics PARAM */,4);
    if(!(tmp560 && tmp561))
    {
      tmp563 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[11] /* channel_1.Channel[1,3].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp564 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2038
type: ALGORITHM

  assert(channel_1.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,3].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2038};
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  static const MMC_DEFSTRINGLIT(tmp567,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp568;
  static int tmp569 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp569)
  {
    tmp565 = GreaterEq(data->simulationInfo->integerParameter[6] /* channel_1.Channel[1,3].energyDynamics PARAM */,1);
    tmp566 = LessEq(data->simulationInfo->integerParameter[6] /* channel_1.Channel[1,3].energyDynamics PARAM */,4);
    if(!(tmp565 && tmp566))
    {
      tmp568 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* channel_1.Channel[1,3].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp567),tmp568);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,3].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp569 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2039
type: ALGORITHM

  assert(channel_1.Channel[1,3].h_start >= -10000000000.0 and channel_1.Channel[1,3].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].h_start <= 10000000000.0, has value: " + String(channel_1.Channel[1,3].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2039};
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,117,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].h_start <= 10000000000.0, has value: ");
  modelica_string tmp573;
  static int tmp574 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp574)
  {
    tmp570 = GreaterEq(data->simulationInfo->realParameter[41] /* channel_1.Channel[1,3].h_start PARAM */,-10000000000.0);
    tmp571 = LessEq(data->simulationInfo->realParameter[41] /* channel_1.Channel[1,3].h_start PARAM */,10000000000.0);
    if(!(tmp570 && tmp571))
    {
      tmp573 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[41] /* channel_1.Channel[1,3].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp572),tmp573);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].h_start >= -10000000000.0 and channel_1.Channel[1,3].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp574 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2040
type: ALGORITHM

  assert(channel_1.Channel[1,3].p_start >= 611.657 and channel_1.Channel[1,3].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,3].p_start <= 100000000.0, has value: " + String(channel_1.Channel[1,3].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2040};
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,108,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,3].p_start <= 100000000.0, has value: ");
  modelica_string tmp578;
  static int tmp579 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp579)
  {
    tmp575 = GreaterEq(data->simulationInfo->realParameter[61] /* channel_1.Channel[1,3].p_start PARAM */,611.657);
    tmp576 = LessEq(data->simulationInfo->realParameter[61] /* channel_1.Channel[1,3].p_start PARAM */,100000000.0);
    if(!(tmp575 && tmp576))
    {
      tmp578 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[61] /* channel_1.Channel[1,3].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].p_start >= 611.657 and channel_1.Channel[1,3].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp579 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2041
type: ALGORITHM

  assert(channel_1.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,2].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp583;
  static int tmp584 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp584)
  {
    tmp580 = GreaterEq(data->simulationInfo->integerParameter[15] /* channel_1.Channel[1,2].momentumDynamics PARAM */,1);
    tmp581 = LessEq(data->simulationInfo->integerParameter[15] /* channel_1.Channel[1,2].momentumDynamics PARAM */,4);
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[15] /* channel_1.Channel[1,2].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp584 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2042
type: ALGORITHM

  assert(channel_1.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,2].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp588;
  static int tmp589 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp589)
  {
    tmp585 = GreaterEq(data->simulationInfo->integerParameter[10] /* channel_1.Channel[1,2].massDynamics PARAM */,1);
    tmp586 = LessEq(data->simulationInfo->integerParameter[10] /* channel_1.Channel[1,2].massDynamics PARAM */,4);
    if(!(tmp585 && tmp586))
    {
      tmp588 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[10] /* channel_1.Channel[1,2].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp589 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2043
type: ALGORITHM

  assert(channel_1.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,2].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2043};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp593;
  static int tmp594 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp594)
  {
    tmp590 = GreaterEq(data->simulationInfo->integerParameter[5] /* channel_1.Channel[1,2].energyDynamics PARAM */,1);
    tmp591 = LessEq(data->simulationInfo->integerParameter[5] /* channel_1.Channel[1,2].energyDynamics PARAM */,4);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* channel_1.Channel[1,2].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,2].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp594 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2044
type: ALGORITHM

  assert(channel_1.Channel[1,2].h_start >= -10000000000.0 and channel_1.Channel[1,2].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].h_start <= 10000000000.0, has value: " + String(channel_1.Channel[1,2].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2044};
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,117,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].h_start <= 10000000000.0, has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp595 = GreaterEq(data->simulationInfo->realParameter[40] /* channel_1.Channel[1,2].h_start PARAM */,-10000000000.0);
    tmp596 = LessEq(data->simulationInfo->realParameter[40] /* channel_1.Channel[1,2].h_start PARAM */,10000000000.0);
    if(!(tmp595 && tmp596))
    {
      tmp598 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[40] /* channel_1.Channel[1,2].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].h_start >= -10000000000.0 and channel_1.Channel[1,2].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2045
type: ALGORITHM

  assert(channel_1.Channel[1,2].p_start >= 611.657 and channel_1.Channel[1,2].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,2].p_start <= 100000000.0, has value: " + String(channel_1.Channel[1,2].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2045};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,108,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,2].p_start <= 100000000.0, has value: ");
  modelica_string tmp603;
  static int tmp604 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp604)
  {
    tmp600 = GreaterEq(data->simulationInfo->realParameter[60] /* channel_1.Channel[1,2].p_start PARAM */,611.657);
    tmp601 = LessEq(data->simulationInfo->realParameter[60] /* channel_1.Channel[1,2].p_start PARAM */,100000000.0);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[60] /* channel_1.Channel[1,2].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].p_start >= 611.657 and channel_1.Channel[1,2].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2046
type: ALGORITHM

  assert(channel_1.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,1].momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  modelica_boolean tmp605;
  modelica_boolean tmp606;
  static const MMC_DEFSTRINGLIT(tmp607,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp608;
  static int tmp609 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp609)
  {
    tmp605 = GreaterEq(data->simulationInfo->integerParameter[14] /* channel_1.Channel[1,1].momentumDynamics PARAM */,1);
    tmp606 = LessEq(data->simulationInfo->integerParameter[14] /* channel_1.Channel[1,1].momentumDynamics PARAM */,4);
    if(!(tmp605 && tmp606))
    {
      tmp608 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[14] /* channel_1.Channel[1,1].momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp607),tmp608);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",10,3,10,114,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp609 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2047
type: ALGORITHM

  assert(channel_1.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,1].massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2047};
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  static const MMC_DEFSTRINGLIT(tmp612,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp613;
  static int tmp614 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp614)
  {
    tmp610 = GreaterEq(data->simulationInfo->integerParameter[9] /* channel_1.Channel[1,1].massDynamics PARAM */,1);
    tmp611 = LessEq(data->simulationInfo->integerParameter[9] /* channel_1.Channel[1,1].massDynamics PARAM */,4);
    if(!(tmp610 && tmp611))
    {
      tmp613 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[9] /* channel_1.Channel[1,1].massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp612),tmp613);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",9,3,9,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp614 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2048
type: ALGORITHM

  assert(channel_1.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.Channel[1,1].energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp618;
  static int tmp619 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp619)
  {
    tmp615 = GreaterEq(data->simulationInfo->integerParameter[4] /* channel_1.Channel[1,1].energyDynamics PARAM */,1);
    tmp616 = LessEq(data->simulationInfo->integerParameter[4] /* channel_1.Channel[1,1].energyDynamics PARAM */,4);
    if(!(tmp615 && tmp616))
    {
      tmp618 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* channel_1.Channel[1,1].energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",8,3,8,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.Channel[1,1].energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp619 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2049
type: ALGORITHM

  assert(channel_1.Channel[1,1].h_start >= -10000000000.0 and channel_1.Channel[1,1].h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].h_start <= 10000000000.0, has value: " + String(channel_1.Channel[1,1].h_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2049};
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,117,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].h_start <= 10000000000.0, has value: ");
  modelica_string tmp623;
  static int tmp624 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp624)
  {
    tmp620 = GreaterEq(data->simulationInfo->realParameter[39] /* channel_1.Channel[1,1].h_start PARAM */,-10000000000.0);
    tmp621 = LessEq(data->simulationInfo->realParameter[39] /* channel_1.Channel[1,1].h_start PARAM */,10000000000.0);
    if(!(tmp620 && tmp621))
    {
      tmp623 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[39] /* channel_1.Channel[1,1].h_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",21,3,21,160,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].h_start >= -10000000000.0 and channel_1.Channel[1,1].h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp624 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2050
type: ALGORITHM

  assert(channel_1.Channel[1,1].p_start >= 611.657 and channel_1.Channel[1,1].p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,1].p_start <= 100000000.0, has value: " + String(channel_1.Channel[1,1].p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2050};
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  static const MMC_DEFSTRINGLIT(tmp627,108,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,1].p_start <= 100000000.0, has value: ");
  modelica_string tmp628;
  static int tmp629 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp629)
  {
    tmp625 = GreaterEq(data->simulationInfo->realParameter[59] /* channel_1.Channel[1,1].p_start PARAM */,611.657);
    tmp626 = LessEq(data->simulationInfo->realParameter[59] /* channel_1.Channel[1,1].p_start PARAM */,100000000.0);
    if(!(tmp625 && tmp626))
    {
      tmp628 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[59] /* channel_1.Channel[1,1].p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp627),tmp628);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",20,3,20,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].p_start >= 611.657 and channel_1.Channel[1,1].p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp629 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2051
type: ALGORITHM

  assert(channel_1.t_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_1.t_start, has value: " + String(channel_1.t_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2051};
  modelica_boolean tmp630;
  static const MMC_DEFSTRINGLIT(tmp631,72,"Variable violating min constraint: 0.0 <= channel_1.t_start, has value: ");
  modelica_string tmp632;
  static int tmp633 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp633)
  {
    tmp630 = GreaterEq(data->simulationInfo->realParameter[79] /* channel_1.t_start PARAM */,0.0);
    if(!tmp630)
    {
      tmp632 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[79] /* channel_1.t_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp631),tmp632);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",22,3,22,161,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.t_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp633 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2052
type: ALGORITHM

  assert(channel_1.p_start >= 0.0, "Variable violating min constraint: 0.0 <= channel_1.p_start, has value: " + String(channel_1.p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2052};
  modelica_boolean tmp634;
  static const MMC_DEFSTRINGLIT(tmp635,72,"Variable violating min constraint: 0.0 <= channel_1.p_start, has value: ");
  modelica_string tmp636;
  static int tmp637 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp637)
  {
    tmp634 = GreaterEq(data->simulationInfo->realParameter[78] /* channel_1.p_start PARAM */,0.0);
    if(!tmp634)
    {
      tmp636 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[78] /* channel_1.p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp635),tmp636);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",21,3,21,166,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.p_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp637 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2053
type: ALGORITHM

  assert(channel_1.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2053};
  modelica_boolean tmp638;
  modelica_boolean tmp639;
  static const MMC_DEFSTRINGLIT(tmp640,175,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp641;
  static int tmp642 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp642)
  {
    tmp638 = GreaterEq(data->simulationInfo->integerParameter[21] /* channel_1.momentumDynamics PARAM */,1);
    tmp639 = LessEq(data->simulationInfo->integerParameter[21] /* channel_1.momentumDynamics PARAM */,4);
    if(!(tmp638 && tmp639))
    {
      tmp641 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[21] /* channel_1.momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp640),tmp641);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",19,3,19,213,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp642 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2054
type: ALGORITHM

  assert(channel_1.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  modelica_boolean tmp643;
  modelica_boolean tmp644;
  static const MMC_DEFSTRINGLIT(tmp645,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp646;
  static int tmp647 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp647)
  {
    tmp643 = GreaterEq(data->simulationInfo->integerParameter[20] /* channel_1.massDynamics PARAM */,1);
    tmp644 = LessEq(data->simulationInfo->integerParameter[20] /* channel_1.massDynamics PARAM */,4);
    if(!(tmp643 && tmp644))
    {
      tmp646 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[20] /* channel_1.massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp645),tmp646);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",18,3,18,201,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp647 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2055
type: ALGORITHM

  assert(channel_1.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(channel_1.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2055};
  modelica_boolean tmp648;
  modelica_boolean tmp649;
  static const MMC_DEFSTRINGLIT(tmp650,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= channel_1.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp651;
  static int tmp652 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp652)
  {
    tmp648 = GreaterEq(data->simulationInfo->integerParameter[19] /* channel_1.energyDynamics PARAM */,1);
    tmp649 = LessEq(data->simulationInfo->integerParameter[19] /* channel_1.energyDynamics PARAM */,4);
    if(!(tmp648 && tmp649))
    {
      tmp651 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[19] /* channel_1.energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp650),tmp651);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialChannel.mo",17,3,17,209,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and channel_1.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp652 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2056
type: ALGORITHM

  assert(ramp1.duration >= 0.0, "Variable violating min constraint: 0.0 <= ramp1.duration, has value: " + String(ramp1.duration, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2056};
  modelica_boolean tmp653;
  static const MMC_DEFSTRINGLIT(tmp654,69,"Variable violating min constraint: 0.0 <= ramp1.duration, has value: ");
  modelica_string tmp655;
  static int tmp656 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp656)
  {
    tmp653 = GreaterEq(data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */,0.0);
    if(!tmp653)
    {
      tmp655 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp654),tmp655);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",416,5,417,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nramp1.duration >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp656 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2057
type: ALGORITHM

  assert(Source_2.X[1] >= 0.0 and Source_2.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Source_2.X[1] <= 1.0, has value: " + String(Source_2.X[1], "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2057};
  modelica_boolean tmp657;
  modelica_boolean tmp658;
  static const MMC_DEFSTRINGLIT(tmp659,79,"Variable violating min/max constraint: 0.0 <= Source_2.X[1] <= 1.0, has value: ");
  modelica_string tmp660;
  static int tmp661 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp661)
  {
    tmp657 = GreaterEq(data->simulationInfo->realParameter[12] /* Source_2.X[1] PARAM */,0.0);
    tmp658 = LessEq(data->simulationInfo->realParameter[12] /* Source_2.X[1] PARAM */,1.0);
    if(!(tmp657 && tmp658))
    {
      tmp660 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[12] /* Source_2.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp659),tmp660);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",154,5,157,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.X[1] >= 0.0 and Source_2.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp661 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2058
type: ALGORITHM

  assert(Source_2.T >= 273.15 and Source_2.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= Source_2.T <= 2273.15, has value: " + String(Source_2.T, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2058};
  modelica_boolean tmp662;
  modelica_boolean tmp663;
  static const MMC_DEFSTRINGLIT(tmp664,83,"Variable violating min/max constraint: 273.15 <= Source_2.T <= 2273.15, has value: ");
  modelica_string tmp665;
  static int tmp666 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp666)
  {
    tmp662 = GreaterEq(data->simulationInfo->realParameter[11] /* Source_2.T PARAM */,273.15);
    tmp663 = LessEq(data->simulationInfo->realParameter[11] /* Source_2.T PARAM */,2273.15);
    if(!(tmp662 && tmp663))
    {
      tmp665 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[11] /* Source_2.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp664),tmp665);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",150,5,153,49,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.T >= 273.15 and Source_2.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp666 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2059
type: ALGORITHM

  assert(Source_2.p >= 611.657 and Source_2.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= Source_2.p <= 100000000.0, has value: " + String(Source_2.p, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2059};
  modelica_boolean tmp667;
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,88,"Variable violating min/max constraint: 611.657 <= Source_2.p <= 100000000.0, has value: ");
  modelica_string tmp670;
  static int tmp671 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp671)
  {
    tmp667 = GreaterEq(data->simulationInfo->realParameter[13] /* Source_2.p PARAM */,611.657);
    tmp668 = LessEq(data->simulationInfo->realParameter[13] /* Source_2.p PARAM */,100000000.0);
    if(!(tmp667 && tmp668))
    {
      tmp670 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[13] /* Source_2.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",146,5,149,49,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.p >= 611.657 and Source_2.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp671 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2060
type: ALGORITHM

  assert(Source_2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and Source_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= Source_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(Source_2.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2060};
  modelica_boolean tmp672;
  modelica_boolean tmp673;
  static const MMC_DEFSTRINGLIT(tmp674,181,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= Source_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp675;
  static int tmp676 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp676)
  {
    tmp672 = GreaterEq(data->simulationInfo->integerParameter[2] /* Source_2.flowDirection PARAM */,1);
    tmp673 = LessEq(data->simulationInfo->integerParameter[2] /* Source_2.flowDirection PARAM */,3);
    if(!(tmp672 && tmp673))
    {
      tmp675 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* Source_2.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp674),tmp675);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and Source_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp676 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2061
type: ALGORITHM

  assert(Sink_2.X[1] >= 0.0 and Sink_2.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= Sink_2.X[1] <= 1.0, has value: " + String(Sink_2.X[1], "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2061};
  modelica_boolean tmp677;
  modelica_boolean tmp678;
  static const MMC_DEFSTRINGLIT(tmp679,77,"Variable violating min/max constraint: 0.0 <= Sink_2.X[1] <= 1.0, has value: ");
  modelica_string tmp680;
  static int tmp681 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp681)
  {
    tmp677 = GreaterEq(data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */,0.0);
    tmp678 = LessEq(data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */,1.0);
    if(!(tmp677 && tmp678))
    {
      tmp680 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp679),tmp680);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.X[1] >= 0.0 and Sink_2.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp681 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2062
type: ALGORITHM

  assert(Sink_2.h >= -10000000000.0 and Sink_2.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= Sink_2.h <= 10000000000.0, has value: " + String(Sink_2.h, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2062};
  modelica_boolean tmp682;
  modelica_boolean tmp683;
  static const MMC_DEFSTRINGLIT(tmp684,95,"Variable violating min/max constraint: -10000000000.0 <= Sink_2.h <= 10000000000.0, has value: ");
  modelica_string tmp685;
  static int tmp686 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp686)
  {
    tmp682 = GreaterEq(data->simulationInfo->realParameter[3] /* Sink_2.h PARAM */,-10000000000.0);
    tmp683 = LessEq(data->simulationInfo->realParameter[3] /* Sink_2.h PARAM */,10000000000.0);
    if(!(tmp682 && tmp683))
    {
      tmp685 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[3] /* Sink_2.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp684),tmp685);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.h >= -10000000000.0 and Sink_2.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp686 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2063
type: ALGORITHM

  assert(Sink_2.d >= 0.0 and Sink_2.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= Sink_2.d <= 100000.0, has value: " + String(Sink_2.d, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2063};
  modelica_boolean tmp687;
  modelica_boolean tmp688;
  static const MMC_DEFSTRINGLIT(tmp689,79,"Variable violating min/max constraint: 0.0 <= Sink_2.d <= 100000.0, has value: ");
  modelica_string tmp690;
  static int tmp691 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp691)
  {
    tmp687 = GreaterEq(data->simulationInfo->realParameter[2] /* Sink_2.d PARAM */,0.0);
    tmp688 = LessEq(data->simulationInfo->realParameter[2] /* Sink_2.d PARAM */,100000.0);
    if(!(tmp687 && tmp688))
    {
      tmp690 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[2] /* Sink_2.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp689),tmp690);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.d >= 0.0 and Sink_2.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp691 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2064
type: ALGORITHM

  assert(Sink_2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and Sink_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= Sink_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(Sink_2.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2064};
  modelica_boolean tmp692;
  modelica_boolean tmp693;
  static const MMC_DEFSTRINGLIT(tmp694,179,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= Sink_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp695;
  static int tmp696 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp696)
  {
    tmp692 = GreaterEq(data->simulationInfo->integerParameter[0] /* Sink_2.flowDirection PARAM */,1);
    tmp693 = LessEq(data->simulationInfo->integerParameter[0] /* Sink_2.flowDirection PARAM */,3);
    if(!(tmp692 && tmp693))
    {
      tmp695 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[0] /* Sink_2.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp694),tmp695);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and Sink_2.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp696 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2065
type: ALGORITHM

  assert(system.eps_m_flow >= 0.0, "Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: " + String(system.eps_m_flow, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2065};
  modelica_boolean tmp697;
  static const MMC_DEFSTRINGLIT(tmp698,72,"Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: ");
  modelica_string tmp699;
  static int tmp700 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp700)
  {
    tmp697 = GreaterEq(data->simulationInfo->realParameter[221] /* system.eps_m_flow PARAM */,0.0);
    if(!tmp697)
    {
      tmp699 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[221] /* system.eps_m_flow PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp698),tmp699);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",57,3,59,62,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.eps_m_flow >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp700 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2066
type: ALGORITHM

  assert(system.T_start >= 0.0, "Variable violating min constraint: 0.0 <= system.T_start, has value: " + String(system.T_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2066};
  modelica_boolean tmp701;
  static const MMC_DEFSTRINGLIT(tmp702,69,"Variable violating min constraint: 0.0 <= system.T_start, has value: ");
  modelica_string tmp703;
  static int tmp704 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp704)
  {
    tmp701 = GreaterEq(data->simulationInfo->realParameter[219] /* system.T_start PARAM */,0.0);
    if(!tmp701)
    {
      tmp703 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[219] /* system.T_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp702),tmp703);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",47,3,49,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp704 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2067
type: ALGORITHM

  assert(system.p_start >= 0.0, "Variable violating min constraint: 0.0 <= system.p_start, has value: " + String(system.p_start, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2067};
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,69,"Variable violating min constraint: 0.0 <= system.p_start, has value: ");
  modelica_string tmp707;
  static int tmp708 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp708)
  {
    tmp705 = GreaterEq(data->simulationInfo->realParameter[227] /* system.p_start PARAM */,0.0);
    if(!tmp705)
    {
      tmp707 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[227] /* system.p_start PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",44,3,46,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.p_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp708 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2068
type: ALGORITHM

  assert(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2068};
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp712;
  static int tmp713 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp713)
  {
    tmp709 = GreaterEq(data->simulationInfo->integerParameter[63] /* system.momentumDynamics PARAM */,1);
    tmp710 = LessEq(data->simulationInfo->integerParameter[63] /* system.momentumDynamics PARAM */,4);
    if(!(tmp709 && tmp710))
    {
      tmp712 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[63] /* system.momentumDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",35,3,38,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp713 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2069
type: ALGORITHM

  assert(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2069};
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp717;
  static int tmp718 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp718)
  {
    tmp714 = GreaterEq(data->simulationInfo->integerParameter[65] /* system.traceDynamics PARAM */,1);
    tmp715 = LessEq(data->simulationInfo->integerParameter[65] /* system.traceDynamics PARAM */,4);
    if(!(tmp714 && tmp715))
    {
      tmp717 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[65] /* system.traceDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",32,3,34,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp718 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2070
type: ALGORITHM

  assert(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2070};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp719 = GreaterEq(data->simulationInfo->integerParameter[64] /* system.substanceDynamics PARAM */,1);
    tmp720 = LessEq(data->simulationInfo->integerParameter[64] /* system.substanceDynamics PARAM */,4);
    if(!(tmp719 && tmp720))
    {
      tmp722 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[64] /* system.substanceDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",29,3,31,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2071
type: ALGORITHM

  assert(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2071};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp727;
  static int tmp728 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp728)
  {
    tmp724 = GreaterEq(data->simulationInfo->integerParameter[62] /* system.massDynamics PARAM */,1);
    tmp725 = LessEq(data->simulationInfo->integerParameter[62] /* system.massDynamics PARAM */,4);
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[62] /* system.massDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",26,3,28,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp728 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2072
type: ALGORITHM

  assert(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2072};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp732;
  static int tmp733 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp733)
  {
    tmp729 = GreaterEq(data->simulationInfo->integerParameter[61] /* system.energyDynamics PARAM */,1);
    tmp730 = LessEq(data->simulationInfo->integerParameter[61] /* system.energyDynamics PARAM */,4);
    if(!(tmp729 && tmp730))
    {
      tmp732 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[61] /* system.energyDynamics PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",22,3,25,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp733 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2073
type: ALGORITHM

  assert(system.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.T_ambient, has value: " + String(system.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2073};
  modelica_boolean tmp734;
  static const MMC_DEFSTRINGLIT(tmp735,71,"Variable violating min constraint: 0.0 <= system.T_ambient, has value: ");
  modelica_string tmp736;
  static int tmp737 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp737)
  {
    tmp734 = GreaterEq(data->simulationInfo->realParameter[218] /* system.T_ambient PARAM */,0.0);
    if(!tmp734)
    {
      tmp736 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[218] /* system.T_ambient PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp735),tmp736);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",11,3,13,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.T_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp737 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2074
type: ALGORITHM

  assert(system.p_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.p_ambient, has value: " + String(system.p_ambient, "g"));
*/
OMC_DISABLE_OPT
static void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2074};
  modelica_boolean tmp738;
  static const MMC_DEFSTRINGLIT(tmp739,71,"Variable violating min constraint: 0.0 <= system.p_ambient, has value: ");
  modelica_string tmp740;
  static int tmp741 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp741)
  {
    tmp738 = GreaterEq(data->simulationInfo->realParameter[226] /* system.p_ambient PARAM */,0.0);
    if(!tmp738)
    {
      tmp740 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[226] /* system.p_ambient PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp739),tmp740);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",8,3,10,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.p_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp741 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1527(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1528(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1529(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1530(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_783(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_733(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_732(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_731(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_730(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_713(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_712(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_706(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_705(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_704(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_703(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_702(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_699(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_698(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_697(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_692(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_672(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_671(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_669(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_668(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_667(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_604(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_603(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_597(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_596(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_595(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_594(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_593(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_590(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_589(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_588(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_583(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_564(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_563(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_561(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_560(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_559(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_495(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_494(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_492(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_491(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_490(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_442(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_441(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_440(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_439(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_438(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_437(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_436(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_418(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_417(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_416(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_415(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_414(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_413(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_412(data, threadData);
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
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_397(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_379(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_377(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_376(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_374(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_373(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_371(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_370(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_368(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_367(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_365(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_364(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_362(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_361(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_359(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_358(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_356(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_355(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_353(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_352(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_350(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_349(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_347(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_346(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_344(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_343(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_341(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_340(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_338(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_337(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_335(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_334(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_333(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_332(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_26(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_25(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_24(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_23(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_22(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_21(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_20(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_19(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_18(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_17(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_16(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_15(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_14(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_13(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_108(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_8(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_7(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_6(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_5(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_4(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_3(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1923(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1924(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1925(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1926(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1927(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1928(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1929(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1930(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1931(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1932(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1933(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1934(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1935(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1936(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1937(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1938(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1939(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1940(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1941(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1942(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1943(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1944(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1945(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1946(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1947(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1948(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1949(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1950(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1951(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1952(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1953(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1954(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1955(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1956(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1957(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1958(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1959(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1960(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1961(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1962(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1963(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1964(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1965(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1966(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1967(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1968(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1969(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1970(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1971(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1972(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1973(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1974(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1975(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1976(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1977(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1978(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1979(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1980(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1981(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1982(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1983(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1984(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1985(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1986(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1987(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1988(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1989(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1990(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1991(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1992(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1993(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1994(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1995(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1996(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1997(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1998(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1999(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2000(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2001(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2002(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2003(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2004(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2005(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2006(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2007(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2008(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2009(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2010(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2011(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2012(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2013(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2014(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2015(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2016(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2017(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2018(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2019(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2020(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2021(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2022(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2023(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2024(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2025(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2026(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2027(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2028(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2029(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2030(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2031(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2032(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2033(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2034(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2035(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2036(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2037(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2038(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2039(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2040(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2041(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2042(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2043(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2044(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2045(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2046(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2047(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2048(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2049(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2050(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2051(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2052(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2053(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2054(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2055(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2056(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2057(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2058(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2059(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2060(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2061(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2062(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2063(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2064(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2065(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2066(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2067(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2068(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2069(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2070(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2071(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2072(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2073(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2074(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->integerVars[55] /* channel_1.Channel[1,1].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[55].time_unvarying = 1;
  data->localData[0]->integerVars[56] /* channel_1.Channel[1,2].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[56].time_unvarying = 1;
  data->localData[0]->integerVars[57] /* channel_1.Channel[1,3].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[57].time_unvarying = 1;
  data->localData[0]->integerVars[58] /* channel_1.Channel[1,4].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[58].time_unvarying = 1;
  data->localData[0]->integerVars[59] /* channel_1.Channel[1,5].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[59].time_unvarying = 1;
  data->localData[0]->integerVars[60] /* channel_2.Channel[1,1].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[60].time_unvarying = 1;
  data->localData[0]->integerVars[61] /* channel_2.Channel[1,2].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[61].time_unvarying = 1;
  data->localData[0]->integerVars[62] /* channel_2.Channel[1,3].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[62].time_unvarying = 1;
  data->localData[0]->integerVars[63] /* channel_2.Channel[1,4].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[63].time_unvarying = 1;
  data->localData[0]->integerVars[64] /* channel_2.Channel[1,5].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[64].time_unvarying = 1;
  data->localData[0]->integerVars[65] /* channel_3.Channel[1,1].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[65].time_unvarying = 1;
  data->localData[0]->integerVars[66] /* channel_3.Channel[1,2].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[66].time_unvarying = 1;
  data->localData[0]->integerVars[67] /* channel_3.Channel[1,3].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[67].time_unvarying = 1;
  data->localData[0]->integerVars[68] /* channel_3.Channel[1,4].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[68].time_unvarying = 1;
  data->localData[0]->integerVars[69] /* channel_3.Channel[1,5].stateFlow.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[69].time_unvarying = 1;
  data->localData[0]->integerVars[70] /* valve_1.state_a.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[70].time_unvarying = 1;
  data->localData[0]->integerVars[71] /* valve_1.state_b.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[71].time_unvarying = 1;
  data->localData[0]->integerVars[72] /* valve_2.state_a.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[72].time_unvarying = 1;
  data->localData[0]->integerVars[73] /* valve_2.state_b.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[73].time_unvarying = 1;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

