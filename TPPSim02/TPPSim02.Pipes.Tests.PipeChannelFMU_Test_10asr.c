/* Asserts */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2223
type: ALGORITHM

  assert(Sink_2.state.d >= 0.0 and Sink_2.state.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= Sink_2.state.d <= 100000.0, has value: " + String(Sink_2.state.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,85,"Variable violating min/max constraint: 0.0 <= Sink_2.state.d <= 100000.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[544] /* Sink_2.state.d variable */,0.0);
    tmp1 = LessEq(data->localData[0]->realVars[544] /* Sink_2.state.d variable */,100000.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[544] /* Sink_2.state.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.state.d >= 0.0 and Sink_2.state.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2075
type: ALGORITHM

  assert(Sink_2.medium.d >= 0.0 and Sink_2.medium.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= Sink_2.medium.d <= 100000.0, has value: " + String(Sink_2.medium.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2075};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,86,"Variable violating min/max constraint: 0.0 <= Sink_2.medium.d <= 100000.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[539] /* Sink_2.medium.d variable */,0.0);
    tmp6 = LessEq(data->localData[0]->realVars[539] /* Sink_2.medium.d variable */,100000.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[539] /* Sink_2.medium.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4481,7,4481,36,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.d >= 0.0 and Sink_2.medium.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2076
type: ALGORITHM

  assert(Sink_2.medium.T >= 273.15 and Sink_2.medium.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= Sink_2.medium.T <= 2273.15, has value: " + String(Sink_2.medium.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2076};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,88,"Variable violating min/max constraint: 273.15 <= Sink_2.medium.T <= 2273.15, has value: ");
  modelica_string tmp13;
  static int tmp14 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp14)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[536] /* Sink_2.medium.T variable */,273.15);
    tmp11 = LessEq(data->localData[0]->realVars[536] /* Sink_2.medium.T variable */,2273.15);
    if(!(tmp10 && tmp11))
    {
      tmp13 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[536] /* Sink_2.medium.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4482,7,4482,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.T >= 273.15 and Sink_2.medium.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2077
type: ALGORITHM

  assert(Sink_2.medium.u >= -100000000.0 and Sink_2.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= Sink_2.medium.u <= 100000000.0, has value: " + String(Sink_2.medium.u, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2077};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,98,"Variable violating min/max constraint: -100000000.0 <= Sink_2.medium.u <= 100000000.0, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp15 = GreaterEq(data->localData[0]->realVars[542] /* Sink_2.medium.u variable */,-100000000.0);
    tmp16 = LessEq(data->localData[0]->realVars[542] /* Sink_2.medium.u variable */,100000000.0);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[542] /* Sink_2.medium.u variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4485,7,4485,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.u >= -100000000.0 and Sink_2.medium.u <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2078
type: ALGORITHM

  assert(Sink_2.medium.phase >= 0 and Sink_2.medium.phase <= 2, "Variable violating min/max constraint: 0 <= Sink_2.medium.phase <= 2, has value: " + String(Sink_2.medium.phase, "d"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2078};
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,81,"Variable violating min/max constraint: 0 <= Sink_2.medium.phase <= 2, has value: ");
  modelica_string tmp23;
  static int tmp24 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp24)
  {
    tmp20 = GreaterEq(data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */,((modelica_integer) 0));
    tmp21 = LessEq(data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */,((modelica_integer) 2));
    if(!(tmp20 && tmp21))
    {
      tmp23 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[52] /* Sink_2.medium.phase DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",165,5,169,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.medium.phase >= 0 and Sink_2.medium.phase <= 2", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp24 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2079
type: ALGORITHM

  assert(Sink_2.ports[1].h_outflow >= -10000000000.0 and Sink_2.ports[1].h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= Sink_2.ports[1].h_outflow <= 10000000000.0, has value: " + String(Sink_2.ports[1].h_outflow, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2079};
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,112,"Variable violating min/max constraint: -10000000000.0 <= Sink_2.ports[1].h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp29)
  {
    tmp25 = GreaterEq(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */,-10000000000.0);
    tmp26 = LessEq(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */,10000000000.0);
    if(!(tmp25 && tmp26))
    {
      tmp28 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",16,5,17,84,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSink_2.ports[1].h_outflow >= -10000000000.0 and Sink_2.ports[1].h_outflow <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp29 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2080
type: ALGORITHM

  assert(Source_2.medium.d >= 0.0 and Source_2.medium.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= Source_2.medium.d <= 100000.0, has value: " + String(Source_2.medium.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2080};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,88,"Variable violating min/max constraint: 0.0 <= Source_2.medium.d <= 100000.0, has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp30 = GreaterEq(data->localData[0]->realVars[552] /* Source_2.medium.d variable */,0.0);
    tmp31 = LessEq(data->localData[0]->realVars[552] /* Source_2.medium.d variable */,100000.0);
    if(!(tmp30 && tmp31))
    {
      tmp33 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[552] /* Source_2.medium.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4481,7,4481,36,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.medium.d >= 0.0 and Source_2.medium.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2081
type: ALGORITHM

  assert(Source_2.medium.T >= 273.15 and Source_2.medium.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= Source_2.medium.T <= 2273.15, has value: " + String(Source_2.medium.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2081};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,90,"Variable violating min/max constraint: 273.15 <= Source_2.medium.T <= 2273.15, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp35 = GreaterEq(data->localData[0]->realVars[549] /* Source_2.medium.T variable */,273.15);
    tmp36 = LessEq(data->localData[0]->realVars[549] /* Source_2.medium.T variable */,2273.15);
    if(!(tmp35 && tmp36))
    {
      tmp38 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[549] /* Source_2.medium.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4482,7,4482,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.medium.T >= 273.15 and Source_2.medium.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2082
type: ALGORITHM

  assert(Source_2.medium.u >= -100000000.0 and Source_2.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= Source_2.medium.u <= 100000000.0, has value: " + String(Source_2.medium.u, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2082};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,100,"Variable violating min/max constraint: -100000000.0 <= Source_2.medium.u <= 100000000.0, has value: ");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp44)
  {
    tmp40 = GreaterEq(data->localData[0]->realVars[555] /* Source_2.medium.u variable */,-100000000.0);
    tmp41 = LessEq(data->localData[0]->realVars[555] /* Source_2.medium.u variable */,100000000.0);
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[555] /* Source_2.medium.u variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4485,7,4485,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.medium.u >= -100000000.0 and Source_2.medium.u <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp44 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2083
type: ALGORITHM

  assert(Source_2.medium.sat.Tsat >= 273.15 and Source_2.medium.sat.Tsat <= 2273.15, "Variable violating min/max constraint: 273.15 <= Source_2.medium.sat.Tsat <= 2273.15, has value: " + String(Source_2.medium.sat.Tsat, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2083};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,97,"Variable violating min/max constraint: 273.15 <= Source_2.medium.sat.Tsat <= 2273.15, has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp45 = GreaterEq(data->localData[0]->realVars[554] /* Source_2.medium.sat.Tsat variable */,273.15);
    tmp46 = LessEq(data->localData[0]->realVars[554] /* Source_2.medium.sat.Tsat variable */,2273.15);
    if(!(tmp45 && tmp46))
    {
      tmp48 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[554] /* Source_2.medium.sat.Tsat variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",7157,7,7157,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.medium.sat.Tsat >= 273.15 and Source_2.medium.sat.Tsat <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2084
type: ALGORITHM

  assert(Source_2.medium.phase >= 0 and Source_2.medium.phase <= 2, "Variable violating min/max constraint: 0 <= Source_2.medium.phase <= 2, has value: " + String(Source_2.medium.phase, "d"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2084};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,83,"Variable violating min/max constraint: 0 <= Source_2.medium.phase <= 2, has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp50 = GreaterEq(data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */,((modelica_integer) 0));
    tmp51 = LessEq(data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */,((modelica_integer) 2));
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_integer_to_modelica_string_format(data->localData[0]->integerVars[54] /* Source_2.medium.phase DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",165,5,169,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.medium.phase >= 0 and Source_2.medium.phase <= 2", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2085
type: ALGORITHM

  assert(Source_2.ports[1].h_outflow >= -10000000000.0 and Source_2.ports[1].h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= Source_2.ports[1].h_outflow <= 10000000000.0, has value: " + String(Source_2.ports[1].h_outflow, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2085};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,114,"Variable violating min/max constraint: -10000000000.0 <= Source_2.ports[1].h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp55 = GreaterEq(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */,-10000000000.0);
    tmp56 = LessEq(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */,10000000000.0);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",16,5,17,84,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nSource_2.ports[1].h_outflow >= -10000000000.0 and Source_2.ports[1].h_outflow <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2086
type: ALGORITHM

  assert(channel_1.Channel[1,1].stateFlow.d >= 0.0 and channel_1.Channel[1,1].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,1].stateFlow.d <= 100000.0, has value: " + String(channel_1.Channel[1,1].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2086};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,105,"Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,1].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp63;
  static int tmp64 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp64)
  {
    tmp60 = GreaterEq(data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */,0.0);
    tmp61 = LessEq(data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */,100000.0);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[615] /* channel_1.Channel[1,1].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].stateFlow.d >= 0.0 and channel_1.Channel[1,1].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp64 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2087
type: ALGORITHM

  assert(channel_1.Channel[1,1].H[1] >= -10000000000.0 and channel_1.Channel[1,1].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].H[1] <= 10000000000.0, has value: " + String(channel_1.Channel[1,1].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2087};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp65 = GreaterEq(data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */,-10000000000.0);
    tmp66 = LessEq(data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */,10000000000.0);
    if(!(tmp65 && tmp66))
    {
      tmp68 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[563] /* channel_1.Channel[1,1].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].H[1] >= -10000000000.0 and channel_1.Channel[1,1].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2088
type: ALGORITHM

  assert(channel_1.Channel[1,1].H[2] >= -10000000000.0 and channel_1.Channel[1,1].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].H[2] <= 10000000000.0, has value: " + String(channel_1.Channel[1,1].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp74)
  {
    tmp70 = GreaterEq(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,-10000000000.0);
    tmp71 = LessEq(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */,10000000000.0);
    if(!(tmp70 && tmp71))
    {
      tmp73 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[564] /* channel_1.Channel[1,1].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].H[2] >= -10000000000.0 and channel_1.Channel[1,1].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp74 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2089
type: ALGORITHM

  assert(channel_1.Channel[1,1].D[1] >= -100000.0 and channel_1.Channel[1,1].D[1] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].D[1] <= 100000.0, has value: " + String(channel_1.Channel[1,1].D[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,104,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].D[1] <= 100000.0, has value: ");
  modelica_string tmp78;
  static int tmp79 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp79)
  {
    tmp75 = GreaterEq(data->localData[0]->realVars[557] /* channel_1.Channel[1,1].D[1] variable */,-100000.0);
    tmp76 = LessEq(data->localData[0]->realVars[557] /* channel_1.Channel[1,1].D[1] variable */,100000.0);
    if(!(tmp75 && tmp76))
    {
      tmp78 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[557] /* channel_1.Channel[1,1].D[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",33,3,33,119,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].D[1] >= -100000.0 and channel_1.Channel[1,1].D[1] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp79 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2090
type: ALGORITHM

  assert(channel_1.Channel[1,1].hv >= -10000000000.0 and channel_1.Channel[1,1].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].hv <= 10000000000.0, has value: " + String(channel_1.Channel[1,1].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2090};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,112,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,1].hv <= 10000000000.0, has value: ");
  modelica_string tmp83;
  static int tmp84 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp84)
  {
    tmp80 = GreaterEq(data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */,-10000000000.0);
    tmp81 = LessEq(data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */,10000000000.0);
    if(!(tmp80 && tmp81))
    {
      tmp83 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[5] /* channel_1.Channel[1,1].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].hv >= -10000000000.0 and channel_1.Channel[1,1].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp84 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2091
type: ALGORITHM

  assert(channel_1.Channel[1,1].pv >= 611.657 and channel_1.Channel[1,1].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,1].pv <= 100000000.0, has value: " + String(channel_1.Channel[1,1].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,103,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,1].pv <= 100000000.0, has value: ");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp89)
  {
    tmp85 = GreaterEq(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */,611.657);
    tmp86 = LessEq(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */,100000000.0);
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].pv >= 611.657 and channel_1.Channel[1,1].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp89 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2092
type: ALGORITHM

  assert(channel_1.Channel[1,1].Dv >= -100000.0 and channel_1.Channel[1,1].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].Dv <= 100000.0, has value: " + String(channel_1.Channel[1,1].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2092};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,102,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].Dv <= 100000.0, has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp90 = GreaterEq(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */,-100000.0);
    tmp91 = LessEq(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */,100000.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[558] /* channel_1.Channel[1,1].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].Dv >= -100000.0 and channel_1.Channel[1,1].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp94 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2093
type: ALGORITHM

  assert(channel_1.Channel[1,1].D_flow_v >= -100000.0 and channel_1.Channel[1,1].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].D_flow_v <= 100000.0, has value: " + String(channel_1.Channel[1,1].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2093};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,108,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,1].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp95 = GreaterEq(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */,-100000.0);
    tmp96 = LessEq(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */,100000.0);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].D_flow_v >= -100000.0 and channel_1.Channel[1,1].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2094
type: ALGORITHM

  assert(channel_1.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,1].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: " + String(channel_1.Channel[1,1].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2094};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,111,"Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp103;
  static int tmp104 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp104)
  {
    tmp100 = GreaterEq(data->localData[0]->realVars[603] /* channel_1.Channel[1,1].heatTransfer.Ts variable */,273.15);
    tmp101 = LessEq(data->localData[0]->realVars[603] /* channel_1.Channel[1,1].heatTransfer.Ts variable */,2273.15);
    if(!(tmp100 && tmp101))
    {
      tmp103 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[603] /* channel_1.Channel[1,1].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,1].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2095
type: ALGORITHM

  assert(channel_1.Channel[1,2].stateFlow.d >= 0.0 and channel_1.Channel[1,2].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,2].stateFlow.d <= 100000.0, has value: " + String(channel_1.Channel[1,2].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2095};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,105,"Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,2].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp105 = GreaterEq(data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */,0.0);
    tmp106 = LessEq(data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */,100000.0);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[616] /* channel_1.Channel[1,2].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].stateFlow.d >= 0.0 and channel_1.Channel[1,2].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2096
type: ALGORITHM

  assert(channel_1.Channel[1,2].H[1] >= -10000000000.0 and channel_1.Channel[1,2].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].H[1] <= 10000000000.0, has value: " + String(channel_1.Channel[1,2].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp113;
  static int tmp114 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp114)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */,-10000000000.0);
    tmp111 = LessEq(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */,10000000000.0);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[565] /* channel_1.Channel[1,2].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].H[1] >= -10000000000.0 and channel_1.Channel[1,2].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2097
type: ALGORITHM

  assert(channel_1.Channel[1,2].H[2] >= -10000000000.0 and channel_1.Channel[1,2].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].H[2] <= 10000000000.0, has value: " + String(channel_1.Channel[1,2].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2097};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp115 = GreaterEq(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,-10000000000.0);
    tmp116 = LessEq(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */,10000000000.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[566] /* channel_1.Channel[1,2].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].H[2] >= -10000000000.0 and channel_1.Channel[1,2].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2098
type: ALGORITHM

  assert(channel_1.Channel[1,2].hv >= -10000000000.0 and channel_1.Channel[1,2].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].hv <= 10000000000.0, has value: " + String(channel_1.Channel[1,2].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,112,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,2].hv <= 10000000000.0, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */,-10000000000.0);
    tmp121 = LessEq(data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */,10000000000.0);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* channel_1.Channel[1,2].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].hv >= -10000000000.0 and channel_1.Channel[1,2].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2099
type: ALGORITHM

  assert(channel_1.Channel[1,2].pv >= 611.657 and channel_1.Channel[1,2].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,2].pv <= 100000000.0, has value: " + String(channel_1.Channel[1,2].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,103,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,2].pv <= 100000000.0, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */,611.657);
    tmp126 = LessEq(data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */,100000000.0);
    if(!(tmp125 && tmp126))
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[10] /* channel_1.Channel[1,2].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].pv >= 611.657 and channel_1.Channel[1,2].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2100
type: ALGORITHM

  assert(channel_1.Channel[1,2].Dv >= -100000.0 and channel_1.Channel[1,2].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,2].Dv <= 100000.0, has value: " + String(channel_1.Channel[1,2].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,102,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,2].Dv <= 100000.0, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */,-100000.0);
    tmp131 = LessEq(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */,100000.0);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[559] /* channel_1.Channel[1,2].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].Dv >= -100000.0 and channel_1.Channel[1,2].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2101
type: ALGORITHM

  assert(channel_1.Channel[1,2].D_flow_v >= -100000.0 and channel_1.Channel[1,2].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,2].D_flow_v <= 100000.0, has value: " + String(channel_1.Channel[1,2].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,108,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,2].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,-100000.0);
    tmp136 = LessEq(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */,100000.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].D_flow_v >= -100000.0 and channel_1.Channel[1,2].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2102
type: ALGORITHM

  assert(channel_1.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,2].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: " + String(channel_1.Channel[1,2].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,111,"Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[604] /* channel_1.Channel[1,2].heatTransfer.Ts variable */,273.15);
    tmp141 = LessEq(data->localData[0]->realVars[604] /* channel_1.Channel[1,2].heatTransfer.Ts variable */,2273.15);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[604] /* channel_1.Channel[1,2].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,2].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2103
type: ALGORITHM

  assert(channel_1.Channel[1,3].stateFlow.d >= 0.0 and channel_1.Channel[1,3].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,3].stateFlow.d <= 100000.0, has value: " + String(channel_1.Channel[1,3].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,105,"Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,3].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp145 = GreaterEq(data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */,0.0);
    tmp146 = LessEq(data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */,100000.0);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[617] /* channel_1.Channel[1,3].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].stateFlow.d >= 0.0 and channel_1.Channel[1,3].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2104
type: ALGORITHM

  assert(channel_1.Channel[1,3].H[1] >= -10000000000.0 and channel_1.Channel[1,3].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].H[1] <= 10000000000.0, has value: " + String(channel_1.Channel[1,3].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp153;
  static int tmp154 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp154)
  {
    tmp150 = GreaterEq(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */,-10000000000.0);
    tmp151 = LessEq(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */,10000000000.0);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[567] /* channel_1.Channel[1,3].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].H[1] >= -10000000000.0 and channel_1.Channel[1,3].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp154 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2105
type: ALGORITHM

  assert(channel_1.Channel[1,3].H[2] >= -10000000000.0 and channel_1.Channel[1,3].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].H[2] <= 10000000000.0, has value: " + String(channel_1.Channel[1,3].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp155 = GreaterEq(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,-10000000000.0);
    tmp156 = LessEq(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */,10000000000.0);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[568] /* channel_1.Channel[1,3].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].H[2] >= -10000000000.0 and channel_1.Channel[1,3].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2106
type: ALGORITHM

  assert(channel_1.Channel[1,3].hv >= -10000000000.0 and channel_1.Channel[1,3].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].hv <= 10000000000.0, has value: " + String(channel_1.Channel[1,3].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,112,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,3].hv <= 10000000000.0, has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */,-10000000000.0);
    tmp161 = LessEq(data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */,10000000000.0);
    if(!(tmp160 && tmp161))
    {
      tmp163 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[7] /* channel_1.Channel[1,3].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].hv >= -10000000000.0 and channel_1.Channel[1,3].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2107
type: ALGORITHM

  assert(channel_1.Channel[1,3].pv >= 611.657 and channel_1.Channel[1,3].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,3].pv <= 100000000.0, has value: " + String(channel_1.Channel[1,3].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2107};
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,103,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,3].pv <= 100000000.0, has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp165 = GreaterEq(data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */,611.657);
    tmp166 = LessEq(data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */,100000000.0);
    if(!(tmp165 && tmp166))
    {
      tmp168 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[11] /* channel_1.Channel[1,3].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].pv >= 611.657 and channel_1.Channel[1,3].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2108
type: ALGORITHM

  assert(channel_1.Channel[1,3].Dv >= -100000.0 and channel_1.Channel[1,3].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,3].Dv <= 100000.0, has value: " + String(channel_1.Channel[1,3].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2108};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,102,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,3].Dv <= 100000.0, has value: ");
  modelica_string tmp173;
  static int tmp174 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp174)
  {
    tmp170 = GreaterEq(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */,-100000.0);
    tmp171 = LessEq(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */,100000.0);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[560] /* channel_1.Channel[1,3].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].Dv >= -100000.0 and channel_1.Channel[1,3].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2109
type: ALGORITHM

  assert(channel_1.Channel[1,3].D_flow_v >= -100000.0 and channel_1.Channel[1,3].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,3].D_flow_v <= 100000.0, has value: " + String(channel_1.Channel[1,3].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,108,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,3].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp175 = GreaterEq(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,-100000.0);
    tmp176 = LessEq(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */,100000.0);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].D_flow_v >= -100000.0 and channel_1.Channel[1,3].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2110
type: ALGORITHM

  assert(channel_1.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,3].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: " + String(channel_1.Channel[1,3].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2110};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,111,"Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[605] /* channel_1.Channel[1,3].heatTransfer.Ts variable */,273.15);
    tmp181 = LessEq(data->localData[0]->realVars[605] /* channel_1.Channel[1,3].heatTransfer.Ts variable */,2273.15);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[605] /* channel_1.Channel[1,3].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,3].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2111
type: ALGORITHM

  assert(channel_1.Channel[1,4].stateFlow.d >= 0.0 and channel_1.Channel[1,4].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,4].stateFlow.d <= 100000.0, has value: " + String(channel_1.Channel[1,4].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2111};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,105,"Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,4].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */,0.0);
    tmp186 = LessEq(data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */,100000.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[618] /* channel_1.Channel[1,4].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].stateFlow.d >= 0.0 and channel_1.Channel[1,4].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2112
type: ALGORITHM

  assert(channel_1.Channel[1,4].H[1] >= -10000000000.0 and channel_1.Channel[1,4].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].H[1] <= 10000000000.0, has value: " + String(channel_1.Channel[1,4].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2112};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */,-10000000000.0);
    tmp191 = LessEq(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */,10000000000.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[569] /* channel_1.Channel[1,4].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].H[1] >= -10000000000.0 and channel_1.Channel[1,4].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2113
type: ALGORITHM

  assert(channel_1.Channel[1,4].H[2] >= -10000000000.0 and channel_1.Channel[1,4].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].H[2] <= 10000000000.0, has value: " + String(channel_1.Channel[1,4].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2113};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,-10000000000.0);
    tmp196 = LessEq(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */,10000000000.0);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[570] /* channel_1.Channel[1,4].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].H[2] >= -10000000000.0 and channel_1.Channel[1,4].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2114
type: ALGORITHM

  assert(channel_1.Channel[1,4].hv >= -10000000000.0 and channel_1.Channel[1,4].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].hv <= 10000000000.0, has value: " + String(channel_1.Channel[1,4].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2114};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,112,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,4].hv <= 10000000000.0, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */,-10000000000.0);
    tmp201 = LessEq(data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */,10000000000.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[8] /* channel_1.Channel[1,4].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].hv >= -10000000000.0 and channel_1.Channel[1,4].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2115
type: ALGORITHM

  assert(channel_1.Channel[1,4].pv >= 611.657 and channel_1.Channel[1,4].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,4].pv <= 100000000.0, has value: " + String(channel_1.Channel[1,4].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2115};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,103,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,4].pv <= 100000000.0, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */,611.657);
    tmp206 = LessEq(data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */,100000000.0);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[12] /* channel_1.Channel[1,4].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].pv >= 611.657 and channel_1.Channel[1,4].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2116
type: ALGORITHM

  assert(channel_1.Channel[1,4].Dv >= -100000.0 and channel_1.Channel[1,4].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,4].Dv <= 100000.0, has value: " + String(channel_1.Channel[1,4].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2116};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,102,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,4].Dv <= 100000.0, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */,-100000.0);
    tmp211 = LessEq(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */,100000.0);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[561] /* channel_1.Channel[1,4].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].Dv >= -100000.0 and channel_1.Channel[1,4].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2117
type: ALGORITHM

  assert(channel_1.Channel[1,4].D_flow_v >= -100000.0 and channel_1.Channel[1,4].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,4].D_flow_v <= 100000.0, has value: " + String(channel_1.Channel[1,4].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2117};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,108,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,4].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp215 = GreaterEq(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,-100000.0);
    tmp216 = LessEq(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */,100000.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].D_flow_v >= -100000.0 and channel_1.Channel[1,4].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2118
