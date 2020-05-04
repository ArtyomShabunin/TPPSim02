/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation TPPSim02_Pipes_Tests_PipeChannelFMU_Test_performSimulation
#define prefixedName_updateContinuousSystem TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation TPPSim02_Pipes_Tests_PipeChannelFMU_Test_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[756] /* valve1_pos variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[757] /* valve2_pos variable */ = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[756].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[757].attribute.start;
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[756].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[757].attribute.start = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[756].info.name;
  names[1] = (char *) data->modelData->realVarsData[757].info.name;
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1174
type: ALGORITHM

  $cse2 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_3.Channel[1,1].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  Modelica_Media_Common_IF97BaseTwoPhase tmp1;
  tmp1 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp1, &(data->localData[0]->integerVars[10] /* $cse2.phase DISCRETE */), &(data->localData[0]->integerVars[11] /* $cse2.region DISCRETE */), &(data->localData[0]->realVars[179] /* $cse2.p variable */), &(data->localData[0]->realVars[174] /* $cse2.T variable */), &(data->localData[0]->realVars[178] /* $cse2.h variable */), &(data->localData[0]->realVars[173] /* $cse2.R variable */), &(data->localData[0]->realVars[175] /* $cse2.cp variable */), &(data->localData[0]->realVars[176] /* $cse2.cv variable */), &(data->localData[0]->realVars[182] /* $cse2.rho variable */), &(data->localData[0]->realVars[183] /* $cse2.s variable */), &(data->localData[0]->realVars[181] /* $cse2.pt variable */), &(data->localData[0]->realVars[180] /* $cse2.pd variable */), &(data->localData[0]->realVars[185] /* $cse2.vt variable */), &(data->localData[0]->realVars[184] /* $cse2.vp variable */), &(data->localData[0]->realVars[186] /* $cse2.x variable */), &(data->localData[0]->realVars[177] /* $cse2.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1175
type: ALGORITHM

  $cse8 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,1].pv, channel_2.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  Modelica_Media_Common_IF97BaseTwoPhase tmp2;
  tmp2 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp2, &(data->localData[0]->integerVars[48] /* $cse8.phase DISCRETE */), &(data->localData[0]->integerVars[49] /* $cse8.region DISCRETE */), &(data->localData[0]->realVars[512] /* $cse8.p variable */), &(data->localData[0]->realVars[507] /* $cse8.T variable */), &(data->localData[0]->realVars[511] /* $cse8.h variable */), &(data->localData[0]->realVars[506] /* $cse8.R variable */), &(data->localData[0]->realVars[508] /* $cse8.cp variable */), &(data->localData[0]->realVars[509] /* $cse8.cv variable */), &(data->localData[0]->realVars[515] /* $cse8.rho variable */), &(data->localData[0]->realVars[516] /* $cse8.s variable */), &(data->localData[0]->realVars[514] /* $cse8.pt variable */), &(data->localData[0]->realVars[513] /* $cse8.pd variable */), &(data->localData[0]->realVars[518] /* $cse8.vt variable */), &(data->localData[0]->realVars[517] /* $cse8.vp variable */), &(data->localData[0]->realVars[519] /* $cse8.x variable */), &(data->localData[0]->realVars[510] /* $cse8.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1176
type: SIMPLE_ASSIGN
$cse11 = max(abs(channel_3.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  data->localData[0]->realVars[112] /* $cse11 variable */ = fmax(fabs(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1177
type: ALGORITHM

  $cse12 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,5].pv, channel_3.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp3, &(data->localData[0]->integerVars[2] /* $cse12.phase DISCRETE */), &(data->localData[0]->integerVars[3] /* $cse12.region DISCRETE */), &(data->localData[0]->realVars[119] /* $cse12.p variable */), &(data->localData[0]->realVars[114] /* $cse12.T variable */), &(data->localData[0]->realVars[118] /* $cse12.h variable */), &(data->localData[0]->realVars[113] /* $cse12.R variable */), &(data->localData[0]->realVars[115] /* $cse12.cp variable */), &(data->localData[0]->realVars[116] /* $cse12.cv variable */), &(data->localData[0]->realVars[122] /* $cse12.rho variable */), &(data->localData[0]->realVars[123] /* $cse12.s variable */), &(data->localData[0]->realVars[121] /* $cse12.pt variable */), &(data->localData[0]->realVars[120] /* $cse12.pd variable */), &(data->localData[0]->realVars[125] /* $cse12.vt variable */), &(data->localData[0]->realVars[124] /* $cse12.vp variable */), &(data->localData[0]->realVars[126] /* $cse12.x variable */), &(data->localData[0]->realVars[117] /* $cse12.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1178
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdp = min(4e-05, if noEvent($cse12.region == 3) then $cse12.rho * ($cse12.cv * $cse12.rho + $cse12.pt) / ($cse12.rho ^ 2.0 * $cse12.pd * $cse12.cv + $cse12.T * $cse12.pt ^ 2.0) else if noEvent($cse12.region == 4) then $cse12.rho * (1.0 + $cse12.rho * $cse12.cv / $cse12.dpT) / ($cse12.T * $cse12.dpT) else (-$cse12.rho ^ 2.0) * ($cse12.vp + ($cse12.T * $cse12.vt ^ 2.0 - $cse12.vt / $cse12.rho) / $cse12.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  tmp12 = (modelica_boolean)(data->localData[0]->integerVars[3] /* $cse12.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp12)
  {
    tmp5 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
    tmp6 = data->localData[0]->realVars[121] /* $cse12.pt variable */;
    tmp13 = (data->localData[0]->realVars[122] /* $cse12.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[116] /* $cse12.cv variable */) * (data->localData[0]->realVars[122] /* $cse12.rho variable */) + data->localData[0]->realVars[121] /* $cse12.pt variable */,((tmp5 * tmp5)) * ((data->localData[0]->realVars[120] /* $cse12.pd variable */) * (data->localData[0]->realVars[116] /* $cse12.cv variable */)) + (data->localData[0]->realVars[114] /* $cse12.T variable */) * ((tmp6 * tmp6)),"$cse12.rho ^ 2.0 * $cse12.pd * $cse12.cv + $cse12.T * $cse12.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp10 = (modelica_boolean)(data->localData[0]->integerVars[3] /* $cse12.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp10)
    {
      tmp11 = (data->localData[0]->realVars[122] /* $cse12.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[122] /* $cse12.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[116] /* $cse12.cv variable */,data->localData[0]->realVars[117] /* $cse12.dpT variable */,"$cse12.dpT",equationIndexes)),(data->localData[0]->realVars[114] /* $cse12.T variable */) * (data->localData[0]->realVars[117] /* $cse12.dpT variable */),"$cse12.T * $cse12.dpT",equationIndexes));
    }
    else
    {
      tmp8 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
      tmp9 = data->localData[0]->realVars[125] /* $cse12.vt variable */;
      tmp11 = ((-((tmp8 * tmp8)))) * (data->localData[0]->realVars[124] /* $cse12.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[114] /* $cse12.T variable */) * ((tmp9 * tmp9)) - (DIVISION_SIM(data->localData[0]->realVars[125] /* $cse12.vt variable */,data->localData[0]->realVars[122] /* $cse12.rho variable */,"$cse12.rho",equationIndexes)),data->localData[0]->realVars[115] /* $cse12.cp variable */,"$cse12.cp",equationIndexes));
    }
    tmp13 = tmp11;
  }
  data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */ = fmin(4e-05,tmp13);
  TRACE_POP
}
/*
equation index: 1179
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].drdh = max(-0.0002, if noEvent($cse12.region == 3) then (-$cse12.rho ^ 2.0) * $cse12.pt / ($cse12.rho ^ 2.0 * $cse12.pd * $cse12.cv + $cse12.T * $cse12.pt ^ 2.0) else if noEvent($cse12.region == 4) then (-$cse12.rho ^ 2.0) / ($cse12.T * $cse12.dpT) else (-$cse12.rho ^ 2.0) * $cse12.vt / $cse12.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp23 = (modelica_boolean)(data->localData[0]->integerVars[3] /* $cse12.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp23)
  {
    tmp15 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
    tmp16 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
    tmp17 = data->localData[0]->realVars[121] /* $cse12.pt variable */;
    tmp24 = ((-((tmp15 * tmp15)))) * (DIVISION_SIM(data->localData[0]->realVars[121] /* $cse12.pt variable */,((tmp16 * tmp16)) * ((data->localData[0]->realVars[120] /* $cse12.pd variable */) * (data->localData[0]->realVars[116] /* $cse12.cv variable */)) + (data->localData[0]->realVars[114] /* $cse12.T variable */) * ((tmp17 * tmp17)),"$cse12.rho ^ 2.0 * $cse12.pd * $cse12.cv + $cse12.T * $cse12.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp21 = (modelica_boolean)(data->localData[0]->integerVars[3] /* $cse12.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp21)
    {
      tmp19 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
      tmp22 = DIVISION_SIM((-((tmp19 * tmp19))),(data->localData[0]->realVars[114] /* $cse12.T variable */) * (data->localData[0]->realVars[117] /* $cse12.dpT variable */),"$cse12.T * $cse12.dpT",equationIndexes);
    }
    else
    {
      tmp20 = data->localData[0]->realVars[122] /* $cse12.rho variable */;
      tmp22 = ((-((tmp20 * tmp20)))) * (DIVISION_SIM(data->localData[0]->realVars[125] /* $cse12.vt variable */,data->localData[0]->realVars[115] /* $cse12.cp variable */,"$cse12.cp",equationIndexes));
    }
    tmp24 = tmp22;
  }
  data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp24);
  TRACE_POP
}
/*
equation index: 1180
type: SIMPLE_ASSIGN
$cse13 = max(abs(channel_3.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  data->localData[0]->realVars[127] /* $cse13 variable */ = fmax(fabs(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1181
type: ALGORITHM

  $cse14 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,4].pv, channel_3.Channel[1,4].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  Modelica_Media_Common_IF97BaseTwoPhase tmp25;
  tmp25 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp25, &(data->localData[0]->integerVars[4] /* $cse14.phase DISCRETE */), &(data->localData[0]->integerVars[5] /* $cse14.region DISCRETE */), &(data->localData[0]->realVars[134] /* $cse14.p variable */), &(data->localData[0]->realVars[129] /* $cse14.T variable */), &(data->localData[0]->realVars[133] /* $cse14.h variable */), &(data->localData[0]->realVars[128] /* $cse14.R variable */), &(data->localData[0]->realVars[130] /* $cse14.cp variable */), &(data->localData[0]->realVars[131] /* $cse14.cv variable */), &(data->localData[0]->realVars[137] /* $cse14.rho variable */), &(data->localData[0]->realVars[138] /* $cse14.s variable */), &(data->localData[0]->realVars[136] /* $cse14.pt variable */), &(data->localData[0]->realVars[135] /* $cse14.pd variable */), &(data->localData[0]->realVars[140] /* $cse14.vt variable */), &(data->localData[0]->realVars[139] /* $cse14.vp variable */), &(data->localData[0]->realVars[141] /* $cse14.x variable */), &(data->localData[0]->realVars[132] /* $cse14.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1182
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdp = min(4e-05, if noEvent($cse14.region == 3) then $cse14.rho * ($cse14.cv * $cse14.rho + $cse14.pt) / ($cse14.rho ^ 2.0 * $cse14.pd * $cse14.cv + $cse14.T * $cse14.pt ^ 2.0) else if noEvent($cse14.region == 4) then $cse14.rho * (1.0 + $cse14.rho * $cse14.cv / $cse14.dpT) / ($cse14.T * $cse14.dpT) else (-$cse14.rho ^ 2.0) * ($cse14.vp + ($cse14.T * $cse14.vt ^ 2.0 - $cse14.vt / $cse14.rho) / $cse14.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_boolean tmp34;
  modelica_real tmp35;
  tmp34 = (modelica_boolean)(data->localData[0]->integerVars[5] /* $cse14.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp34)
  {
    tmp27 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
    tmp28 = data->localData[0]->realVars[136] /* $cse14.pt variable */;
    tmp35 = (data->localData[0]->realVars[137] /* $cse14.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[131] /* $cse14.cv variable */) * (data->localData[0]->realVars[137] /* $cse14.rho variable */) + data->localData[0]->realVars[136] /* $cse14.pt variable */,((tmp27 * tmp27)) * ((data->localData[0]->realVars[135] /* $cse14.pd variable */) * (data->localData[0]->realVars[131] /* $cse14.cv variable */)) + (data->localData[0]->realVars[129] /* $cse14.T variable */) * ((tmp28 * tmp28)),"$cse14.rho ^ 2.0 * $cse14.pd * $cse14.cv + $cse14.T * $cse14.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp32 = (modelica_boolean)(data->localData[0]->integerVars[5] /* $cse14.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp32)
    {
      tmp33 = (data->localData[0]->realVars[137] /* $cse14.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[137] /* $cse14.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[131] /* $cse14.cv variable */,data->localData[0]->realVars[132] /* $cse14.dpT variable */,"$cse14.dpT",equationIndexes)),(data->localData[0]->realVars[129] /* $cse14.T variable */) * (data->localData[0]->realVars[132] /* $cse14.dpT variable */),"$cse14.T * $cse14.dpT",equationIndexes));
    }
    else
    {
      tmp30 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
      tmp31 = data->localData[0]->realVars[140] /* $cse14.vt variable */;
      tmp33 = ((-((tmp30 * tmp30)))) * (data->localData[0]->realVars[139] /* $cse14.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[129] /* $cse14.T variable */) * ((tmp31 * tmp31)) - (DIVISION_SIM(data->localData[0]->realVars[140] /* $cse14.vt variable */,data->localData[0]->realVars[137] /* $cse14.rho variable */,"$cse14.rho",equationIndexes)),data->localData[0]->realVars[130] /* $cse14.cp variable */,"$cse14.cp",equationIndexes));
    }
    tmp35 = tmp33;
  }
  data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */ = fmin(4e-05,tmp35);
  TRACE_POP
}
/*
equation index: 1183
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].drdh = max(-0.0002, if noEvent($cse14.region == 3) then (-$cse14.rho ^ 2.0) * $cse14.pt / ($cse14.rho ^ 2.0 * $cse14.pd * $cse14.cv + $cse14.T * $cse14.pt ^ 2.0) else if noEvent($cse14.region == 4) then (-$cse14.rho ^ 2.0) / ($cse14.T * $cse14.dpT) else (-$cse14.rho ^ 2.0) * $cse14.vt / $cse14.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_boolean tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  tmp45 = (modelica_boolean)(data->localData[0]->integerVars[5] /* $cse14.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp45)
  {
    tmp37 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
    tmp38 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
    tmp39 = data->localData[0]->realVars[136] /* $cse14.pt variable */;
    tmp46 = ((-((tmp37 * tmp37)))) * (DIVISION_SIM(data->localData[0]->realVars[136] /* $cse14.pt variable */,((tmp38 * tmp38)) * ((data->localData[0]->realVars[135] /* $cse14.pd variable */) * (data->localData[0]->realVars[131] /* $cse14.cv variable */)) + (data->localData[0]->realVars[129] /* $cse14.T variable */) * ((tmp39 * tmp39)),"$cse14.rho ^ 2.0 * $cse14.pd * $cse14.cv + $cse14.T * $cse14.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp43 = (modelica_boolean)(data->localData[0]->integerVars[5] /* $cse14.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp43)
    {
      tmp41 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
      tmp44 = DIVISION_SIM((-((tmp41 * tmp41))),(data->localData[0]->realVars[129] /* $cse14.T variable */) * (data->localData[0]->realVars[132] /* $cse14.dpT variable */),"$cse14.T * $cse14.dpT",equationIndexes);
    }
    else
    {
      tmp42 = data->localData[0]->realVars[137] /* $cse14.rho variable */;
      tmp44 = ((-((tmp42 * tmp42)))) * (DIVISION_SIM(data->localData[0]->realVars[140] /* $cse14.vt variable */,data->localData[0]->realVars[130] /* $cse14.cp variable */,"$cse14.cp",equationIndexes));
    }
    tmp46 = tmp44;
  }
  data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp46);
  TRACE_POP
}
/*
equation index: 1184
type: SIMPLE_ASSIGN
$cse15 = max(abs(channel_3.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  data->localData[0]->realVars[142] /* $cse15 variable */ = fmax(fabs(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1185
type: ALGORITHM

  $cse16 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,3].pv, channel_3.Channel[1,3].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  Modelica_Media_Common_IF97BaseTwoPhase tmp47;
  tmp47 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp47, &(data->localData[0]->integerVars[6] /* $cse16.phase DISCRETE */), &(data->localData[0]->integerVars[7] /* $cse16.region DISCRETE */), &(data->localData[0]->realVars[149] /* $cse16.p variable */), &(data->localData[0]->realVars[144] /* $cse16.T variable */), &(data->localData[0]->realVars[148] /* $cse16.h variable */), &(data->localData[0]->realVars[143] /* $cse16.R variable */), &(data->localData[0]->realVars[145] /* $cse16.cp variable */), &(data->localData[0]->realVars[146] /* $cse16.cv variable */), &(data->localData[0]->realVars[152] /* $cse16.rho variable */), &(data->localData[0]->realVars[153] /* $cse16.s variable */), &(data->localData[0]->realVars[151] /* $cse16.pt variable */), &(data->localData[0]->realVars[150] /* $cse16.pd variable */), &(data->localData[0]->realVars[155] /* $cse16.vt variable */), &(data->localData[0]->realVars[154] /* $cse16.vp variable */), &(data->localData[0]->realVars[156] /* $cse16.x variable */), &(data->localData[0]->realVars[147] /* $cse16.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1186
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdp = min(4e-05, if noEvent($cse16.region == 3) then $cse16.rho * ($cse16.cv * $cse16.rho + $cse16.pt) / ($cse16.rho ^ 2.0 * $cse16.pd * $cse16.cv + $cse16.T * $cse16.pt ^ 2.0) else if noEvent($cse16.region == 4) then $cse16.rho * (1.0 + $cse16.rho * $cse16.cv / $cse16.dpT) / ($cse16.T * $cse16.dpT) else (-$cse16.rho ^ 2.0) * ($cse16.vp + ($cse16.T * $cse16.vt ^ 2.0 - $cse16.vt / $cse16.rho) / $cse16.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_boolean tmp54;
  modelica_real tmp55;
  modelica_boolean tmp56;
  modelica_real tmp57;
  tmp56 = (modelica_boolean)(data->localData[0]->integerVars[7] /* $cse16.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp56)
  {
    tmp49 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
    tmp50 = data->localData[0]->realVars[151] /* $cse16.pt variable */;
    tmp57 = (data->localData[0]->realVars[152] /* $cse16.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[146] /* $cse16.cv variable */) * (data->localData[0]->realVars[152] /* $cse16.rho variable */) + data->localData[0]->realVars[151] /* $cse16.pt variable */,((tmp49 * tmp49)) * ((data->localData[0]->realVars[150] /* $cse16.pd variable */) * (data->localData[0]->realVars[146] /* $cse16.cv variable */)) + (data->localData[0]->realVars[144] /* $cse16.T variable */) * ((tmp50 * tmp50)),"$cse16.rho ^ 2.0 * $cse16.pd * $cse16.cv + $cse16.T * $cse16.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp54 = (modelica_boolean)(data->localData[0]->integerVars[7] /* $cse16.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp54)
    {
      tmp55 = (data->localData[0]->realVars[152] /* $cse16.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[152] /* $cse16.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[146] /* $cse16.cv variable */,data->localData[0]->realVars[147] /* $cse16.dpT variable */,"$cse16.dpT",equationIndexes)),(data->localData[0]->realVars[144] /* $cse16.T variable */) * (data->localData[0]->realVars[147] /* $cse16.dpT variable */),"$cse16.T * $cse16.dpT",equationIndexes));
    }
    else
    {
      tmp52 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
      tmp53 = data->localData[0]->realVars[155] /* $cse16.vt variable */;
      tmp55 = ((-((tmp52 * tmp52)))) * (data->localData[0]->realVars[154] /* $cse16.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[144] /* $cse16.T variable */) * ((tmp53 * tmp53)) - (DIVISION_SIM(data->localData[0]->realVars[155] /* $cse16.vt variable */,data->localData[0]->realVars[152] /* $cse16.rho variable */,"$cse16.rho",equationIndexes)),data->localData[0]->realVars[145] /* $cse16.cp variable */,"$cse16.cp",equationIndexes));
    }
    tmp57 = tmp55;
  }
  data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */ = fmin(4e-05,tmp57);
  TRACE_POP
}
/*
equation index: 1187
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].drdh = max(-0.0002, if noEvent($cse16.region == 3) then (-$cse16.rho ^ 2.0) * $cse16.pt / ($cse16.rho ^ 2.0 * $cse16.pd * $cse16.cv + $cse16.T * $cse16.pt ^ 2.0) else if noEvent($cse16.region == 4) then (-$cse16.rho ^ 2.0) / ($cse16.T * $cse16.dpT) else (-$cse16.rho ^ 2.0) * $cse16.vt / $cse16.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_boolean tmp67;
  modelica_real tmp68;
  tmp67 = (modelica_boolean)(data->localData[0]->integerVars[7] /* $cse16.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp67)
  {
    tmp59 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
    tmp60 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
    tmp61 = data->localData[0]->realVars[151] /* $cse16.pt variable */;
    tmp68 = ((-((tmp59 * tmp59)))) * (DIVISION_SIM(data->localData[0]->realVars[151] /* $cse16.pt variable */,((tmp60 * tmp60)) * ((data->localData[0]->realVars[150] /* $cse16.pd variable */) * (data->localData[0]->realVars[146] /* $cse16.cv variable */)) + (data->localData[0]->realVars[144] /* $cse16.T variable */) * ((tmp61 * tmp61)),"$cse16.rho ^ 2.0 * $cse16.pd * $cse16.cv + $cse16.T * $cse16.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp65 = (modelica_boolean)(data->localData[0]->integerVars[7] /* $cse16.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp65)
    {
      tmp63 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
      tmp66 = DIVISION_SIM((-((tmp63 * tmp63))),(data->localData[0]->realVars[144] /* $cse16.T variable */) * (data->localData[0]->realVars[147] /* $cse16.dpT variable */),"$cse16.T * $cse16.dpT",equationIndexes);
    }
    else
    {
      tmp64 = data->localData[0]->realVars[152] /* $cse16.rho variable */;
      tmp66 = ((-((tmp64 * tmp64)))) * (DIVISION_SIM(data->localData[0]->realVars[155] /* $cse16.vt variable */,data->localData[0]->realVars[145] /* $cse16.cp variable */,"$cse16.cp",equationIndexes));
    }
    tmp68 = tmp66;
  }
  data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp68);
  TRACE_POP
}
/*
equation index: 1188
type: SIMPLE_ASSIGN
$cse17 = max(abs(channel_3.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  data->localData[0]->realVars[157] /* $cse17 variable */ = fmax(fabs(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1189
type: ALGORITHM

  $cse18 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_3.Channel[1,2].pv, channel_3.Channel[1,2].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  Modelica_Media_Common_IF97BaseTwoPhase tmp69;
  tmp69 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp69, &(data->localData[0]->integerVars[8] /* $cse18.phase DISCRETE */), &(data->localData[0]->integerVars[9] /* $cse18.region DISCRETE */), &(data->localData[0]->realVars[164] /* $cse18.p variable */), &(data->localData[0]->realVars[159] /* $cse18.T variable */), &(data->localData[0]->realVars[163] /* $cse18.h variable */), &(data->localData[0]->realVars[158] /* $cse18.R variable */), &(data->localData[0]->realVars[160] /* $cse18.cp variable */), &(data->localData[0]->realVars[161] /* $cse18.cv variable */), &(data->localData[0]->realVars[167] /* $cse18.rho variable */), &(data->localData[0]->realVars[168] /* $cse18.s variable */), &(data->localData[0]->realVars[166] /* $cse18.pt variable */), &(data->localData[0]->realVars[165] /* $cse18.pd variable */), &(data->localData[0]->realVars[170] /* $cse18.vt variable */), &(data->localData[0]->realVars[169] /* $cse18.vp variable */), &(data->localData[0]->realVars[171] /* $cse18.x variable */), &(data->localData[0]->realVars[162] /* $cse18.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdp = min(4e-05, if noEvent($cse18.region == 3) then $cse18.rho * ($cse18.cv * $cse18.rho + $cse18.pt) / ($cse18.rho ^ 2.0 * $cse18.pd * $cse18.cv + $cse18.T * $cse18.pt ^ 2.0) else if noEvent($cse18.region == 4) then $cse18.rho * (1.0 + $cse18.rho * $cse18.cv / $cse18.dpT) / ($cse18.T * $cse18.dpT) else (-$cse18.rho ^ 2.0) * ($cse18.vp + ($cse18.T * $cse18.vt ^ 2.0 - $cse18.vt / $cse18.rho) / $cse18.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_boolean tmp76;
  modelica_real tmp77;
  modelica_boolean tmp78;
  modelica_real tmp79;
  tmp78 = (modelica_boolean)(data->localData[0]->integerVars[9] /* $cse18.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp78)
  {
    tmp71 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
    tmp72 = data->localData[0]->realVars[166] /* $cse18.pt variable */;
    tmp79 = (data->localData[0]->realVars[167] /* $cse18.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[161] /* $cse18.cv variable */) * (data->localData[0]->realVars[167] /* $cse18.rho variable */) + data->localData[0]->realVars[166] /* $cse18.pt variable */,((tmp71 * tmp71)) * ((data->localData[0]->realVars[165] /* $cse18.pd variable */) * (data->localData[0]->realVars[161] /* $cse18.cv variable */)) + (data->localData[0]->realVars[159] /* $cse18.T variable */) * ((tmp72 * tmp72)),"$cse18.rho ^ 2.0 * $cse18.pd * $cse18.cv + $cse18.T * $cse18.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp76 = (modelica_boolean)(data->localData[0]->integerVars[9] /* $cse18.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp76)
    {
      tmp77 = (data->localData[0]->realVars[167] /* $cse18.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[167] /* $cse18.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[161] /* $cse18.cv variable */,data->localData[0]->realVars[162] /* $cse18.dpT variable */,"$cse18.dpT",equationIndexes)),(data->localData[0]->realVars[159] /* $cse18.T variable */) * (data->localData[0]->realVars[162] /* $cse18.dpT variable */),"$cse18.T * $cse18.dpT",equationIndexes));
    }
    else
    {
      tmp74 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
      tmp75 = data->localData[0]->realVars[170] /* $cse18.vt variable */;
      tmp77 = ((-((tmp74 * tmp74)))) * (data->localData[0]->realVars[169] /* $cse18.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[159] /* $cse18.T variable */) * ((tmp75 * tmp75)) - (DIVISION_SIM(data->localData[0]->realVars[170] /* $cse18.vt variable */,data->localData[0]->realVars[167] /* $cse18.rho variable */,"$cse18.rho",equationIndexes)),data->localData[0]->realVars[160] /* $cse18.cp variable */,"$cse18.cp",equationIndexes));
    }
    tmp79 = tmp77;
  }
  data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */ = fmin(4e-05,tmp79);
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].drdh = max(-0.0002, if noEvent($cse18.region == 3) then (-$cse18.rho ^ 2.0) * $cse18.pt / ($cse18.rho ^ 2.0 * $cse18.pd * $cse18.cv + $cse18.T * $cse18.pt ^ 2.0) else if noEvent($cse18.region == 4) then (-$cse18.rho ^ 2.0) / ($cse18.T * $cse18.dpT) else (-$cse18.rho ^ 2.0) * $cse18.vt / $cse18.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_boolean tmp87;
  modelica_real tmp88;
  modelica_boolean tmp89;
  modelica_real tmp90;
  tmp89 = (modelica_boolean)(data->localData[0]->integerVars[9] /* $cse18.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp89)
  {
    tmp81 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
    tmp82 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
    tmp83 = data->localData[0]->realVars[166] /* $cse18.pt variable */;
    tmp90 = ((-((tmp81 * tmp81)))) * (DIVISION_SIM(data->localData[0]->realVars[166] /* $cse18.pt variable */,((tmp82 * tmp82)) * ((data->localData[0]->realVars[165] /* $cse18.pd variable */) * (data->localData[0]->realVars[161] /* $cse18.cv variable */)) + (data->localData[0]->realVars[159] /* $cse18.T variable */) * ((tmp83 * tmp83)),"$cse18.rho ^ 2.0 * $cse18.pd * $cse18.cv + $cse18.T * $cse18.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp87 = (modelica_boolean)(data->localData[0]->integerVars[9] /* $cse18.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp87)
    {
      tmp85 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
      tmp88 = DIVISION_SIM((-((tmp85 * tmp85))),(data->localData[0]->realVars[159] /* $cse18.T variable */) * (data->localData[0]->realVars[162] /* $cse18.dpT variable */),"$cse18.T * $cse18.dpT",equationIndexes);
    }
    else
    {
      tmp86 = data->localData[0]->realVars[167] /* $cse18.rho variable */;
      tmp88 = ((-((tmp86 * tmp86)))) * (DIVISION_SIM(data->localData[0]->realVars[170] /* $cse18.vt variable */,data->localData[0]->realVars[160] /* $cse18.cp variable */,"$cse18.cp",equationIndexes));
    }
    tmp90 = tmp88;
  }
  data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp90);
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
$cse19 = max(abs(channel_3.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  data->localData[0]->realVars[172] /* $cse19 variable */ = fmax(fabs(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdh = max(-0.0002, if noEvent($cse2.region == 3) then (-$cse2.rho ^ 2.0) * $cse2.pt / ($cse2.rho ^ 2.0 * $cse2.pd * $cse2.cv + $cse2.T * $cse2.pt ^ 2.0) else if noEvent($cse2.region == 4) then (-$cse2.rho ^ 2.0) / ($cse2.T * $cse2.dpT) else (-$cse2.rho ^ 2.0) * $cse2.vt / $cse2.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_boolean tmp98;
  modelica_real tmp99;
  modelica_boolean tmp100;
  modelica_real tmp101;
  tmp100 = (modelica_boolean)(data->localData[0]->integerVars[11] /* $cse2.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp100)
  {
    tmp92 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
    tmp93 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
    tmp94 = data->localData[0]->realVars[181] /* $cse2.pt variable */;
    tmp101 = ((-((tmp92 * tmp92)))) * (DIVISION_SIM(data->localData[0]->realVars[181] /* $cse2.pt variable */,((tmp93 * tmp93)) * ((data->localData[0]->realVars[180] /* $cse2.pd variable */) * (data->localData[0]->realVars[176] /* $cse2.cv variable */)) + (data->localData[0]->realVars[174] /* $cse2.T variable */) * ((tmp94 * tmp94)),"$cse2.rho ^ 2.0 * $cse2.pd * $cse2.cv + $cse2.T * $cse2.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp98 = (modelica_boolean)(data->localData[0]->integerVars[11] /* $cse2.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp98)
    {
      tmp96 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
      tmp99 = DIVISION_SIM((-((tmp96 * tmp96))),(data->localData[0]->realVars[174] /* $cse2.T variable */) * (data->localData[0]->realVars[177] /* $cse2.dpT variable */),"$cse2.T * $cse2.dpT",equationIndexes);
    }
    else
    {
      tmp97 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
      tmp99 = ((-((tmp97 * tmp97)))) * (DIVISION_SIM(data->localData[0]->realVars[185] /* $cse2.vt variable */,data->localData[0]->realVars[175] /* $cse2.cp variable */,"$cse2.cp",equationIndexes));
    }
    tmp101 = tmp99;
  }
  data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp101);
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].drdp = min(4e-05, if noEvent($cse2.region == 3) then $cse2.rho * ($cse2.cv * $cse2.rho + $cse2.pt) / ($cse2.rho ^ 2.0 * $cse2.pd * $cse2.cv + $cse2.T * $cse2.pt ^ 2.0) else if noEvent($cse2.region == 4) then $cse2.rho * (1.0 + $cse2.rho * $cse2.cv / $cse2.dpT) / ($cse2.T * $cse2.dpT) else (-$cse2.rho ^ 2.0) * ($cse2.vp + ($cse2.T * $cse2.vt ^ 2.0 - $cse2.vt / $cse2.rho) / $cse2.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  tmp110 = (modelica_boolean)(data->localData[0]->integerVars[11] /* $cse2.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp110)
  {
    tmp103 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
    tmp104 = data->localData[0]->realVars[181] /* $cse2.pt variable */;
    tmp111 = (data->localData[0]->realVars[182] /* $cse2.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[176] /* $cse2.cv variable */) * (data->localData[0]->realVars[182] /* $cse2.rho variable */) + data->localData[0]->realVars[181] /* $cse2.pt variable */,((tmp103 * tmp103)) * ((data->localData[0]->realVars[180] /* $cse2.pd variable */) * (data->localData[0]->realVars[176] /* $cse2.cv variable */)) + (data->localData[0]->realVars[174] /* $cse2.T variable */) * ((tmp104 * tmp104)),"$cse2.rho ^ 2.0 * $cse2.pd * $cse2.cv + $cse2.T * $cse2.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp108 = (modelica_boolean)(data->localData[0]->integerVars[11] /* $cse2.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp108)
    {
      tmp109 = (data->localData[0]->realVars[182] /* $cse2.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[182] /* $cse2.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[176] /* $cse2.cv variable */,data->localData[0]->realVars[177] /* $cse2.dpT variable */,"$cse2.dpT",equationIndexes)),(data->localData[0]->realVars[174] /* $cse2.T variable */) * (data->localData[0]->realVars[177] /* $cse2.dpT variable */),"$cse2.T * $cse2.dpT",equationIndexes));
    }
    else
    {
      tmp106 = data->localData[0]->realVars[182] /* $cse2.rho variable */;
      tmp107 = data->localData[0]->realVars[185] /* $cse2.vt variable */;
      tmp109 = ((-((tmp106 * tmp106)))) * (data->localData[0]->realVars[184] /* $cse2.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[174] /* $cse2.T variable */) * ((tmp107 * tmp107)) - (DIVISION_SIM(data->localData[0]->realVars[185] /* $cse2.vt variable */,data->localData[0]->realVars[182] /* $cse2.rho variable */,"$cse2.rho",equationIndexes)),data->localData[0]->realVars[175] /* $cse2.cp variable */,"$cse2.cp",equationIndexes));
    }
    tmp111 = tmp109;
  }
  data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */ = fmin(4e-05,tmp111);
  TRACE_POP
}
/*
equation index: 1195
type: ALGORITHM

  $cse20 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_2.Channel[1,1].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  Modelica_Media_Common_IF97BaseTwoPhase tmp112;
  tmp112 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp112, &(data->localData[0]->integerVars[12] /* $cse20.phase DISCRETE */), &(data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */), &(data->localData[0]->realVars[193] /* $cse20.p variable */), &(data->localData[0]->realVars[188] /* $cse20.T variable */), &(data->localData[0]->realVars[192] /* $cse20.h variable */), &(data->localData[0]->realVars[187] /* $cse20.R variable */), &(data->localData[0]->realVars[189] /* $cse20.cp variable */), &(data->localData[0]->realVars[190] /* $cse20.cv variable */), &(data->localData[0]->realVars[196] /* $cse20.rho variable */), &(data->localData[0]->realVars[197] /* $cse20.s variable */), &(data->localData[0]->realVars[195] /* $cse20.pt variable */), &(data->localData[0]->realVars[194] /* $cse20.pd variable */), &(data->localData[0]->realVars[199] /* $cse20.vt variable */), &(data->localData[0]->realVars[198] /* $cse20.vp variable */), &(data->localData[0]->realVars[200] /* $cse20.x variable */), &(data->localData[0]->realVars[191] /* $cse20.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1196
type: ALGORITHM

  $cse26 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,1].pv, channel_1.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  Modelica_Media_Common_IF97BaseTwoPhase tmp113;
  tmp113 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp113, &(data->localData[0]->integerVars[16] /* $cse26.phase DISCRETE */), &(data->localData[0]->integerVars[17] /* $cse26.region DISCRETE */), &(data->localData[0]->realVars[225] /* $cse26.p variable */), &(data->localData[0]->realVars[220] /* $cse26.T variable */), &(data->localData[0]->realVars[224] /* $cse26.h variable */), &(data->localData[0]->realVars[219] /* $cse26.R variable */), &(data->localData[0]->realVars[221] /* $cse26.cp variable */), &(data->localData[0]->realVars[222] /* $cse26.cv variable */), &(data->localData[0]->realVars[228] /* $cse26.rho variable */), &(data->localData[0]->realVars[229] /* $cse26.s variable */), &(data->localData[0]->realVars[227] /* $cse26.pt variable */), &(data->localData[0]->realVars[226] /* $cse26.pd variable */), &(data->localData[0]->realVars[231] /* $cse26.vt variable */), &(data->localData[0]->realVars[230] /* $cse26.vp variable */), &(data->localData[0]->realVars[232] /* $cse26.x variable */), &(data->localData[0]->realVars[223] /* $cse26.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1197
type: SIMPLE_ASSIGN
$cse29 = max(abs(channel_2.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  data->localData[0]->realVars[248] /* $cse29 variable */ = fmax(fabs(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1198
type: ALGORITHM

  $cse30 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].pv, channel_2.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  Modelica_Media_Common_IF97BaseTwoPhase tmp114;
  tmp114 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp114, &(data->localData[0]->integerVars[22] /* $cse30.phase DISCRETE */), &(data->localData[0]->integerVars[23] /* $cse30.region DISCRETE */), &(data->localData[0]->realVars[269] /* $cse30.p variable */), &(data->localData[0]->realVars[264] /* $cse30.T variable */), &(data->localData[0]->realVars[268] /* $cse30.h variable */), &(data->localData[0]->realVars[263] /* $cse30.R variable */), &(data->localData[0]->realVars[265] /* $cse30.cp variable */), &(data->localData[0]->realVars[266] /* $cse30.cv variable */), &(data->localData[0]->realVars[272] /* $cse30.rho variable */), &(data->localData[0]->realVars[273] /* $cse30.s variable */), &(data->localData[0]->realVars[271] /* $cse30.pt variable */), &(data->localData[0]->realVars[270] /* $cse30.pd variable */), &(data->localData[0]->realVars[275] /* $cse30.vt variable */), &(data->localData[0]->realVars[274] /* $cse30.vp variable */), &(data->localData[0]->realVars[276] /* $cse30.x variable */), &(data->localData[0]->realVars[267] /* $cse30.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdp = min(4e-05, if noEvent($cse30.region == 3) then $cse30.rho * ($cse30.cv * $cse30.rho + $cse30.pt) / ($cse30.rho ^ 2.0 * $cse30.pd * $cse30.cv + $cse30.T * $cse30.pt ^ 2.0) else if noEvent($cse30.region == 4) then $cse30.rho * (1.0 + $cse30.rho * $cse30.cv / $cse30.dpT) / ($cse30.T * $cse30.dpT) else (-$cse30.rho ^ 2.0) * ($cse30.vp + ($cse30.T * $cse30.vt ^ 2.0 - $cse30.vt / $cse30.rho) / $cse30.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_boolean tmp121;
  modelica_real tmp122;
  modelica_boolean tmp123;
  modelica_real tmp124;
  tmp123 = (modelica_boolean)(data->localData[0]->integerVars[23] /* $cse30.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp123)
  {
    tmp116 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
    tmp117 = data->localData[0]->realVars[271] /* $cse30.pt variable */;
    tmp124 = (data->localData[0]->realVars[272] /* $cse30.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[266] /* $cse30.cv variable */) * (data->localData[0]->realVars[272] /* $cse30.rho variable */) + data->localData[0]->realVars[271] /* $cse30.pt variable */,((tmp116 * tmp116)) * ((data->localData[0]->realVars[270] /* $cse30.pd variable */) * (data->localData[0]->realVars[266] /* $cse30.cv variable */)) + (data->localData[0]->realVars[264] /* $cse30.T variable */) * ((tmp117 * tmp117)),"$cse30.rho ^ 2.0 * $cse30.pd * $cse30.cv + $cse30.T * $cse30.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp121 = (modelica_boolean)(data->localData[0]->integerVars[23] /* $cse30.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp121)
    {
      tmp122 = (data->localData[0]->realVars[272] /* $cse30.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[272] /* $cse30.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* $cse30.cv variable */,data->localData[0]->realVars[267] /* $cse30.dpT variable */,"$cse30.dpT",equationIndexes)),(data->localData[0]->realVars[264] /* $cse30.T variable */) * (data->localData[0]->realVars[267] /* $cse30.dpT variable */),"$cse30.T * $cse30.dpT",equationIndexes));
    }
    else
    {
      tmp119 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
      tmp120 = data->localData[0]->realVars[275] /* $cse30.vt variable */;
      tmp122 = ((-((tmp119 * tmp119)))) * (data->localData[0]->realVars[274] /* $cse30.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[264] /* $cse30.T variable */) * ((tmp120 * tmp120)) - (DIVISION_SIM(data->localData[0]->realVars[275] /* $cse30.vt variable */,data->localData[0]->realVars[272] /* $cse30.rho variable */,"$cse30.rho",equationIndexes)),data->localData[0]->realVars[265] /* $cse30.cp variable */,"$cse30.cp",equationIndexes));
    }
    tmp124 = tmp122;
  }
  data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */ = fmin(4e-05,tmp124);
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].drdh = max(-0.0002, if noEvent($cse30.region == 3) then (-$cse30.rho ^ 2.0) * $cse30.pt / ($cse30.rho ^ 2.0 * $cse30.pd * $cse30.cv + $cse30.T * $cse30.pt ^ 2.0) else if noEvent($cse30.region == 4) then (-$cse30.rho ^ 2.0) / ($cse30.T * $cse30.dpT) else (-$cse30.rho ^ 2.0) * $cse30.vt / $cse30.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_boolean tmp132;
  modelica_real tmp133;
  modelica_boolean tmp134;
  modelica_real tmp135;
  tmp134 = (modelica_boolean)(data->localData[0]->integerVars[23] /* $cse30.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp134)
  {
    tmp126 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
    tmp127 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
    tmp128 = data->localData[0]->realVars[271] /* $cse30.pt variable */;
    tmp135 = ((-((tmp126 * tmp126)))) * (DIVISION_SIM(data->localData[0]->realVars[271] /* $cse30.pt variable */,((tmp127 * tmp127)) * ((data->localData[0]->realVars[270] /* $cse30.pd variable */) * (data->localData[0]->realVars[266] /* $cse30.cv variable */)) + (data->localData[0]->realVars[264] /* $cse30.T variable */) * ((tmp128 * tmp128)),"$cse30.rho ^ 2.0 * $cse30.pd * $cse30.cv + $cse30.T * $cse30.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp132 = (modelica_boolean)(data->localData[0]->integerVars[23] /* $cse30.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp132)
    {
      tmp130 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
      tmp133 = DIVISION_SIM((-((tmp130 * tmp130))),(data->localData[0]->realVars[264] /* $cse30.T variable */) * (data->localData[0]->realVars[267] /* $cse30.dpT variable */),"$cse30.T * $cse30.dpT",equationIndexes);
    }
    else
    {
      tmp131 = data->localData[0]->realVars[272] /* $cse30.rho variable */;
      tmp133 = ((-((tmp131 * tmp131)))) * (DIVISION_SIM(data->localData[0]->realVars[275] /* $cse30.vt variable */,data->localData[0]->realVars[265] /* $cse30.cp variable */,"$cse30.cp",equationIndexes));
    }
    tmp135 = tmp133;
  }
  data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp135);
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
$cse31 = max(abs(channel_2.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  data->localData[0]->realVars[277] /* $cse31 variable */ = fmax(fabs(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1202
type: ALGORITHM

  $cse32 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,4].pv, channel_2.Channel[1,4].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  Modelica_Media_Common_IF97BaseTwoPhase tmp136;
  tmp136 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp136, &(data->localData[0]->integerVars[24] /* $cse32.phase DISCRETE */), &(data->localData[0]->integerVars[25] /* $cse32.region DISCRETE */), &(data->localData[0]->realVars[284] /* $cse32.p variable */), &(data->localData[0]->realVars[279] /* $cse32.T variable */), &(data->localData[0]->realVars[283] /* $cse32.h variable */), &(data->localData[0]->realVars[278] /* $cse32.R variable */), &(data->localData[0]->realVars[280] /* $cse32.cp variable */), &(data->localData[0]->realVars[281] /* $cse32.cv variable */), &(data->localData[0]->realVars[287] /* $cse32.rho variable */), &(data->localData[0]->realVars[288] /* $cse32.s variable */), &(data->localData[0]->realVars[286] /* $cse32.pt variable */), &(data->localData[0]->realVars[285] /* $cse32.pd variable */), &(data->localData[0]->realVars[290] /* $cse32.vt variable */), &(data->localData[0]->realVars[289] /* $cse32.vp variable */), &(data->localData[0]->realVars[291] /* $cse32.x variable */), &(data->localData[0]->realVars[282] /* $cse32.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1203
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdp = min(4e-05, if noEvent($cse32.region == 3) then $cse32.rho * ($cse32.cv * $cse32.rho + $cse32.pt) / ($cse32.rho ^ 2.0 * $cse32.pd * $cse32.cv + $cse32.T * $cse32.pt ^ 2.0) else if noEvent($cse32.region == 4) then $cse32.rho * (1.0 + $cse32.rho * $cse32.cv / $cse32.dpT) / ($cse32.T * $cse32.dpT) else (-$cse32.rho ^ 2.0) * ($cse32.vp + ($cse32.T * $cse32.vt ^ 2.0 - $cse32.vt / $cse32.rho) / $cse32.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_boolean tmp143;
  modelica_real tmp144;
  modelica_boolean tmp145;
  modelica_real tmp146;
  tmp145 = (modelica_boolean)(data->localData[0]->integerVars[25] /* $cse32.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp145)
  {
    tmp138 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
    tmp139 = data->localData[0]->realVars[286] /* $cse32.pt variable */;
    tmp146 = (data->localData[0]->realVars[287] /* $cse32.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[281] /* $cse32.cv variable */) * (data->localData[0]->realVars[287] /* $cse32.rho variable */) + data->localData[0]->realVars[286] /* $cse32.pt variable */,((tmp138 * tmp138)) * ((data->localData[0]->realVars[285] /* $cse32.pd variable */) * (data->localData[0]->realVars[281] /* $cse32.cv variable */)) + (data->localData[0]->realVars[279] /* $cse32.T variable */) * ((tmp139 * tmp139)),"$cse32.rho ^ 2.0 * $cse32.pd * $cse32.cv + $cse32.T * $cse32.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp143 = (modelica_boolean)(data->localData[0]->integerVars[25] /* $cse32.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp143)
    {
      tmp144 = (data->localData[0]->realVars[287] /* $cse32.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[287] /* $cse32.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[281] /* $cse32.cv variable */,data->localData[0]->realVars[282] /* $cse32.dpT variable */,"$cse32.dpT",equationIndexes)),(data->localData[0]->realVars[279] /* $cse32.T variable */) * (data->localData[0]->realVars[282] /* $cse32.dpT variable */),"$cse32.T * $cse32.dpT",equationIndexes));
    }
    else
    {
      tmp141 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
      tmp142 = data->localData[0]->realVars[290] /* $cse32.vt variable */;
      tmp144 = ((-((tmp141 * tmp141)))) * (data->localData[0]->realVars[289] /* $cse32.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[279] /* $cse32.T variable */) * ((tmp142 * tmp142)) - (DIVISION_SIM(data->localData[0]->realVars[290] /* $cse32.vt variable */,data->localData[0]->realVars[287] /* $cse32.rho variable */,"$cse32.rho",equationIndexes)),data->localData[0]->realVars[280] /* $cse32.cp variable */,"$cse32.cp",equationIndexes));
    }
    tmp146 = tmp144;
  }
  data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */ = fmin(4e-05,tmp146);
  TRACE_POP
}
/*
equation index: 1204
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].drdh = max(-0.0002, if noEvent($cse32.region == 3) then (-$cse32.rho ^ 2.0) * $cse32.pt / ($cse32.rho ^ 2.0 * $cse32.pd * $cse32.cv + $cse32.T * $cse32.pt ^ 2.0) else if noEvent($cse32.region == 4) then (-$cse32.rho ^ 2.0) / ($cse32.T * $cse32.dpT) else (-$cse32.rho ^ 2.0) * $cse32.vt / $cse32.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_boolean tmp154;
  modelica_real tmp155;
  modelica_boolean tmp156;
  modelica_real tmp157;
  tmp156 = (modelica_boolean)(data->localData[0]->integerVars[25] /* $cse32.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp156)
  {
    tmp148 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
    tmp149 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
    tmp150 = data->localData[0]->realVars[286] /* $cse32.pt variable */;
    tmp157 = ((-((tmp148 * tmp148)))) * (DIVISION_SIM(data->localData[0]->realVars[286] /* $cse32.pt variable */,((tmp149 * tmp149)) * ((data->localData[0]->realVars[285] /* $cse32.pd variable */) * (data->localData[0]->realVars[281] /* $cse32.cv variable */)) + (data->localData[0]->realVars[279] /* $cse32.T variable */) * ((tmp150 * tmp150)),"$cse32.rho ^ 2.0 * $cse32.pd * $cse32.cv + $cse32.T * $cse32.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp154 = (modelica_boolean)(data->localData[0]->integerVars[25] /* $cse32.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp154)
    {
      tmp152 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
      tmp155 = DIVISION_SIM((-((tmp152 * tmp152))),(data->localData[0]->realVars[279] /* $cse32.T variable */) * (data->localData[0]->realVars[282] /* $cse32.dpT variable */),"$cse32.T * $cse32.dpT",equationIndexes);
    }
    else
    {
      tmp153 = data->localData[0]->realVars[287] /* $cse32.rho variable */;
      tmp155 = ((-((tmp153 * tmp153)))) * (DIVISION_SIM(data->localData[0]->realVars[290] /* $cse32.vt variable */,data->localData[0]->realVars[280] /* $cse32.cp variable */,"$cse32.cp",equationIndexes));
    }
    tmp157 = tmp155;
  }
  data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp157);
  TRACE_POP
}
/*
equation index: 1205
type: SIMPLE_ASSIGN
$cse33 = max(abs(channel_2.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  data->localData[0]->realVars[292] /* $cse33 variable */ = fmax(fabs(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1206
type: ALGORITHM

  $cse34 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,3].pv, channel_2.Channel[1,3].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  Modelica_Media_Common_IF97BaseTwoPhase tmp158;
  tmp158 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp158, &(data->localData[0]->integerVars[26] /* $cse34.phase DISCRETE */), &(data->localData[0]->integerVars[27] /* $cse34.region DISCRETE */), &(data->localData[0]->realVars[299] /* $cse34.p variable */), &(data->localData[0]->realVars[294] /* $cse34.T variable */), &(data->localData[0]->realVars[298] /* $cse34.h variable */), &(data->localData[0]->realVars[293] /* $cse34.R variable */), &(data->localData[0]->realVars[295] /* $cse34.cp variable */), &(data->localData[0]->realVars[296] /* $cse34.cv variable */), &(data->localData[0]->realVars[302] /* $cse34.rho variable */), &(data->localData[0]->realVars[303] /* $cse34.s variable */), &(data->localData[0]->realVars[301] /* $cse34.pt variable */), &(data->localData[0]->realVars[300] /* $cse34.pd variable */), &(data->localData[0]->realVars[305] /* $cse34.vt variable */), &(data->localData[0]->realVars[304] /* $cse34.vp variable */), &(data->localData[0]->realVars[306] /* $cse34.x variable */), &(data->localData[0]->realVars[297] /* $cse34.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1207
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdp = min(4e-05, if noEvent($cse34.region == 3) then $cse34.rho * ($cse34.cv * $cse34.rho + $cse34.pt) / ($cse34.rho ^ 2.0 * $cse34.pd * $cse34.cv + $cse34.T * $cse34.pt ^ 2.0) else if noEvent($cse34.region == 4) then $cse34.rho * (1.0 + $cse34.rho * $cse34.cv / $cse34.dpT) / ($cse34.T * $cse34.dpT) else (-$cse34.rho ^ 2.0) * ($cse34.vp + ($cse34.T * $cse34.vt ^ 2.0 - $cse34.vt / $cse34.rho) / $cse34.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_boolean tmp165;
  modelica_real tmp166;
  modelica_boolean tmp167;
  modelica_real tmp168;
  tmp167 = (modelica_boolean)(data->localData[0]->integerVars[27] /* $cse34.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp167)
  {
    tmp160 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
    tmp161 = data->localData[0]->realVars[301] /* $cse34.pt variable */;
    tmp168 = (data->localData[0]->realVars[302] /* $cse34.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[296] /* $cse34.cv variable */) * (data->localData[0]->realVars[302] /* $cse34.rho variable */) + data->localData[0]->realVars[301] /* $cse34.pt variable */,((tmp160 * tmp160)) * ((data->localData[0]->realVars[300] /* $cse34.pd variable */) * (data->localData[0]->realVars[296] /* $cse34.cv variable */)) + (data->localData[0]->realVars[294] /* $cse34.T variable */) * ((tmp161 * tmp161)),"$cse34.rho ^ 2.0 * $cse34.pd * $cse34.cv + $cse34.T * $cse34.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp165 = (modelica_boolean)(data->localData[0]->integerVars[27] /* $cse34.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp165)
    {
      tmp166 = (data->localData[0]->realVars[302] /* $cse34.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[302] /* $cse34.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[296] /* $cse34.cv variable */,data->localData[0]->realVars[297] /* $cse34.dpT variable */,"$cse34.dpT",equationIndexes)),(data->localData[0]->realVars[294] /* $cse34.T variable */) * (data->localData[0]->realVars[297] /* $cse34.dpT variable */),"$cse34.T * $cse34.dpT",equationIndexes));
    }
    else
    {
      tmp163 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
      tmp164 = data->localData[0]->realVars[305] /* $cse34.vt variable */;
      tmp166 = ((-((tmp163 * tmp163)))) * (data->localData[0]->realVars[304] /* $cse34.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[294] /* $cse34.T variable */) * ((tmp164 * tmp164)) - (DIVISION_SIM(data->localData[0]->realVars[305] /* $cse34.vt variable */,data->localData[0]->realVars[302] /* $cse34.rho variable */,"$cse34.rho",equationIndexes)),data->localData[0]->realVars[295] /* $cse34.cp variable */,"$cse34.cp",equationIndexes));
    }
    tmp168 = tmp166;
  }
  data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */ = fmin(4e-05,tmp168);
  TRACE_POP
}
/*
equation index: 1208
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].drdh = max(-0.0002, if noEvent($cse34.region == 3) then (-$cse34.rho ^ 2.0) * $cse34.pt / ($cse34.rho ^ 2.0 * $cse34.pd * $cse34.cv + $cse34.T * $cse34.pt ^ 2.0) else if noEvent($cse34.region == 4) then (-$cse34.rho ^ 2.0) / ($cse34.T * $cse34.dpT) else (-$cse34.rho ^ 2.0) * $cse34.vt / $cse34.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_boolean tmp176;
  modelica_real tmp177;
  modelica_boolean tmp178;
  modelica_real tmp179;
  tmp178 = (modelica_boolean)(data->localData[0]->integerVars[27] /* $cse34.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp178)
  {
    tmp170 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
    tmp171 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
    tmp172 = data->localData[0]->realVars[301] /* $cse34.pt variable */;
    tmp179 = ((-((tmp170 * tmp170)))) * (DIVISION_SIM(data->localData[0]->realVars[301] /* $cse34.pt variable */,((tmp171 * tmp171)) * ((data->localData[0]->realVars[300] /* $cse34.pd variable */) * (data->localData[0]->realVars[296] /* $cse34.cv variable */)) + (data->localData[0]->realVars[294] /* $cse34.T variable */) * ((tmp172 * tmp172)),"$cse34.rho ^ 2.0 * $cse34.pd * $cse34.cv + $cse34.T * $cse34.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp176 = (modelica_boolean)(data->localData[0]->integerVars[27] /* $cse34.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp176)
    {
      tmp174 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
      tmp177 = DIVISION_SIM((-((tmp174 * tmp174))),(data->localData[0]->realVars[294] /* $cse34.T variable */) * (data->localData[0]->realVars[297] /* $cse34.dpT variable */),"$cse34.T * $cse34.dpT",equationIndexes);
    }
    else
    {
      tmp175 = data->localData[0]->realVars[302] /* $cse34.rho variable */;
      tmp177 = ((-((tmp175 * tmp175)))) * (DIVISION_SIM(data->localData[0]->realVars[305] /* $cse34.vt variable */,data->localData[0]->realVars[295] /* $cse34.cp variable */,"$cse34.cp",equationIndexes));
    }
    tmp179 = tmp177;
  }
  data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp179);
  TRACE_POP
}
/*
equation index: 1209
type: SIMPLE_ASSIGN
$cse35 = max(abs(channel_2.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  data->localData[0]->realVars[307] /* $cse35 variable */ = fmax(fabs(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1210
type: ALGORITHM

  $cse36 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,2].pv, channel_2.Channel[1,2].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  Modelica_Media_Common_IF97BaseTwoPhase tmp180;
  tmp180 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp180, &(data->localData[0]->integerVars[28] /* $cse36.phase DISCRETE */), &(data->localData[0]->integerVars[29] /* $cse36.region DISCRETE */), &(data->localData[0]->realVars[314] /* $cse36.p variable */), &(data->localData[0]->realVars[309] /* $cse36.T variable */), &(data->localData[0]->realVars[313] /* $cse36.h variable */), &(data->localData[0]->realVars[308] /* $cse36.R variable */), &(data->localData[0]->realVars[310] /* $cse36.cp variable */), &(data->localData[0]->realVars[311] /* $cse36.cv variable */), &(data->localData[0]->realVars[317] /* $cse36.rho variable */), &(data->localData[0]->realVars[318] /* $cse36.s variable */), &(data->localData[0]->realVars[316] /* $cse36.pt variable */), &(data->localData[0]->realVars[315] /* $cse36.pd variable */), &(data->localData[0]->realVars[320] /* $cse36.vt variable */), &(data->localData[0]->realVars[319] /* $cse36.vp variable */), &(data->localData[0]->realVars[321] /* $cse36.x variable */), &(data->localData[0]->realVars[312] /* $cse36.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdp = min(4e-05, if noEvent($cse36.region == 3) then $cse36.rho * ($cse36.cv * $cse36.rho + $cse36.pt) / ($cse36.rho ^ 2.0 * $cse36.pd * $cse36.cv + $cse36.T * $cse36.pt ^ 2.0) else if noEvent($cse36.region == 4) then $cse36.rho * (1.0 + $cse36.rho * $cse36.cv / $cse36.dpT) / ($cse36.T * $cse36.dpT) else (-$cse36.rho ^ 2.0) * ($cse36.vp + ($cse36.T * $cse36.vt ^ 2.0 - $cse36.vt / $cse36.rho) / $cse36.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_boolean tmp187;
  modelica_real tmp188;
  modelica_boolean tmp189;
  modelica_real tmp190;
  tmp189 = (modelica_boolean)(data->localData[0]->integerVars[29] /* $cse36.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp189)
  {
    tmp182 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
    tmp183 = data->localData[0]->realVars[316] /* $cse36.pt variable */;
    tmp190 = (data->localData[0]->realVars[317] /* $cse36.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[311] /* $cse36.cv variable */) * (data->localData[0]->realVars[317] /* $cse36.rho variable */) + data->localData[0]->realVars[316] /* $cse36.pt variable */,((tmp182 * tmp182)) * ((data->localData[0]->realVars[315] /* $cse36.pd variable */) * (data->localData[0]->realVars[311] /* $cse36.cv variable */)) + (data->localData[0]->realVars[309] /* $cse36.T variable */) * ((tmp183 * tmp183)),"$cse36.rho ^ 2.0 * $cse36.pd * $cse36.cv + $cse36.T * $cse36.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp187 = (modelica_boolean)(data->localData[0]->integerVars[29] /* $cse36.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp187)
    {
      tmp188 = (data->localData[0]->realVars[317] /* $cse36.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[317] /* $cse36.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[311] /* $cse36.cv variable */,data->localData[0]->realVars[312] /* $cse36.dpT variable */,"$cse36.dpT",equationIndexes)),(data->localData[0]->realVars[309] /* $cse36.T variable */) * (data->localData[0]->realVars[312] /* $cse36.dpT variable */),"$cse36.T * $cse36.dpT",equationIndexes));
    }
    else
    {
      tmp185 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
      tmp186 = data->localData[0]->realVars[320] /* $cse36.vt variable */;
      tmp188 = ((-((tmp185 * tmp185)))) * (data->localData[0]->realVars[319] /* $cse36.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[309] /* $cse36.T variable */) * ((tmp186 * tmp186)) - (DIVISION_SIM(data->localData[0]->realVars[320] /* $cse36.vt variable */,data->localData[0]->realVars[317] /* $cse36.rho variable */,"$cse36.rho",equationIndexes)),data->localData[0]->realVars[310] /* $cse36.cp variable */,"$cse36.cp",equationIndexes));
    }
    tmp190 = tmp188;
  }
  data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */ = fmin(4e-05,tmp190);
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].drdh = max(-0.0002, if noEvent($cse36.region == 3) then (-$cse36.rho ^ 2.0) * $cse36.pt / ($cse36.rho ^ 2.0 * $cse36.pd * $cse36.cv + $cse36.T * $cse36.pt ^ 2.0) else if noEvent($cse36.region == 4) then (-$cse36.rho ^ 2.0) / ($cse36.T * $cse36.dpT) else (-$cse36.rho ^ 2.0) * $cse36.vt / $cse36.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_boolean tmp198;
  modelica_real tmp199;
  modelica_boolean tmp200;
  modelica_real tmp201;
  tmp200 = (modelica_boolean)(data->localData[0]->integerVars[29] /* $cse36.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp200)
  {
    tmp192 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
    tmp193 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
    tmp194 = data->localData[0]->realVars[316] /* $cse36.pt variable */;
    tmp201 = ((-((tmp192 * tmp192)))) * (DIVISION_SIM(data->localData[0]->realVars[316] /* $cse36.pt variable */,((tmp193 * tmp193)) * ((data->localData[0]->realVars[315] /* $cse36.pd variable */) * (data->localData[0]->realVars[311] /* $cse36.cv variable */)) + (data->localData[0]->realVars[309] /* $cse36.T variable */) * ((tmp194 * tmp194)),"$cse36.rho ^ 2.0 * $cse36.pd * $cse36.cv + $cse36.T * $cse36.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp198 = (modelica_boolean)(data->localData[0]->integerVars[29] /* $cse36.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp198)
    {
      tmp196 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
      tmp199 = DIVISION_SIM((-((tmp196 * tmp196))),(data->localData[0]->realVars[309] /* $cse36.T variable */) * (data->localData[0]->realVars[312] /* $cse36.dpT variable */),"$cse36.T * $cse36.dpT",equationIndexes);
    }
    else
    {
      tmp197 = data->localData[0]->realVars[317] /* $cse36.rho variable */;
      tmp199 = ((-((tmp197 * tmp197)))) * (DIVISION_SIM(data->localData[0]->realVars[320] /* $cse36.vt variable */,data->localData[0]->realVars[310] /* $cse36.cp variable */,"$cse36.cp",equationIndexes));
    }
    tmp201 = tmp199;
  }
  data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp201);
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
$cse37 = max(abs(channel_2.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  data->localData[0]->realVars[322] /* $cse37 variable */ = fmax(fabs(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdh = max(-0.0002, if noEvent($cse20.region == 3) then (-$cse20.rho ^ 2.0) * $cse20.pt / ($cse20.rho ^ 2.0 * $cse20.pd * $cse20.cv + $cse20.T * $cse20.pt ^ 2.0) else if noEvent($cse20.region == 4) then (-$cse20.rho ^ 2.0) / ($cse20.T * $cse20.dpT) else (-$cse20.rho ^ 2.0) * $cse20.vt / $cse20.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_boolean tmp209;
  modelica_real tmp210;
  modelica_boolean tmp211;
  modelica_real tmp212;
  tmp211 = (modelica_boolean)(data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp211)
  {
    tmp203 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
    tmp204 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
    tmp205 = data->localData[0]->realVars[195] /* $cse20.pt variable */;
    tmp212 = ((-((tmp203 * tmp203)))) * (DIVISION_SIM(data->localData[0]->realVars[195] /* $cse20.pt variable */,((tmp204 * tmp204)) * ((data->localData[0]->realVars[194] /* $cse20.pd variable */) * (data->localData[0]->realVars[190] /* $cse20.cv variable */)) + (data->localData[0]->realVars[188] /* $cse20.T variable */) * ((tmp205 * tmp205)),"$cse20.rho ^ 2.0 * $cse20.pd * $cse20.cv + $cse20.T * $cse20.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp209 = (modelica_boolean)(data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp209)
    {
      tmp207 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
      tmp210 = DIVISION_SIM((-((tmp207 * tmp207))),(data->localData[0]->realVars[188] /* $cse20.T variable */) * (data->localData[0]->realVars[191] /* $cse20.dpT variable */),"$cse20.T * $cse20.dpT",equationIndexes);
    }
    else
    {
      tmp208 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
      tmp210 = ((-((tmp208 * tmp208)))) * (DIVISION_SIM(data->localData[0]->realVars[199] /* $cse20.vt variable */,data->localData[0]->realVars[189] /* $cse20.cp variable */,"$cse20.cp",equationIndexes));
    }
    tmp212 = tmp210;
  }
  data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp212);
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].drdp = min(4e-05, if noEvent($cse20.region == 3) then $cse20.rho * ($cse20.cv * $cse20.rho + $cse20.pt) / ($cse20.rho ^ 2.0 * $cse20.pd * $cse20.cv + $cse20.T * $cse20.pt ^ 2.0) else if noEvent($cse20.region == 4) then $cse20.rho * (1.0 + $cse20.rho * $cse20.cv / $cse20.dpT) / ($cse20.T * $cse20.dpT) else (-$cse20.rho ^ 2.0) * ($cse20.vp + ($cse20.T * $cse20.vt ^ 2.0 - $cse20.vt / $cse20.rho) / $cse20.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_boolean tmp219;
  modelica_real tmp220;
  modelica_boolean tmp221;
  modelica_real tmp222;
  tmp221 = (modelica_boolean)(data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp221)
  {
    tmp214 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
    tmp215 = data->localData[0]->realVars[195] /* $cse20.pt variable */;
    tmp222 = (data->localData[0]->realVars[196] /* $cse20.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[190] /* $cse20.cv variable */) * (data->localData[0]->realVars[196] /* $cse20.rho variable */) + data->localData[0]->realVars[195] /* $cse20.pt variable */,((tmp214 * tmp214)) * ((data->localData[0]->realVars[194] /* $cse20.pd variable */) * (data->localData[0]->realVars[190] /* $cse20.cv variable */)) + (data->localData[0]->realVars[188] /* $cse20.T variable */) * ((tmp215 * tmp215)),"$cse20.rho ^ 2.0 * $cse20.pd * $cse20.cv + $cse20.T * $cse20.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp219 = (modelica_boolean)(data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp219)
    {
      tmp220 = (data->localData[0]->realVars[196] /* $cse20.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[196] /* $cse20.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[190] /* $cse20.cv variable */,data->localData[0]->realVars[191] /* $cse20.dpT variable */,"$cse20.dpT",equationIndexes)),(data->localData[0]->realVars[188] /* $cse20.T variable */) * (data->localData[0]->realVars[191] /* $cse20.dpT variable */),"$cse20.T * $cse20.dpT",equationIndexes));
    }
    else
    {
      tmp217 = data->localData[0]->realVars[196] /* $cse20.rho variable */;
      tmp218 = data->localData[0]->realVars[199] /* $cse20.vt variable */;
      tmp220 = ((-((tmp217 * tmp217)))) * (data->localData[0]->realVars[198] /* $cse20.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[188] /* $cse20.T variable */) * ((tmp218 * tmp218)) - (DIVISION_SIM(data->localData[0]->realVars[199] /* $cse20.vt variable */,data->localData[0]->realVars[196] /* $cse20.rho variable */,"$cse20.rho",equationIndexes)),data->localData[0]->realVars[189] /* $cse20.cp variable */,"$cse20.cp",equationIndexes));
    }
    tmp222 = tmp220;
  }
  data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */ = fmin(4e-05,tmp222);
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
$cse38 = max(abs(channel_1.Channel[1,5].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  data->localData[0]->realVars[323] /* $cse38 variable */ = fmax(fabs(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1217
type: ALGORITHM

  $cse39 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].pv, channel_1.Channel[1,5].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  Modelica_Media_Common_IF97BaseTwoPhase tmp223;
  tmp223 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp223, &(data->localData[0]->integerVars[30] /* $cse39.phase DISCRETE */), &(data->localData[0]->integerVars[31] /* $cse39.region DISCRETE */), &(data->localData[0]->realVars[330] /* $cse39.p variable */), &(data->localData[0]->realVars[325] /* $cse39.T variable */), &(data->localData[0]->realVars[329] /* $cse39.h variable */), &(data->localData[0]->realVars[324] /* $cse39.R variable */), &(data->localData[0]->realVars[326] /* $cse39.cp variable */), &(data->localData[0]->realVars[327] /* $cse39.cv variable */), &(data->localData[0]->realVars[333] /* $cse39.rho variable */), &(data->localData[0]->realVars[334] /* $cse39.s variable */), &(data->localData[0]->realVars[332] /* $cse39.pt variable */), &(data->localData[0]->realVars[331] /* $cse39.pd variable */), &(data->localData[0]->realVars[336] /* $cse39.vt variable */), &(data->localData[0]->realVars[335] /* $cse39.vp variable */), &(data->localData[0]->realVars[337] /* $cse39.x variable */), &(data->localData[0]->realVars[328] /* $cse39.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1218
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdp = min(4e-05, if noEvent($cse39.region == 3) then $cse39.rho * ($cse39.cv * $cse39.rho + $cse39.pt) / ($cse39.rho ^ 2.0 * $cse39.pd * $cse39.cv + $cse39.T * $cse39.pt ^ 2.0) else if noEvent($cse39.region == 4) then $cse39.rho * (1.0 + $cse39.rho * $cse39.cv / $cse39.dpT) / ($cse39.T * $cse39.dpT) else (-$cse39.rho ^ 2.0) * ($cse39.vp + ($cse39.T * $cse39.vt ^ 2.0 - $cse39.vt / $cse39.rho) / $cse39.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_boolean tmp230;
  modelica_real tmp231;
  modelica_boolean tmp232;
  modelica_real tmp233;
  tmp232 = (modelica_boolean)(data->localData[0]->integerVars[31] /* $cse39.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp232)
  {
    tmp225 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
    tmp226 = data->localData[0]->realVars[332] /* $cse39.pt variable */;
    tmp233 = (data->localData[0]->realVars[333] /* $cse39.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[327] /* $cse39.cv variable */) * (data->localData[0]->realVars[333] /* $cse39.rho variable */) + data->localData[0]->realVars[332] /* $cse39.pt variable */,((tmp225 * tmp225)) * ((data->localData[0]->realVars[331] /* $cse39.pd variable */) * (data->localData[0]->realVars[327] /* $cse39.cv variable */)) + (data->localData[0]->realVars[325] /* $cse39.T variable */) * ((tmp226 * tmp226)),"$cse39.rho ^ 2.0 * $cse39.pd * $cse39.cv + $cse39.T * $cse39.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp230 = (modelica_boolean)(data->localData[0]->integerVars[31] /* $cse39.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp230)
    {
      tmp231 = (data->localData[0]->realVars[333] /* $cse39.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[333] /* $cse39.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[327] /* $cse39.cv variable */,data->localData[0]->realVars[328] /* $cse39.dpT variable */,"$cse39.dpT",equationIndexes)),(data->localData[0]->realVars[325] /* $cse39.T variable */) * (data->localData[0]->realVars[328] /* $cse39.dpT variable */),"$cse39.T * $cse39.dpT",equationIndexes));
    }
    else
    {
      tmp228 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
      tmp229 = data->localData[0]->realVars[336] /* $cse39.vt variable */;
      tmp231 = ((-((tmp228 * tmp228)))) * (data->localData[0]->realVars[335] /* $cse39.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[325] /* $cse39.T variable */) * ((tmp229 * tmp229)) - (DIVISION_SIM(data->localData[0]->realVars[336] /* $cse39.vt variable */,data->localData[0]->realVars[333] /* $cse39.rho variable */,"$cse39.rho",equationIndexes)),data->localData[0]->realVars[326] /* $cse39.cp variable */,"$cse39.cp",equationIndexes));
    }
    tmp233 = tmp231;
  }
  data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */ = fmin(4e-05,tmp233);
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].drdh = max(-0.0002, if noEvent($cse39.region == 3) then (-$cse39.rho ^ 2.0) * $cse39.pt / ($cse39.rho ^ 2.0 * $cse39.pd * $cse39.cv + $cse39.T * $cse39.pt ^ 2.0) else if noEvent($cse39.region == 4) then (-$cse39.rho ^ 2.0) / ($cse39.T * $cse39.dpT) else (-$cse39.rho ^ 2.0) * $cse39.vt / $cse39.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_boolean tmp241;
  modelica_real tmp242;
  modelica_boolean tmp243;
  modelica_real tmp244;
  tmp243 = (modelica_boolean)(data->localData[0]->integerVars[31] /* $cse39.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp243)
  {
    tmp235 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
    tmp236 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
    tmp237 = data->localData[0]->realVars[332] /* $cse39.pt variable */;
    tmp244 = ((-((tmp235 * tmp235)))) * (DIVISION_SIM(data->localData[0]->realVars[332] /* $cse39.pt variable */,((tmp236 * tmp236)) * ((data->localData[0]->realVars[331] /* $cse39.pd variable */) * (data->localData[0]->realVars[327] /* $cse39.cv variable */)) + (data->localData[0]->realVars[325] /* $cse39.T variable */) * ((tmp237 * tmp237)),"$cse39.rho ^ 2.0 * $cse39.pd * $cse39.cv + $cse39.T * $cse39.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp241 = (modelica_boolean)(data->localData[0]->integerVars[31] /* $cse39.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp241)
    {
      tmp239 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
      tmp242 = DIVISION_SIM((-((tmp239 * tmp239))),(data->localData[0]->realVars[325] /* $cse39.T variable */) * (data->localData[0]->realVars[328] /* $cse39.dpT variable */),"$cse39.T * $cse39.dpT",equationIndexes);
    }
    else
    {
      tmp240 = data->localData[0]->realVars[333] /* $cse39.rho variable */;
      tmp242 = ((-((tmp240 * tmp240)))) * (DIVISION_SIM(data->localData[0]->realVars[336] /* $cse39.vt variable */,data->localData[0]->realVars[326] /* $cse39.cp variable */,"$cse39.cp",equationIndexes));
    }
    tmp244 = tmp242;
  }
  data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */ = fmax(-0.0002,tmp244);
  TRACE_POP
}
/*
equation index: 1220
type: SIMPLE_ASSIGN
$cse40 = max(abs(channel_1.Channel[1,4].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  data->localData[0]->realVars[339] /* $cse40 variable */ = fmax(fabs(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1221
type: ALGORITHM

  $cse41 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,4].pv, channel_1.Channel[1,4].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  Modelica_Media_Common_IF97BaseTwoPhase tmp245;
  tmp245 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp245, &(data->localData[0]->integerVars[32] /* $cse41.phase DISCRETE */), &(data->localData[0]->integerVars[33] /* $cse41.region DISCRETE */), &(data->localData[0]->realVars[346] /* $cse41.p variable */), &(data->localData[0]->realVars[341] /* $cse41.T variable */), &(data->localData[0]->realVars[345] /* $cse41.h variable */), &(data->localData[0]->realVars[340] /* $cse41.R variable */), &(data->localData[0]->realVars[342] /* $cse41.cp variable */), &(data->localData[0]->realVars[343] /* $cse41.cv variable */), &(data->localData[0]->realVars[349] /* $cse41.rho variable */), &(data->localData[0]->realVars[350] /* $cse41.s variable */), &(data->localData[0]->realVars[348] /* $cse41.pt variable */), &(data->localData[0]->realVars[347] /* $cse41.pd variable */), &(data->localData[0]->realVars[352] /* $cse41.vt variable */), &(data->localData[0]->realVars[351] /* $cse41.vp variable */), &(data->localData[0]->realVars[353] /* $cse41.x variable */), &(data->localData[0]->realVars[344] /* $cse41.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1222
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdp = min(4e-05, if noEvent($cse41.region == 3) then $cse41.rho * ($cse41.cv * $cse41.rho + $cse41.pt) / ($cse41.rho ^ 2.0 * $cse41.pd * $cse41.cv + $cse41.T * $cse41.pt ^ 2.0) else if noEvent($cse41.region == 4) then $cse41.rho * (1.0 + $cse41.rho * $cse41.cv / $cse41.dpT) / ($cse41.T * $cse41.dpT) else (-$cse41.rho ^ 2.0) * ($cse41.vp + ($cse41.T * $cse41.vt ^ 2.0 - $cse41.vt / $cse41.rho) / $cse41.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_boolean tmp252;
  modelica_real tmp253;
  modelica_boolean tmp254;
  modelica_real tmp255;
  tmp254 = (modelica_boolean)(data->localData[0]->integerVars[33] /* $cse41.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp254)
  {
    tmp247 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
    tmp248 = data->localData[0]->realVars[348] /* $cse41.pt variable */;
    tmp255 = (data->localData[0]->realVars[349] /* $cse41.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[343] /* $cse41.cv variable */) * (data->localData[0]->realVars[349] /* $cse41.rho variable */) + data->localData[0]->realVars[348] /* $cse41.pt variable */,((tmp247 * tmp247)) * ((data->localData[0]->realVars[347] /* $cse41.pd variable */) * (data->localData[0]->realVars[343] /* $cse41.cv variable */)) + (data->localData[0]->realVars[341] /* $cse41.T variable */) * ((tmp248 * tmp248)),"$cse41.rho ^ 2.0 * $cse41.pd * $cse41.cv + $cse41.T * $cse41.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp252 = (modelica_boolean)(data->localData[0]->integerVars[33] /* $cse41.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp252)
    {
      tmp253 = (data->localData[0]->realVars[349] /* $cse41.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[349] /* $cse41.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[343] /* $cse41.cv variable */,data->localData[0]->realVars[344] /* $cse41.dpT variable */,"$cse41.dpT",equationIndexes)),(data->localData[0]->realVars[341] /* $cse41.T variable */) * (data->localData[0]->realVars[344] /* $cse41.dpT variable */),"$cse41.T * $cse41.dpT",equationIndexes));
    }
    else
    {
      tmp250 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
      tmp251 = data->localData[0]->realVars[352] /* $cse41.vt variable */;
      tmp253 = ((-((tmp250 * tmp250)))) * (data->localData[0]->realVars[351] /* $cse41.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[341] /* $cse41.T variable */) * ((tmp251 * tmp251)) - (DIVISION_SIM(data->localData[0]->realVars[352] /* $cse41.vt variable */,data->localData[0]->realVars[349] /* $cse41.rho variable */,"$cse41.rho",equationIndexes)),data->localData[0]->realVars[342] /* $cse41.cp variable */,"$cse41.cp",equationIndexes));
    }
    tmp255 = tmp253;
  }
  data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */ = fmin(4e-05,tmp255);
  TRACE_POP
}
/*
equation index: 1223
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].drdh = max(-0.0002, if noEvent($cse41.region == 3) then (-$cse41.rho ^ 2.0) * $cse41.pt / ($cse41.rho ^ 2.0 * $cse41.pd * $cse41.cv + $cse41.T * $cse41.pt ^ 2.0) else if noEvent($cse41.region == 4) then (-$cse41.rho ^ 2.0) / ($cse41.T * $cse41.dpT) else (-$cse41.rho ^ 2.0) * $cse41.vt / $cse41.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_boolean tmp263;
  modelica_real tmp264;
  modelica_boolean tmp265;
  modelica_real tmp266;
  tmp265 = (modelica_boolean)(data->localData[0]->integerVars[33] /* $cse41.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp265)
  {
    tmp257 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
    tmp258 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
    tmp259 = data->localData[0]->realVars[348] /* $cse41.pt variable */;
    tmp266 = ((-((tmp257 * tmp257)))) * (DIVISION_SIM(data->localData[0]->realVars[348] /* $cse41.pt variable */,((tmp258 * tmp258)) * ((data->localData[0]->realVars[347] /* $cse41.pd variable */) * (data->localData[0]->realVars[343] /* $cse41.cv variable */)) + (data->localData[0]->realVars[341] /* $cse41.T variable */) * ((tmp259 * tmp259)),"$cse41.rho ^ 2.0 * $cse41.pd * $cse41.cv + $cse41.T * $cse41.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp263 = (modelica_boolean)(data->localData[0]->integerVars[33] /* $cse41.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp263)
    {
      tmp261 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
      tmp264 = DIVISION_SIM((-((tmp261 * tmp261))),(data->localData[0]->realVars[341] /* $cse41.T variable */) * (data->localData[0]->realVars[344] /* $cse41.dpT variable */),"$cse41.T * $cse41.dpT",equationIndexes);
    }
    else
    {
      tmp262 = data->localData[0]->realVars[349] /* $cse41.rho variable */;
      tmp264 = ((-((tmp262 * tmp262)))) * (DIVISION_SIM(data->localData[0]->realVars[352] /* $cse41.vt variable */,data->localData[0]->realVars[342] /* $cse41.cp variable */,"$cse41.cp",equationIndexes));
    }
    tmp266 = tmp264;
  }
  data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */ = fmax(-0.0002,tmp266);
  TRACE_POP
}
/*
equation index: 1224
type: SIMPLE_ASSIGN
$cse42 = max(abs(channel_1.Channel[1,3].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  data->localData[0]->realVars[354] /* $cse42 variable */ = fmax(fabs(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1225
type: ALGORITHM

  $cse43 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,3].pv, channel_1.Channel[1,3].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  Modelica_Media_Common_IF97BaseTwoPhase tmp267;
  tmp267 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp267, &(data->localData[0]->integerVars[34] /* $cse43.phase DISCRETE */), &(data->localData[0]->integerVars[35] /* $cse43.region DISCRETE */), &(data->localData[0]->realVars[361] /* $cse43.p variable */), &(data->localData[0]->realVars[356] /* $cse43.T variable */), &(data->localData[0]->realVars[360] /* $cse43.h variable */), &(data->localData[0]->realVars[355] /* $cse43.R variable */), &(data->localData[0]->realVars[357] /* $cse43.cp variable */), &(data->localData[0]->realVars[358] /* $cse43.cv variable */), &(data->localData[0]->realVars[364] /* $cse43.rho variable */), &(data->localData[0]->realVars[365] /* $cse43.s variable */), &(data->localData[0]->realVars[363] /* $cse43.pt variable */), &(data->localData[0]->realVars[362] /* $cse43.pd variable */), &(data->localData[0]->realVars[367] /* $cse43.vt variable */), &(data->localData[0]->realVars[366] /* $cse43.vp variable */), &(data->localData[0]->realVars[368] /* $cse43.x variable */), &(data->localData[0]->realVars[359] /* $cse43.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1226
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdp = min(4e-05, if noEvent($cse43.region == 3) then $cse43.rho * ($cse43.cv * $cse43.rho + $cse43.pt) / ($cse43.rho ^ 2.0 * $cse43.pd * $cse43.cv + $cse43.T * $cse43.pt ^ 2.0) else if noEvent($cse43.region == 4) then $cse43.rho * (1.0 + $cse43.rho * $cse43.cv / $cse43.dpT) / ($cse43.T * $cse43.dpT) else (-$cse43.rho ^ 2.0) * ($cse43.vp + ($cse43.T * $cse43.vt ^ 2.0 - $cse43.vt / $cse43.rho) / $cse43.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_boolean tmp274;
  modelica_real tmp275;
  modelica_boolean tmp276;
  modelica_real tmp277;
  tmp276 = (modelica_boolean)(data->localData[0]->integerVars[35] /* $cse43.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp276)
  {
    tmp269 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
    tmp270 = data->localData[0]->realVars[363] /* $cse43.pt variable */;
    tmp277 = (data->localData[0]->realVars[364] /* $cse43.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[358] /* $cse43.cv variable */) * (data->localData[0]->realVars[364] /* $cse43.rho variable */) + data->localData[0]->realVars[363] /* $cse43.pt variable */,((tmp269 * tmp269)) * ((data->localData[0]->realVars[362] /* $cse43.pd variable */) * (data->localData[0]->realVars[358] /* $cse43.cv variable */)) + (data->localData[0]->realVars[356] /* $cse43.T variable */) * ((tmp270 * tmp270)),"$cse43.rho ^ 2.0 * $cse43.pd * $cse43.cv + $cse43.T * $cse43.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp274 = (modelica_boolean)(data->localData[0]->integerVars[35] /* $cse43.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp274)
    {
      tmp275 = (data->localData[0]->realVars[364] /* $cse43.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[364] /* $cse43.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[358] /* $cse43.cv variable */,data->localData[0]->realVars[359] /* $cse43.dpT variable */,"$cse43.dpT",equationIndexes)),(data->localData[0]->realVars[356] /* $cse43.T variable */) * (data->localData[0]->realVars[359] /* $cse43.dpT variable */),"$cse43.T * $cse43.dpT",equationIndexes));
    }
    else
    {
      tmp272 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
      tmp273 = data->localData[0]->realVars[367] /* $cse43.vt variable */;
      tmp275 = ((-((tmp272 * tmp272)))) * (data->localData[0]->realVars[366] /* $cse43.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[356] /* $cse43.T variable */) * ((tmp273 * tmp273)) - (DIVISION_SIM(data->localData[0]->realVars[367] /* $cse43.vt variable */,data->localData[0]->realVars[364] /* $cse43.rho variable */,"$cse43.rho",equationIndexes)),data->localData[0]->realVars[357] /* $cse43.cp variable */,"$cse43.cp",equationIndexes));
    }
    tmp277 = tmp275;
  }
  data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */ = fmin(4e-05,tmp277);
  TRACE_POP
}
/*
equation index: 1227
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].drdh = max(-0.0002, if noEvent($cse43.region == 3) then (-$cse43.rho ^ 2.0) * $cse43.pt / ($cse43.rho ^ 2.0 * $cse43.pd * $cse43.cv + $cse43.T * $cse43.pt ^ 2.0) else if noEvent($cse43.region == 4) then (-$cse43.rho ^ 2.0) / ($cse43.T * $cse43.dpT) else (-$cse43.rho ^ 2.0) * $cse43.vt / $cse43.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_boolean tmp285;
  modelica_real tmp286;
  modelica_boolean tmp287;
  modelica_real tmp288;
  tmp287 = (modelica_boolean)(data->localData[0]->integerVars[35] /* $cse43.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp287)
  {
    tmp279 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
    tmp280 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
    tmp281 = data->localData[0]->realVars[363] /* $cse43.pt variable */;
    tmp288 = ((-((tmp279 * tmp279)))) * (DIVISION_SIM(data->localData[0]->realVars[363] /* $cse43.pt variable */,((tmp280 * tmp280)) * ((data->localData[0]->realVars[362] /* $cse43.pd variable */) * (data->localData[0]->realVars[358] /* $cse43.cv variable */)) + (data->localData[0]->realVars[356] /* $cse43.T variable */) * ((tmp281 * tmp281)),"$cse43.rho ^ 2.0 * $cse43.pd * $cse43.cv + $cse43.T * $cse43.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp285 = (modelica_boolean)(data->localData[0]->integerVars[35] /* $cse43.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp285)
    {
      tmp283 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
      tmp286 = DIVISION_SIM((-((tmp283 * tmp283))),(data->localData[0]->realVars[356] /* $cse43.T variable */) * (data->localData[0]->realVars[359] /* $cse43.dpT variable */),"$cse43.T * $cse43.dpT",equationIndexes);
    }
    else
    {
      tmp284 = data->localData[0]->realVars[364] /* $cse43.rho variable */;
      tmp286 = ((-((tmp284 * tmp284)))) * (DIVISION_SIM(data->localData[0]->realVars[367] /* $cse43.vt variable */,data->localData[0]->realVars[357] /* $cse43.cp variable */,"$cse43.cp",equationIndexes));
    }
    tmp288 = tmp286;
  }
  data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */ = fmax(-0.0002,tmp288);
  TRACE_POP
}
/*
equation index: 1228
type: SIMPLE_ASSIGN
$cse44 = max(abs(channel_1.Channel[1,2].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  data->localData[0]->realVars[369] /* $cse44 variable */ = fmax(fabs(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1229
type: ALGORITHM

  $cse45 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,2].pv, channel_1.Channel[1,2].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  Modelica_Media_Common_IF97BaseTwoPhase tmp289;
  tmp289 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp289, &(data->localData[0]->integerVars[36] /* $cse45.phase DISCRETE */), &(data->localData[0]->integerVars[37] /* $cse45.region DISCRETE */), &(data->localData[0]->realVars[376] /* $cse45.p variable */), &(data->localData[0]->realVars[371] /* $cse45.T variable */), &(data->localData[0]->realVars[375] /* $cse45.h variable */), &(data->localData[0]->realVars[370] /* $cse45.R variable */), &(data->localData[0]->realVars[372] /* $cse45.cp variable */), &(data->localData[0]->realVars[373] /* $cse45.cv variable */), &(data->localData[0]->realVars[379] /* $cse45.rho variable */), &(data->localData[0]->realVars[380] /* $cse45.s variable */), &(data->localData[0]->realVars[378] /* $cse45.pt variable */), &(data->localData[0]->realVars[377] /* $cse45.pd variable */), &(data->localData[0]->realVars[382] /* $cse45.vt variable */), &(data->localData[0]->realVars[381] /* $cse45.vp variable */), &(data->localData[0]->realVars[383] /* $cse45.x variable */), &(data->localData[0]->realVars[374] /* $cse45.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1230
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdp = min(4e-05, if noEvent($cse45.region == 3) then $cse45.rho * ($cse45.cv * $cse45.rho + $cse45.pt) / ($cse45.rho ^ 2.0 * $cse45.pd * $cse45.cv + $cse45.T * $cse45.pt ^ 2.0) else if noEvent($cse45.region == 4) then $cse45.rho * (1.0 + $cse45.rho * $cse45.cv / $cse45.dpT) / ($cse45.T * $cse45.dpT) else (-$cse45.rho ^ 2.0) * ($cse45.vp + ($cse45.T * $cse45.vt ^ 2.0 - $cse45.vt / $cse45.rho) / $cse45.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_boolean tmp296;
  modelica_real tmp297;
  modelica_boolean tmp298;
  modelica_real tmp299;
  tmp298 = (modelica_boolean)(data->localData[0]->integerVars[37] /* $cse45.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp298)
  {
    tmp291 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
    tmp292 = data->localData[0]->realVars[378] /* $cse45.pt variable */;
    tmp299 = (data->localData[0]->realVars[379] /* $cse45.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[373] /* $cse45.cv variable */) * (data->localData[0]->realVars[379] /* $cse45.rho variable */) + data->localData[0]->realVars[378] /* $cse45.pt variable */,((tmp291 * tmp291)) * ((data->localData[0]->realVars[377] /* $cse45.pd variable */) * (data->localData[0]->realVars[373] /* $cse45.cv variable */)) + (data->localData[0]->realVars[371] /* $cse45.T variable */) * ((tmp292 * tmp292)),"$cse45.rho ^ 2.0 * $cse45.pd * $cse45.cv + $cse45.T * $cse45.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp296 = (modelica_boolean)(data->localData[0]->integerVars[37] /* $cse45.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp296)
    {
      tmp297 = (data->localData[0]->realVars[379] /* $cse45.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[379] /* $cse45.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[373] /* $cse45.cv variable */,data->localData[0]->realVars[374] /* $cse45.dpT variable */,"$cse45.dpT",equationIndexes)),(data->localData[0]->realVars[371] /* $cse45.T variable */) * (data->localData[0]->realVars[374] /* $cse45.dpT variable */),"$cse45.T * $cse45.dpT",equationIndexes));
    }
    else
    {
      tmp294 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
      tmp295 = data->localData[0]->realVars[382] /* $cse45.vt variable */;
      tmp297 = ((-((tmp294 * tmp294)))) * (data->localData[0]->realVars[381] /* $cse45.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[371] /* $cse45.T variable */) * ((tmp295 * tmp295)) - (DIVISION_SIM(data->localData[0]->realVars[382] /* $cse45.vt variable */,data->localData[0]->realVars[379] /* $cse45.rho variable */,"$cse45.rho",equationIndexes)),data->localData[0]->realVars[372] /* $cse45.cp variable */,"$cse45.cp",equationIndexes));
    }
    tmp299 = tmp297;
  }
  data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */ = fmin(4e-05,tmp299);
  TRACE_POP
}
/*
equation index: 1231
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].drdh = max(-0.0002, if noEvent($cse45.region == 3) then (-$cse45.rho ^ 2.0) * $cse45.pt / ($cse45.rho ^ 2.0 * $cse45.pd * $cse45.cv + $cse45.T * $cse45.pt ^ 2.0) else if noEvent($cse45.region == 4) then (-$cse45.rho ^ 2.0) / ($cse45.T * $cse45.dpT) else (-$cse45.rho ^ 2.0) * $cse45.vt / $cse45.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_boolean tmp307;
  modelica_real tmp308;
  modelica_boolean tmp309;
  modelica_real tmp310;
  tmp309 = (modelica_boolean)(data->localData[0]->integerVars[37] /* $cse45.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp309)
  {
    tmp301 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
    tmp302 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
    tmp303 = data->localData[0]->realVars[378] /* $cse45.pt variable */;
    tmp310 = ((-((tmp301 * tmp301)))) * (DIVISION_SIM(data->localData[0]->realVars[378] /* $cse45.pt variable */,((tmp302 * tmp302)) * ((data->localData[0]->realVars[377] /* $cse45.pd variable */) * (data->localData[0]->realVars[373] /* $cse45.cv variable */)) + (data->localData[0]->realVars[371] /* $cse45.T variable */) * ((tmp303 * tmp303)),"$cse45.rho ^ 2.0 * $cse45.pd * $cse45.cv + $cse45.T * $cse45.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp307 = (modelica_boolean)(data->localData[0]->integerVars[37] /* $cse45.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp307)
    {
      tmp305 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
      tmp308 = DIVISION_SIM((-((tmp305 * tmp305))),(data->localData[0]->realVars[371] /* $cse45.T variable */) * (data->localData[0]->realVars[374] /* $cse45.dpT variable */),"$cse45.T * $cse45.dpT",equationIndexes);
    }
    else
    {
      tmp306 = data->localData[0]->realVars[379] /* $cse45.rho variable */;
      tmp308 = ((-((tmp306 * tmp306)))) * (DIVISION_SIM(data->localData[0]->realVars[382] /* $cse45.vt variable */,data->localData[0]->realVars[372] /* $cse45.cp variable */,"$cse45.cp",equationIndexes));
    }
    tmp310 = tmp308;
  }
  data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */ = fmax(-0.0002,tmp310);
  TRACE_POP
}
/*
equation index: 1232
type: SIMPLE_ASSIGN
$cse46 = max(abs(channel_1.Channel[1,1].D_flow_v), 0.0001)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  data->localData[0]->realVars[384] /* $cse46 variable */ = fmax(fabs(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */),0.0001);
  TRACE_POP
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].pv = ramp1.offset + (if time < ramp1.startTime then 0.0 else if time < ramp1.startTime + ramp1.duration then (time - ramp1.startTime) * ramp1.height / ramp1.duration else ramp1.height)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  modelica_boolean tmp311;
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  modelica_real tmp314;
  RELATIONHYSTERESIS(tmp311, data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */, 0, Less);
  tmp313 = (modelica_boolean)tmp311;
  if(tmp313)
  {
    tmp314 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp312, data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */, 1, Less);
    tmp314 = (tmp312?(data->localData[0]->timeValue - data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */) * (DIVISION_SIM(data->simulationInfo->realParameter[215] /* ramp1.height PARAM */,data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */,"ramp1.duration",equationIndexes)):data->simulationInfo->realParameter[215] /* ramp1.height PARAM */);
  }
  data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */ = data->simulationInfo->realParameter[216] /* ramp1.offset PARAM */ + tmp314;
  TRACE_POP
}
/*
equation index: 1234
type: ALGORITHM

  $cse51 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(channel_1.Channel[1,1].pv);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp315;
  tmp315 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */);
  Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(tmp315, &(data->localData[0]->booleanVars[1] /* $cse51.region3boundary DISCRETE */), &(data->localData[0]->realVars[440] /* $cse51.R variable */), &(data->localData[0]->realVars[441] /* $cse51.T variable */), &(data->localData[0]->realVars[444] /* $cse51.d variable */), &(data->localData[0]->realVars[446] /* $cse51.h variable */), &(data->localData[0]->realVars[449] /* $cse51.s variable */), &(data->localData[0]->realVars[442] /* $cse51.cp variable */), &(data->localData[0]->realVars[443] /* $cse51.cv variable */), &(data->localData[0]->realVars[445] /* $cse51.dpT variable */), &(data->localData[0]->realVars[448] /* $cse51.pt variable */), &(data->localData[0]->realVars[447] /* $cse51.pd variable */), &(data->localData[0]->realVars[451] /* $cse51.vt variable */), &(data->localData[0]->realVars[450] /* $cse51.vp variable */));;
  TRACE_POP
}
/*
equation index: 1235
type: ALGORITHM

  $cse50 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(channel_1.Channel[1,1].pv);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp316;
  tmp316 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */);
  Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(tmp316, &(data->localData[0]->booleanVars[0] /* $cse50.region3boundary DISCRETE */), &(data->localData[0]->realVars[428] /* $cse50.R variable */), &(data->localData[0]->realVars[429] /* $cse50.T variable */), &(data->localData[0]->realVars[432] /* $cse50.d variable */), &(data->localData[0]->realVars[434] /* $cse50.h variable */), &(data->localData[0]->realVars[437] /* $cse50.s variable */), &(data->localData[0]->realVars[430] /* $cse50.cp variable */), &(data->localData[0]->realVars[431] /* $cse50.cv variable */), &(data->localData[0]->realVars[433] /* $cse50.dpT variable */), &(data->localData[0]->realVars[436] /* $cse50.pt variable */), &(data->localData[0]->realVars[435] /* $cse50.pd variable */), &(data->localData[0]->realVars[439] /* $cse50.vt variable */), &(data->localData[0]->realVars[438] /* $cse50.vp variable */));;
  TRACE_POP
}
/*
equation index: 1236
type: SIMPLE_ASSIGN
Source_2.medium.sat.Tsat = Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.tsat(channel_1.Channel[1,1].pv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  data->localData[0]->realVars[554] /* Source_2.medium.sat.Tsat variable */ = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1237
type: ALGORITHM

  $cse48 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(channel_1.Channel[1,1].pv, 573.15, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  Modelica_Media_Common_IF97BaseTwoPhase tmp317;
  tmp317 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, 573.15, ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp317, &(data->localData[0]->integerVars[40] /* $cse48.phase DISCRETE */), &(data->localData[0]->integerVars[41] /* $cse48.region DISCRETE */), &(data->localData[0]->realVars[405] /* $cse48.p variable */), &(data->localData[0]->realVars[400] /* $cse48.T variable */), &(data->localData[0]->realVars[404] /* $cse48.h variable */), &(data->localData[0]->realVars[399] /* $cse48.R variable */), &(data->localData[0]->realVars[401] /* $cse48.cp variable */), &(data->localData[0]->realVars[402] /* $cse48.cv variable */), &(data->localData[0]->realVars[408] /* $cse48.rho variable */), &(data->localData[0]->realVars[409] /* $cse48.s variable */), &(data->localData[0]->realVars[407] /* $cse48.pt variable */), &(data->localData[0]->realVars[406] /* $cse48.pd variable */), &(data->localData[0]->realVars[411] /* $cse48.vt variable */), &(data->localData[0]->realVars[410] /* $cse48.vp variable */), &(data->localData[0]->realVars[412] /* $cse48.x variable */), &(data->localData[0]->realVars[403] /* $cse48.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1238
type: ALGORITHM

  $cse47 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, channel_1.Channel[1,1].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  Modelica_Media_Common_IF97BaseTwoPhase tmp318;
  tmp318 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp318, &(data->localData[0]->integerVars[38] /* $cse47.phase DISCRETE */), &(data->localData[0]->integerVars[39] /* $cse47.region DISCRETE */), &(data->localData[0]->realVars[391] /* $cse47.p variable */), &(data->localData[0]->realVars[386] /* $cse47.T variable */), &(data->localData[0]->realVars[390] /* $cse47.h variable */), &(data->localData[0]->realVars[385] /* $cse47.R variable */), &(data->localData[0]->realVars[387] /* $cse47.cp variable */), &(data->localData[0]->realVars[388] /* $cse47.cv variable */), &(data->localData[0]->realVars[394] /* $cse47.rho variable */), &(data->localData[0]->realVars[395] /* $cse47.s variable */), &(data->localData[0]->realVars[393] /* $cse47.pt variable */), &(data->localData[0]->realVars[392] /* $cse47.pd variable */), &(data->localData[0]->realVars[397] /* $cse47.vt variable */), &(data->localData[0]->realVars[396] /* $cse47.vp variable */), &(data->localData[0]->realVars[398] /* $cse47.x variable */), &(data->localData[0]->realVars[389] /* $cse47.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1239
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].drdp = min(4e-05, if noEvent($cse47.region == 3) then $cse47.rho * ($cse47.cv * $cse47.rho + $cse47.pt) / ($cse47.rho ^ 2.0 * $cse47.pd * $cse47.cv + $cse47.T * $cse47.pt ^ 2.0) else if noEvent($cse47.region == 4) then $cse47.rho * (1.0 + $cse47.rho * $cse47.cv / $cse47.dpT) / ($cse47.T * $cse47.dpT) else (-$cse47.rho ^ 2.0) * ($cse47.vp + ($cse47.T * $cse47.vt ^ 2.0 - $cse47.vt / $cse47.rho) / $cse47.cp))
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  modelica_real tmp320;
  modelica_real tmp321;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_boolean tmp325;
  modelica_real tmp326;
  modelica_boolean tmp327;
  modelica_real tmp328;
  tmp327 = (modelica_boolean)(data->localData[0]->integerVars[39] /* $cse47.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp327)
  {
    tmp320 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
    tmp321 = data->localData[0]->realVars[393] /* $cse47.pt variable */;
    tmp328 = (data->localData[0]->realVars[394] /* $cse47.rho variable */) * (DIVISION_SIM((data->localData[0]->realVars[388] /* $cse47.cv variable */) * (data->localData[0]->realVars[394] /* $cse47.rho variable */) + data->localData[0]->realVars[393] /* $cse47.pt variable */,((tmp320 * tmp320)) * ((data->localData[0]->realVars[392] /* $cse47.pd variable */) * (data->localData[0]->realVars[388] /* $cse47.cv variable */)) + (data->localData[0]->realVars[386] /* $cse47.T variable */) * ((tmp321 * tmp321)),"$cse47.rho ^ 2.0 * $cse47.pd * $cse47.cv + $cse47.T * $cse47.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp325 = (modelica_boolean)(data->localData[0]->integerVars[39] /* $cse47.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp325)
    {
      tmp326 = (data->localData[0]->realVars[394] /* $cse47.rho variable */) * (DIVISION_SIM(1.0 + (data->localData[0]->realVars[394] /* $cse47.rho variable */) * (DIVISION_SIM(data->localData[0]->realVars[388] /* $cse47.cv variable */,data->localData[0]->realVars[389] /* $cse47.dpT variable */,"$cse47.dpT",equationIndexes)),(data->localData[0]->realVars[386] /* $cse47.T variable */) * (data->localData[0]->realVars[389] /* $cse47.dpT variable */),"$cse47.T * $cse47.dpT",equationIndexes));
    }
    else
    {
      tmp323 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
      tmp324 = data->localData[0]->realVars[397] /* $cse47.vt variable */;
      tmp326 = ((-((tmp323 * tmp323)))) * (data->localData[0]->realVars[396] /* $cse47.vp variable */ + DIVISION_SIM((data->localData[0]->realVars[386] /* $cse47.T variable */) * ((tmp324 * tmp324)) - (DIVISION_SIM(data->localData[0]->realVars[397] /* $cse47.vt variable */,data->localData[0]->realVars[394] /* $cse47.rho variable */,"$cse47.rho",equationIndexes)),data->localData[0]->realVars[387] /* $cse47.cp variable */,"$cse47.cp",equationIndexes));
    }
    tmp328 = tmp326;
  }
  data->localData[0]->realVars[593] /* channel_1.Channel[1,1].drdp variable */ = fmin(4e-05,tmp328);
  TRACE_POP
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].drdh = max(-0.0002, if noEvent($cse47.region == 3) then (-$cse47.rho ^ 2.0) * $cse47.pt / ($cse47.rho ^ 2.0 * $cse47.pd * $cse47.cv + $cse47.T * $cse47.pt ^ 2.0) else if noEvent($cse47.region == 4) then (-$cse47.rho ^ 2.0) / ($cse47.T * $cse47.dpT) else (-$cse47.rho ^ 2.0) * $cse47.vt / $cse47.cp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  modelica_real tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_boolean tmp336;
  modelica_real tmp337;
  modelica_boolean tmp338;
  modelica_real tmp339;
  tmp338 = (modelica_boolean)(data->localData[0]->integerVars[39] /* $cse47.region DISCRETE */ == ((modelica_integer) 3));
  if(tmp338)
  {
    tmp330 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
    tmp331 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
    tmp332 = data->localData[0]->realVars[393] /* $cse47.pt variable */;
    tmp339 = ((-((tmp330 * tmp330)))) * (DIVISION_SIM(data->localData[0]->realVars[393] /* $cse47.pt variable */,((tmp331 * tmp331)) * ((data->localData[0]->realVars[392] /* $cse47.pd variable */) * (data->localData[0]->realVars[388] /* $cse47.cv variable */)) + (data->localData[0]->realVars[386] /* $cse47.T variable */) * ((tmp332 * tmp332)),"$cse47.rho ^ 2.0 * $cse47.pd * $cse47.cv + $cse47.T * $cse47.pt ^ 2.0",equationIndexes));
  }
  else
  {
    tmp336 = (modelica_boolean)(data->localData[0]->integerVars[39] /* $cse47.region DISCRETE */ == ((modelica_integer) 4));
    if(tmp336)
    {
      tmp334 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
      tmp337 = DIVISION_SIM((-((tmp334 * tmp334))),(data->localData[0]->realVars[386] /* $cse47.T variable */) * (data->localData[0]->realVars[389] /* $cse47.dpT variable */),"$cse47.T * $cse47.dpT",equationIndexes);
    }
    else
    {
      tmp335 = data->localData[0]->realVars[394] /* $cse47.rho variable */;
      tmp337 = ((-((tmp335 * tmp335)))) * (DIVISION_SIM(data->localData[0]->realVars[397] /* $cse47.vt variable */,data->localData[0]->realVars[387] /* $cse47.cp variable */,"$cse47.cp",equationIndexes));
    }
    tmp339 = tmp337;
  }
  data->localData[0]->realVars[588] /* channel_1.Channel[1,1].drdh variable */ = fmax(-0.0002,tmp339);
  TRACE_POP
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
Sink_2.ports[1].h_outflow = $cse52.h
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */ = data->localData[0]->realVars[457] /* $cse52.h variable */;
  TRACE_POP
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
Sink_2.medium.phase = if Sink_2.ports[1].h_outflow < $cse54.h or Sink_2.ports[1].h_outflow > $cse55.h or Sink_2.p > 22064000.0 then 1 else 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  modelica_boolean tmp342;
  RELATIONHYSTERESIS(tmp340, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[486] /* $cse54.h variable */, 5, Less);
  RELATIONHYSTERESIS(tmp341, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[498] /* $cse55.h variable */, 6, Greater);
  tmp342 = Greater(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,22064000.0);
  data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */ = (((tmp340 || tmp341) || tmp342)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
equation index: 1243
type: ALGORITHM

  $cse53 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(Sink_2.p, Sink_2.ports[1].h_outflow, Sink_2.medium.phase, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  Modelica_Media_Common_IF97BaseTwoPhase tmp343;
  tmp343 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */, ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp343, &(data->localData[0]->integerVars[46] /* $cse53.phase DISCRETE */), &(data->localData[0]->integerVars[47] /* $cse53.region DISCRETE */), &(data->localData[0]->realVars[472] /* $cse53.p variable */), &(data->localData[0]->realVars[467] /* $cse53.T variable */), &(data->localData[0]->realVars[471] /* $cse53.h variable */), &(data->localData[0]->realVars[466] /* $cse53.R variable */), &(data->localData[0]->realVars[468] /* $cse53.cp variable */), &(data->localData[0]->realVars[469] /* $cse53.cv variable */), &(data->localData[0]->realVars[475] /* $cse53.rho variable */), &(data->localData[0]->realVars[476] /* $cse53.s variable */), &(data->localData[0]->realVars[474] /* $cse53.pt variable */), &(data->localData[0]->realVars[473] /* $cse53.pd variable */), &(data->localData[0]->realVars[478] /* $cse53.vt variable */), &(data->localData[0]->realVars[477] /* $cse53.vp variable */), &(data->localData[0]->realVars[479] /* $cse53.x variable */), &(data->localData[0]->realVars[470] /* $cse53.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
Sink_2.medium.T = $cse53.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  data->localData[0]->realVars[536] /* Sink_2.medium.T variable */ = data->localData[0]->realVars[467] /* $cse53.T variable */;
  TRACE_POP
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
Sink_2.medium.T_degC = -273.15 + Sink_2.medium.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  data->localData[0]->realVars[537] /* Sink_2.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[536] /* Sink_2.medium.T variable */;
  TRACE_POP
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
Sink_2.medium.d = $cse53.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  data->localData[0]->realVars[539] /* Sink_2.medium.d variable */ = data->localData[0]->realVars[475] /* $cse53.rho variable */;
  TRACE_POP
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
Sink_2.medium.u = Sink_2.ports[1].h_outflow - Sink_2.p / Sink_2.medium.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  data->localData[0]->realVars[542] /* Sink_2.medium.u variable */ = data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */ - (DIVISION_SIM(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,data->localData[0]->realVars[539] /* Sink_2.medium.d variable */,"Sink_2.medium.d",equationIndexes));
  TRACE_POP
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
Source_2.medium.p_bar = 1e-05 * channel_1.Channel[1,1].pv
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  data->localData[0]->realVars[553] /* Source_2.medium.p_bar variable */ = (1e-05) * (data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
Source_2.ports[1].h_outflow = $cse48.h
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */ = data->localData[0]->realVars[404] /* $cse48.h variable */;
  TRACE_POP
}
/*
equation index: 1250
type: SIMPLE_ASSIGN
Source_2.medium.phase = if Source_2.ports[1].h_outflow < $cse50.h or Source_2.ports[1].h_outflow > $cse51.h or channel_1.Channel[1,1].pv > 22064000.0 then 1 else 2
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  RELATIONHYSTERESIS(tmp344, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[434] /* $cse50.h variable */, 2, Less);
  RELATIONHYSTERESIS(tmp345, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[446] /* $cse51.h variable */, 3, Greater);
  RELATIONHYSTERESIS(tmp346, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, 22064000.0, 4, Greater);
  data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */ = (((tmp344 || tmp345) || tmp346)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
equation index: 1251
type: ALGORITHM

  $cse49 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,1].pv, Source_2.ports[1].h_outflow, Source_2.medium.phase, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  Modelica_Media_Common_IF97BaseTwoPhase tmp347;
  tmp347 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */, ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp347, &(data->localData[0]->integerVars[42] /* $cse49.phase DISCRETE */), &(data->localData[0]->integerVars[43] /* $cse49.region DISCRETE */), &(data->localData[0]->realVars[419] /* $cse49.p variable */), &(data->localData[0]->realVars[414] /* $cse49.T variable */), &(data->localData[0]->realVars[418] /* $cse49.h variable */), &(data->localData[0]->realVars[413] /* $cse49.R variable */), &(data->localData[0]->realVars[415] /* $cse49.cp variable */), &(data->localData[0]->realVars[416] /* $cse49.cv variable */), &(data->localData[0]->realVars[422] /* $cse49.rho variable */), &(data->localData[0]->realVars[423] /* $cse49.s variable */), &(data->localData[0]->realVars[421] /* $cse49.pt variable */), &(data->localData[0]->realVars[420] /* $cse49.pd variable */), &(data->localData[0]->realVars[425] /* $cse49.vt variable */), &(data->localData[0]->realVars[424] /* $cse49.vp variable */), &(data->localData[0]->realVars[426] /* $cse49.x variable */), &(data->localData[0]->realVars[417] /* $cse49.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1252
type: SIMPLE_ASSIGN
Source_2.medium.T = $cse49.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  data->localData[0]->realVars[549] /* Source_2.medium.T variable */ = data->localData[0]->realVars[414] /* $cse49.T variable */;
  TRACE_POP
}
/*
equation index: 1253
type: SIMPLE_ASSIGN
Source_2.medium.T_degC = -273.15 + Source_2.medium.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  data->localData[0]->realVars[550] /* Source_2.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[549] /* Source_2.medium.T variable */;
  TRACE_POP
}
/*
equation index: 1254
type: SIMPLE_ASSIGN
Source_2.medium.d = $cse49.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  data->localData[0]->realVars[552] /* Source_2.medium.d variable */ = data->localData[0]->realVars[422] /* $cse49.rho variable */;
  TRACE_POP
}
/*
equation index: 1255
type: SIMPLE_ASSIGN
Source_2.medium.u = Source_2.ports[1].h_outflow - channel_1.Channel[1,1].pv / Source_2.medium.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  data->localData[0]->realVars[555] /* Source_2.medium.u variable */ = data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */ - (DIVISION_SIM(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */,data->localData[0]->realVars[552] /* Source_2.medium.d variable */,"Source_2.medium.d",equationIndexes));
  TRACE_POP
}
/*
equation index: 1256
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,1].pv = if time < ramp1.startTime then 0.0 else if time < ramp1.startTime + ramp1.duration then ramp1.height / ramp1.duration else 0.0
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  modelica_boolean tmp350;
  modelica_real tmp351;
  RELATIONHYSTERESIS(tmp348, data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */, 0, Less);
  tmp350 = (modelica_boolean)tmp348;
  if(tmp350)
  {
    tmp351 = 0.0;
  }
  else
  {
    RELATIONHYSTERESIS(tmp349, data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */, 1, Less);
    tmp351 = (tmp349?DIVISION_SIM(data->simulationInfo->realParameter[215] /* ramp1.height PARAM */,data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */,"ramp1.duration",equationIndexes):0.0);
  }
  data->localData[0]->realVars[96] /* der(channel_1.Channel[1,1].pv) DUMMY_DER */ = tmp351;
  TRACE_POP
}
/*
equation index: 1257
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].heatTransfer.Ts = $cse47.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  data->localData[0]->realVars[603] /* channel_1.Channel[1,1].heatTransfer.Ts variable */ = data->localData[0]->realVars[386] /* $cse47.T variable */;
  TRACE_POP
}
/*
equation index: 1258
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].stateFlow.d = $cse47.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */ = data->localData[0]->realVars[394] /* $cse47.rho variable */;
  TRACE_POP
}
/*
equation index: 1259
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].Dv = (*Real*)(sign(channel_1.Channel[1,1].D_flow_v)) * $cse46
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[384] /* $cse46 variable */);
  TRACE_POP
}
/*
equation index: 1260
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].w_flow_v = channel_1.Channel[1,1].Dv / (channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */),"channel_1.Channel[1,1].f_flow * channel_1.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1261
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,1].w_flow_v)) * channel_1.Channel[1,1].w_flow_v ^ 2.0 * channel_1.Channel[1,1].Xi_flow * channel_1.Channel[1,1].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  modelica_real tmp352;
  tmp352 = data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */;
  data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[620] /* channel_1.Channel[1,1].w_flow_v variable */))) * (((tmp352 * tmp352)) * ((data->localData[0]->realVars[573] /* channel_1.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1262
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].dp_piez = 9.806649999999999 * channel_1.Channel[1,1].stateFlow.d * channel_1.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[14] /* channel_1.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1263
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,1].D_flow_v = (channel_1.Channel[1,1].pv - channel_1.Channel[1,2].pv - (channel_1.Channel[1,1].dp_fric + channel_1.Channel[1,1].dp_piez)) * channel_1.Channel[1,1].f_flow / channel_1.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  data->localData[0]->realVars[48] /* der(channel_1.Channel[1,1].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */ - data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[578] /* channel_1.Channel[1,1].dp_fric variable */ + data->localData[0]->realVars[583] /* channel_1.Channel[1,1].dp_piez variable */)) * (data->simulationInfo->realParameter[34] /* channel_1.Channel[1,1].f_flow PARAM */),data->simulationInfo->realParameter[19] /* channel_1.Channel[1,1].deltaLpipe PARAM */,"channel_1.Channel[1,1].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1264
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].heatTransfer.Ts = $cse45.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  data->localData[0]->realVars[604] /* channel_1.Channel[1,2].heatTransfer.Ts variable */ = data->localData[0]->realVars[371] /* $cse45.T variable */;
  TRACE_POP
}
/*
equation index: 1265
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].stateFlow.d = $cse45.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */ = data->localData[0]->realVars[379] /* $cse45.rho variable */;
  TRACE_POP
}
/*
equation index: 1266
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].Dv = (*Real*)(sign(channel_1.Channel[1,2].D_flow_v)) * $cse44
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[369] /* $cse44 variable */);
  TRACE_POP
}
/*
equation index: 1267
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].w_flow_v = channel_1.Channel[1,2].Dv / (channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */),"channel_1.Channel[1,2].f_flow * channel_1.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1268
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,2].w_flow_v)) * channel_1.Channel[1,2].w_flow_v ^ 2.0 * channel_1.Channel[1,2].Xi_flow * channel_1.Channel[1,2].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  modelica_real tmp353;
  tmp353 = data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */;
  data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[621] /* channel_1.Channel[1,2].w_flow_v variable */))) * (((tmp353 * tmp353)) * ((data->localData[0]->realVars[574] /* channel_1.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1269
type: SIMPLE_ASSIGN
channel_1.Channel[1,2].dp_piez = 9.806649999999999 * channel_1.Channel[1,2].stateFlow.d * channel_1.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[15] /* channel_1.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1270
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].D_flow_v = (channel_1.Channel[1,2].pv - channel_1.Channel[1,3].pv - (channel_1.Channel[1,2].dp_fric + channel_1.Channel[1,2].dp_piez)) * channel_1.Channel[1,2].f_flow / channel_1.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  data->localData[0]->realVars[49] /* der(channel_1.Channel[1,2].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[579] /* channel_1.Channel[1,2].dp_fric variable */ + data->localData[0]->realVars[584] /* channel_1.Channel[1,2].dp_piez variable */)) * (data->simulationInfo->realParameter[35] /* channel_1.Channel[1,2].f_flow PARAM */),data->simulationInfo->realParameter[20] /* channel_1.Channel[1,2].deltaLpipe PARAM */,"channel_1.Channel[1,2].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1271
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].heatTransfer.Ts = $cse43.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  data->localData[0]->realVars[605] /* channel_1.Channel[1,3].heatTransfer.Ts variable */ = data->localData[0]->realVars[356] /* $cse43.T variable */;
  TRACE_POP
}
/*
equation index: 1272
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].stateFlow.d = $cse43.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */ = data->localData[0]->realVars[364] /* $cse43.rho variable */;
  TRACE_POP
}
/*
equation index: 1273
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].Dv = (*Real*)(sign(channel_1.Channel[1,3].D_flow_v)) * $cse42
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[354] /* $cse42 variable */);
  TRACE_POP
}
/*
equation index: 1274
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].w_flow_v = channel_1.Channel[1,3].Dv / (channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */),"channel_1.Channel[1,3].f_flow * channel_1.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1275
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,3].w_flow_v)) * channel_1.Channel[1,3].w_flow_v ^ 2.0 * channel_1.Channel[1,3].Xi_flow * channel_1.Channel[1,3].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  modelica_real tmp354;
  tmp354 = data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */;
  data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[622] /* channel_1.Channel[1,3].w_flow_v variable */))) * (((tmp354 * tmp354)) * ((data->localData[0]->realVars[575] /* channel_1.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1276
type: SIMPLE_ASSIGN
channel_1.Channel[1,3].dp_piez = 9.806649999999999 * channel_1.Channel[1,3].stateFlow.d * channel_1.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[16] /* channel_1.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1277
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].D_flow_v = (channel_1.Channel[1,3].pv - channel_1.Channel[1,4].pv - (channel_1.Channel[1,3].dp_fric + channel_1.Channel[1,3].dp_piez)) * channel_1.Channel[1,3].f_flow / channel_1.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  data->localData[0]->realVars[50] /* der(channel_1.Channel[1,3].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[580] /* channel_1.Channel[1,3].dp_fric variable */ + data->localData[0]->realVars[585] /* channel_1.Channel[1,3].dp_piez variable */)) * (data->simulationInfo->realParameter[36] /* channel_1.Channel[1,3].f_flow PARAM */),data->simulationInfo->realParameter[21] /* channel_1.Channel[1,3].deltaLpipe PARAM */,"channel_1.Channel[1,3].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1278
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].heatTransfer.Ts = $cse41.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  data->localData[0]->realVars[606] /* channel_1.Channel[1,4].heatTransfer.Ts variable */ = data->localData[0]->realVars[341] /* $cse41.T variable */;
  TRACE_POP
}
/*
equation index: 1279
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].stateFlow.d = $cse41.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */ = data->localData[0]->realVars[349] /* $cse41.rho variable */;
  TRACE_POP
}
/*
equation index: 1280
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].Dv = (*Real*)(sign(channel_1.Channel[1,4].D_flow_v)) * $cse40
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[339] /* $cse40 variable */);
  TRACE_POP
}
/*
equation index: 1281
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].w_flow_v = channel_1.Channel[1,4].Dv / (channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */),"channel_1.Channel[1,4].f_flow * channel_1.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1282
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,4].w_flow_v)) * channel_1.Channel[1,4].w_flow_v ^ 2.0 * channel_1.Channel[1,4].Xi_flow * channel_1.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  modelica_real tmp355;
  tmp355 = data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[623] /* channel_1.Channel[1,4].w_flow_v variable */))) * (((tmp355 * tmp355)) * ((data->localData[0]->realVars[576] /* channel_1.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1283
type: SIMPLE_ASSIGN
channel_1.Channel[1,4].dp_piez = 9.806649999999999 * channel_1.Channel[1,4].stateFlow.d * channel_1.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[17] /* channel_1.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1284
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].D_flow_v = (channel_1.Channel[1,4].pv - channel_1.Channel[1,5].pv - (channel_1.Channel[1,4].dp_fric + channel_1.Channel[1,4].dp_piez)) * channel_1.Channel[1,4].f_flow / channel_1.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  data->localData[0]->realVars[51] /* der(channel_1.Channel[1,4].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[581] /* channel_1.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[586] /* channel_1.Channel[1,4].dp_piez variable */)) * (data->simulationInfo->realParameter[37] /* channel_1.Channel[1,4].f_flow PARAM */),data->simulationInfo->realParameter[22] /* channel_1.Channel[1,4].deltaLpipe PARAM */,"channel_1.Channel[1,4].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1285
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].heatTransfer.Ts = $cse39.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  data->localData[0]->realVars[607] /* channel_1.Channel[1,5].heatTransfer.Ts variable */ = data->localData[0]->realVars[325] /* $cse39.T variable */;
  TRACE_POP
}
/*
equation index: 1286
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].stateFlow.d = $cse39.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */ = data->localData[0]->realVars[333] /* $cse39.rho variable */;
  TRACE_POP
}
/*
equation index: 1287
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].Dv = (*Real*)(sign(channel_1.Channel[1,5].D_flow_v)) * $cse38
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[323] /* $cse38 variable */);
  TRACE_POP
}
/*
equation index: 1288
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].w_flow_v = channel_1.Channel[1,5].Dv / (channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */),"channel_1.Channel[1,5].f_flow * channel_1.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1289
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_1.Channel[1,5].w_flow_v)) * channel_1.Channel[1,5].w_flow_v ^ 2.0 * channel_1.Channel[1,5].Xi_flow * channel_1.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  modelica_real tmp356;
  tmp356 = data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[624] /* channel_1.Channel[1,5].w_flow_v variable */))) * (((tmp356 * tmp356)) * ((data->localData[0]->realVars[577] /* channel_1.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1290
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].dp_piez = 9.806649999999999 * channel_1.Channel[1,5].stateFlow.d * channel_1.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[18] /* channel_1.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1291(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1292(DATA*, threadData_t*);
/*
equation index: 1295
indexNonlinear: 2
type: NONLINEAR

vars: {channel_1.Channel[1,1].H[2]}
eqns: {1291, 1292}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1295 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1295};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1295 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1296(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1297(DATA*, threadData_t*);
/*
equation index: 1300
indexNonlinear: 3
type: NONLINEAR

vars: {channel_1.Channel[1,2].H[2]}
eqns: {1296, 1297}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1300 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1300};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1300 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].hv = (channel_1.Channel[1,2].H[1] - channel_1.Channel[1,2].H[2]) / (channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */ - data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,(data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */),"channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,2].pv = (channel_1.Channel[1,1].D_flow_v - channel_1.Channel[1,2].D_flow_v - channel_1.Channel[1,2].drdh * der(channel_1.Channel[1,2].hv) * channel_1.Channel[1,2].deltaVFlow) / (channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  data->localData[0]->realVars[58] /* der(channel_1.Channel[1,2].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */ - data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[589] /* channel_1.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[54] /* der(channel_1.Channel[1,2].hv) STATE_DER */)) * (data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[30] /* channel_1.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[594] /* channel_1.Channel[1,2].drdp variable */),"channel_1.Channel[1,2].deltaVFlow * channel_1.Channel[1,2].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1303(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1304(DATA*, threadData_t*);
/*
equation index: 1307
indexNonlinear: 4
type: NONLINEAR

vars: {channel_1.Channel[1,4].H[1]}
eqns: {1303, 1304}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1307 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1307};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1307 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].hv = (channel_1.Channel[1,3].H[1] - channel_1.Channel[1,3].H[2]) / (channel_1.Channel[1,3].deltaVFlow * channel_1.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */ - data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,(data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */),"channel_1.Channel[1,3].deltaVFlow * channel_1.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,3].pv = (channel_1.Channel[1,2].D_flow_v - channel_1.Channel[1,3].D_flow_v - channel_1.Channel[1,3].drdh * der(channel_1.Channel[1,3].hv) * channel_1.Channel[1,3].deltaVFlow) / (channel_1.Channel[1,3].deltaVFlow * channel_1.Channel[1,3].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  data->localData[0]->realVars[59] /* der(channel_1.Channel[1,3].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */ - data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[590] /* channel_1.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[55] /* der(channel_1.Channel[1,3].hv) STATE_DER */)) * (data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[31] /* channel_1.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[595] /* channel_1.Channel[1,3].drdp variable */),"channel_1.Channel[1,3].deltaVFlow * channel_1.Channel[1,3].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1310(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1311(DATA*, threadData_t*);
/*
equation index: 1314
indexNonlinear: 5
type: NONLINEAR

vars: {channel_1.Channel[1,5].H[1]}
eqns: {1310, 1311}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1314 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1314};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1314 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].hv = (channel_1.Channel[1,4].H[1] - channel_1.Channel[1,4].H[2]) / (channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */ - data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,(data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */),"channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,4].pv = (channel_1.Channel[1,3].D_flow_v - channel_1.Channel[1,4].D_flow_v - channel_1.Channel[1,4].drdh * der(channel_1.Channel[1,4].hv) * channel_1.Channel[1,4].deltaVFlow) / (channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  data->localData[0]->realVars[60] /* der(channel_1.Channel[1,4].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */ - data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[591] /* channel_1.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[56] /* der(channel_1.Channel[1,4].hv) STATE_DER */)) * (data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[32] /* channel_1.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[596] /* channel_1.Channel[1,4].drdp variable */),"channel_1.Channel[1,4].deltaVFlow * channel_1.Channel[1,4].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].H[1] = semiLinear(channel_1.Channel[1,1].D_flow_v, Source_2.ports[1].h_outflow, channel_1.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,1].hv = (channel_1.Channel[1,1].H[1] - channel_1.Channel[1,1].H[2]) / (channel_1.Channel[1,1].deltaVFlow * channel_1.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */ - data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,(data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */) * (data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */),"channel_1.Channel[1,1].deltaVFlow * channel_1.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
channel_1.Channel[1,1].D[1] = channel_1.Channel[1,1].deltaVFlow * (channel_1.Channel[1,1].drdp * $DER.channel_1.Channel[1,1].pv + channel_1.Channel[1,1].drdh * der(channel_1.Channel[1,1].hv)) + channel_1.Channel[1,1].D_flow_v
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  data->localData[0]->realVars[557] /* channel_1.Channel[1,1].D[1] variable */ = (data->simulationInfo->realParameter[29] /* channel_1.Channel[1,1].deltaVFlow PARAM */) * ((data->localData[0]->realVars[593] /* channel_1.Channel[1,1].drdp variable */) * (data->localData[0]->realVars[96] /* der(channel_1.Channel[1,1].pv) DUMMY_DER */) + (data->localData[0]->realVars[588] /* channel_1.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[53] /* der(channel_1.Channel[1,1].hv) STATE_DER */)) + data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */;
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
channel_1.Channel[1,5].H[2] = semiLinear(channel_1.Channel[1,5].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].hv = (channel_1.Channel[1,5].H[1] - channel_1.Channel[1,5].H[2]) / (channel_1.Channel[1,5].deltaVFlow * channel_1.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */ - data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */,(data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */),"channel_1.Channel[1,5].deltaVFlow * channel_1.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].pv = (channel_1.Channel[1,4].D_flow_v - channel_1.Channel[1,5].D_flow_v - channel_1.Channel[1,5].drdh * der(channel_1.Channel[1,5].hv) * channel_1.Channel[1,5].deltaVFlow) / (channel_1.Channel[1,5].deltaVFlow * channel_1.Channel[1,5].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  data->localData[0]->realVars[61] /* der(channel_1.Channel[1,5].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */ - data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[592] /* channel_1.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[57] /* der(channel_1.Channel[1,5].hv) STATE_DER */)) * (data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[33] /* channel_1.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[597] /* channel_1.Channel[1,5].drdp variable */),"channel_1.Channel[1,5].deltaVFlow * channel_1.Channel[1,5].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].heatTransfer.Ts = $cse20.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  data->localData[0]->realVars[670] /* channel_2.Channel[1,1].heatTransfer.Ts variable */ = data->localData[0]->realVars[188] /* $cse20.T variable */;
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].stateFlow.d = $cse20.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */ = data->localData[0]->realVars[196] /* $cse20.rho variable */;
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].Dv = (*Real*)(sign(channel_2.Channel[1,1].D_flow_v)) * $cse37
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[322] /* $cse37 variable */);
  TRACE_POP
}
/*
equation index: 1326
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].w_flow_v = channel_2.Channel[1,1].Dv / (channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */),"channel_2.Channel[1,1].f_flow * channel_2.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1327
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,1].w_flow_v)) * channel_2.Channel[1,1].w_flow_v ^ 2.0 * channel_2.Channel[1,1].Xi_flow * channel_2.Channel[1,1].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */;
  data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[686] /* channel_2.Channel[1,1].w_flow_v variable */))) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[640] /* channel_2.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1328
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].dp_piez = 9.806649999999999 * channel_2.Channel[1,1].stateFlow.d * channel_2.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[80] /* channel_2.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1329
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].D_flow_v = (channel_2.Channel[1,1].pv - channel_2.Channel[1,2].pv - (channel_2.Channel[1,1].dp_fric + channel_2.Channel[1,1].dp_piez)) * channel_2.Channel[1,1].f_flow / channel_2.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  data->localData[0]->realVars[62] /* der(channel_2.Channel[1,1].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */ - data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[645] /* channel_2.Channel[1,1].dp_fric variable */ + data->localData[0]->realVars[650] /* channel_2.Channel[1,1].dp_piez variable */)) * (data->simulationInfo->realParameter[100] /* channel_2.Channel[1,1].f_flow PARAM */),data->simulationInfo->realParameter[85] /* channel_2.Channel[1,1].deltaLpipe PARAM */,"channel_2.Channel[1,1].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1330
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].heatTransfer.Ts = $cse36.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  data->localData[0]->realVars[671] /* channel_2.Channel[1,2].heatTransfer.Ts variable */ = data->localData[0]->realVars[309] /* $cse36.T variable */;
  TRACE_POP
}
/*
equation index: 1331
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].stateFlow.d = $cse36.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */ = data->localData[0]->realVars[317] /* $cse36.rho variable */;
  TRACE_POP
}
/*
equation index: 1332
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].Dv = (*Real*)(sign(channel_2.Channel[1,2].D_flow_v)) * $cse35
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[307] /* $cse35 variable */);
  TRACE_POP
}
/*
equation index: 1333
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].w_flow_v = channel_2.Channel[1,2].Dv / (channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */),"channel_2.Channel[1,2].f_flow * channel_2.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1334
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,2].w_flow_v)) * channel_2.Channel[1,2].w_flow_v ^ 2.0 * channel_2.Channel[1,2].Xi_flow * channel_2.Channel[1,2].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  modelica_real tmp1;
  tmp1 = data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */;
  data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[687] /* channel_2.Channel[1,2].w_flow_v variable */))) * (((tmp1 * tmp1)) * ((data->localData[0]->realVars[641] /* channel_2.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1335
type: SIMPLE_ASSIGN
channel_2.Channel[1,2].dp_piez = 9.806649999999999 * channel_2.Channel[1,2].stateFlow.d * channel_2.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[81] /* channel_2.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1336
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].D_flow_v = (channel_2.Channel[1,2].pv - channel_2.Channel[1,3].pv - (channel_2.Channel[1,2].dp_fric + channel_2.Channel[1,2].dp_piez)) * channel_2.Channel[1,2].f_flow / channel_2.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  data->localData[0]->realVars[63] /* der(channel_2.Channel[1,2].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[646] /* channel_2.Channel[1,2].dp_fric variable */ + data->localData[0]->realVars[651] /* channel_2.Channel[1,2].dp_piez variable */)) * (data->simulationInfo->realParameter[101] /* channel_2.Channel[1,2].f_flow PARAM */),data->simulationInfo->realParameter[86] /* channel_2.Channel[1,2].deltaLpipe PARAM */,"channel_2.Channel[1,2].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1337
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].heatTransfer.Ts = $cse34.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  data->localData[0]->realVars[672] /* channel_2.Channel[1,3].heatTransfer.Ts variable */ = data->localData[0]->realVars[294] /* $cse34.T variable */;
  TRACE_POP
}
/*
equation index: 1338
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].stateFlow.d = $cse34.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */ = data->localData[0]->realVars[302] /* $cse34.rho variable */;
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].Dv = (*Real*)(sign(channel_2.Channel[1,3].D_flow_v)) * $cse33
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[292] /* $cse33 variable */);
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].w_flow_v = channel_2.Channel[1,3].Dv / (channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */),"channel_2.Channel[1,3].f_flow * channel_2.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,3].w_flow_v)) * channel_2.Channel[1,3].w_flow_v ^ 2.0 * channel_2.Channel[1,3].Xi_flow * channel_2.Channel[1,3].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  modelica_real tmp2;
  tmp2 = data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */;
  data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[688] /* channel_2.Channel[1,3].w_flow_v variable */))) * (((tmp2 * tmp2)) * ((data->localData[0]->realVars[642] /* channel_2.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1342
type: SIMPLE_ASSIGN
channel_2.Channel[1,3].dp_piez = 9.806649999999999 * channel_2.Channel[1,3].stateFlow.d * channel_2.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[82] /* channel_2.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].D_flow_v = (channel_2.Channel[1,3].pv - channel_2.Channel[1,4].pv - (channel_2.Channel[1,3].dp_fric + channel_2.Channel[1,3].dp_piez)) * channel_2.Channel[1,3].f_flow / channel_2.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  data->localData[0]->realVars[64] /* der(channel_2.Channel[1,3].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[647] /* channel_2.Channel[1,3].dp_fric variable */ + data->localData[0]->realVars[652] /* channel_2.Channel[1,3].dp_piez variable */)) * (data->simulationInfo->realParameter[102] /* channel_2.Channel[1,3].f_flow PARAM */),data->simulationInfo->realParameter[87] /* channel_2.Channel[1,3].deltaLpipe PARAM */,"channel_2.Channel[1,3].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].heatTransfer.Ts = $cse32.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  data->localData[0]->realVars[673] /* channel_2.Channel[1,4].heatTransfer.Ts variable */ = data->localData[0]->realVars[279] /* $cse32.T variable */;
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].stateFlow.d = $cse32.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */ = data->localData[0]->realVars[287] /* $cse32.rho variable */;
  TRACE_POP
}
/*
equation index: 1346
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].Dv = (*Real*)(sign(channel_2.Channel[1,4].D_flow_v)) * $cse31
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[277] /* $cse31 variable */);
  TRACE_POP
}
/*
equation index: 1347
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].w_flow_v = channel_2.Channel[1,4].Dv / (channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */),"channel_2.Channel[1,4].f_flow * channel_2.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1348
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,4].w_flow_v)) * channel_2.Channel[1,4].w_flow_v ^ 2.0 * channel_2.Channel[1,4].Xi_flow * channel_2.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  modelica_real tmp3;
  tmp3 = data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[689] /* channel_2.Channel[1,4].w_flow_v variable */))) * (((tmp3 * tmp3)) * ((data->localData[0]->realVars[643] /* channel_2.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1349
type: SIMPLE_ASSIGN
channel_2.Channel[1,4].dp_piez = 9.806649999999999 * channel_2.Channel[1,4].stateFlow.d * channel_2.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[83] /* channel_2.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1350
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].D_flow_v = (channel_2.Channel[1,4].pv - channel_2.Channel[1,5].pv - (channel_2.Channel[1,4].dp_fric + channel_2.Channel[1,4].dp_piez)) * channel_2.Channel[1,4].f_flow / channel_2.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  data->localData[0]->realVars[65] /* der(channel_2.Channel[1,4].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[648] /* channel_2.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[653] /* channel_2.Channel[1,4].dp_piez variable */)) * (data->simulationInfo->realParameter[103] /* channel_2.Channel[1,4].f_flow PARAM */),data->simulationInfo->realParameter[88] /* channel_2.Channel[1,4].deltaLpipe PARAM */,"channel_2.Channel[1,4].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1351
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].heatTransfer.Ts = $cse30.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  data->localData[0]->realVars[674] /* channel_2.Channel[1,5].heatTransfer.Ts variable */ = data->localData[0]->realVars[264] /* $cse30.T variable */;
  TRACE_POP
}
/*
equation index: 1352
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].stateFlow.d = $cse30.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */ = data->localData[0]->realVars[272] /* $cse30.rho variable */;
  TRACE_POP
}
/*
equation index: 1353
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].Dv = (*Real*)(sign(channel_2.Channel[1,5].D_flow_v)) * $cse29
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[248] /* $cse29 variable */);
  TRACE_POP
}
/*
equation index: 1354
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].w_flow_v = channel_2.Channel[1,5].Dv / (channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */),"channel_2.Channel[1,5].f_flow * channel_2.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_2.Channel[1,5].w_flow_v)) * channel_2.Channel[1,5].w_flow_v ^ 2.0 * channel_2.Channel[1,5].Xi_flow * channel_2.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  modelica_real tmp4;
  tmp4 = data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[690] /* channel_2.Channel[1,5].w_flow_v variable */))) * (((tmp4 * tmp4)) * ((data->localData[0]->realVars[644] /* channel_2.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].dp_piez = 9.806649999999999 * channel_2.Channel[1,5].stateFlow.d * channel_2.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[84] /* channel_2.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1357(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1358(DATA*, threadData_t*);
/*
equation index: 1361
indexNonlinear: 6
type: NONLINEAR

vars: {channel_2.Channel[1,2].H[1]}
eqns: {1357, 1358}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1361 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1361};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1361 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1362(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1363(DATA*, threadData_t*);
/*
equation index: 1366
indexNonlinear: 7
type: NONLINEAR

vars: {channel_2.Channel[1,2].H[2]}
eqns: {1362, 1363}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1366 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1366};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1366 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  TRACE_POP
}
/*
equation index: 1367
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].hv = (channel_2.Channel[1,2].H[1] - channel_2.Channel[1,2].H[2]) / (channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */ - data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,(data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */),"channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1368
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,2].pv = (channel_2.Channel[1,1].D_flow_v - channel_2.Channel[1,2].D_flow_v - channel_2.Channel[1,2].drdh * der(channel_2.Channel[1,2].hv) * channel_2.Channel[1,2].deltaVFlow) / (channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  data->localData[0]->realVars[73] /* der(channel_2.Channel[1,2].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ - data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[656] /* channel_2.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[68] /* der(channel_2.Channel[1,2].hv) STATE_DER */)) * (data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[96] /* channel_2.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[661] /* channel_2.Channel[1,2].drdp variable */),"channel_2.Channel[1,2].deltaVFlow * channel_2.Channel[1,2].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1369(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1370(DATA*, threadData_t*);
/*
equation index: 1373
indexNonlinear: 8
type: NONLINEAR

vars: {channel_2.Channel[1,4].H[1]}
eqns: {1369, 1370}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1373 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1373};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1373 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  TRACE_POP
}
/*
equation index: 1374
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].hv = (channel_2.Channel[1,3].H[1] - channel_2.Channel[1,3].H[2]) / (channel_2.Channel[1,3].deltaVFlow * channel_2.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */ - data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,(data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */),"channel_2.Channel[1,3].deltaVFlow * channel_2.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1375
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,3].pv = (channel_2.Channel[1,2].D_flow_v - channel_2.Channel[1,3].D_flow_v - channel_2.Channel[1,3].drdh * der(channel_2.Channel[1,3].hv) * channel_2.Channel[1,3].deltaVFlow) / (channel_2.Channel[1,3].deltaVFlow * channel_2.Channel[1,3].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  data->localData[0]->realVars[74] /* der(channel_2.Channel[1,3].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ - data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[657] /* channel_2.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[69] /* der(channel_2.Channel[1,3].hv) STATE_DER */)) * (data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[97] /* channel_2.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[662] /* channel_2.Channel[1,3].drdp variable */),"channel_2.Channel[1,3].deltaVFlow * channel_2.Channel[1,3].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1376(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1377(DATA*, threadData_t*);
/*
equation index: 1380
indexNonlinear: 9
type: NONLINEAR

vars: {channel_2.Channel[1,5].H[1]}
eqns: {1376, 1377}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1380 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1380};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1380 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}
/*
equation index: 1381
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].hv = (channel_2.Channel[1,4].H[1] - channel_2.Channel[1,4].H[2]) / (channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */ - data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,(data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */),"channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1382
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,4].pv = (channel_2.Channel[1,3].D_flow_v - channel_2.Channel[1,4].D_flow_v - channel_2.Channel[1,4].drdh * der(channel_2.Channel[1,4].hv) * channel_2.Channel[1,4].deltaVFlow) / (channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  data->localData[0]->realVars[75] /* der(channel_2.Channel[1,4].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ - data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[658] /* channel_2.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[70] /* der(channel_2.Channel[1,4].hv) STATE_DER */)) * (data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[98] /* channel_2.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[663] /* channel_2.Channel[1,4].drdp variable */),"channel_2.Channel[1,4].deltaVFlow * channel_2.Channel[1,4].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1383
type: SIMPLE_ASSIGN
channel_2.Channel[1,1].H[1] = semiLinear(channel_2.Channel[1,1].D_flow_v, channel_1.Channel[1,5].hv, channel_2.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1384
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].hv = (channel_2.Channel[1,1].H[1] - channel_2.Channel[1,1].H[2]) / (channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */ - data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,(data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * (data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */),"channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1385
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,1].pv = (channel_1.Channel[1,5].D_flow_v - channel_2.Channel[1,1].D_flow_v - channel_2.Channel[1,1].drdh * der(channel_2.Channel[1,1].hv) * channel_2.Channel[1,1].deltaVFlow) / (channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  data->localData[0]->realVars[72] /* der(channel_2.Channel[1,1].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ - data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[655] /* channel_2.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[67] /* der(channel_2.Channel[1,1].hv) STATE_DER */)) * (data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[95] /* channel_2.Channel[1,1].deltaVFlow PARAM */) * (data->localData[0]->realVars[660] /* channel_2.Channel[1,1].drdp variable */),"channel_2.Channel[1,1].deltaVFlow * channel_2.Channel[1,1].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1386
type: SIMPLE_ASSIGN
channel_2.Channel[1,5].H[2] = semiLinear(channel_2.Channel[1,5].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1387
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].hv = (channel_2.Channel[1,5].H[1] - channel_2.Channel[1,5].H[2]) / (channel_2.Channel[1,5].deltaVFlow * channel_2.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */ - data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */,(data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */),"channel_2.Channel[1,5].deltaVFlow * channel_2.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1388
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].pv = (channel_2.Channel[1,4].D_flow_v - channel_2.Channel[1,5].D_flow_v - channel_2.Channel[1,5].drdh * der(channel_2.Channel[1,5].hv) * channel_2.Channel[1,5].deltaVFlow) / (channel_2.Channel[1,5].deltaVFlow * channel_2.Channel[1,5].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  data->localData[0]->realVars[76] /* der(channel_2.Channel[1,5].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ - data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[659] /* channel_2.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[71] /* der(channel_2.Channel[1,5].hv) STATE_DER */)) * (data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[99] /* channel_2.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[664] /* channel_2.Channel[1,5].drdp variable */),"channel_2.Channel[1,5].deltaVFlow * channel_2.Channel[1,5].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1389
type: SIMPLE_ASSIGN
valve_1.filter.u = smooth(0, if noEvent(valve1_pos < valve_1.minLimiter.uMin) then valve_1.minLimiter.uMin else valve1_pos)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[756] /* valve1_pos variable */,data->simulationInfo->realParameter[254] /* valve_1.minLimiter.uMin PARAM */);
  data->localData[0]->realVars[762] /* valve_1.filter.u variable */ = (tmp0?data->simulationInfo->realParameter[254] /* valve_1.minLimiter.uMin PARAM */:data->localData[0]->realVars[756] /* valve1_pos variable */);
  TRACE_POP
}
/*
equation index: 1390
type: SIMPLE_ASSIGN
valve_1.filter.uu[1] = valve_1.filter.u / valve_1.filter.u_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  data->localData[0]->realVars[763] /* valve_1.filter.uu[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[762] /* valve_1.filter.u variable */,data->simulationInfo->realParameter[246] /* valve_1.filter.u_nominal PARAM */,"valve_1.filter.u_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 1391
type: SIMPLE_ASSIGN
$DER.valve_1.filter.x[1] = valve_1.filter.r[1] * (valve_1.filter.x[1] - valve_1.filter.uu[1])
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  data->localData[0]->realVars[92] /* der(valve_1.filter.x[1]) STATE_DER */ = (data->simulationInfo->realParameter[244] /* valve_1.filter.r[1] PARAM */) * (data->localData[0]->realVars[44] /* valve_1.filter.x[1] STATE(1) */ - data->localData[0]->realVars[763] /* valve_1.filter.uu[1] variable */);
  TRACE_POP
}
/*
equation index: 1392
type: SIMPLE_ASSIGN
$DER.valve_1.filter.x[2] = valve_1.filter.r[2] * (valve_1.filter.x[2] - valve_1.filter.x[1])
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  data->localData[0]->realVars[93] /* der(valve_1.filter.x[2]) STATE_DER */ = (data->simulationInfo->realParameter[245] /* valve_1.filter.r[2] PARAM */) * (data->localData[0]->realVars[45] /* valve_1.filter.x[2] STATE(1) */ - data->localData[0]->realVars[44] /* valve_1.filter.x[1] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1393
type: SIMPLE_ASSIGN
valve_1.opening_filtered = valve_1.filter.gain * valve_1.filter.u_nominal * valve_1.filter.x[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */ = (data->simulationInfo->realParameter[243] /* valve_1.filter.gain PARAM */) * ((data->simulationInfo->realParameter[246] /* valve_1.filter.u_nominal PARAM */) * (data->localData[0]->realVars[45] /* valve_1.filter.x[2] STATE(1) */));
  TRACE_POP
}
/*
equation index: 1394
type: SIMPLE_ASSIGN
$cse25 = Modelica.Fluid.Valves.ValveCompressible$valve_1.xtCharacteristic(valve_1.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  data->localData[0]->realVars[218] /* $cse25 variable */ = omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_xtCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */);
  TRACE_POP
}
/*
equation index: 1395
type: SIMPLE_ASSIGN
$cse22 = Modelica.Fluid.Valves.ValveCompressible$valve_1.valveCharacteristic(valve_1.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  data->localData[0]->realVars[215] /* $cse22 variable */ = omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__1_valveCharacteristic(threadData, data->localData[0]->realVars[764] /* valve_1.opening_filtered variable */);
  TRACE_POP
}
/*
equation index: 1396
type: SIMPLE_ASSIGN
valve_1.Fxt = valve_1.Fxt_full * $cse25
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  data->localData[0]->realVars[758] /* valve_1.Fxt variable */ = (data->simulationInfo->realParameter[230] /* valve_1.Fxt_full PARAM */) * (data->localData[0]->realVars[218] /* $cse25 variable */);
  TRACE_POP
}
/*
equation index: 1397
type: SIMPLE_ASSIGN
valve_1.state_b.T = $cse20.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  data->localData[0]->realVars[770] /* valve_1.state_b.T variable */ = data->localData[0]->realVars[188] /* $cse20.T variable */;
  TRACE_POP
}
/*
equation index: 1398
type: SIMPLE_ASSIGN
valve_1.port_b_T = Modelica.Fluid.Utilities.regStep(-channel_1.Channel[1,5].D_flow_v, valve_1.state_b.T, $cse26.T, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  data->localData[0]->realVars[767] /* valve_1.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */), data->localData[0]->realVars[770] /* valve_1.state_b.T variable */, data->localData[0]->realVars[220] /* $cse26.T variable */, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1399
type: SIMPLE_ASSIGN
valve_1.state_b.d = $cse20.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  data->localData[0]->realVars[771] /* valve_1.state_b.d variable */ = data->localData[0]->realVars[196] /* $cse20.rho variable */;
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1400(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1401(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1402(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1403(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1404(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1405(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1406(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1407(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1408(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1409(DATA*, threadData_t*);
/*
equation index: 1410
indexNonlinear: 10
type: NONLINEAR

vars: {channel_1.Channel[1,5].p[2]}
eqns: {1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1410 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1410};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}
/*
equation index: 1411
type: SIMPLE_ASSIGN
$DER.channel_1.Channel[1,5].D_flow_v = (channel_1.Channel[1,5].pv - channel_1.Channel[1,5].p[2] - (channel_1.Channel[1,5].dp_fric + channel_1.Channel[1,5].dp_piez)) * channel_1.Channel[1,5].f_flow / channel_1.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  data->localData[0]->realVars[52] /* der(channel_1.Channel[1,5].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */ - data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */ - (data->localData[0]->realVars[582] /* channel_1.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[587] /* channel_1.Channel[1,5].dp_piez variable */)) * (data->simulationInfo->realParameter[38] /* channel_1.Channel[1,5].f_flow PARAM */),data->simulationInfo->realParameter[23] /* channel_1.Channel[1,5].deltaLpipe PARAM */,"channel_1.Channel[1,5].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1412
type: ALGORITHM

  $cse27 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_1.Channel[1,5].p[2], channel_2.Channel[1,1].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp0, &(data->localData[0]->integerVars[18] /* $cse27.phase DISCRETE */), &(data->localData[0]->integerVars[19] /* $cse27.region DISCRETE */), &(data->localData[0]->realVars[239] /* $cse27.p variable */), &(data->localData[0]->realVars[234] /* $cse27.T variable */), &(data->localData[0]->realVars[238] /* $cse27.h variable */), &(data->localData[0]->realVars[233] /* $cse27.R variable */), &(data->localData[0]->realVars[235] /* $cse27.cp variable */), &(data->localData[0]->realVars[236] /* $cse27.cv variable */), &(data->localData[0]->realVars[242] /* $cse27.rho variable */), &(data->localData[0]->realVars[243] /* $cse27.s variable */), &(data->localData[0]->realVars[241] /* $cse27.pt variable */), &(data->localData[0]->realVars[240] /* $cse27.pd variable */), &(data->localData[0]->realVars[245] /* $cse27.vt variable */), &(data->localData[0]->realVars[244] /* $cse27.vp variable */), &(data->localData[0]->realVars[246] /* $cse27.x variable */), &(data->localData[0]->realVars[237] /* $cse27.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1413
type: SIMPLE_ASSIGN
$cse28 = Modelica.Fluid.Utilities.regStep(channel_1.Channel[1,5].D_flow_v, valve_1.state_a.d, valve_1.state_b.d, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  data->localData[0]->realVars[247] /* $cse28 variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[769] /* valve_1.state_a.d variable */, data->localData[0]->realVars[771] /* valve_1.state_b.d variable */, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1414
type: SIMPLE_ASSIGN
valve_1.V_flow = channel_1.Channel[1,5].D_flow_v / $cse28
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  data->localData[0]->realVars[759] /* valve_1.V_flow variable */ = DIVISION_SIM(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,data->localData[0]->realVars[247] /* $cse28 variable */,"$cse28",equationIndexes);
  TRACE_POP
}
/*
equation index: 1415
type: SIMPLE_ASSIGN
valve_1.state_a.T = $cse21.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  data->localData[0]->realVars[768] /* valve_1.state_a.T variable */ = data->localData[0]->realVars[202] /* $cse21.T variable */;
  TRACE_POP
}
/*
equation index: 1416
type: SIMPLE_ASSIGN
valve_1.port_a_T = Modelica.Fluid.Utilities.regStep(channel_1.Channel[1,5].D_flow_v, valve_1.state_a.T, $cse27.T, valve_1.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  data->localData[0]->realVars[766] /* valve_1.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[768] /* valve_1.state_a.T variable */, data->localData[0]->realVars[234] /* $cse27.T variable */, data->simulationInfo->realParameter[252] /* valve_1.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1417
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].heatTransfer.Ts = $cse2.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  data->localData[0]->realVars[736] /* channel_3.Channel[1,1].heatTransfer.Ts variable */ = data->localData[0]->realVars[174] /* $cse2.T variable */;
  TRACE_POP
}
/*
equation index: 1418
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].stateFlow.d = $cse2.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */ = data->localData[0]->realVars[182] /* $cse2.rho variable */;
  TRACE_POP
}
/*
equation index: 1419
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].Dv = (*Real*)(sign(channel_3.Channel[1,1].D_flow_v)) * $cse19
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[172] /* $cse19 variable */);
  TRACE_POP
}
/*
equation index: 1420
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].w_flow_v = channel_3.Channel[1,1].Dv / (channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */,(data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */),"channel_3.Channel[1,1].f_flow * channel_3.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1421
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,1].w_flow_v)) * channel_3.Channel[1,1].w_flow_v ^ 2.0 * channel_3.Channel[1,1].Xi_flow * channel_3.Channel[1,1].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  modelica_real tmp1;
  tmp1 = data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */;
  data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[751] /* channel_3.Channel[1,1].w_flow_v variable */))) * (((tmp1 * tmp1)) * ((data->localData[0]->realVars[706] /* channel_3.Channel[1,1].Xi_flow variable */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1422
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].dp_piez = 9.806649999999999 * channel_3.Channel[1,1].stateFlow.d * channel_3.Channel[1,1].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */) * (data->simulationInfo->realParameter[146] /* channel_3.Channel[1,1].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1423
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].D_flow_v = (channel_3.Channel[1,1].pv - channel_3.Channel[1,2].pv - (channel_3.Channel[1,1].dp_fric + channel_3.Channel[1,1].dp_piez)) * channel_3.Channel[1,1].f_flow / channel_3.Channel[1,1].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  data->localData[0]->realVars[77] /* der(channel_3.Channel[1,1].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */ - data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ - (data->localData[0]->realVars[711] /* channel_3.Channel[1,1].dp_fric variable */ + data->localData[0]->realVars[716] /* channel_3.Channel[1,1].dp_piez variable */)) * (data->simulationInfo->realParameter[166] /* channel_3.Channel[1,1].f_flow PARAM */),data->simulationInfo->realParameter[151] /* channel_3.Channel[1,1].deltaLpipe PARAM */,"channel_3.Channel[1,1].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1424
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].heatTransfer.Ts = $cse18.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  data->localData[0]->realVars[737] /* channel_3.Channel[1,2].heatTransfer.Ts variable */ = data->localData[0]->realVars[159] /* $cse18.T variable */;
  TRACE_POP
}
/*
equation index: 1425
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].stateFlow.d = $cse18.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */ = data->localData[0]->realVars[167] /* $cse18.rho variable */;
  TRACE_POP
}
/*
equation index: 1426
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].Dv = (*Real*)(sign(channel_3.Channel[1,2].D_flow_v)) * $cse17
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[157] /* $cse17 variable */);
  TRACE_POP
}
/*
equation index: 1427
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].w_flow_v = channel_3.Channel[1,2].Dv / (channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */,(data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */),"channel_3.Channel[1,2].f_flow * channel_3.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1428
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,2].w_flow_v)) * channel_3.Channel[1,2].w_flow_v ^ 2.0 * channel_3.Channel[1,2].Xi_flow * channel_3.Channel[1,2].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  modelica_real tmp2;
  tmp2 = data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */;
  data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[752] /* channel_3.Channel[1,2].w_flow_v variable */))) * (((tmp2 * tmp2)) * ((data->localData[0]->realVars[707] /* channel_3.Channel[1,2].Xi_flow variable */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1429
type: SIMPLE_ASSIGN
channel_3.Channel[1,2].dp_piez = 9.806649999999999 * channel_3.Channel[1,2].stateFlow.d * channel_3.Channel[1,2].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */) * (data->simulationInfo->realParameter[147] /* channel_3.Channel[1,2].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1430
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].D_flow_v = (channel_3.Channel[1,2].pv - channel_3.Channel[1,3].pv - (channel_3.Channel[1,2].dp_fric + channel_3.Channel[1,2].dp_piez)) * channel_3.Channel[1,2].f_flow / channel_3.Channel[1,2].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  data->localData[0]->realVars[78] /* der(channel_3.Channel[1,2].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */ - data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ - (data->localData[0]->realVars[712] /* channel_3.Channel[1,2].dp_fric variable */ + data->localData[0]->realVars[717] /* channel_3.Channel[1,2].dp_piez variable */)) * (data->simulationInfo->realParameter[167] /* channel_3.Channel[1,2].f_flow PARAM */),data->simulationInfo->realParameter[152] /* channel_3.Channel[1,2].deltaLpipe PARAM */,"channel_3.Channel[1,2].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1431
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].heatTransfer.Ts = $cse16.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  data->localData[0]->realVars[738] /* channel_3.Channel[1,3].heatTransfer.Ts variable */ = data->localData[0]->realVars[144] /* $cse16.T variable */;
  TRACE_POP
}
/*
equation index: 1432
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].stateFlow.d = $cse16.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */ = data->localData[0]->realVars[152] /* $cse16.rho variable */;
  TRACE_POP
}
/*
equation index: 1433
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].Dv = (*Real*)(sign(channel_3.Channel[1,3].D_flow_v)) * $cse15
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[142] /* $cse15 variable */);
  TRACE_POP
}
/*
equation index: 1434
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].w_flow_v = channel_3.Channel[1,3].Dv / (channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */,(data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */),"channel_3.Channel[1,3].f_flow * channel_3.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1435
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,3].w_flow_v)) * channel_3.Channel[1,3].w_flow_v ^ 2.0 * channel_3.Channel[1,3].Xi_flow * channel_3.Channel[1,3].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  modelica_real tmp3;
  tmp3 = data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */;
  data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[753] /* channel_3.Channel[1,3].w_flow_v variable */))) * (((tmp3 * tmp3)) * ((data->localData[0]->realVars[708] /* channel_3.Channel[1,3].Xi_flow variable */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1436
type: SIMPLE_ASSIGN
channel_3.Channel[1,3].dp_piez = 9.806649999999999 * channel_3.Channel[1,3].stateFlow.d * channel_3.Channel[1,3].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */) * (data->simulationInfo->realParameter[148] /* channel_3.Channel[1,3].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1437
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].D_flow_v = (channel_3.Channel[1,3].pv - channel_3.Channel[1,4].pv - (channel_3.Channel[1,3].dp_fric + channel_3.Channel[1,3].dp_piez)) * channel_3.Channel[1,3].f_flow / channel_3.Channel[1,3].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  data->localData[0]->realVars[79] /* der(channel_3.Channel[1,3].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */ - data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ - (data->localData[0]->realVars[713] /* channel_3.Channel[1,3].dp_fric variable */ + data->localData[0]->realVars[718] /* channel_3.Channel[1,3].dp_piez variable */)) * (data->simulationInfo->realParameter[168] /* channel_3.Channel[1,3].f_flow PARAM */),data->simulationInfo->realParameter[153] /* channel_3.Channel[1,3].deltaLpipe PARAM */,"channel_3.Channel[1,3].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1438
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].heatTransfer.Ts = $cse14.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  data->localData[0]->realVars[739] /* channel_3.Channel[1,4].heatTransfer.Ts variable */ = data->localData[0]->realVars[129] /* $cse14.T variable */;
  TRACE_POP
}
/*
equation index: 1439
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].stateFlow.d = $cse14.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */ = data->localData[0]->realVars[137] /* $cse14.rho variable */;
  TRACE_POP
}
/*
equation index: 1440
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].Dv = (*Real*)(sign(channel_3.Channel[1,4].D_flow_v)) * $cse13
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[127] /* $cse13 variable */);
  TRACE_POP
}
/*
equation index: 1441
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].w_flow_v = channel_3.Channel[1,4].Dv / (channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */,(data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */),"channel_3.Channel[1,4].f_flow * channel_3.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1442
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,4].w_flow_v)) * channel_3.Channel[1,4].w_flow_v ^ 2.0 * channel_3.Channel[1,4].Xi_flow * channel_3.Channel[1,4].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  modelica_real tmp4;
  tmp4 = data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */;
  data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[754] /* channel_3.Channel[1,4].w_flow_v variable */))) * (((tmp4 * tmp4)) * ((data->localData[0]->realVars[709] /* channel_3.Channel[1,4].Xi_flow variable */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1443
type: SIMPLE_ASSIGN
channel_3.Channel[1,4].dp_piez = 9.806649999999999 * channel_3.Channel[1,4].stateFlow.d * channel_3.Channel[1,4].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */) * (data->simulationInfo->realParameter[149] /* channel_3.Channel[1,4].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1444
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].D_flow_v = (channel_3.Channel[1,4].pv - channel_3.Channel[1,5].pv - (channel_3.Channel[1,4].dp_fric + channel_3.Channel[1,4].dp_piez)) * channel_3.Channel[1,4].f_flow / channel_3.Channel[1,4].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  data->localData[0]->realVars[80] /* der(channel_3.Channel[1,4].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */ - data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ - (data->localData[0]->realVars[714] /* channel_3.Channel[1,4].dp_fric variable */ + data->localData[0]->realVars[719] /* channel_3.Channel[1,4].dp_piez variable */)) * (data->simulationInfo->realParameter[169] /* channel_3.Channel[1,4].f_flow PARAM */),data->simulationInfo->realParameter[154] /* channel_3.Channel[1,4].deltaLpipe PARAM */,"channel_3.Channel[1,4].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1445
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].heatTransfer.Ts = $cse12.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  data->localData[0]->realVars[740] /* channel_3.Channel[1,5].heatTransfer.Ts variable */ = data->localData[0]->realVars[114] /* $cse12.T variable */;
  TRACE_POP
}
/*
equation index: 1446
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].stateFlow.d = $cse12.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */ = data->localData[0]->realVars[122] /* $cse12.rho variable */;
  TRACE_POP
}
/*
equation index: 1447
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].Dv = (*Real*)(sign(channel_3.Channel[1,5].D_flow_v)) * $cse11
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */ = (((modelica_real)sign(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */))) * (data->localData[0]->realVars[112] /* $cse11 variable */);
  TRACE_POP
}
/*
equation index: 1448
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].w_flow_v = channel_3.Channel[1,5].Dv / (channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */ = DIVISION_SIM(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */,(data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */),"channel_3.Channel[1,5].f_flow * channel_3.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1449
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_fric = 0.5 * (*Real*)(sign(channel_3.Channel[1,5].w_flow_v)) * channel_3.Channel[1,5].w_flow_v ^ 2.0 * channel_3.Channel[1,5].Xi_flow * channel_3.Channel[1,5].stateFlow.d
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  modelica_real tmp5;
  tmp5 = data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */;
  data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */ = (0.5) * ((((modelica_real)sign(data->localData[0]->realVars[755] /* channel_3.Channel[1,5].w_flow_v variable */))) * (((tmp5 * tmp5)) * ((data->localData[0]->realVars[710] /* channel_3.Channel[1,5].Xi_flow variable */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */))));
  TRACE_POP
}
/*
equation index: 1450
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].dp_piez = 9.806649999999999 * channel_3.Channel[1,5].stateFlow.d * channel_3.Channel[1,5].deltaLpiezo
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */ = (9.806649999999999) * ((data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */) * (data->simulationInfo->realParameter[150] /* channel_3.Channel[1,5].deltaLpiezo PARAM */));
  TRACE_POP
}
/*
equation index: 1451
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].D_flow_v = (channel_3.Channel[1,5].pv - Sink_2.p - (channel_3.Channel[1,5].dp_fric + channel_3.Channel[1,5].dp_piez)) * channel_3.Channel[1,5].f_flow / channel_3.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  data->localData[0]->realVars[81] /* der(channel_3.Channel[1,5].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */ - data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */ - (data->localData[0]->realVars[715] /* channel_3.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[720] /* channel_3.Channel[1,5].dp_piez variable */)) * (data->simulationInfo->realParameter[170] /* channel_3.Channel[1,5].f_flow PARAM */),data->simulationInfo->realParameter[155] /* channel_3.Channel[1,5].deltaLpipe PARAM */,"channel_3.Channel[1,5].deltaLpipe",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1452(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1453(DATA*, threadData_t*);
/*
equation index: 1456
indexNonlinear: 11
type: NONLINEAR

vars: {channel_3.Channel[1,1].H[2]}
eqns: {1452, 1453}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1456 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1456};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1456 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1457(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1458(DATA*, threadData_t*);
/*
equation index: 1461
indexNonlinear: 12
type: NONLINEAR

vars: {channel_3.Channel[1,3].H[1]}
eqns: {1457, 1458}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1461 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1461};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1461 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  TRACE_POP
}
/*
equation index: 1462
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].hv = (channel_3.Channel[1,2].H[1] - channel_3.Channel[1,2].H[2]) / (channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */ - data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,(data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */),"channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1463
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,2].pv = (channel_3.Channel[1,1].D_flow_v - channel_3.Channel[1,2].D_flow_v - channel_3.Channel[1,2].drdh * der(channel_3.Channel[1,2].hv) * channel_3.Channel[1,2].deltaVFlow) / (channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  data->localData[0]->realVars[88] /* der(channel_3.Channel[1,2].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ - data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[722] /* channel_3.Channel[1,2].drdh variable */) * (data->localData[0]->realVars[83] /* der(channel_3.Channel[1,2].hv) STATE_DER */)) * (data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[162] /* channel_3.Channel[1,2].deltaVFlow PARAM */) * (data->localData[0]->realVars[727] /* channel_3.Channel[1,2].drdp variable */),"channel_3.Channel[1,2].deltaVFlow * channel_3.Channel[1,2].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1464(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1465(DATA*, threadData_t*);
/*
equation index: 1468
indexNonlinear: 13
type: NONLINEAR

vars: {channel_3.Channel[1,3].H[2]}
eqns: {1464, 1465}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1468 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1468};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1468 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  TRACE_POP
}
/*
equation index: 1469
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].hv = (channel_3.Channel[1,3].H[1] - channel_3.Channel[1,3].H[2]) / (channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */ - data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,(data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */),"channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1470
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,3].pv = (channel_3.Channel[1,2].D_flow_v - channel_3.Channel[1,3].D_flow_v - channel_3.Channel[1,3].drdh * der(channel_3.Channel[1,3].hv) * channel_3.Channel[1,3].deltaVFlow) / (channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  data->localData[0]->realVars[89] /* der(channel_3.Channel[1,3].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ - data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[723] /* channel_3.Channel[1,3].drdh variable */) * (data->localData[0]->realVars[84] /* der(channel_3.Channel[1,3].hv) STATE_DER */)) * (data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[163] /* channel_3.Channel[1,3].deltaVFlow PARAM */) * (data->localData[0]->realVars[728] /* channel_3.Channel[1,3].drdp variable */),"channel_3.Channel[1,3].deltaVFlow * channel_3.Channel[1,3].drdp",equationIndexes);
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1471(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1472(DATA*, threadData_t*);
/*
equation index: 1475
indexNonlinear: 14
type: NONLINEAR

vars: {channel_3.Channel[1,4].H[2]}
eqns: {1471, 1472}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1475 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1475};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1475 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  TRACE_POP
}
/*
equation index: 1476
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].hv = (channel_3.Channel[1,4].H[1] - channel_3.Channel[1,4].H[2]) / (channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */ - data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,(data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */),"channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1477
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,4].pv = (channel_3.Channel[1,3].D_flow_v - channel_3.Channel[1,4].D_flow_v - channel_3.Channel[1,4].drdh * der(channel_3.Channel[1,4].hv) * channel_3.Channel[1,4].deltaVFlow) / (channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  data->localData[0]->realVars[90] /* der(channel_3.Channel[1,4].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ - data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[724] /* channel_3.Channel[1,4].drdh variable */) * (data->localData[0]->realVars[85] /* der(channel_3.Channel[1,4].hv) STATE_DER */)) * (data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[164] /* channel_3.Channel[1,4].deltaVFlow PARAM */) * (data->localData[0]->realVars[729] /* channel_3.Channel[1,4].drdp variable */),"channel_3.Channel[1,4].deltaVFlow * channel_3.Channel[1,4].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1478
type: SIMPLE_ASSIGN
channel_3.Channel[1,1].H[1] = semiLinear(channel_3.Channel[1,1].D_flow_v, channel_2.Channel[1,5].hv, channel_3.Channel[1,1].hv)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ = semiLinear(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */);
  TRACE_POP
}
/*
equation index: 1479
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].hv = (channel_3.Channel[1,1].H[1] - channel_3.Channel[1,1].H[2]) / (channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */ - data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,(data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * (data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */),"channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1480
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,1].pv = (channel_2.Channel[1,5].D_flow_v - channel_3.Channel[1,1].D_flow_v - channel_3.Channel[1,1].drdh * der(channel_3.Channel[1,1].hv) * channel_3.Channel[1,1].deltaVFlow) / (channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  data->localData[0]->realVars[87] /* der(channel_3.Channel[1,1].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ - data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[721] /* channel_3.Channel[1,1].drdh variable */) * (data->localData[0]->realVars[82] /* der(channel_3.Channel[1,1].hv) STATE_DER */)) * (data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[161] /* channel_3.Channel[1,1].deltaVFlow PARAM */) * (data->localData[0]->realVars[726] /* channel_3.Channel[1,1].drdp variable */),"channel_3.Channel[1,1].deltaVFlow * channel_3.Channel[1,1].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1481
type: SIMPLE_ASSIGN
channel_3.Channel[1,5].H[2] = semiLinear(channel_3.Channel[1,5].D_flow_v, channel_3.Channel[1,5].hv, Sink_2.ports[1].h_outflow)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */ = semiLinear(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */);
  TRACE_POP
}
/*
equation index: 1482
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].hv = (channel_3.Channel[1,5].H[1] - channel_3.Channel[1,5].H[2]) / (channel_3.Channel[1,5].deltaVFlow * channel_3.Channel[1,5].stateFlow.d)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */ - data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */,(data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */),"channel_3.Channel[1,5].deltaVFlow * channel_3.Channel[1,5].stateFlow.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 1483
type: SIMPLE_ASSIGN
$DER.channel_3.Channel[1,5].pv = (channel_3.Channel[1,4].D_flow_v - channel_3.Channel[1,5].D_flow_v - channel_3.Channel[1,5].drdh * der(channel_3.Channel[1,5].hv) * channel_3.Channel[1,5].deltaVFlow) / (channel_3.Channel[1,5].deltaVFlow * channel_3.Channel[1,5].drdp)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  data->localData[0]->realVars[91] /* der(channel_3.Channel[1,5].pv) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ - data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */ - (((data->localData[0]->realVars[725] /* channel_3.Channel[1,5].drdh variable */) * (data->localData[0]->realVars[86] /* der(channel_3.Channel[1,5].hv) STATE_DER */)) * (data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */)),(data->simulationInfo->realParameter[165] /* channel_3.Channel[1,5].deltaVFlow PARAM */) * (data->localData[0]->realVars[730] /* channel_3.Channel[1,5].drdp variable */),"channel_3.Channel[1,5].deltaVFlow * channel_3.Channel[1,5].drdp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1484
type: SIMPLE_ASSIGN
valve_2.filter.u = smooth(0, if noEvent(valve2_pos < valve_2.minLimiter.uMin) then valve_2.minLimiter.uMin else valve2_pos)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[757] /* valve2_pos variable */,data->simulationInfo->realParameter[287] /* valve_2.minLimiter.uMin PARAM */);
  data->localData[0]->realVars[778] /* valve_2.filter.u variable */ = (tmp0?data->simulationInfo->realParameter[287] /* valve_2.minLimiter.uMin PARAM */:data->localData[0]->realVars[757] /* valve2_pos variable */);
  TRACE_POP
}
/*
equation index: 1485
type: SIMPLE_ASSIGN
valve_2.filter.uu[1] = valve_2.filter.u / valve_2.filter.u_nominal
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  data->localData[0]->realVars[779] /* valve_2.filter.uu[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[778] /* valve_2.filter.u variable */,data->simulationInfo->realParameter[279] /* valve_2.filter.u_nominal PARAM */,"valve_2.filter.u_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 1486
type: SIMPLE_ASSIGN
$DER.valve_2.filter.x[1] = valve_2.filter.r[1] * (valve_2.filter.x[1] - valve_2.filter.uu[1])
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  data->localData[0]->realVars[94] /* der(valve_2.filter.x[1]) STATE_DER */ = (data->simulationInfo->realParameter[277] /* valve_2.filter.r[1] PARAM */) * (data->localData[0]->realVars[46] /* valve_2.filter.x[1] STATE(1) */ - data->localData[0]->realVars[779] /* valve_2.filter.uu[1] variable */);
  TRACE_POP
}
/*
equation index: 1487
type: SIMPLE_ASSIGN
$DER.valve_2.filter.x[2] = valve_2.filter.r[2] * (valve_2.filter.x[2] - valve_2.filter.x[1])
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  data->localData[0]->realVars[95] /* der(valve_2.filter.x[2]) STATE_DER */ = (data->simulationInfo->realParameter[278] /* valve_2.filter.r[2] PARAM */) * (data->localData[0]->realVars[47] /* valve_2.filter.x[2] STATE(1) */ - data->localData[0]->realVars[46] /* valve_2.filter.x[1] STATE(1) */);
  TRACE_POP
}
/*
equation index: 1488
type: SIMPLE_ASSIGN
valve_2.opening_filtered = valve_2.filter.gain * valve_2.filter.u_nominal * valve_2.filter.x[2]
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */ = (data->simulationInfo->realParameter[276] /* valve_2.filter.gain PARAM */) * ((data->simulationInfo->realParameter[279] /* valve_2.filter.u_nominal PARAM */) * (data->localData[0]->realVars[47] /* valve_2.filter.x[2] STATE(1) */));
  TRACE_POP
}
/*
equation index: 1489
type: SIMPLE_ASSIGN
$cse7 = Modelica.Fluid.Valves.ValveCompressible$valve_2.xtCharacteristic(valve_2.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  data->localData[0]->realVars[505] /* $cse7 variable */ = omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_xtCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */);
  TRACE_POP
}
/*
equation index: 1490
type: SIMPLE_ASSIGN
$cse4 = Modelica.Fluid.Valves.ValveCompressible$valve_2.valveCharacteristic(valve_2.opening_filtered)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  data->localData[0]->realVars[338] /* $cse4 variable */ = omc_Modelica_Fluid_Valves_D_ValveCompressible24valve__2_valveCharacteristic(threadData, data->localData[0]->realVars[780] /* valve_2.opening_filtered variable */);
  TRACE_POP
}
/*
equation index: 1491
type: SIMPLE_ASSIGN
valve_2.Fxt = valve_2.Fxt_full * $cse7
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  data->localData[0]->realVars[774] /* valve_2.Fxt variable */ = (data->simulationInfo->realParameter[263] /* valve_2.Fxt_full PARAM */) * (data->localData[0]->realVars[505] /* $cse7 variable */);
  TRACE_POP
}
/*
equation index: 1492
type: SIMPLE_ASSIGN
valve_2.state_b.T = $cse2.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  data->localData[0]->realVars[786] /* valve_2.state_b.T variable */ = data->localData[0]->realVars[174] /* $cse2.T variable */;
  TRACE_POP
}
/*
equation index: 1493
type: SIMPLE_ASSIGN
valve_2.port_b_T = Modelica.Fluid.Utilities.regStep(-channel_2.Channel[1,5].D_flow_v, valve_2.state_b.T, $cse8.T, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  data->localData[0]->realVars[783] /* valve_2.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */), data->localData[0]->realVars[786] /* valve_2.state_b.T variable */, data->localData[0]->realVars[507] /* $cse8.T variable */, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1494
type: SIMPLE_ASSIGN
valve_2.state_b.d = $cse2.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  data->localData[0]->realVars[787] /* valve_2.state_b.d variable */ = data->localData[0]->realVars[182] /* $cse2.rho variable */;
  TRACE_POP
}
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1495(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1496(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1497(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1498(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1499(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1500(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1501(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1502(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1503(DATA*, threadData_t*);
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1504(DATA*, threadData_t*);
/*
equation index: 1505
indexNonlinear: 15
type: NONLINEAR

vars: {channel_2.Channel[1,5].p[2]}
eqns: {1495, 1496, 1497, 1498, 1499, 1500, 1501, 1502, 1503, 1504}
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1505 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1505};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1505 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  TRACE_POP
}
/*
equation index: 1506
type: SIMPLE_ASSIGN
$DER.channel_2.Channel[1,5].D_flow_v = (channel_2.Channel[1,5].pv - channel_2.Channel[1,5].p[2] - (channel_2.Channel[1,5].dp_fric + channel_2.Channel[1,5].dp_piez)) * channel_2.Channel[1,5].f_flow / channel_2.Channel[1,5].deltaLpipe
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  data->localData[0]->realVars[66] /* der(channel_2.Channel[1,5].D_flow_v) STATE_DER */ = DIVISION_SIM((data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */ - data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */ - (data->localData[0]->realVars[649] /* channel_2.Channel[1,5].dp_fric variable */ + data->localData[0]->realVars[654] /* channel_2.Channel[1,5].dp_piez variable */)) * (data->simulationInfo->realParameter[104] /* channel_2.Channel[1,5].f_flow PARAM */),data->simulationInfo->realParameter[89] /* channel_2.Channel[1,5].deltaLpipe PARAM */,"channel_2.Channel[1,5].deltaLpipe",equationIndexes);
  TRACE_POP
}
/*
equation index: 1507
type: ALGORITHM

  $cse9 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(channel_2.Channel[1,5].p[2], channel_3.Channel[1,1].hv, 0, 0);
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(tmp0, &(data->localData[0]->integerVars[50] /* $cse9.phase DISCRETE */), &(data->localData[0]->integerVars[51] /* $cse9.region DISCRETE */), &(data->localData[0]->realVars[526] /* $cse9.p variable */), &(data->localData[0]->realVars[521] /* $cse9.T variable */), &(data->localData[0]->realVars[525] /* $cse9.h variable */), &(data->localData[0]->realVars[520] /* $cse9.R variable */), &(data->localData[0]->realVars[522] /* $cse9.cp variable */), &(data->localData[0]->realVars[523] /* $cse9.cv variable */), &(data->localData[0]->realVars[529] /* $cse9.rho variable */), &(data->localData[0]->realVars[530] /* $cse9.s variable */), &(data->localData[0]->realVars[528] /* $cse9.pt variable */), &(data->localData[0]->realVars[527] /* $cse9.pd variable */), &(data->localData[0]->realVars[532] /* $cse9.vt variable */), &(data->localData[0]->realVars[531] /* $cse9.vp variable */), &(data->localData[0]->realVars[533] /* $cse9.x variable */), &(data->localData[0]->realVars[524] /* $cse9.dpT variable */));;
  TRACE_POP
}
/*
equation index: 1508
type: SIMPLE_ASSIGN
$cse10 = Modelica.Fluid.Utilities.regStep(channel_2.Channel[1,5].D_flow_v, valve_2.state_a.d, valve_2.state_b.d, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  data->localData[0]->realVars[111] /* $cse10 variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[785] /* valve_2.state_a.d variable */, data->localData[0]->realVars[787] /* valve_2.state_b.d variable */, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1509
type: SIMPLE_ASSIGN
valve_2.V_flow = channel_2.Channel[1,5].D_flow_v / $cse10
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  data->localData[0]->realVars[775] /* valve_2.V_flow variable */ = DIVISION_SIM(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,data->localData[0]->realVars[111] /* $cse10 variable */,"$cse10",equationIndexes);
  TRACE_POP
}
/*
equation index: 1510
type: SIMPLE_ASSIGN
valve_2.state_a.T = $cse3.T
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  data->localData[0]->realVars[784] /* valve_2.state_a.T variable */ = data->localData[0]->realVars[250] /* $cse3.T variable */;
  TRACE_POP
}
/*
equation index: 1511
type: SIMPLE_ASSIGN
valve_2.port_a_T = Modelica.Fluid.Utilities.regStep(channel_2.Channel[1,5].D_flow_v, valve_2.state_a.T, $cse9.T, valve_2.m_flow_small)
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  data->localData[0]->realVars[782] /* valve_2.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, data->localData[0]->realVars[784] /* valve_2.state_a.T variable */, data->localData[0]->realVars[521] /* $cse9.T variable */, data->simulationInfo->realParameter[285] /* valve_2.m_flow_small PARAM */);
  TRACE_POP
}
/*
equation index: 1512
type: SIMPLE_ASSIGN
Sink_2.state.d = $cse1.rho
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  data->localData[0]->realVars[544] /* Sink_2.state.d variable */ = data->localData[0]->realVars[106] /* $cse1.rho variable */;
  TRACE_POP
}
/*
equation index: 1522
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("WaterIF97", {"water"}, false, true, Sink_2.X, "FixedBoundary");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  static const MMC_DEFSTRINGLIT(tmp1,9,"WaterIF97");
  string_array tmp2;
  static const MMC_DEFSTRINGLIT(tmp3,5,"water");
  real_array tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp2, 1, (modelica_string)MMC_REFSTRINGLIT(tmp3));
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[1] /* Sink_2.X[1] PARAM */)[calc_base_index_dims_subs(1, 1, ((modelica_integer) 1))])), 1, 1);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp1), tmp2, 0, 1, tmp4, MMC_REFSTRINGLIT(tmp5));
  TRACE_POP
}
/*
equation index: 1521
type: ALGORITHM

  assert(valve_1.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,22,"u_nominal > 0 required");
  static int tmp8 = 0;
  {
    tmp6 = Greater(data->simulationInfo->realParameter[246] /* valve_1.filter.u_nominal PARAM */,0.0);
    if(!tmp6)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp7)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1520
