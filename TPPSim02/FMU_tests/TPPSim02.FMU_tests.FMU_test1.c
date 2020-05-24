/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TPPSim02.FMU_tests.FMU_test1_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation TPPSim02_FMU_tests_FMU_test1_performSimulation
#define prefixedName_updateContinuousSystem TPPSim02_FMU_tests_FMU_test1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation TPPSim02_FMU_tests_FMU_test1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TPPSim02_FMU_tests_FMU_test1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->localData[0]->realVars[6] /* x1 variable */ = data->simulationInfo->inputVars[0];
  data->localData[0]->realVars[7] /* x2 variable */ = data->simulationInfo->inputVars[1];
  data->localData[0]->realVars[8] /* x3 variable */ = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[8].attribute.start;
  
  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[2];
  
  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[6].info.name;
  names[1] = (char *) data->modelData->realVarsData[7].info.name;
  names[2] = (char *) data->modelData->realVarsData[8].info.name;
  
  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = data->localData[0]->realVars[0] /* y1 STATE(1) */;
  data->simulationInfo->outputVars[1] = data->localData[0]->realVars[1] /* y2 STATE(1) */;
  data->simulationInfo->outputVars[2] = data->localData[0]->realVars[2] /* y3 STATE(1) */;
  
  TRACE_POP
  return 0;
}

int TPPSim02_FMU_tests_FMU_test1_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 7
type: SIMPLE_ASSIGN
der(y1) = x1
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[3] /* der(y1) STATE_DER */ = data->localData[0]->realVars[6] /* x1 variable */;
  TRACE_POP
}
/*
equation index: 8
type: SIMPLE_ASSIGN
der(y2) = x2
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[4] /* der(y2) STATE_DER */ = data->localData[0]->realVars[7] /* x2 variable */;
  TRACE_POP
}
/*
equation index: 9
type: SIMPLE_ASSIGN
der(y3) = x3
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[5] /* der(y3) STATE_DER */ = data->localData[0]->realVars[8] /* x3 variable */;
  TRACE_POP
}

