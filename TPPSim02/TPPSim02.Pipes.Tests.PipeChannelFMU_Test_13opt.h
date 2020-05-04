#if defined(__cplusplus)
  extern "C" {
#endif
  int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_mayer(DATA* data, modelica_real** res, short*);
  int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_lagrange(DATA* data, modelica_real** res, short *, short *);
  int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_setInputData(DATA *data, const modelica_boolean file);
  int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif