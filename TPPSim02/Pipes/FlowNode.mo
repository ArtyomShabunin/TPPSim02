within TPPSim02.Pipes;

model FlowNode
  package Medium = Modelica.Media.Water.StandardWater;
  parameter Modelica.SIunits.Length deltaLpipe = 10 "Длина одного участка канала";
  parameter Modelica.SIunits.Length deltaLpiezo = -1 "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area f_flow = 0.002 "Площадь для прохода теплоносителя";
  
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


  lambda_tr = 1 / (1.14 + 2 * log10(0.3 / 0.00014)) ^ 2;
  Xi_flow = lambda_tr * deltaLpipe / 0.3;
  dp_fric = abs(w_flow_v) * w_flow_v * Xi_flow * stateFlow.d / 2;
  dp_piez = stateFlow.d * Modelica.Constants.g_n * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";


  Input.p - Output.p = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;


  Input.m_flow = D_flow_v;
  Output.m_flow + Input.m_flow = 0;
  
  Output.h_outflow = inStream(Input.h_outflow);
  Input.h_outflow = inStream(Output.h_outflow);

//  actualStream(Input.h_outflow) = actualStream(Output.h_outflow);

initial equation
  D_flow_v = 0;

  annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {225, 225, 225}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}})}));
end FlowNode;
