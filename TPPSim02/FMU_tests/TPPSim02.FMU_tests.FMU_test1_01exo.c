/* External objects file */
#include "TPPSim02.FMU_tests.FMU_test1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TPPSim02_FMU_tests_FMU_test1_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