type: ALGORITHM

  assert(channel_1.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,4].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: " + String(channel_1.Channel[1,4].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2118};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,111,"Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp220 = GreaterEq(data->localData[0]->realVars[606] /* channel_1.Channel[1,4].heatTransfer.Ts variable */,273.15);
    tmp221 = LessEq(data->localData[0]->realVars[606] /* channel_1.Channel[1,4].heatTransfer.Ts variable */,2273.15);
    if(!(tmp220 && tmp221))
    {
      tmp223 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[606] /* channel_1.Channel[1,4].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,4].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2119
type: ALGORITHM

  assert(channel_1.Channel[1,5].stateFlow.d >= 0.0 and channel_1.Channel[1,5].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,5].stateFlow.d <= 100000.0, has value: " + String(channel_1.Channel[1,5].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2119};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,105,"Variable violating min/max constraint: 0.0 <= channel_1.Channel[1,5].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp225 = GreaterEq(data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */,0.0);
    tmp226 = LessEq(data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */,100000.0);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[619] /* channel_1.Channel[1,5].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].stateFlow.d >= 0.0 and channel_1.Channel[1,5].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2120
type: ALGORITHM

  assert(channel_1.Channel[1,5].p[2] >= 611.657 and channel_1.Channel[1,5].p[2] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].p[2] <= 100000000.0, has value: " + String(channel_1.Channel[1,5].p[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2120};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,105,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].p[2] <= 100000000.0, has value: ");
  modelica_string tmp233;
  static int tmp234 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp234)
  {
    tmp230 = GreaterEq(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */,611.657);
    tmp231 = LessEq(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */,100000000.0);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[613] /* channel_1.Channel[1,5].p[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",31,3,31,110,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].p[2] >= 611.657 and channel_1.Channel[1,5].p[2] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2121
type: ALGORITHM

  assert(channel_1.Channel[1,5].H[1] >= -10000000000.0 and channel_1.Channel[1,5].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].H[1] <= 10000000000.0, has value: " + String(channel_1.Channel[1,5].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2121};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp235 = GreaterEq(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */,-10000000000.0);
    tmp236 = LessEq(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */,10000000000.0);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[571] /* channel_1.Channel[1,5].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].H[1] >= -10000000000.0 and channel_1.Channel[1,5].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2122
type: ALGORITHM

  assert(channel_1.Channel[1,5].H[2] >= -10000000000.0 and channel_1.Channel[1,5].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].H[2] <= 10000000000.0, has value: " + String(channel_1.Channel[1,5].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2122};
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,114,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp240 = GreaterEq(data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */,-10000000000.0);
    tmp241 = LessEq(data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */,10000000000.0);
    if(!(tmp240 && tmp241))
    {
      tmp243 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[572] /* channel_1.Channel[1,5].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].H[2] >= -10000000000.0 and channel_1.Channel[1,5].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2123
type: ALGORITHM

  assert(channel_1.Channel[1,5].hv >= -10000000000.0 and channel_1.Channel[1,5].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].hv <= 10000000000.0, has value: " + String(channel_1.Channel[1,5].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2123};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,112,"Variable violating min/max constraint: -10000000000.0 <= channel_1.Channel[1,5].hv <= 10000000000.0, has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp245 = GreaterEq(data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */,-10000000000.0);
    tmp246 = LessEq(data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */,10000000000.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[9] /* channel_1.Channel[1,5].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].hv >= -10000000000.0 and channel_1.Channel[1,5].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2124
type: ALGORITHM

  assert(channel_1.Channel[1,5].pv >= 611.657 and channel_1.Channel[1,5].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].pv <= 100000000.0, has value: " + String(channel_1.Channel[1,5].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2124};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,103,"Variable violating min/max constraint: 611.657 <= channel_1.Channel[1,5].pv <= 100000000.0, has value: ");
  modelica_string tmp253;
  static int tmp254 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp254)
  {
    tmp250 = GreaterEq(data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */,611.657);
    tmp251 = LessEq(data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */,100000000.0);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[13] /* channel_1.Channel[1,5].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].pv >= 611.657 and channel_1.Channel[1,5].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp254 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2125
type: ALGORITHM

  assert(channel_1.Channel[1,5].Dv >= -100000.0 and channel_1.Channel[1,5].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,5].Dv <= 100000.0, has value: " + String(channel_1.Channel[1,5].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2125};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,102,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,5].Dv <= 100000.0, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp255 = GreaterEq(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */,-100000.0);
    tmp256 = LessEq(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */,100000.0);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[562] /* channel_1.Channel[1,5].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].Dv >= -100000.0 and channel_1.Channel[1,5].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2126
type: ALGORITHM

  assert(channel_1.Channel[1,5].D_flow_v >= -100000.0 and channel_1.Channel[1,5].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,5].D_flow_v <= 100000.0, has value: " + String(channel_1.Channel[1,5].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2126};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,108,"Variable violating min/max constraint: -100000.0 <= channel_1.Channel[1,5].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp263;
  static int tmp264 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp264)
  {
    tmp260 = GreaterEq(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,-100000.0);
    tmp261 = LessEq(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */,100000.0);
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].D_flow_v >= -100000.0 and channel_1.Channel[1,5].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2127
type: ALGORITHM

  assert(channel_1.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,5].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: " + String(channel_1.Channel[1,5].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,111,"Variable violating min/max constraint: 273.15 <= channel_1.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp268;
  static int tmp269 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp269)
  {
    tmp265 = GreaterEq(data->localData[0]->realVars[607] /* channel_1.Channel[1,5].heatTransfer.Ts variable */,273.15);
    tmp266 = LessEq(data->localData[0]->realVars[607] /* channel_1.Channel[1,5].heatTransfer.Ts variable */,2273.15);
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[607] /* channel_1.Channel[1,5].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_1.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_1.Channel[1,5].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2128
type: ALGORITHM

  assert(channel_2.Channel[1,1].stateFlow.d >= 0.0 and channel_2.Channel[1,1].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,1].stateFlow.d <= 100000.0, has value: " + String(channel_2.Channel[1,1].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2128};
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  static const MMC_DEFSTRINGLIT(tmp272,105,"Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,1].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp273;
  static int tmp274 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp274)
  {
    tmp270 = GreaterEq(data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */,0.0);
    tmp271 = LessEq(data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */,100000.0);
    if(!(tmp270 && tmp271))
    {
      tmp273 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[681] /* channel_2.Channel[1,1].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp272),tmp273);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].stateFlow.d >= 0.0 and channel_2.Channel[1,1].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp274 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2129
type: ALGORITHM

  assert(channel_2.Channel[1,1].H[1] >= -10000000000.0 and channel_2.Channel[1,1].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].H[1] <= 10000000000.0, has value: " + String(channel_2.Channel[1,1].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2129};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp278;
  static int tmp279 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp279)
  {
    tmp275 = GreaterEq(data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */,-10000000000.0);
    tmp276 = LessEq(data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */,10000000000.0);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[630] /* channel_2.Channel[1,1].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].H[1] >= -10000000000.0 and channel_2.Channel[1,1].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2130
type: ALGORITHM

  assert(channel_2.Channel[1,1].H[2] >= -10000000000.0 and channel_2.Channel[1,1].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].H[2] <= 10000000000.0, has value: " + String(channel_2.Channel[1,1].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2130};
  modelica_boolean tmp280;
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp283;
  static int tmp284 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp284)
  {
    tmp280 = GreaterEq(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,-10000000000.0);
    tmp281 = LessEq(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */,10000000000.0);
    if(!(tmp280 && tmp281))
    {
      tmp283 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[631] /* channel_2.Channel[1,1].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].H[2] >= -10000000000.0 and channel_2.Channel[1,1].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp284 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2131
type: ALGORITHM

  assert(channel_2.Channel[1,1].hv >= -10000000000.0 and channel_2.Channel[1,1].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].hv <= 10000000000.0, has value: " + String(channel_2.Channel[1,1].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2131};
  modelica_boolean tmp285;
  modelica_boolean tmp286;
  static const MMC_DEFSTRINGLIT(tmp287,112,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,1].hv <= 10000000000.0, has value: ");
  modelica_string tmp288;
  static int tmp289 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp289)
  {
    tmp285 = GreaterEq(data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */,-10000000000.0);
    tmp286 = LessEq(data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */,10000000000.0);
    if(!(tmp285 && tmp286))
    {
      tmp288 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[19] /* channel_2.Channel[1,1].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp287),tmp288);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].hv >= -10000000000.0 and channel_2.Channel[1,1].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2132
type: ALGORITHM

  assert(channel_2.Channel[1,1].pv >= 611.657 and channel_2.Channel[1,1].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,1].pv <= 100000000.0, has value: " + String(channel_2.Channel[1,1].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2132};
  modelica_boolean tmp290;
  modelica_boolean tmp291;
  static const MMC_DEFSTRINGLIT(tmp292,103,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,1].pv <= 100000000.0, has value: ");
  modelica_string tmp293;
  static int tmp294 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp294)
  {
    tmp290 = GreaterEq(data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */,611.657);
    tmp291 = LessEq(data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */,100000000.0);
    if(!(tmp290 && tmp291))
    {
      tmp293 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[24] /* channel_2.Channel[1,1].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp292),tmp293);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].pv >= 611.657 and channel_2.Channel[1,1].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp294 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2133
type: ALGORITHM

  assert(channel_2.Channel[1,1].Dv >= -100000.0 and channel_2.Channel[1,1].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,1].Dv <= 100000.0, has value: " + String(channel_2.Channel[1,1].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2133};
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,102,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,1].Dv <= 100000.0, has value: ");
  modelica_string tmp298;
  static int tmp299 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp299)
  {
    tmp295 = GreaterEq(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */,-100000.0);
    tmp296 = LessEq(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */,100000.0);
    if(!(tmp295 && tmp296))
    {
      tmp298 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[625] /* channel_2.Channel[1,1].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].Dv >= -100000.0 and channel_2.Channel[1,1].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp299 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2134
type: ALGORITHM

  assert(channel_2.Channel[1,1].D_flow_v >= -100000.0 and channel_2.Channel[1,1].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,1].D_flow_v <= 100000.0, has value: " + String(channel_2.Channel[1,1].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2134};
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,108,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,1].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp303;
  static int tmp304 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp304)
  {
    tmp300 = GreaterEq(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */,-100000.0);
    tmp301 = LessEq(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */,100000.0);
    if(!(tmp300 && tmp301))
    {
      tmp303 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].D_flow_v >= -100000.0 and channel_2.Channel[1,1].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp304 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2135
