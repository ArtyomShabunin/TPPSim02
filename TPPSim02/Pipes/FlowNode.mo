within TPPSim02.Pipes;

model FlowNode
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр";
  parameter Modelica.SIunits.Length deltaLpipe = 10 "Длина";
  parameter Modelica.SIunits.Length deltaLpiezo = 0 "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area f_flow = 0.002 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость";
  
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  
  Medium.MassFlowRate D_flow_v "Массовый расход потока вода/пар";
  Modelica.SIunits.Velocity w_flow_v "Скорость потока в конечных объемах";

  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Real dp_fric "Потеря давления из-за сил трения";
  Real Xi_flow "Коэффициент гидравлического сопротивления участка";
  Real lambda_tr "Коэффициент трения";  
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты"; 

  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  stateFlow = Medium.setState_phX(Output.p, inStream(Input.h_outflow));

  w_flow_v = D_flow_v / stateFlow.d / f_flow "Расчет скорости потока вода/пар в конечных объемах";

  lambda_tr = 1 / (1.14 + 2 * log10(Din / ke)) ^ 2;
  Xi_flow = lambda_tr * deltaLpipe / Din;
  dp_fric = abs(w_flow_v) * w_flow_v * Xi_flow * stateFlow.d / 2 / system.g;
  dp_piez = stateFlow.d * system.g * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";

  Input.p - Output.p = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;

  Input.m_flow = D_flow_v;
  Output.m_flow + Input.m_flow = 0;
  
  Output.h_outflow = inStream(Input.h_outflow);
  Input.h_outflow = inStream(Output.h_outflow);

initial equation
  D_flow_v = m_flow_start;

  annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {85, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}})}));
end FlowNode;
