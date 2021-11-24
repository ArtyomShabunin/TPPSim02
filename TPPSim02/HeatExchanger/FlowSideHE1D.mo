within TPPSim02.HeatExchanger;

model FlowSideHE1D
  extends TPPSim02.HeatExchanger.Icons.IconFlowSideHE;
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  
  replaceable function alpha_func = TPPSim02.Thermal.Alpha.alfaForSHandECO;

// Параметры разбиения
  parameter Integer Nv = 1 "Число узлов" annotation(
    Dialog(group = "Параметры разбиения"));   
// Геометрия пучка
  parameter Integer zahod = 1 "Заходность труб теплообменника" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Integer z1 = 126 "Число труб по ширине газохода" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Integer z2 = 4 "Число труб по ходу газов в теплообменнике" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpipe = 20.85 "Длина теплообменной трубки" annotation(
    Dialog(group = "Геометрия пучка"));
  // Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Din = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(group = "Конструктивные характеристики труб"));

// Расчетные параметры
  final inner parameter Modelica.SIunits.Area f_flow = Modelica.Constants.pi * Din ^ 2 * z1 * zahod / 4 "Площадь для прохода теплоносителя";
//  final inner parameter Modelica.SIunits.Length deltaLpipe = Lpipe / numberOfTubeSections "Длина теплообменной трубки для элемента разбиения";
  final inner parameter Modelica.SIunits.Area deltaSFlow = Lpipe * Modelica.Constants.pi * Din * z1 * z2 / Nv "Внутренняя площадь одного участка";
  final inner parameter Modelica.SIunits.Volume deltaVFlow = Lpipe * f_flow * z2 / zahod / Nv "Внутренний объем одного участка ряда труб";
  
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[Nv] heat annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode[Nv+1] channel(each Din = Din,
                                                                                each deltaLpiezo = 0,
                                                                                each deltaLpipe = Lpipe * z2 / zahod / Nv,
                                                                                each f_flow = f_flow,
                                                                                each ke = ke)  annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Pipes.VolumeNode[Nv] node(each deltaVFlow = deltaVFlow, each use_Q_in = true)  annotation(
    Placement(visible = true, transformation(origin = {30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Medium.DynamicViscosity[Nv] mu "Динамическая вязкость";
  Medium.ThermalConductivity[Nv] k "Коэффициент теплопроводности";
  Modelica.SIunits.PerUnit[Nv] Re "Число Рейнольдса";
  Medium.PrandtlNumber[Nv] Pr "Число Прандтля";
  Modelica.SIunits.CoefficientOfHeatTransfer[Nv] alfa "Коэффициент теплопередачи к потоку";
  Medium.MassFlowRate[Nv] Dv "Массовый расход потока";
  Modelica.SIunits.Velocity[Nv] w_flow "Скорость потока ";

equation

  for i in 1:Nv loop
    mu[i] = Medium.dynamicViscosity(node[i].stateFlow);
    k[i] = Medium.thermalConductivity(node[i].stateFlow);
    Pr[i] = Medium.prandtlNumber(node[i].stateFlow);
    Dv[i] = abs(node[i].Input.m_flow - node[i].Output.m_flow) / 2;
    w_flow[i] = abs(Dv[i]) / node[i].stateFlow.d / f_flow;
    Re[i] = w_flow[i] * Din * node[i].stateFlow.d / mu[i];
    alfa[i] = alpha_func(w_flow = w_flow[i], Din = Din, k = k[i], Re = Re[i], Pr = Pr[i]);
    node[i].Q_in = -alfa[i] * deltaSFlow * (node[i].stateFlow.T - heat[i].T);
    heat[i].Q_flow = node[i].Q_in;

    connect(channel[i].Output, node[i].Input);
    connect(node[i].Output, channel[i + 1].Input);

  end for;

//Вход и выход
    connect(Input, channel[1].Input);
    connect(channel[Nv + 1].Output, Output);

end FlowSideHE1D;