type: ALGORITHM

  assert(channel_2.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,1].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: " + String(channel_2.Channel[1,1].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2135};
  modelica_boolean tmp305;
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,111,"Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp308;
  static int tmp309 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp309)
  {
    tmp305 = GreaterEq(data->localData[0]->realVars[670] /* channel_2.Channel[1,1].heatTransfer.Ts variable */,273.15);
    tmp306 = LessEq(data->localData[0]->realVars[670] /* channel_2.Channel[1,1].heatTransfer.Ts variable */,2273.15);
    if(!(tmp305 && tmp306))
    {
      tmp308 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[670] /* channel_2.Channel[1,1].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,1].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp309 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2136
type: ALGORITHM

  assert(channel_2.Channel[1,2].stateFlow.d >= 0.0 and channel_2.Channel[1,2].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,2].stateFlow.d <= 100000.0, has value: " + String(channel_2.Channel[1,2].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2136};
  modelica_boolean tmp310;
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,105,"Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,2].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp313;
  static int tmp314 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp314)
  {
    tmp310 = GreaterEq(data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */,0.0);
    tmp311 = LessEq(data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */,100000.0);
    if(!(tmp310 && tmp311))
    {
      tmp313 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[682] /* channel_2.Channel[1,2].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].stateFlow.d >= 0.0 and channel_2.Channel[1,2].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp314 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2137
type: ALGORITHM

  assert(channel_2.Channel[1,2].H[1] >= -10000000000.0 and channel_2.Channel[1,2].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].H[1] <= 10000000000.0, has value: " + String(channel_2.Channel[1,2].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp315 = GreaterEq(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */,-10000000000.0);
    tmp316 = LessEq(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */,10000000000.0);
    if(!(tmp315 && tmp316))
    {
      tmp318 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[632] /* channel_2.Channel[1,2].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].H[1] >= -10000000000.0 and channel_2.Channel[1,2].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2138
type: ALGORITHM

  assert(channel_2.Channel[1,2].H[2] >= -10000000000.0 and channel_2.Channel[1,2].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].H[2] <= 10000000000.0, has value: " + String(channel_2.Channel[1,2].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp320;
  modelica_boolean tmp321;
  static const MMC_DEFSTRINGLIT(tmp322,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp323;
  static int tmp324 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp324)
  {
    tmp320 = GreaterEq(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,-10000000000.0);
    tmp321 = LessEq(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */,10000000000.0);
    if(!(tmp320 && tmp321))
    {
      tmp323 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[633] /* channel_2.Channel[1,2].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp322),tmp323);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].H[2] >= -10000000000.0 and channel_2.Channel[1,2].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp324 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2139
type: ALGORITHM

  assert(channel_2.Channel[1,2].hv >= -10000000000.0 and channel_2.Channel[1,2].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].hv <= 10000000000.0, has value: " + String(channel_2.Channel[1,2].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp325;
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,112,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,2].hv <= 10000000000.0, has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp325 = GreaterEq(data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */,-10000000000.0);
    tmp326 = LessEq(data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */,10000000000.0);
    if(!(tmp325 && tmp326))
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[20] /* channel_2.Channel[1,2].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].hv >= -10000000000.0 and channel_2.Channel[1,2].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2140
type: ALGORITHM

  assert(channel_2.Channel[1,2].pv >= 611.657 and channel_2.Channel[1,2].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,2].pv <= 100000000.0, has value: " + String(channel_2.Channel[1,2].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  static const MMC_DEFSTRINGLIT(tmp332,103,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,2].pv <= 100000000.0, has value: ");
  modelica_string tmp333;
  static int tmp334 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp334)
  {
    tmp330 = GreaterEq(data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */,611.657);
    tmp331 = LessEq(data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */,100000000.0);
    if(!(tmp330 && tmp331))
    {
      tmp333 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[25] /* channel_2.Channel[1,2].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp332),tmp333);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].pv >= 611.657 and channel_2.Channel[1,2].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp334 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2141
type: ALGORITHM

  assert(channel_2.Channel[1,2].Dv >= -100000.0 and channel_2.Channel[1,2].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,2].Dv <= 100000.0, has value: " + String(channel_2.Channel[1,2].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2141};
  modelica_boolean tmp335;
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,102,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,2].Dv <= 100000.0, has value: ");
  modelica_string tmp338;
  static int tmp339 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp339)
  {
    tmp335 = GreaterEq(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */,-100000.0);
    tmp336 = LessEq(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */,100000.0);
    if(!(tmp335 && tmp336))
    {
      tmp338 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[626] /* channel_2.Channel[1,2].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].Dv >= -100000.0 and channel_2.Channel[1,2].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2142
type: ALGORITHM

  assert(channel_2.Channel[1,2].D_flow_v >= -100000.0 and channel_2.Channel[1,2].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,2].D_flow_v <= 100000.0, has value: " + String(channel_2.Channel[1,2].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,108,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,2].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp343;
  static int tmp344 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp344)
  {
    tmp340 = GreaterEq(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,-100000.0);
    tmp341 = LessEq(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */,100000.0);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].D_flow_v >= -100000.0 and channel_2.Channel[1,2].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp344 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2143
type: ALGORITHM

  assert(channel_2.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,2].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: " + String(channel_2.Channel[1,2].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp345;
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,111,"Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp345 = GreaterEq(data->localData[0]->realVars[671] /* channel_2.Channel[1,2].heatTransfer.Ts variable */,273.15);
    tmp346 = LessEq(data->localData[0]->realVars[671] /* channel_2.Channel[1,2].heatTransfer.Ts variable */,2273.15);
    if(!(tmp345 && tmp346))
    {
      tmp348 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[671] /* channel_2.Channel[1,2].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,2].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp349 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2144
type: ALGORITHM

  assert(channel_2.Channel[1,3].stateFlow.d >= 0.0 and channel_2.Channel[1,3].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,3].stateFlow.d <= 100000.0, has value: " + String(channel_2.Channel[1,3].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,105,"Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,3].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp353;
  static int tmp354 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp354)
  {
    tmp350 = GreaterEq(data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */,0.0);
    tmp351 = LessEq(data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */,100000.0);
    if(!(tmp350 && tmp351))
    {
      tmp353 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[683] /* channel_2.Channel[1,3].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].stateFlow.d >= 0.0 and channel_2.Channel[1,3].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp354 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2145
type: ALGORITHM

  assert(channel_2.Channel[1,3].H[1] >= -10000000000.0 and channel_2.Channel[1,3].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].H[1] <= 10000000000.0, has value: " + String(channel_2.Channel[1,3].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp355 = GreaterEq(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */,-10000000000.0);
    tmp356 = LessEq(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */,10000000000.0);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[634] /* channel_2.Channel[1,3].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].H[1] >= -10000000000.0 and channel_2.Channel[1,3].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2146
type: ALGORITHM

  assert(channel_2.Channel[1,3].H[2] >= -10000000000.0 and channel_2.Channel[1,3].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].H[2] <= 10000000000.0, has value: " + String(channel_2.Channel[1,3].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp363;
  static int tmp364 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp364)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,-10000000000.0);
    tmp361 = LessEq(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */,10000000000.0);
    if(!(tmp360 && tmp361))
    {
      tmp363 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[635] /* channel_2.Channel[1,3].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].H[2] >= -10000000000.0 and channel_2.Channel[1,3].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp364 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2147
type: ALGORITHM

  assert(channel_2.Channel[1,3].hv >= -10000000000.0 and channel_2.Channel[1,3].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].hv <= 10000000000.0, has value: " + String(channel_2.Channel[1,3].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,112,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,3].hv <= 10000000000.0, has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp365 = GreaterEq(data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */,-10000000000.0);
    tmp366 = LessEq(data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */,10000000000.0);
    if(!(tmp365 && tmp366))
    {
      tmp368 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[21] /* channel_2.Channel[1,3].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].hv >= -10000000000.0 and channel_2.Channel[1,3].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2148
type: ALGORITHM

  assert(channel_2.Channel[1,3].pv >= 611.657 and channel_2.Channel[1,3].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,3].pv <= 100000000.0, has value: " + String(channel_2.Channel[1,3].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,103,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,3].pv <= 100000000.0, has value: ");
  modelica_string tmp373;
  static int tmp374 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp374)
  {
    tmp370 = GreaterEq(data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */,611.657);
    tmp371 = LessEq(data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */,100000000.0);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[26] /* channel_2.Channel[1,3].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].pv >= 611.657 and channel_2.Channel[1,3].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2149
type: ALGORITHM

  assert(channel_2.Channel[1,3].Dv >= -100000.0 and channel_2.Channel[1,3].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,3].Dv <= 100000.0, has value: " + String(channel_2.Channel[1,3].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,102,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,3].Dv <= 100000.0, has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp375 = GreaterEq(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */,-100000.0);
    tmp376 = LessEq(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */,100000.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[627] /* channel_2.Channel[1,3].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].Dv >= -100000.0 and channel_2.Channel[1,3].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2150
type: ALGORITHM

  assert(channel_2.Channel[1,3].D_flow_v >= -100000.0 and channel_2.Channel[1,3].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,3].D_flow_v <= 100000.0, has value: " + String(channel_2.Channel[1,3].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,108,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,3].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp383;
  static int tmp384 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp384)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,-100000.0);
    tmp381 = LessEq(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */,100000.0);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].D_flow_v >= -100000.0 and channel_2.Channel[1,3].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp384 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2151
type: ALGORITHM

  assert(channel_2.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,3].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: " + String(channel_2.Channel[1,3].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,111,"Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp385 = GreaterEq(data->localData[0]->realVars[672] /* channel_2.Channel[1,3].heatTransfer.Ts variable */,273.15);
    tmp386 = LessEq(data->localData[0]->realVars[672] /* channel_2.Channel[1,3].heatTransfer.Ts variable */,2273.15);
    if(!(tmp385 && tmp386))
    {
      tmp388 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[672] /* channel_2.Channel[1,3].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,3].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2152
type: ALGORITHM

  assert(channel_2.Channel[1,4].stateFlow.d >= 0.0 and channel_2.Channel[1,4].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,4].stateFlow.d <= 100000.0, has value: " + String(channel_2.Channel[1,4].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp390;
  modelica_boolean tmp391;
  static const MMC_DEFSTRINGLIT(tmp392,105,"Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,4].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp393;
  static int tmp394 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp394)
  {
    tmp390 = GreaterEq(data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */,0.0);
    tmp391 = LessEq(data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */,100000.0);
    if(!(tmp390 && tmp391))
    {
      tmp393 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[684] /* channel_2.Channel[1,4].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp392),tmp393);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].stateFlow.d >= 0.0 and channel_2.Channel[1,4].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp394 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2153
type: ALGORITHM

  assert(channel_2.Channel[1,4].H[1] >= -10000000000.0 and channel_2.Channel[1,4].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].H[1] <= 10000000000.0, has value: " + String(channel_2.Channel[1,4].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  static const MMC_DEFSTRINGLIT(tmp397,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp398;
  static int tmp399 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp399)
  {
    tmp395 = GreaterEq(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */,-10000000000.0);
    tmp396 = LessEq(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */,10000000000.0);
    if(!(tmp395 && tmp396))
    {
      tmp398 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[636] /* channel_2.Channel[1,4].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp397),tmp398);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].H[1] >= -10000000000.0 and channel_2.Channel[1,4].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp399 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2154
type: ALGORITHM

  assert(channel_2.Channel[1,4].H[2] >= -10000000000.0 and channel_2.Channel[1,4].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].H[2] <= 10000000000.0, has value: " + String(channel_2.Channel[1,4].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  static const MMC_DEFSTRINGLIT(tmp402,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp403;
  static int tmp404 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp404)
  {
    tmp400 = GreaterEq(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,-10000000000.0);
    tmp401 = LessEq(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */,10000000000.0);
    if(!(tmp400 && tmp401))
    {
      tmp403 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[637] /* channel_2.Channel[1,4].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp402),tmp403);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].H[2] >= -10000000000.0 and channel_2.Channel[1,4].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp404 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2155
type: ALGORITHM

  assert(channel_2.Channel[1,4].hv >= -10000000000.0 and channel_2.Channel[1,4].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].hv <= 10000000000.0, has value: " + String(channel_2.Channel[1,4].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,112,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,4].hv <= 10000000000.0, has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp405 = GreaterEq(data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */,-10000000000.0);
    tmp406 = LessEq(data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */,10000000000.0);
    if(!(tmp405 && tmp406))
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[22] /* channel_2.Channel[1,4].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].hv >= -10000000000.0 and channel_2.Channel[1,4].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2156
type: ALGORITHM

  assert(channel_2.Channel[1,4].pv >= 611.657 and channel_2.Channel[1,4].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,4].pv <= 100000000.0, has value: " + String(channel_2.Channel[1,4].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  static const MMC_DEFSTRINGLIT(tmp412,103,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,4].pv <= 100000000.0, has value: ");
  modelica_string tmp413;
  static int tmp414 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp414)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */,611.657);
    tmp411 = LessEq(data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */,100000000.0);
    if(!(tmp410 && tmp411))
    {
      tmp413 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[27] /* channel_2.Channel[1,4].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp412),tmp413);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].pv >= 611.657 and channel_2.Channel[1,4].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp414 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2157
type: ALGORITHM

  assert(channel_2.Channel[1,4].Dv >= -100000.0 and channel_2.Channel[1,4].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,4].Dv <= 100000.0, has value: " + String(channel_2.Channel[1,4].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  static const MMC_DEFSTRINGLIT(tmp417,102,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,4].Dv <= 100000.0, has value: ");
  modelica_string tmp418;
  static int tmp419 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp419)
  {
    tmp415 = GreaterEq(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */,-100000.0);
    tmp416 = LessEq(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */,100000.0);
    if(!(tmp415 && tmp416))
    {
      tmp418 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[628] /* channel_2.Channel[1,4].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp417),tmp418);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].Dv >= -100000.0 and channel_2.Channel[1,4].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp419 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2158
type: ALGORITHM

  assert(channel_2.Channel[1,4].D_flow_v >= -100000.0 and channel_2.Channel[1,4].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,4].D_flow_v <= 100000.0, has value: " + String(channel_2.Channel[1,4].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  static const MMC_DEFSTRINGLIT(tmp422,108,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,4].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp423;
  static int tmp424 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp424)
  {
    tmp420 = GreaterEq(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,-100000.0);
    tmp421 = LessEq(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */,100000.0);
    if(!(tmp420 && tmp421))
    {
      tmp423 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp422),tmp423);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].D_flow_v >= -100000.0 and channel_2.Channel[1,4].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp424 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2159
