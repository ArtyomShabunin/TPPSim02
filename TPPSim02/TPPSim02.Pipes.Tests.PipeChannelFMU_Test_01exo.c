/* External objects file */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
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

