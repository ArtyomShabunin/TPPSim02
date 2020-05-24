/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_F 0
  int TPPSim02_FMU_tests_FMU_test1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_D 1
  int TPPSim02_FMU_tests_FMU_test1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_C 2
  int TPPSim02_FMU_tests_FMU_test1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_B 3
  int TPPSim02_FMU_tests_FMU_test1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define TPPSim02_FMU_tests_FMU_test1_INDEX_JAC_A 4
  int TPPSim02_FMU_tests_FMU_test1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