type: ALGORITHM

  assert(channel_2.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,4].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: " + String(channel_2.Channel[1,4].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,111,"Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp428;
  static int tmp429 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp429)
  {
    tmp425 = GreaterEq(data->localData[0]->realVars[673] /* channel_2.Channel[1,4].heatTransfer.Ts variable */,273.15);
    tmp426 = LessEq(data->localData[0]->realVars[673] /* channel_2.Channel[1,4].heatTransfer.Ts variable */,2273.15);
    if(!(tmp425 && tmp426))
    {
      tmp428 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[673] /* channel_2.Channel[1,4].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp427),tmp428);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,4].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp429 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2160
type: ALGORITHM

  assert(channel_2.Channel[1,5].stateFlow.d >= 0.0 and channel_2.Channel[1,5].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,5].stateFlow.d <= 100000.0, has value: " + String(channel_2.Channel[1,5].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  static const MMC_DEFSTRINGLIT(tmp432,105,"Variable violating min/max constraint: 0.0 <= channel_2.Channel[1,5].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp433;
  static int tmp434 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp434)
  {
    tmp430 = GreaterEq(data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */,0.0);
    tmp431 = LessEq(data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */,100000.0);
    if(!(tmp430 && tmp431))
    {
      tmp433 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[685] /* channel_2.Channel[1,5].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp432),tmp433);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].stateFlow.d >= 0.0 and channel_2.Channel[1,5].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp434 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2161
type: ALGORITHM

  assert(channel_2.Channel[1,5].p[2] >= 611.657 and channel_2.Channel[1,5].p[2] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].p[2] <= 100000000.0, has value: " + String(channel_2.Channel[1,5].p[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,105,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].p[2] <= 100000000.0, has value: ");
  modelica_string tmp438;
  static int tmp439 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp439)
  {
    tmp435 = GreaterEq(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */,611.657);
    tmp436 = LessEq(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */,100000000.0);
    if(!(tmp435 && tmp436))
    {
      tmp438 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[680] /* channel_2.Channel[1,5].p[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",31,3,31,110,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].p[2] >= 611.657 and channel_2.Channel[1,5].p[2] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2162
type: ALGORITHM

  assert(channel_2.Channel[1,5].H[1] >= -10000000000.0 and channel_2.Channel[1,5].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].H[1] <= 10000000000.0, has value: " + String(channel_2.Channel[1,5].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  static const MMC_DEFSTRINGLIT(tmp442,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp443;
  static int tmp444 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp444)
  {
    tmp440 = GreaterEq(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */,-10000000000.0);
    tmp441 = LessEq(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */,10000000000.0);
    if(!(tmp440 && tmp441))
    {
      tmp443 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[638] /* channel_2.Channel[1,5].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp442),tmp443);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].H[1] >= -10000000000.0 and channel_2.Channel[1,5].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp444 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2163
type: ALGORITHM

  assert(channel_2.Channel[1,5].H[2] >= -10000000000.0 and channel_2.Channel[1,5].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].H[2] <= 10000000000.0, has value: " + String(channel_2.Channel[1,5].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,114,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp448;
  static int tmp449 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp449)
  {
    tmp445 = GreaterEq(data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */,-10000000000.0);
    tmp446 = LessEq(data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */,10000000000.0);
    if(!(tmp445 && tmp446))
    {
      tmp448 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[639] /* channel_2.Channel[1,5].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].H[2] >= -10000000000.0 and channel_2.Channel[1,5].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2164
type: ALGORITHM

  assert(channel_2.Channel[1,5].hv >= -10000000000.0 and channel_2.Channel[1,5].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].hv <= 10000000000.0, has value: " + String(channel_2.Channel[1,5].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  static const MMC_DEFSTRINGLIT(tmp452,112,"Variable violating min/max constraint: -10000000000.0 <= channel_2.Channel[1,5].hv <= 10000000000.0, has value: ");
  modelica_string tmp453;
  static int tmp454 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp454)
  {
    tmp450 = GreaterEq(data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */,-10000000000.0);
    tmp451 = LessEq(data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */,10000000000.0);
    if(!(tmp450 && tmp451))
    {
      tmp453 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[23] /* channel_2.Channel[1,5].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp452),tmp453);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].hv >= -10000000000.0 and channel_2.Channel[1,5].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp454 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2165
type: ALGORITHM

  assert(channel_2.Channel[1,5].pv >= 611.657 and channel_2.Channel[1,5].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].pv <= 100000000.0, has value: " + String(channel_2.Channel[1,5].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,103,"Variable violating min/max constraint: 611.657 <= channel_2.Channel[1,5].pv <= 100000000.0, has value: ");
  modelica_string tmp458;
  static int tmp459 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp459)
  {
    tmp455 = GreaterEq(data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */,611.657);
    tmp456 = LessEq(data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */,100000000.0);
    if(!(tmp455 && tmp456))
    {
      tmp458 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[28] /* channel_2.Channel[1,5].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].pv >= 611.657 and channel_2.Channel[1,5].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp459 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2166
type: ALGORITHM

  assert(channel_2.Channel[1,5].Dv >= -100000.0 and channel_2.Channel[1,5].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,5].Dv <= 100000.0, has value: " + String(channel_2.Channel[1,5].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  static const MMC_DEFSTRINGLIT(tmp462,102,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,5].Dv <= 100000.0, has value: ");
  modelica_string tmp463;
  static int tmp464 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp464)
  {
    tmp460 = GreaterEq(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */,-100000.0);
    tmp461 = LessEq(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */,100000.0);
    if(!(tmp460 && tmp461))
    {
      tmp463 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[629] /* channel_2.Channel[1,5].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp462),tmp463);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].Dv >= -100000.0 and channel_2.Channel[1,5].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp464 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2167
type: ALGORITHM

  assert(channel_2.Channel[1,5].D_flow_v >= -100000.0 and channel_2.Channel[1,5].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,5].D_flow_v <= 100000.0, has value: " + String(channel_2.Channel[1,5].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,108,"Variable violating min/max constraint: -100000.0 <= channel_2.Channel[1,5].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp468;
  static int tmp469 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp469)
  {
    tmp465 = GreaterEq(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,-100000.0);
    tmp466 = LessEq(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */,100000.0);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].D_flow_v >= -100000.0 and channel_2.Channel[1,5].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp469 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2168
type: ALGORITHM

  assert(channel_2.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,5].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: " + String(channel_2.Channel[1,5].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,111,"Variable violating min/max constraint: 273.15 <= channel_2.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp473;
  static int tmp474 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp474)
  {
    tmp470 = GreaterEq(data->localData[0]->realVars[674] /* channel_2.Channel[1,5].heatTransfer.Ts variable */,273.15);
    tmp471 = LessEq(data->localData[0]->realVars[674] /* channel_2.Channel[1,5].heatTransfer.Ts variable */,2273.15);
    if(!(tmp470 && tmp471))
    {
      tmp473 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[674] /* channel_2.Channel[1,5].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp472),tmp473);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_2.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_2.Channel[1,5].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp474 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2169
type: ALGORITHM

  assert(valve_1.state_a.d >= 0.0 and valve_1.state_a.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_1.state_a.d <= 100000.0, has value: " + String(valve_1.state_a.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,88,"Variable violating min/max constraint: 0.0 <= valve_1.state_a.d <= 100000.0, has value: ");
  modelica_string tmp478;
  static int tmp479 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp479)
  {
    tmp475 = GreaterEq(data->localData[0]->realVars[769] /* valve_1.state_a.d variable */,0.0);
    tmp476 = LessEq(data->localData[0]->realVars[769] /* valve_1.state_a.d variable */,100000.0);
    if(!(tmp475 && tmp476))
    {
      tmp478 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[769] /* valve_1.state_a.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.state_a.d >= 0.0 and valve_1.state_a.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp479 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2170
type: ALGORITHM

  assert(valve_1.state_a.T >= 273.15 and valve_1.state_a.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_1.state_a.T <= 2273.15, has value: " + String(valve_1.state_a.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  static const MMC_DEFSTRINGLIT(tmp482,90,"Variable violating min/max constraint: 273.15 <= valve_1.state_a.T <= 2273.15, has value: ");
  modelica_string tmp483;
  static int tmp484 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp484)
  {
    tmp480 = GreaterEq(data->localData[0]->realVars[768] /* valve_1.state_a.T variable */,273.15);
    tmp481 = LessEq(data->localData[0]->realVars[768] /* valve_1.state_a.T variable */,2273.15);
    if(!(tmp480 && tmp481))
    {
      tmp483 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[768] /* valve_1.state_a.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp482),tmp483);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.state_a.T >= 273.15 and valve_1.state_a.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp484 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2171
type: ALGORITHM

  assert(valve_1.state_b.d >= 0.0 and valve_1.state_b.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_1.state_b.d <= 100000.0, has value: " + String(valve_1.state_b.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,88,"Variable violating min/max constraint: 0.0 <= valve_1.state_b.d <= 100000.0, has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp485 = GreaterEq(data->localData[0]->realVars[771] /* valve_1.state_b.d variable */,0.0);
    tmp486 = LessEq(data->localData[0]->realVars[771] /* valve_1.state_b.d variable */,100000.0);
    if(!(tmp485 && tmp486))
    {
      tmp488 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[771] /* valve_1.state_b.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.state_b.d >= 0.0 and valve_1.state_b.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2172
type: ALGORITHM

  assert(valve_1.state_b.T >= 273.15 and valve_1.state_b.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_1.state_b.T <= 2273.15, has value: " + String(valve_1.state_b.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,90,"Variable violating min/max constraint: 273.15 <= valve_1.state_b.T <= 2273.15, has value: ");
  modelica_string tmp493;
  static int tmp494 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp494)
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[770] /* valve_1.state_b.T variable */,273.15);
    tmp491 = LessEq(data->localData[0]->realVars[770] /* valve_1.state_b.T variable */,2273.15);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[770] /* valve_1.state_b.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.state_b.T >= 273.15 and valve_1.state_b.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp494 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2173
type: ALGORITHM

  assert(valve_1.p >= 611.657 and valve_1.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= valve_1.p <= 100000000.0, has value: " + String(valve_1.p, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,87,"Variable violating min/max constraint: 611.657 <= valve_1.p <= 100000000.0, has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp495 = GreaterEq(data->localData[0]->realVars[765] /* valve_1.p variable */,611.657);
    tmp496 = LessEq(data->localData[0]->realVars[765] /* valve_1.p variable */,100000000.0);
    if(!(tmp495 && tmp496))
    {
      tmp498 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[765] /* valve_1.p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",208,5,208,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.p >= 611.657 and valve_1.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp499 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2174
type: ALGORITHM

  assert(valve_1.port_a_T >= 273.15 and valve_1.port_a_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_1.port_a_T <= 2273.15, has value: " + String(valve_1.port_a_T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  static const MMC_DEFSTRINGLIT(tmp502,89,"Variable violating min/max constraint: 273.15 <= valve_1.port_a_T <= 2273.15, has value: ");
  modelica_string tmp503;
  static int tmp504 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp504)
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[766] /* valve_1.port_a_T variable */,273.15);
    tmp501 = LessEq(data->localData[0]->realVars[766] /* valve_1.port_a_T variable */,2273.15);
    if(!(tmp500 && tmp501))
    {
      tmp503 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[766] /* valve_1.port_a_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp502),tmp503);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",340,3,345,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.port_a_T >= 273.15 and valve_1.port_a_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp504 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2175
type: ALGORITHM

  assert(valve_1.port_b_T >= 273.15 and valve_1.port_b_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_1.port_b_T <= 2273.15, has value: " + String(valve_1.port_b_T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,89,"Variable violating min/max constraint: 273.15 <= valve_1.port_b_T <= 2273.15, has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp505 = GreaterEq(data->localData[0]->realVars[767] /* valve_1.port_b_T variable */,273.15);
    tmp506 = LessEq(data->localData[0]->realVars[767] /* valve_1.port_b_T variable */,2273.15);
    if(!(tmp505 && tmp506))
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[767] /* valve_1.port_b_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",346,3,351,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_1.port_b_T >= 273.15 and valve_1.port_b_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2176
type: ALGORITHM

  assert(channel_3.Channel[1,1].stateFlow.d >= 0.0 and channel_3.Channel[1,1].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,1].stateFlow.d <= 100000.0, has value: " + String(channel_3.Channel[1,1].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  modelica_boolean tmp510;
  modelica_boolean tmp511;
  static const MMC_DEFSTRINGLIT(tmp512,105,"Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,1].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp513;
  static int tmp514 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp514)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */,0.0);
    tmp511 = LessEq(data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */,100000.0);
    if(!(tmp510 && tmp511))
    {
      tmp513 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[746] /* channel_3.Channel[1,1].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp512),tmp513);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].stateFlow.d >= 0.0 and channel_3.Channel[1,1].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp514 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2177
type: ALGORITHM

  assert(channel_3.Channel[1,1].H[1] >= -10000000000.0 and channel_3.Channel[1,1].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].H[1] <= 10000000000.0, has value: " + String(channel_3.Channel[1,1].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  modelica_boolean tmp515;
  modelica_boolean tmp516;
  static const MMC_DEFSTRINGLIT(tmp517,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp518;
  static int tmp519 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp519)
  {
    tmp515 = GreaterEq(data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */,-10000000000.0);
    tmp516 = LessEq(data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */,10000000000.0);
    if(!(tmp515 && tmp516))
    {
      tmp518 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[696] /* channel_3.Channel[1,1].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp517),tmp518);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].H[1] >= -10000000000.0 and channel_3.Channel[1,1].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp519 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2178
type: ALGORITHM

  assert(channel_3.Channel[1,1].H[2] >= -10000000000.0 and channel_3.Channel[1,1].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].H[2] <= 10000000000.0, has value: " + String(channel_3.Channel[1,1].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp523;
  static int tmp524 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp524)
  {
    tmp520 = GreaterEq(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,-10000000000.0);
    tmp521 = LessEq(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */,10000000000.0);
    if(!(tmp520 && tmp521))
    {
      tmp523 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[697] /* channel_3.Channel[1,1].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].H[2] >= -10000000000.0 and channel_3.Channel[1,1].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp524 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2179
type: ALGORITHM

  assert(channel_3.Channel[1,1].hv >= -10000000000.0 and channel_3.Channel[1,1].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].hv <= 10000000000.0, has value: " + String(channel_3.Channel[1,1].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  modelica_boolean tmp525;
  modelica_boolean tmp526;
  static const MMC_DEFSTRINGLIT(tmp527,112,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,1].hv <= 10000000000.0, has value: ");
  modelica_string tmp528;
  static int tmp529 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp529)
  {
    tmp525 = GreaterEq(data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */,-10000000000.0);
    tmp526 = LessEq(data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */,10000000000.0);
    if(!(tmp525 && tmp526))
    {
      tmp528 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[34] /* channel_3.Channel[1,1].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp527),tmp528);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].hv >= -10000000000.0 and channel_3.Channel[1,1].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp529 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2180
type: ALGORITHM

  assert(channel_3.Channel[1,1].pv >= 611.657 and channel_3.Channel[1,1].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,1].pv <= 100000000.0, has value: " + String(channel_3.Channel[1,1].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  modelica_boolean tmp530;
  modelica_boolean tmp531;
  static const MMC_DEFSTRINGLIT(tmp532,103,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,1].pv <= 100000000.0, has value: ");
  modelica_string tmp533;
  static int tmp534 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp534)
  {
    tmp530 = GreaterEq(data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */,611.657);
    tmp531 = LessEq(data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */,100000000.0);
    if(!(tmp530 && tmp531))
    {
      tmp533 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[39] /* channel_3.Channel[1,1].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp532),tmp533);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].pv >= 611.657 and channel_3.Channel[1,1].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp534 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2181
type: ALGORITHM

  assert(channel_3.Channel[1,1].Dv >= -100000.0 and channel_3.Channel[1,1].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,1].Dv <= 100000.0, has value: " + String(channel_3.Channel[1,1].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  static const MMC_DEFSTRINGLIT(tmp537,102,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,1].Dv <= 100000.0, has value: ");
  modelica_string tmp538;
  static int tmp539 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp539)
  {
    tmp535 = GreaterEq(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */,-100000.0);
    tmp536 = LessEq(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */,100000.0);
    if(!(tmp535 && tmp536))
    {
      tmp538 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[691] /* channel_3.Channel[1,1].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp537),tmp538);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].Dv >= -100000.0 and channel_3.Channel[1,1].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp539 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2182
type: ALGORITHM

  assert(channel_3.Channel[1,1].D_flow_v >= -100000.0 and channel_3.Channel[1,1].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,1].D_flow_v <= 100000.0, has value: " + String(channel_3.Channel[1,1].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  modelica_boolean tmp540;
  modelica_boolean tmp541;
  static const MMC_DEFSTRINGLIT(tmp542,108,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,1].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp543;
  static int tmp544 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp544)
  {
    tmp540 = GreaterEq(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */,-100000.0);
    tmp541 = LessEq(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */,100000.0);
    if(!(tmp540 && tmp541))
    {
      tmp543 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp542),tmp543);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].D_flow_v >= -100000.0 and channel_3.Channel[1,1].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp544 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2183