OMC_DISABLE_OPT
int TPPSim02_FMU_tests_FMU_test1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TPPSim02_FMU_tests_FMU_test1_functionLocalKnownVars(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_7(data, threadData);

  TPPSim02_FMU_tests_FMU_test1_eqFunction_8(data, threadData);

  TPPSim02_FMU_tests_FMU_test1_eqFunction_9(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TPPSim02_FMU_tests_FMU_test1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_9(DATA* data, threadData_t *threadData);
extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_8(DATA* data, threadData_t *threadData);
extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_7(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    TPPSim02_FMU_tests_FMU_test1_eqFunction_9(data, threadData);

    TPPSim02_FMU_tests_FMU_test1_eqFunction_8(data, threadData);

    TPPSim02_FMU_tests_FMU_test1_eqFunction_7(data, threadData);
}

int TPPSim02_FMU_tests_FMU_test1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TPPSim02_FMU_tests_FMU_test1_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TPPSim02.FMU_tests.FMU_test1_12jac.h"
#include "TPPSim02.FMU_tests.FMU_test1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TPPSim02_FMU_tests_FMU_test1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) TPPSim02_FMU_tests_FMU_test1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) TPPSim02_FMU_tests_FMU_test1_performQSSSimulation,
   TPPSim02_FMU_tests_FMU_test1_updateContinuousSystem,
   TPPSim02_FMU_tests_FMU_test1_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   TPPSim02_FMU_tests_FMU_test1_initializeStateSets,
   #else
   NULL,
   #endif
   TPPSim02_FMU_tests_FMU_test1_initializeDAEmodeData,
   TPPSim02_FMU_tests_FMU_test1_functionODE,
   TPPSim02_FMU_tests_FMU_test1_functionAlgebraics,
   TPPSim02_FMU_tests_FMU_test1_functionDAE,
   TPPSim02_FMU_tests_FMU_test1_functionLocalKnownVars,
   TPPSim02_FMU_tests_FMU_test1_input_function,
   TPPSim02_FMU_tests_FMU_test1_input_function_init,
   TPPSim02_FMU_tests_FMU_test1_input_function_updateStartValues,
   TPPSim02_FMU_tests_FMU_test1_data_function,
   TPPSim02_FMU_tests_FMU_test1_output_function,
   TPPSim02_FMU_tests_FMU_test1_setc_function,
   TPPSim02_FMU_tests_FMU_test1_function_storeDelayed,
   TPPSim02_FMU_tests_FMU_test1_updateBoundVariableAttributes,
   TPPSim02_FMU_tests_FMU_test1_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_lambda0,
   TPPSim02_FMU_tests_FMU_test1_functionRemovedInitialEquations,
   TPPSim02_FMU_tests_FMU_test1_updateBoundParameters,
   TPPSim02_FMU_tests_FMU_test1_checkForAsserts,
   TPPSim02_FMU_tests_FMU_test1_function_ZeroCrossingsEquations,
   TPPSim02_FMU_tests_FMU_test1_function_ZeroCrossings,
   TPPSim02_FMU_tests_FMU_test1_function_updateRelations,
   TPPSim02_FMU_tests_FMU_test1_zeroCrossingDescription,
   TPPSim02_FMU_tests_FMU_test1_relationDescription,
   TPPSim02_FMU_tests_FMU_test1_function_initSample,
   TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_A,
   TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_B,
   TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_C,
   TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_D,
   TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_F,
   TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianA,
   TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianB,
   TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianC,
   TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianD,
   TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianF,
   TPPSim02_FMU_tests_FMU_test1_functionJacA_column,
   TPPSim02_FMU_tests_FMU_test1_functionJacB_column,
   TPPSim02_FMU_tests_FMU_test1_functionJacC_column,
   TPPSim02_FMU_tests_FMU_test1_functionJacD_column,
   TPPSim02_FMU_tests_FMU_test1_functionJacF_column,
   TPPSim02_FMU_tests_FMU_test1_linear_model_frame,
   TPPSim02_FMU_tests_FMU_test1_linear_model_datarecovery_frame,
   TPPSim02_FMU_tests_FMU_test1_mayer,
   TPPSim02_FMU_tests_FMU_test1_lagrange,
   TPPSim02_FMU_tests_FMU_test1_pickUpBoundsForInputsInOptimization,
   TPPSim02_FMU_tests_FMU_test1_setInputData,
   TPPSim02_FMU_tests_FMU_test1_getTimeGrid,
   TPPSim02_FMU_tests_FMU_test1_symbolicInlineSystem,
   TPPSim02_FMU_tests_FMU_test1_function_initSynchronous,
   TPPSim02_FMU_tests_FMU_test1_function_updateSynchronous,
   TPPSim02_FMU_tests_FMU_test1_function_equationsSynchronous,
   TPPSim02_FMU_tests_FMU_test1_inputNames,
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
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.3"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "TPPSim02"
#define _OMC_LIT_RESOURCE_3_dir_data "/TPPSim02"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,8,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,9,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void TPPSim02_FMU_tests_FMU_test1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TPPSim02_FMU_tests_FMU_test1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TPPSim02.FMU_tests.FMU_test1";
  data->modelData->modelFilePrefix = "TPPSim02.FMU_tests.FMU_test1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/TPPSim02/FMU_tests";
  data->modelData->modelGUID = "{2532c7c4-6216-4b5a-8fae-67a83ba59a47}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "TPPSim02.FMU_tests.FMU_test1_init.c"
    ;
  static const char contents_info[] =
    #include "TPPSim02.FMU_tests.FMU_test1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "TPPSim02.FMU_tests.FMU_test1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "TPPSim02.FMU_tests.FMU_test1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 3;
  data->modelData->nVariablesReal = 9;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 0;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 3;
  data->modelData->nOutputVars = 3;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  data->modelData->modelDataXml.fileName = "TPPSim02.FMU_tests.FMU_test1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 10;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
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
  
    TPPSim02_FMU_tests_FMU_test1_setupDataStruc(&data, threadData);
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


