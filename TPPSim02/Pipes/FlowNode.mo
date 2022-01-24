within TPPSim02.Pipes;

model FlowNode
  package Medium = Modelica.Media.Water.StandardWater;
  import TPPSim02.Choices.Dynamics;
  outer ThermoPower.System system;
  
  replaceable function alpha_func = TPPSim02.Thermal.Alpha.alfaForSHandECO;
  
  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр";
  parameter Modelica.SIunits.Length deltaLpipe = 10 "Длина";
  parameter Modelica.SIunits.Length deltaLpiezo = 0 "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area f_flow = 0.002 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Area deltaSFlow = 0.7 "Площадь поверхности теплообмена";
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость";
  
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  
  // Параметры уравнений динамики
  parameter Dynamics flowMomentumDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения момента вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  
  Medium.MassFlowRate D_flow_v(start = m_flow_start) "Массовый расход потока вода/пар";
  Modelica.SIunits.Velocity w_flow "Скорость потока в конечных объемах";

  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Real dp_fric "Потеря давления из-за сил трения";
  Real Xi_flow "Коэффициент гидравлического сопротивления участка";
  Real lambda_tr "Коэффициент трения";  
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты";
  
  Medium.DynamicViscosity mu "Динамическая вязкость";
  Medium.ThermalConductivity k "Коэффициент теплопроводности";
  Modelica.SIunits.PerUnit Re "Число Рейнольдса";
  Medium.PrandtlNumber Pr "Число Прандтля";
  Modelica.SIunits.CoefficientOfHeatTransfer alfa "Коэффициент теплопередачи к потоку";

  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heat annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation

  stateFlow = Medium.setState_phX(Output.p, 0.5*(inStream(Input.h_outflow)+inStream(Output.h_outflow)));

  w_flow = D_flow_v / stateFlow.d / f_flow "Расчет скорости потока вода/пар в конечных объемах";

  lambda_tr = 1 / (1.14 + 2 * log10(Din / ke)) ^ 2;
  Xi_flow = lambda_tr * deltaLpipe / Din;
  dp_fric = abs(w_flow) * w_flow * Xi_flow * stateFlow.d / 2 / system.g;
  dp_piez = stateFlow.d * system.g * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";

  if flowMomentumDynamics == Dynamics.SteadyState then
    Input.p - Output.p = dp_fric + dp_piez;
  else
    Input.p - Output.p = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;
  end if;

  Input.m_flow = D_flow_v;
  Output.m_flow + Input.m_flow = 0;

  mu = Medium.dynamicViscosity(stateFlow);
  k = Medium.thermalConductivity(stateFlow);
  Pr = Medium.prandtlNumber(stateFlow);
  Re = abs(w_flow) * Din * stateFlow.d / mu;
  
  alfa = alpha_func(w_flow = w_flow,
                    Din = Din,
                    k = k,
                    Re = Re,
                    Pr = Pr,
                    f_flow = f_flow,
                    state_in = Medium.setState_phX(Input.p, inStream(Input.h_outflow)),
                    state_out = Medium.setState_phX(Output.p,  inStream(Output.h_outflow)),
                    pv = Output.p,
                    Dv = D_flow_v);                    
  heat.Q_flow = -alfa * deltaSFlow * (stateFlow.T - heat.T);
  
  Output.h_outflow = max(min(inStream(Input.h_outflow) + heat.Q_flow / max(abs(D_flow_v), system.m_flow_small), 4100e3), 4e3);
  Input.h_outflow = max(min(inStream(Output.h_outflow) + heat.Q_flow / max(abs(D_flow_v), system.m_flow_small), 4100e3), 4e3);
initial equation

  if flowMomentumDynamics == Dynamics.FixedInitial then
    D_flow_v = m_flow_start;
  end if;

  annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {85, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}})}));
end FlowNode;