type: ALGORITHM

  assert(channel_3.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,1].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: " + String(channel_3.Channel[1,1].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp545;
  modelica_boolean tmp546;
  static const MMC_DEFSTRINGLIT(tmp547,111,"Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,1].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp548;
  static int tmp549 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp549)
  {
    tmp545 = GreaterEq(data->localData[0]->realVars[736] /* channel_3.Channel[1,1].heatTransfer.Ts variable */,273.15);
    tmp546 = LessEq(data->localData[0]->realVars[736] /* channel_3.Channel[1,1].heatTransfer.Ts variable */,2273.15);
    if(!(tmp545 && tmp546))
    {
      tmp548 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[736] /* channel_3.Channel[1,1].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp547),tmp548);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,1].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,1].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp549 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2184
type: ALGORITHM

  assert(channel_3.Channel[1,2].stateFlow.d >= 0.0 and channel_3.Channel[1,2].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,2].stateFlow.d <= 100000.0, has value: " + String(channel_3.Channel[1,2].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,105,"Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,2].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp553;
  static int tmp554 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp554)
  {
    tmp550 = GreaterEq(data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */,0.0);
    tmp551 = LessEq(data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */,100000.0);
    if(!(tmp550 && tmp551))
    {
      tmp553 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[747] /* channel_3.Channel[1,2].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].stateFlow.d >= 0.0 and channel_3.Channel[1,2].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp554 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2185
type: ALGORITHM

  assert(channel_3.Channel[1,2].H[1] >= -10000000000.0 and channel_3.Channel[1,2].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].H[1] <= 10000000000.0, has value: " + String(channel_3.Channel[1,2].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp555;
  modelica_boolean tmp556;
  static const MMC_DEFSTRINGLIT(tmp557,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp558;
  static int tmp559 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp559)
  {
    tmp555 = GreaterEq(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */,-10000000000.0);
    tmp556 = LessEq(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */,10000000000.0);
    if(!(tmp555 && tmp556))
    {
      tmp558 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[698] /* channel_3.Channel[1,2].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp557),tmp558);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].H[1] >= -10000000000.0 and channel_3.Channel[1,2].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp559 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2186
type: ALGORITHM

  assert(channel_3.Channel[1,2].H[2] >= -10000000000.0 and channel_3.Channel[1,2].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].H[2] <= 10000000000.0, has value: " + String(channel_3.Channel[1,2].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp560;
  modelica_boolean tmp561;
  static const MMC_DEFSTRINGLIT(tmp562,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp563;
  static int tmp564 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp564)
  {
    tmp560 = GreaterEq(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,-10000000000.0);
    tmp561 = LessEq(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */,10000000000.0);
    if(!(tmp560 && tmp561))
    {
      tmp563 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[699] /* channel_3.Channel[1,2].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp562),tmp563);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].H[2] >= -10000000000.0 and channel_3.Channel[1,2].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp564 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2187
type: ALGORITHM

  assert(channel_3.Channel[1,2].hv >= -10000000000.0 and channel_3.Channel[1,2].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].hv <= 10000000000.0, has value: " + String(channel_3.Channel[1,2].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  static const MMC_DEFSTRINGLIT(tmp567,112,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,2].hv <= 10000000000.0, has value: ");
  modelica_string tmp568;
  static int tmp569 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp569)
  {
    tmp565 = GreaterEq(data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */,-10000000000.0);
    tmp566 = LessEq(data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */,10000000000.0);
    if(!(tmp565 && tmp566))
    {
      tmp568 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[35] /* channel_3.Channel[1,2].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp567),tmp568);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].hv >= -10000000000.0 and channel_3.Channel[1,2].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp569 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2188
type: ALGORITHM

  assert(channel_3.Channel[1,2].pv >= 611.657 and channel_3.Channel[1,2].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,2].pv <= 100000000.0, has value: " + String(channel_3.Channel[1,2].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp570;
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,103,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,2].pv <= 100000000.0, has value: ");
  modelica_string tmp573;
  static int tmp574 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp574)
  {
    tmp570 = GreaterEq(data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */,611.657);
    tmp571 = LessEq(data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */,100000000.0);
    if(!(tmp570 && tmp571))
    {
      tmp573 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[40] /* channel_3.Channel[1,2].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp572),tmp573);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].pv >= 611.657 and channel_3.Channel[1,2].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp574 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(channel_3.Channel[1,2].Dv >= -100000.0 and channel_3.Channel[1,2].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,2].Dv <= 100000.0, has value: " + String(channel_3.Channel[1,2].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp575;
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,102,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,2].Dv <= 100000.0, has value: ");
  modelica_string tmp578;
  static int tmp579 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp579)
  {
    tmp575 = GreaterEq(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */,-100000.0);
    tmp576 = LessEq(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */,100000.0);
    if(!(tmp575 && tmp576))
    {
      tmp578 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[692] /* channel_3.Channel[1,2].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].Dv >= -100000.0 and channel_3.Channel[1,2].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp579 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(channel_3.Channel[1,2].D_flow_v >= -100000.0 and channel_3.Channel[1,2].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,2].D_flow_v <= 100000.0, has value: " + String(channel_3.Channel[1,2].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp580;
  modelica_boolean tmp581;
  static const MMC_DEFSTRINGLIT(tmp582,108,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,2].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp583;
  static int tmp584 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp584)
  {
    tmp580 = GreaterEq(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,-100000.0);
    tmp581 = LessEq(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */,100000.0);
    if(!(tmp580 && tmp581))
    {
      tmp583 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp582),tmp583);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].D_flow_v >= -100000.0 and channel_3.Channel[1,2].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp584 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2191
