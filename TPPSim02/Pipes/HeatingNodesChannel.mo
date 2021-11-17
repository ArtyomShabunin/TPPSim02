within TPPSim02.Pipes;

model HeatingNodesChannel
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  package SI = Modelica.SIunits;
  import Modelica.Constants.pi;
  
  parameter Integer numberOfVolumes = 1 "Число участков разбиения" annotation(
    Dialog(group = "Параметры разбиения"));

  // Конструктивные характеристики
  parameter SI.Diameter Din = 0.3 "Внутренний диаметр" annotation(
  Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length Lpipe = 25 "Длина трубопровода" annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length Lpiezo = 0 "Перепад высот между выходом и входом трубы"   annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Real n_parallel = 1 "Число параллельных трубопроводов" annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость"  annotation(
    Dialog(group = "Конструктивные характеристики"));
    
  // Начальные параметры
  parameter Medium.AbsolutePressure pin_start = system.p_start "Начальное давление на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.AbsolutePressure pout_start = system.p_start "Начальное давление на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tin_start = system.T_start "Начальная температура на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tout_start = system.T_start "Начальная температура на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));

  
  TPPSim02.Pipes.VolumeNode[numberOfVolumes] node(each deltaVFlow = pi * Din ^ 2 * n_parallel * Lpipe / numberOfVolumes / 4,
                                                  h_start = linspace(Medium.specificEnthalpy_pT(pin_start,Tin_start),Medium.specificEnthalpy_pT(pout_start,Tout_start),numberOfVolumes),
                                                  p_start = linspace(pin_start, pout_start, numberOfVolumes),
                                                  each use_Q_in = true)  annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode[numberOfVolumes+1] channel(each Din = Din,
                                                     each deltaLpiezo = Lpiezo/numberOfVolumes,
                                                     each deltaLpipe = Lpipe/numberOfVolumes,
                                                     each f_flow = pi*Din^2*n_parallel/4,
                                                     each ke = ke,
                                                     each m_flow_start = m_flow_start)  annotation(
    Placement(visible = true, transformation(origin = {30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[numberOfVolumes] heat annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Medium.MassFlowRate Dv[numberOfVolumes] "Массовый расход потока";

  
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  for i in 1:(numberOfVolumes) loop
    Dv[i] = abs(node[i].Input.m_flow-node[i].Output.m_flow)/2;
    node[i].Q_in = TPPSim02.Thermal.HeatFlowRates.hfrForPipeHeating(Din=Din,
                                                                 f_flow=channel[i].f_flow,
                                                                 deltaSFlow=pi*Din*n_parallel*Lpipe/numberOfVolumes,
                                                                 stateFlow=node[i].stateFlow,
                                                                 t_m=heat[i].T,
                                                                 Dv=Dv[i]);

    heat[i].Q_flow = node[i].Q_in;
    
    connect(channel[i].Output, node[i].Input);
    connect(node[i].Output, channel[i+1].Input);
  end for;
  
  connect(Input, channel[1].Input);
  connect(channel[numberOfVolumes+1].Output, Output);
annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {85, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}}), Ellipse(origin = {0, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}}), Ellipse(origin = {62, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}}), Ellipse(origin = {-60, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}})}));
end HeatingNodesChannel;