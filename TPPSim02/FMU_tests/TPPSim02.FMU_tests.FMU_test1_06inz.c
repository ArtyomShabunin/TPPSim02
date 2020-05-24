/* Initialization */
#include "TPPSim02.FMU_tests.FMU_test1_model.h"
#include "TPPSim02.FMU_tests.FMU_test1_11mix.h"
#include "TPPSim02.FMU_tests.FMU_test1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_7(DATA *data, threadData_t *threadData);

extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_8(DATA *data, threadData_t *threadData);

extern void TPPSim02_FMU_tests_FMU_test1_eqFunction_9(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
y3 = 2.0
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[2] /* y3 STATE(1) */ = 2.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
y2 = 1.0
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[1] /* y2 STATE(1) */ = 1.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
y1 = 0.0
*/
void TPPSim02_FMU_tests_FMU_test1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[0] /* y1 STATE(1) */ = 0.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TPPSim02_FMU_tests_FMU_test1_eqFunction_7(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_8(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_9(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_4(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_5(data, threadData);
  TPPSim02_FMU_tests_FMU_test1_eqFunction_6(data, threadData);
  TRACE_POP
}


int TPPSim02_FMU_tests_FMU_test1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int TPPSim02_FMU_tests_FMU_test1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