type: ALGORITHM

  assert(channel_3.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,2].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: " + String(channel_3.Channel[1,2].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp585;
  modelica_boolean tmp586;
  static const MMC_DEFSTRINGLIT(tmp587,111,"Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,2].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp588;
  static int tmp589 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp589)
  {
    tmp585 = GreaterEq(data->localData[0]->realVars[737] /* channel_3.Channel[1,2].heatTransfer.Ts variable */,273.15);
    tmp586 = LessEq(data->localData[0]->realVars[737] /* channel_3.Channel[1,2].heatTransfer.Ts variable */,2273.15);
    if(!(tmp585 && tmp586))
    {
      tmp588 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[737] /* channel_3.Channel[1,2].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp587),tmp588);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,2].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,2].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp589 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2192
type: ALGORITHM

  assert(channel_3.Channel[1,3].stateFlow.d >= 0.0 and channel_3.Channel[1,3].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,3].stateFlow.d <= 100000.0, has value: " + String(channel_3.Channel[1,3].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp590;
  modelica_boolean tmp591;
  static const MMC_DEFSTRINGLIT(tmp592,105,"Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,3].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp593;
  static int tmp594 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp594)
  {
    tmp590 = GreaterEq(data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */,0.0);
    tmp591 = LessEq(data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */,100000.0);
    if(!(tmp590 && tmp591))
    {
      tmp593 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[748] /* channel_3.Channel[1,3].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp592),tmp593);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].stateFlow.d >= 0.0 and channel_3.Channel[1,3].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp594 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(channel_3.Channel[1,3].H[1] >= -10000000000.0 and channel_3.Channel[1,3].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].H[1] <= 10000000000.0, has value: " + String(channel_3.Channel[1,3].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp595;
  modelica_boolean tmp596;
  static const MMC_DEFSTRINGLIT(tmp597,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp598;
  static int tmp599 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp599)
  {
    tmp595 = GreaterEq(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */,-10000000000.0);
    tmp596 = LessEq(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */,10000000000.0);
    if(!(tmp595 && tmp596))
    {
      tmp598 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[700] /* channel_3.Channel[1,3].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp597),tmp598);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].H[1] >= -10000000000.0 and channel_3.Channel[1,3].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(channel_3.Channel[1,3].H[2] >= -10000000000.0 and channel_3.Channel[1,3].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].H[2] <= 10000000000.0, has value: " + String(channel_3.Channel[1,3].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp603;
  static int tmp604 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp604)
  {
    tmp600 = GreaterEq(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,-10000000000.0);
    tmp601 = LessEq(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */,10000000000.0);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[701] /* channel_3.Channel[1,3].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].H[2] >= -10000000000.0 and channel_3.Channel[1,3].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2195
type: ALGORITHM

  assert(channel_3.Channel[1,3].hv >= -10000000000.0 and channel_3.Channel[1,3].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].hv <= 10000000000.0, has value: " + String(channel_3.Channel[1,3].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp605;
  modelica_boolean tmp606;
  static const MMC_DEFSTRINGLIT(tmp607,112,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,3].hv <= 10000000000.0, has value: ");
  modelica_string tmp608;
  static int tmp609 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp609)
  {
    tmp605 = GreaterEq(data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */,-10000000000.0);
    tmp606 = LessEq(data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */,10000000000.0);
    if(!(tmp605 && tmp606))
    {
      tmp608 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[36] /* channel_3.Channel[1,3].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp607),tmp608);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].hv >= -10000000000.0 and channel_3.Channel[1,3].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp609 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2196
type: ALGORITHM

  assert(channel_3.Channel[1,3].pv >= 611.657 and channel_3.Channel[1,3].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,3].pv <= 100000000.0, has value: " + String(channel_3.Channel[1,3].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp610;
  modelica_boolean tmp611;
  static const MMC_DEFSTRINGLIT(tmp612,103,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,3].pv <= 100000000.0, has value: ");
  modelica_string tmp613;
  static int tmp614 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp614)
  {
    tmp610 = GreaterEq(data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */,611.657);
    tmp611 = LessEq(data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */,100000000.0);
    if(!(tmp610 && tmp611))
    {
      tmp613 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[41] /* channel_3.Channel[1,3].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp612),tmp613);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].pv >= 611.657 and channel_3.Channel[1,3].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp614 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(channel_3.Channel[1,3].Dv >= -100000.0 and channel_3.Channel[1,3].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,3].Dv <= 100000.0, has value: " + String(channel_3.Channel[1,3].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,102,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,3].Dv <= 100000.0, has value: ");
  modelica_string tmp618;
  static int tmp619 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp619)
  {
    tmp615 = GreaterEq(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */,-100000.0);
    tmp616 = LessEq(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */,100000.0);
    if(!(tmp615 && tmp616))
    {
      tmp618 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[693] /* channel_3.Channel[1,3].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].Dv >= -100000.0 and channel_3.Channel[1,3].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp619 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(channel_3.Channel[1,3].D_flow_v >= -100000.0 and channel_3.Channel[1,3].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,3].D_flow_v <= 100000.0, has value: " + String(channel_3.Channel[1,3].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp620;
  modelica_boolean tmp621;
  static const MMC_DEFSTRINGLIT(tmp622,108,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,3].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp623;
  static int tmp624 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp624)
  {
    tmp620 = GreaterEq(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,-100000.0);
    tmp621 = LessEq(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */,100000.0);
    if(!(tmp620 && tmp621))
    {
      tmp623 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp622),tmp623);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].D_flow_v >= -100000.0 and channel_3.Channel[1,3].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp624 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2199
type: ALGORITHM

  assert(channel_3.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,3].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: " + String(channel_3.Channel[1,3].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp625;
  modelica_boolean tmp626;
  static const MMC_DEFSTRINGLIT(tmp627,111,"Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,3].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp628;
  static int tmp629 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp629)
  {
    tmp625 = GreaterEq(data->localData[0]->realVars[738] /* channel_3.Channel[1,3].heatTransfer.Ts variable */,273.15);
    tmp626 = LessEq(data->localData[0]->realVars[738] /* channel_3.Channel[1,3].heatTransfer.Ts variable */,2273.15);
    if(!(tmp625 && tmp626))
    {
      tmp628 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[738] /* channel_3.Channel[1,3].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp627),tmp628);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,3].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,3].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp629 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(channel_3.Channel[1,4].stateFlow.d >= 0.0 and channel_3.Channel[1,4].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,4].stateFlow.d <= 100000.0, has value: " + String(channel_3.Channel[1,4].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp630;
  modelica_boolean tmp631;
  static const MMC_DEFSTRINGLIT(tmp632,105,"Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,4].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp633;
  static int tmp634 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp634)
  {
    tmp630 = GreaterEq(data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */,0.0);
    tmp631 = LessEq(data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */,100000.0);
    if(!(tmp630 && tmp631))
    {
      tmp633 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[749] /* channel_3.Channel[1,4].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp632),tmp633);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].stateFlow.d >= 0.0 and channel_3.Channel[1,4].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp634 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(channel_3.Channel[1,4].H[1] >= -10000000000.0 and channel_3.Channel[1,4].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].H[1] <= 10000000000.0, has value: " + String(channel_3.Channel[1,4].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  static const MMC_DEFSTRINGLIT(tmp637,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp638;
  static int tmp639 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp639)
  {
    tmp635 = GreaterEq(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */,-10000000000.0);
    tmp636 = LessEq(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */,10000000000.0);
    if(!(tmp635 && tmp636))
    {
      tmp638 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[702] /* channel_3.Channel[1,4].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp637),tmp638);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].H[1] >= -10000000000.0 and channel_3.Channel[1,4].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp639 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(channel_3.Channel[1,4].H[2] >= -10000000000.0 and channel_3.Channel[1,4].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].H[2] <= 10000000000.0, has value: " + String(channel_3.Channel[1,4].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp640;
  modelica_boolean tmp641;
  static const MMC_DEFSTRINGLIT(tmp642,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp643;
  static int tmp644 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp644)
  {
    tmp640 = GreaterEq(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,-10000000000.0);
    tmp641 = LessEq(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */,10000000000.0);
    if(!(tmp640 && tmp641))
    {
      tmp643 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[703] /* channel_3.Channel[1,4].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp642),tmp643);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].H[2] >= -10000000000.0 and channel_3.Channel[1,4].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp644 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2203
type: ALGORITHM

  assert(channel_3.Channel[1,4].hv >= -10000000000.0 and channel_3.Channel[1,4].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].hv <= 10000000000.0, has value: " + String(channel_3.Channel[1,4].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp645;
  modelica_boolean tmp646;
  static const MMC_DEFSTRINGLIT(tmp647,112,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,4].hv <= 10000000000.0, has value: ");
  modelica_string tmp648;
  static int tmp649 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp649)
  {
    tmp645 = GreaterEq(data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */,-10000000000.0);
    tmp646 = LessEq(data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */,10000000000.0);
    if(!(tmp645 && tmp646))
    {
      tmp648 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[37] /* channel_3.Channel[1,4].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp647),tmp648);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].hv >= -10000000000.0 and channel_3.Channel[1,4].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp649 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2204
type: ALGORITHM

  assert(channel_3.Channel[1,4].pv >= 611.657 and channel_3.Channel[1,4].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,4].pv <= 100000000.0, has value: " + String(channel_3.Channel[1,4].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  modelica_boolean tmp650;
  modelica_boolean tmp651;
  static const MMC_DEFSTRINGLIT(tmp652,103,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,4].pv <= 100000000.0, has value: ");
  modelica_string tmp653;
  static int tmp654 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp654)
  {
    tmp650 = GreaterEq(data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */,611.657);
    tmp651 = LessEq(data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */,100000000.0);
    if(!(tmp650 && tmp651))
    {
      tmp653 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[42] /* channel_3.Channel[1,4].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp652),tmp653);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].pv >= 611.657 and channel_3.Channel[1,4].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp654 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2205
type: ALGORITHM

  assert(channel_3.Channel[1,4].Dv >= -100000.0 and channel_3.Channel[1,4].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,4].Dv <= 100000.0, has value: " + String(channel_3.Channel[1,4].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  modelica_boolean tmp655;
  modelica_boolean tmp656;
  static const MMC_DEFSTRINGLIT(tmp657,102,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,4].Dv <= 100000.0, has value: ");
  modelica_string tmp658;
  static int tmp659 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp659)
  {
    tmp655 = GreaterEq(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */,-100000.0);
    tmp656 = LessEq(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */,100000.0);
    if(!(tmp655 && tmp656))
    {
      tmp658 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[694] /* channel_3.Channel[1,4].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp657),tmp658);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].Dv >= -100000.0 and channel_3.Channel[1,4].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp659 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2206
type: ALGORITHM

  assert(channel_3.Channel[1,4].D_flow_v >= -100000.0 and channel_3.Channel[1,4].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,4].D_flow_v <= 100000.0, has value: " + String(channel_3.Channel[1,4].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_boolean tmp660;
  modelica_boolean tmp661;
  static const MMC_DEFSTRINGLIT(tmp662,108,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,4].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp663;
  static int tmp664 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp664)
  {
    tmp660 = GreaterEq(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,-100000.0);
    tmp661 = LessEq(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */,100000.0);
    if(!(tmp660 && tmp661))
    {
      tmp663 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp662),tmp663);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].D_flow_v >= -100000.0 and channel_3.Channel[1,4].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp664 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2207
