within TPPSim02.GasDuct;

model FlowNode
  package Medium = TPPSim02.Media.ExhaustGas;
  import Modelica.SIunits.Conversions.to_degF;
  import TPPSim02.Choices.Dynamics;
  outer ThermoPower.System system;
  parameter Modelica.SIunits.Length deltaLpipe = 0.3 "Длина";
  parameter Modelica.SIunits.Length deltaLpiezo = 0 "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Diameter Dout = 0.044 "Наружный диаметр трубок теплообменника";
  parameter Modelica.SIunits.Area f_flow = 1 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Area H_fin = 1 "Площадь поверхности теплообмена";  

  parameter Real Kaer = 0.01 "Коэффициент для расчета аэродинамического сопротивления";
  parameter Real k_gamma_gas = 1 "Поправка к коэффициенту теплоотдачи со стороны газов";
  
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  
  parameter Dynamics gasMomentumDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения момента газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics")); 
  
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
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heat annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Medium.ThermalConductivity k "Коэффициент теплопроводности газов";
  Modelica.SIunits.PerUnit Re "Число Рейнольдса";
  Medium.PrandtlNumber Pr "Число Прандтля";
  Modelica.SIunits.CoefficientOfHeatTransfer alfa "Коэффициент теплопередачи со стороны потока газов";

  parameter Real n_fin = 1 "Показатель степени 'n' в формуле коэффициента теплоотдачи";
  parameter Real Cs = 1 "Коэффициент, определяемый в зависимости от от относительного поперечного и продольного шага труб в пучке, типа пучка и коэффициента оребрения";
  parameter Real Cz = 1 "Поправка на число рядов труб по ходу газов";

equation

  stateFlow = Medium.setState_phX(Output.p, 0.5*(inStream(Input.h_outflow)+inStream(Output.h_outflow)), actualStream(Input.Xi_outflow));
  
  d = Medium.density(stateFlow);
  mu = Medium.dynamicViscosity(stateFlow);
  MM = Medium.molarMass(stateFlow);

  dp_fric = Kaer * sign(D_flow_v) * (abs(D_flow_v) / f_flow) ^ 1.684 * mu ^ 0.216 * (460 + to_degF(stateFlow.T)) / (MM * 10 ^ 3);

  dp_piez = d * system.g * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";

  if gasMomentumDynamics == Dynamics.SteadyState then
    Input.p - Output.p = 0;
  else
    Input.p - Output.p = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;
  end if;

  Input.m_flow = D_flow_v;
  Output.m_flow + Input.m_flow = 0;
  
  k = Medium.thermalConductivity(stateFlow);
  Pr = Medium.prandtlNumber(stateFlow);
//  Dv[i,j] = abs(node[i,j].Input.m_flow-node[i,j].Output.m_flow)/2;
  Re = abs(D_flow_v) * Dout / f_flow / mu;
  alfa = max(k_gamma_gas * 0.113 * Cs * Cz * k / Dout * Re ^ n_fin * Pr ^ 0.33, 0.1);

  heat.Q_flow = -alfa * H_fin * (stateFlow.T - heat.T);     
  
  Output.h_outflow = inStream(Input.h_outflow) + heat.Q_flow / max(abs(D_flow_v), system.m_flow_small);
  Input.h_outflow = inStream(Output.h_outflow) + heat.Q_flow / max(abs(D_flow_v), system.m_flow_small);

  
  Output.Xi_outflow = inStream(Input.Xi_outflow);
  Input.Xi_outflow = inStream(Output.Xi_outflow);

initial equation
  
  if gasMomentumDynamics == Dynamics.FixedInitial then
    D_flow_v = m_flow_start;
  end if;

  annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {255, 170, 127}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}})}));


end FlowNode;
