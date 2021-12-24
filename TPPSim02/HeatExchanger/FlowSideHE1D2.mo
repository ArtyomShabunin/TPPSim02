within TPPSim02.HeatExchanger;

model FlowSideHE1D2
  extends TPPSim02.HeatExchanger.Icons.IconFlowSideHE;
  import TPPSim02.Choices.Dynamics;
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
  parameter Modelica.SIunits.Length Lpiezo = 20.85 "Разность высот выходного и входного фланцев" annotation(
    Dialog(group = "Геометрия пучка"));
  // Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Din = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(group = "Конструктивные характеристики труб"));

  // Расчетные параметры
  final parameter Modelica.SIunits.Area f_flow = Modelica.Constants.pi * Din ^ 2 * z1 * zahod / 4 "Площадь для прохода теплоносителя";
  final parameter Modelica.SIunits.Area deltaSFlow = Lpipe * Modelica.Constants.pi * Din * z1 * z2 / Nv "Внутренняя площадь одного участка";
  final parameter Modelica.SIunits.Volume deltaVFlow = Lpipe * f_flow * z2 / zahod / Nv "Внутренний объем одного участка ряда труб";

  // Начальные параметры
  parameter Medium.AbsolutePressure pin_start = system.p_start "Начальное давление на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.AbsolutePressure pout_start = system.p_start "Начальное давление на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tin_start = system.T_start "Начальная температура на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tout_start = system.T_start "Начальная температура на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy hin_start = Medium.specificEnthalpy_pT(pin_start,Tin_start) "Начальная энтальпия на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy hout_start = Medium.specificEnthalpy_pT(pout_start,Tout_start) "Начальная энтальпия на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));  
  parameter Medium.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));


  // Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics flowMomentumDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения момента вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[Nv+1] heat annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNodeHeated[Nv+1] channel(each Din = Din,
                                        each deltaLpiezo = Lpiezo / (Nv+1),
                                        each deltaLpipe = Lpipe * z2 / zahod / (Nv+1),
                                        each f_flow = f_flow,
                                        each deltaSFlow = deltaSFlow,
                                        each ke = ke,
                                        each m_flow_start = m_flow_start,
                                        each flowMomentumDynamics = flowMomentumDynamics)  annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Pipes.VolumeNodeWH[Nv] node(each deltaVFlow = deltaVFlow, 
                            h_start = if Nv == 1 then fill((hin_start + hout_start) / 2, Nv)
                                      else linspace(hin_start, hout_start, Nv),
                            p_start = if Nv == 1 then fill((pin_start + pout_start) / 2, Nv)
                                      else linspace(pin_start, pout_start, Nv),
                            each flowEnergyDynamics = flowEnergyDynamics,
                            each flowMassDynamics = flowMassDynamics)  annotation(
    Placement(visible = true, transformation(origin = {30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));


equation

  for i in 1:Nv loop

    connect(channel[i].Output, node[i].Input);
    connect(node[i].Output, channel[i + 1].Input);

  end for;

//Вход и выход
  connect(Input, channel[1].Input);
  connect(channel[Nv + 1].Output, Output);
  connect(channel.heat, heat);
end FlowSideHE1D2;