type: ALGORITHM

  assert(channel_3.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,4].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: " + String(channel_3.Channel[1,4].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  static const MMC_DEFSTRINGLIT(tmp667,111,"Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,4].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp668;
  static int tmp669 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp669)
  {
    tmp665 = GreaterEq(data->localData[0]->realVars[739] /* channel_3.Channel[1,4].heatTransfer.Ts variable */,273.15);
    tmp666 = LessEq(data->localData[0]->realVars[739] /* channel_3.Channel[1,4].heatTransfer.Ts variable */,2273.15);
    if(!(tmp665 && tmp666))
    {
      tmp668 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[739] /* channel_3.Channel[1,4].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp667),tmp668);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,4].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,4].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp669 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2208
type: ALGORITHM

  assert(channel_3.Channel[1,5].stateFlow.d >= 0.0 and channel_3.Channel[1,5].stateFlow.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,5].stateFlow.d <= 100000.0, has value: " + String(channel_3.Channel[1,5].stateFlow.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp670;
  modelica_boolean tmp671;
  static const MMC_DEFSTRINGLIT(tmp672,105,"Variable violating min/max constraint: 0.0 <= channel_3.Channel[1,5].stateFlow.d <= 100000.0, has value: ");
  modelica_string tmp673;
  static int tmp674 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp674)
  {
    tmp670 = GreaterEq(data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */,0.0);
    tmp671 = LessEq(data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */,100000.0);
    if(!(tmp670 && tmp671))
    {
      tmp673 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[750] /* channel_3.Channel[1,5].stateFlow.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp672),tmp673);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].stateFlow.d >= 0.0 and channel_3.Channel[1,5].stateFlow.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp674 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2209
type: ALGORITHM

  assert(channel_3.Channel[1,5].H[1] >= -10000000000.0 and channel_3.Channel[1,5].H[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].H[1] <= 10000000000.0, has value: " + String(channel_3.Channel[1,5].H[1], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp675;
  modelica_boolean tmp676;
  static const MMC_DEFSTRINGLIT(tmp677,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].H[1] <= 10000000000.0, has value: ");
  modelica_string tmp678;
  static int tmp679 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp679)
  {
    tmp675 = GreaterEq(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */,-10000000000.0);
    tmp676 = LessEq(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */,10000000000.0);
    if(!(tmp675 && tmp676))
    {
      tmp678 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[704] /* channel_3.Channel[1,5].H[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp677),tmp678);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].H[1] >= -10000000000.0 and channel_3.Channel[1,5].H[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp679 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2210
type: ALGORITHM

  assert(channel_3.Channel[1,5].H[2] >= -10000000000.0 and channel_3.Channel[1,5].H[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].H[2] <= 10000000000.0, has value: " + String(channel_3.Channel[1,5].H[2], "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp680;
  modelica_boolean tmp681;
  static const MMC_DEFSTRINGLIT(tmp682,114,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].H[2] <= 10000000000.0, has value: ");
  modelica_string tmp683;
  static int tmp684 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp684)
  {
    tmp680 = GreaterEq(data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */,-10000000000.0);
    tmp681 = LessEq(data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */,10000000000.0);
    if(!(tmp680 && tmp681))
    {
      tmp683 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[705] /* channel_3.Channel[1,5].H[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp682),tmp683);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialElementaryChannel.mo",32,3,32,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].H[2] >= -10000000000.0 and channel_3.Channel[1,5].H[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp684 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(channel_3.Channel[1,5].hv >= -10000000000.0 and channel_3.Channel[1,5].hv <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].hv <= 10000000000.0, has value: " + String(channel_3.Channel[1,5].hv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp685;
  modelica_boolean tmp686;
  static const MMC_DEFSTRINGLIT(tmp687,112,"Variable violating min/max constraint: -10000000000.0 <= channel_3.Channel[1,5].hv <= 10000000000.0, has value: ");
  modelica_string tmp688;
  static int tmp689 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp689)
  {
    tmp685 = GreaterEq(data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */,-10000000000.0);
    tmp686 = LessEq(data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */,10000000000.0);
    if(!(tmp685 && tmp686))
    {
      tmp688 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[38] /* channel_3.Channel[1,5].hv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp687),tmp688);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",13,3,13,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].hv >= -10000000000.0 and channel_3.Channel[1,5].hv <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp689 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(channel_3.Channel[1,5].pv >= 611.657 and channel_3.Channel[1,5].pv <= 100000000.0, "Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].pv <= 100000000.0, has value: " + String(channel_3.Channel[1,5].pv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp690;
  modelica_boolean tmp691;
  static const MMC_DEFSTRINGLIT(tmp692,103,"Variable violating min/max constraint: 611.657 <= channel_3.Channel[1,5].pv <= 100000000.0, has value: ");
  modelica_string tmp693;
  static int tmp694 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp694)
  {
    tmp690 = GreaterEq(data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */,611.657);
    tmp691 = LessEq(data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */,100000000.0);
    if(!(tmp690 && tmp691))
    {
      tmp693 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[43] /* channel_3.Channel[1,5].pv STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp692),tmp693);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",14,3,14,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].pv >= 611.657 and channel_3.Channel[1,5].pv <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp694 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2213
type: ALGORITHM

  assert(channel_3.Channel[1,5].Dv >= -100000.0 and channel_3.Channel[1,5].Dv <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,5].Dv <= 100000.0, has value: " + String(channel_3.Channel[1,5].Dv, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp695;
  modelica_boolean tmp696;
  static const MMC_DEFSTRINGLIT(tmp697,102,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,5].Dv <= 100000.0, has value: ");
  modelica_string tmp698;
  static int tmp699 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp699)
  {
    tmp695 = GreaterEq(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */,-100000.0);
    tmp696 = LessEq(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */,100000.0);
    if(!(tmp695 && tmp696))
    {
      tmp698 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[695] /* channel_3.Channel[1,5].Dv variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp697),tmp698);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",15,3,15,25,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].Dv >= -100000.0 and channel_3.Channel[1,5].Dv <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(channel_3.Channel[1,5].D_flow_v >= -100000.0 and channel_3.Channel[1,5].D_flow_v <= 100000.0, "Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,5].D_flow_v <= 100000.0, has value: " + String(channel_3.Channel[1,5].D_flow_v, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp700;
  modelica_boolean tmp701;
  static const MMC_DEFSTRINGLIT(tmp702,108,"Variable violating min/max constraint: -100000.0 <= channel_3.Channel[1,5].D_flow_v <= 100000.0, has value: ");
  modelica_string tmp703;
  static int tmp704 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp704)
  {
    tmp700 = GreaterEq(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */,-100000.0);
    tmp701 = LessEq(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */,100000.0);
    if(!(tmp700 && tmp701))
    {
      tmp703 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp702),tmp703);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/ElementaryChannel.mo",16,3,16,92,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].D_flow_v >= -100000.0 and channel_3.Channel[1,5].D_flow_v <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp704 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2215
type: ALGORITHM

  assert(channel_3.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,5].heatTransfer.Ts <= 2273.15, "Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: " + String(channel_3.Channel[1,5].heatTransfer.Ts, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp705;
  modelica_boolean tmp706;
  static const MMC_DEFSTRINGLIT(tmp707,111,"Variable violating min/max constraint: 273.15 <= channel_3.Channel[1,5].heatTransfer.Ts <= 2273.15, has value: ");
  modelica_string tmp708;
  static int tmp709 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp709)
  {
    tmp705 = GreaterEq(data->localData[0]->realVars[740] /* channel_3.Channel[1,5].heatTransfer.Ts variable */,273.15);
    tmp706 = LessEq(data->localData[0]->realVars[740] /* channel_3.Channel[1,5].heatTransfer.Ts variable */,2273.15);
    if(!(tmp705 && tmp706))
    {
      tmp708 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[740] /* channel_3.Channel[1,5].heatTransfer.Ts variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp707),tmp708);
      {
        FILE_INFO info = {"/TPPSim02/Pipes/BaseClases/PartialHeatTransfer.mo",26,3,26,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nchannel_3.Channel[1,5].heatTransfer.Ts >= 273.15 and channel_3.Channel[1,5].heatTransfer.Ts <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2216
type: ALGORITHM

  assert(valve_2.state_a.d >= 0.0 and valve_2.state_a.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_2.state_a.d <= 100000.0, has value: " + String(valve_2.state_a.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  static const MMC_DEFSTRINGLIT(tmp712,88,"Variable violating min/max constraint: 0.0 <= valve_2.state_a.d <= 100000.0, has value: ");
  modelica_string tmp713;
  static int tmp714 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp714)
  {
    tmp710 = GreaterEq(data->localData[0]->realVars[785] /* valve_2.state_a.d variable */,0.0);
    tmp711 = LessEq(data->localData[0]->realVars[785] /* valve_2.state_a.d variable */,100000.0);
    if(!(tmp710 && tmp711))
    {
      tmp713 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[785] /* valve_2.state_a.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp712),tmp713);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.state_a.d >= 0.0 and valve_2.state_a.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp714 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2217
type: ALGORITHM

  assert(valve_2.state_a.T >= 273.15 and valve_2.state_a.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_2.state_a.T <= 2273.15, has value: " + String(valve_2.state_a.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp715;
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,90,"Variable violating min/max constraint: 273.15 <= valve_2.state_a.T <= 2273.15, has value: ");
  modelica_string tmp718;
  static int tmp719 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp719)
  {
    tmp715 = GreaterEq(data->localData[0]->realVars[784] /* valve_2.state_a.T variable */,273.15);
    tmp716 = LessEq(data->localData[0]->realVars[784] /* valve_2.state_a.T variable */,2273.15);
    if(!(tmp715 && tmp716))
    {
      tmp718 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[784] /* valve_2.state_a.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.state_a.T >= 273.15 and valve_2.state_a.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2218
type: ALGORITHM

  assert(valve_2.state_b.d >= 0.0 and valve_2.state_b.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve_2.state_b.d <= 100000.0, has value: " + String(valve_2.state_b.d, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp720;
  modelica_boolean tmp721;
  static const MMC_DEFSTRINGLIT(tmp722,88,"Variable violating min/max constraint: 0.0 <= valve_2.state_b.d <= 100000.0, has value: ");
  modelica_string tmp723;
  static int tmp724 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp724)
  {
    tmp720 = GreaterEq(data->localData[0]->realVars[787] /* valve_2.state_b.d variable */,0.0);
    tmp721 = LessEq(data->localData[0]->realVars[787] /* valve_2.state_b.d variable */,100000.0);
    if(!(tmp720 && tmp721))
    {
      tmp723 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[787] /* valve_2.state_b.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp722),tmp723);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.state_b.d >= 0.0 and valve_2.state_b.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp724 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2219
type: ALGORITHM

  assert(valve_2.state_b.T >= 273.15 and valve_2.state_b.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_2.state_b.T <= 2273.15, has value: " + String(valve_2.state_b.T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp725;
  modelica_boolean tmp726;
  static const MMC_DEFSTRINGLIT(tmp727,90,"Variable violating min/max constraint: 273.15 <= valve_2.state_b.T <= 2273.15, has value: ");
  modelica_string tmp728;
  static int tmp729 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp729)
  {
    tmp725 = GreaterEq(data->localData[0]->realVars[786] /* valve_2.state_b.T variable */,273.15);
    tmp726 = LessEq(data->localData[0]->realVars[786] /* valve_2.state_b.T variable */,2273.15);
    if(!(tmp725 && tmp726))
    {
      tmp728 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[786] /* valve_2.state_b.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp727),tmp728);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.state_b.T >= 273.15 and valve_2.state_b.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp729 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2220
type: ALGORITHM

  assert(valve_2.p >= 611.657 and valve_2.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= valve_2.p <= 100000000.0, has value: " + String(valve_2.p, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp730;
  modelica_boolean tmp731;
  static const MMC_DEFSTRINGLIT(tmp732,87,"Variable violating min/max constraint: 611.657 <= valve_2.p <= 100000000.0, has value: ");
  modelica_string tmp733;
  static int tmp734 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp734)
  {
    tmp730 = GreaterEq(data->localData[0]->realVars[781] /* valve_2.p variable */,611.657);
    tmp731 = LessEq(data->localData[0]->realVars[781] /* valve_2.p variable */,100000000.0);
    if(!(tmp730 && tmp731))
    {
      tmp733 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[781] /* valve_2.p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp732),tmp733);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",208,5,208,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.p >= 611.657 and valve_2.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp734 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(valve_2.port_a_T >= 273.15 and valve_2.port_a_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_2.port_a_T <= 2273.15, has value: " + String(valve_2.port_a_T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp735;
  modelica_boolean tmp736;
  static const MMC_DEFSTRINGLIT(tmp737,89,"Variable violating min/max constraint: 273.15 <= valve_2.port_a_T <= 2273.15, has value: ");
  modelica_string tmp738;
  static int tmp739 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp739)
  {
    tmp735 = GreaterEq(data->localData[0]->realVars[782] /* valve_2.port_a_T variable */,273.15);
    tmp736 = LessEq(data->localData[0]->realVars[782] /* valve_2.port_a_T variable */,2273.15);
    if(!(tmp735 && tmp736))
    {
      tmp738 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[782] /* valve_2.port_a_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp737),tmp738);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",340,3,345,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.port_a_T >= 273.15 and valve_2.port_a_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp739 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(valve_2.port_b_T >= 273.15 and valve_2.port_b_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valve_2.port_b_T <= 2273.15, has value: " + String(valve_2.port_b_T, "g"));
*/
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp740;
  modelica_boolean tmp741;
  static const MMC_DEFSTRINGLIT(tmp742,89,"Variable violating min/max constraint: 273.15 <= valve_2.port_b_T <= 2273.15, has value: ");
  modelica_string tmp743;
  static int tmp744 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp744)
  {
    tmp740 = GreaterEq(data->localData[0]->realVars[783] /* valve_2.port_b_T variable */,273.15);
    tmp741 = LessEq(data->localData[0]->realVars[783] /* valve_2.port_b_T variable */,2273.15);
    if(!(tmp740 && tmp741))
    {
      tmp743 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[783] /* valve_2.port_b_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp742),tmp743);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",346,3,351,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalve_2.port_b_T >= 273.15 and valve_2.port_b_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp744 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2223(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2075(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2076(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2077(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2078(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2079(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2080(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2081(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2082(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2083(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2084(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2085(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2086(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2087(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2088(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2089(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2090(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2091(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2092(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2093(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2094(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2095(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2096(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2097(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2098(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2099(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2100(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2101(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2102(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2103(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2104(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2105(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2106(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2107(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2108(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2109(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2110(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2111(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2112(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2113(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2114(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2115(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2116(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2117(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2118(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2119(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2120(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2121(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2122(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2123(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2124(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2125(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2126(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2127(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2128(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2129(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2130(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2131(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2132(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2133(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2134(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2135(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2136(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2137(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2138(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2139(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2140(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2141(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2142(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2143(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2144(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2145(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2146(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2147(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2148(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2149(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2150(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2151(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2152(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2153(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2154(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2155(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2156(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2157(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2158(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2159(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2160(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2161(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2162(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2163(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2164(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2165(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2166(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2167(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2168(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2169(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2170(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2171(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2172(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2173(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2174(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2175(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2176(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2177(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2178(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2179(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2180(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2181(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2182(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2183(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2184(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2185(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2186(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2187(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2188(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2189(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2190(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2191(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2192(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2193(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2194(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2195(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2196(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2197(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2198(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2199(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2200(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2201(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2202(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2203(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2204(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2205(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2206(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2207(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2208(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2209(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2210(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2211(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2212(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2213(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2214(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2215(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2216(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2217(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2218(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2219(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2220(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2221(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_2222(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

