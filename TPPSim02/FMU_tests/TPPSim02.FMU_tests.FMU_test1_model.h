/* Simulation code for TPPSim02.FMU_tests.FMU_test1 generated by the OpenModelica Compiler OpenModelica 1.15.0~dev-49-gb315f0e. */
#if !defined(TPPSim02_FMU_tests_FMU_test1__MODEL_H)
#define TPPSim02_FMU_tests_FMU_test1__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "TPPSim02.FMU_tests.FMU_test1_functions.h"


extern void TPPSim02_FMU_tests_FMU_test1_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void TPPSim02_FMU_tests_FMU_test1_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int TPPSim02_FMU_tests_FMU_test1_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_checkForAsserts(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int TPPSim02_FMU_tests_FMU_test1_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* TPPSim02_FMU_tests_FMU_test1_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* TPPSim02_FMU_tests_FMU_test1_relationDescription(int i);
extern void TPPSim02_FMU_tests_FMU_test1_function_initSample(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int TPPSim02_FMU_tests_FMU_test1_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* TPPSim02_FMU_tests_FMU_test1_linear_model_frame(void);
extern const char* TPPSim02_FMU_tests_FMU_test1_linear_model_datarecovery_frame(void);
extern int TPPSim02_FMU_tests_FMU_test1_mayer(DATA* data, modelica_real** res, short *);
extern int TPPSim02_FMU_tests_FMU_test1_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int TPPSim02_FMU_tests_FMU_test1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int TPPSim02_FMU_tests_FMU_test1_setInputData(DATA *data, const modelica_boolean file);
extern int TPPSim02_FMU_tests_FMU_test1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void TPPSim02_FMU_tests_FMU_test1_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void TPPSim02_FMU_tests_FMU_test1_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int TPPSim02_FMU_tests_FMU_test1_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void TPPSim02_FMU_tests_FMU_test1_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void TPPSim02_FMU_tests_FMU_test1_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int TPPSim02_FMU_tests_FMU_test1_inputNames(DATA* data, char ** names);
extern int TPPSim02_FMU_tests_FMU_test1_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int TPPSim02_FMU_tests_FMU_test1_functionLocalKnownVars(DATA*, threadData_t*);
extern int TPPSim02_FMU_tests_FMU_test1_symbolicInlineSystem(DATA*, threadData_t*);

#include "TPPSim02.FMU_tests.FMU_test1_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(TPPSim02_FMU_tests_FMU_test1__MODEL_H) */