type: ALGORITHM

  assert(valve_1.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,21,"A_ripple > 0 required");
  static int tmp11 = 0;
  {
    tmp9 = Greater(data->simulationInfo->realParameter[238] /* valve_1.filter.A_ripple PARAM */,0.0);
    if(!tmp9)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp10)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1519
type: ALGORITHM

  assert(valve_1.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,18,"f_cut > 0 required");
  static int tmp14 = 0;
  {
    tmp12 = Greater(data->simulationInfo->realParameter[241] /* valve_1.filter.f_cut PARAM */,0.0);
    if(!tmp12)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp13)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1518
type: ALGORITHM

  assert(valve_2.filter.u_nominal > 0.0, "u_nominal > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,22,"u_nominal > 0 required");
  static int tmp17 = 0;
  {
    tmp15 = Greater(data->simulationInfo->realParameter[279] /* valve_2.filter.u_nominal PARAM */,0.0);
    if(!tmp15)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp16)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1517
type: ALGORITHM

  assert(valve_2.filter.A_ripple > 0.0, "A_ripple > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,21,"A_ripple > 0 required");
  static int tmp20 = 0;
  {
    tmp18 = Greater(data->simulationInfo->realParameter[271] /* valve_2.filter.A_ripple PARAM */,0.0);
    if(!tmp18)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp19)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1516
type: ALGORITHM

  assert(valve_2.filter.f_cut > 0.0, "f_cut > 0 required");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,18,"f_cut > 0 required");
  static int tmp23 = 0;
  {
    tmp21 = Greater(data->simulationInfo->realParameter[274] /* valve_2.filter.f_cut PARAM */,0.0);
    if(!tmp21)
    {
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp22)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1515
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("WaterIF97", {"water"}, false, true, {1.0}, "Boundary_pT");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  static const MMC_DEFSTRINGLIT(tmp24,9,"WaterIF97");
  string_array tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,5,"water");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp25, 1, (modelica_string)MMC_REFSTRINGLIT(tmp26));
  array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)1.0);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp24), tmp25, 0, 1, tmp27, MMC_REFSTRINGLIT(tmp28));
  TRACE_POP
}
/*
equation index: 1514
type: ALGORITHM

  assert(Sink_2.p >= 0.0, "Pressure (= " + String(Sink_2.p, 6, 0, true) + " Pa) of medium \"" + "WaterIF97" + "\" is negative
(Temperature = " + String(Sink_2.medium.T, 6, 0, true) + " K)");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,12,"Pressure (= ");
  modelica_string tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp33,9,"WaterIF97");
  static const MMC_DEFSTRINGLIT(tmp34,29,"\" is negative\n(Temperature = ");
  modelica_string tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,3," K)");
  static int tmp37 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp29 = GreaterEq(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,0.0);
    if(!tmp29)
    {
      tmp31 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp32));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp33));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp34));
      tmp35 = modelica_real_to_modelica_string(data->localData[0]->realVars[536] /* Sink_2.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp35);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp36));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1513
type: ALGORITHM

  assert(channel_1.Channel[1,1].pv >= 0.0, "Pressure (= " + String(channel_1.Channel[1,1].pv, 6, 0, true) + " Pa) of medium \"" + "WaterIF97" + "\" is negative
(Temperature = " + String(Source_2.medium.T, 6, 0, true) + " K)");
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,12,"Pressure (= ");
  modelica_string tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp42,9,"WaterIF97");
  static const MMC_DEFSTRINGLIT(tmp43,29,"\" is negative\n(Temperature = ");
  modelica_string tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,3," K)");
  static int tmp46 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp38 = GreaterEq(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */,0.0);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp41));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp42));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp43));
      tmp44 = modelica_real_to_modelica_string(data->localData[0]->realVars[549] /* Source_2.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp44);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp45));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].pv >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionLocalKnownVars(data, threadData);
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1175(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1196(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1234(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1235(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1236(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1239(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1240(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1242(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1243(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1244(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1245(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1246(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1247(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1248(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1250(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1251(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1252(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1253(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1254(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1255(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1256(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1257(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1264(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1271(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1278(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1285(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1319(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1323(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1330(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1337(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1344(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1351(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1397(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1398(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1412(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1413(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1414(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1415(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1416(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1417(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1424(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1431(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1438(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1445(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1492(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1493(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1507(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1508(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1509(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1510(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1511(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1512(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1522(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1521(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1520(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1519(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1518(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1517(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1516(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1515(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1514(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1513(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(data, threadData);

    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(data, threadData);
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_12jac.h"
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TPPSim02_Pipes_Tests_PipeChannelFMU_Test_callback = {
   (int (*)(DATA *, threadData_t *, void *)) TPPSim02_Pipes_Tests_PipeChannelFMU_Test_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) TPPSim02_Pipes_Tests_PipeChannelFMU_Test_performQSSSimulation,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateContinuousSystem,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_callExternalObjectDestructors,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initializeStateSets,
   #else
   NULL,
   #endif
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initializeDAEmodeData,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionODE,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionAlgebraics,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionDAE,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionLocalKnownVars,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function_init,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_input_function_updateStartValues,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_data_function,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_output_function,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setc_function,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_storeDelayed,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundVariableAttributes,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionInitialEquations_lambda0,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionRemovedInitialEquations,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_updateBoundParameters,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_checkForAsserts,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_ZeroCrossingsEquations,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_ZeroCrossings,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_updateRelations,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_zeroCrossingDescription,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_relationDescription,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_initSample,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_A,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_B,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_C,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_D,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_INDEX_JAC_F,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianA,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianB,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianC,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianD,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_initialAnalyticJacobianF,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacA_column,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacB_column,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacC_column,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacD_column,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_functionJacF_column,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_linear_model_frame,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_linear_model_datarecovery_frame,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_mayer,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_lagrange,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_pickUpBoundsForInputsInOptimization,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setInputData,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_getTimeGrid,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_symbolicInlineSystem,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_initSynchronous,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_updateSynchronous,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_equationsSynchronous,
   TPPSim02_Pipes_Tests_PipeChannelFMU_Test_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "TPPSim02"
#define _OMC_LIT_RESOURCE_3_dir_data "/TPPSim02"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,9,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TPPSim02_Pipes_Tests_PipeChannelFMU_Test_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TPPSim02.Pipes.Tests.PipeChannelFMU_Test";
  data->modelData->modelFilePrefix = "TPPSim02.Pipes.Tests.PipeChannelFMU_Test";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/TPPSim02/Pipes/Tests";
  data->modelData->modelGUID = "{8135f70d-3d3f-465f-91c2-710af59aac58}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_init.c"
    ;
  static const char contents_info[] =
    #include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 48;
  data->modelData->nVariablesReal = 790;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 74;
  data->modelData->nVariablesBoolean = 4;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 294;
  data->modelData->nParametersInteger = 86;
  data->modelData->nParametersBoolean = 32;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 2;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 247;
  data->modelData->nAliasInteger = 17;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 19;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 22;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 130;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2224;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 16;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 17;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


