within TPPSim02.HeatExchanger;

model FlowSideHE2D
  extends TPPSim02.HeatExchanger.Icons.IconFlowSideHE;
  import TPPSim02.Choices.Dynamics;
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  
//  replaceable function alpha_func = TPPSim02.Thermal.Alpha.alfaForSHandECO;

  // Параметры разбиения
  parameter Integer numberOfTubeSections = 1 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));
  final parameter Integer numberOfFlueSections = z2 "Число участков разбиения газохода" annotation(
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
  final parameter Modelica.SIunits.Area f_flow = Modelica.Constants.pi * Din ^ 2 * z1 / 4 "Площадь для прохода теплоносителя";
  final parameter Modelica.SIunits.Length deltaLpipe = Lpipe / numberOfTubeSections "Длина теплообменной трубки для элемента разбиения";
  final parameter Modelica.SIunits.Area deltaSFlow = deltaLpipe * Modelica.Constants.pi * Din * z1 "Внутренняя площадь одного участка ряда труб";
  final parameter Modelica.SIunits.Volume deltaVFlow = deltaLpipe * f_flow "Внутренний объем одного участка ряда труб";

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
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[numberOfFlueSections, numberOfTubeSections+1] heat annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode[numberOfFlueSections, numberOfTubeSections+1] channel(each Din = Din,
        each deltaLpiezo = Lpiezo / (numberOfTubeSections + 1),
        each deltaLpipe = deltaLpipe,
        each deltaSFlow = deltaSFlow,
        each f_flow = f_flow,
        each flowMomentumDynamics = flowMomentumDynamics,
        each ke = ke,
        each m_flow_start = m_flow_start)  annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Pipes.VolumeNode[numberOfFlueSections, numberOfTubeSections] node(each deltaVFlow = deltaVFlow,
                                                                    h_start = if numberOfTubeSections == 1 then fill(fill((hin_start + hout_start) / 2, numberOfTubeSections), numberOfFlueSections)
                                                                              else fill(linspace(hin_start, hout_start, numberOfTubeSections), numberOfFlueSections),
                                                                    p_start = if numberOfTubeSections == 1 then fill(fill((pin_start + pout_start) / 2, numberOfTubeSections), numberOfFlueSections)
                                                                              else fill(linspace(pin_start, pout_start, numberOfTubeSections), numberOfFlueSections),
                                                                    each flowEnergyDynamics = flowEnergyDynamics,
                                                                    each flowMassDynamics = flowMassDynamics)  annotation(
    Placement(visible = true, transformation(origin = {30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));


equation
  for i in 1:numberOfFlueSections loop
    for j in 1:numberOfTubeSections loop
      
      if mod(ceil(i / zahod), 2) == 1 then
// нечетные ходы
        connect(channel[i, j].Output, node[i, j].Input);
        connect(node[i, j].Output, channel[i, j + 1].Input);
      else
// четные ходы
        connect(channel[i, numberOfTubeSections - j + 2].Output, node[i, numberOfTubeSections - j + 1].Input);
        connect(node[i, numberOfTubeSections - j + 1].Output, channel[i, numberOfTubeSections - j + 1].Input);
      end if;
    end for;
  end for;
// Гибы
  for i in 1:numberOfFlueSections - zahod loop
    if mod(ceil(i / zahod), 2) == 1 then
// нечетные ходы
      connect(channel[i, numberOfTubeSections + 1].Output, channel[i + zahod, numberOfTubeSections + 1].Input);
    else
// четные ходы
      connect(channel[i, 1].Output, channel[i + zahod, 1].Input);
    end if;
  end for;
//Вход и выход
  for i in 1:zahod loop
    connect(Input, channel[i, 1].Input);
    if mod(ceil(numberOfFlueSections / zahod), 2) == 1 then
// нечетные ходы
      connect(channel[numberOfFlueSections + 1 - i, numberOfTubeSections + 1].Output, Output);
    else
// четные ходы
      connect(channel[numberOfFlueSections + 1 - i, 1].Output, Output);
    end if;
  end for;
  connect(channel.heat, heat);
end FlowSideHE2D;
