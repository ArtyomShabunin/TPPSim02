within TPPSim02.GasDuct;

model FlowNode
  package Medium = TPPSim02.Media.ExhaustGas;
  import Modelica.SIunits.Conversions.to_degF;
  outer ThermoPower.System system;
  parameter Modelica.SIunits.Length deltaLpipe = 0.3 "Длина";
  parameter Modelica.SIunits.Length deltaLpiezo = 0 "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area f_flow = 1 "Площадь для прохода теплоносителя";
  parameter Real Kaer = 0.01 "Коэффициент для расчета аэродинамического сопротивления";
  
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  
  Medium.MassFlowRate D_flow_v "Массовый расход потока";
  Medium.Density d "Плотность газов";
  Medium.DynamicViscosity mu "Динамическая вязкость газов";
  Medium.MolarMass MM;

  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Real dp_fric "Потеря давления из-за сил трения"; 
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты"; 

  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  stateFlow = Medium.setState_phX(Output.p, actualStream(Input.h_outflow), actualStream(Input.Xi_outflow));
  
  d = Medium.density(stateFlow);
  mu = Medium.dynamicViscosity(stateFlow);
  MM = Medium.molarMass(stateFlow);

  dp_fric = Kaer * sign(D_flow_v) * (abs(D_flow_v) / f_flow) ^ 1.684 * mu ^ 0.216 * (460 + to_degF(stateFlow.T)) / (MM * 10 ^ 3);

  dp_piez = d * system.g * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";

  Input.p - Output.p = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;

  Input.m_flow = D_flow_v;
  Output.m_flow + Input.m_flow = 0;
  
  Output.h_outflow = inStream(Input.h_outflow);
  Input.h_outflow = inStream(Output.h_outflow);
  
  Output.Xi_outflow = inStream(Input.Xi_outflow);
  Input.Xi_outflow = inStream(Output.Xi_outflow);

initial equation
  D_flow_v = m_flow_start;

  annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {255, 170, 127}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}})}));

end FlowNode;
