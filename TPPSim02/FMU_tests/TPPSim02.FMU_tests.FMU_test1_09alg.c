/* Algebraic */
#include "TPPSim02.FMU_tests.FMU_test1_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* for continuous time variables */
int TPPSim02_FMU_tests_FMU_test1_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  /* no Alg systems */

  TPPSim02_FMU_tests_FMU_test1_function_savePreSynchronous(data, threadData);
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
