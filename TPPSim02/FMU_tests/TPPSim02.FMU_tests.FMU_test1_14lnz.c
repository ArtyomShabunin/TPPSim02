/* Linearization */
#include "TPPSim02.FMU_tests.FMU_test1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TPPSim02_FMU_tests_FMU_test1_linear_model_frame()
{
  return "model linear_TPPSim02_FMU__tests_FMU__test1\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer p = 3 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n"
  "\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[p] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = [%s];\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = [%s];\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "\n"
  "  Real 'x_y1' = x[1];\n""  Real 'x_y2' = x[2];\n""  Real 'x_y3' = x[3];\n"
  "  Real 'u_x1' = u[1];\n""  Real 'u_x2' = u[2];\n""  Real 'u_x3' = u[3];\n"
  "  Real 'y_y1' = y[1];\n""  Real 'y_y2' = y[2];\n""  Real 'y_y3' = y[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_TPPSim02_FMU__tests_FMU__test1;\n";
}
const char *TPPSim02_FMU_tests_FMU_test1_linear_model_datarecovery_frame()
{
  return "model linear_TPPSim02_FMU__tests_FMU__test1\n  parameter Integer n = 3 \"number of states\";\n  parameter Integer p = 3 \"number of inputs\";\n  parameter Integer q = 3 \"number of outputs\";\n  parameter Integer nz = 3 \"data recovery variables\";\n"
  "\n"
  "  parameter Real x0[3] = %s;\n"
  "  parameter Real u0[3] = %s;\n"
  "  parameter Real z0[3] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = [%s];\n"
  "  parameter Real B[n, p] = [%s];\n"
  "  parameter Real C[q, n] = [%s];\n"
  "  parameter Real D[q, p] = [%s];\n"
  "  parameter Real Cz[nz, n] = [%s];\n"
  "  parameter Real Dz[nz, p] = [%s];\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[p](start=u0);\n"
  "  output Real y[q];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_y1' = x[1];\n""  Real 'x_y2' = x[2];\n""  Real 'x_y3' = x[3];\n"
  "  Real 'u_x1' = u[1];\n""  Real 'u_x2' = u[2];\n""  Real 'u_x3' = u[3];\n"
  "  Real 'y_y1' = y[1];\n""  Real 'y_y2' = y[2];\n""  Real 'y_y3' = y[3];\n"
  "  Real 'z_x1' = z[1];\n""  Real 'z_x2' = z[2];\n""  Real 'z_x3' = z[3];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_TPPSim02_FMU__tests_FMU__test1;\n";
}
#if defined(__cplusplus)
}
#endif

