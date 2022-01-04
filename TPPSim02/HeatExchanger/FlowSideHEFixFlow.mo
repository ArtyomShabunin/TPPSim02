within TPPSim02.HeatExchanger;

model FlowSideHEFixFlow
  extends TPPSim02.HeatExchanger.Icons.IconFlowSideHE;
  import TPPSim02.Choices.Dynamics;
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  
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

  parameter Medium.MassFlowRate[numberOfFlueSections] D_flow_v "Расход по трубкам вдоль потока газов";

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
  TPPSim02.Pipes.FlowNodeHeated[numberOfFlueSections, numberOfTubeSections] channel(each Din = Din, each deltaLpiezo = Lpiezo / (numberOfTubeSections + 1), each deltaLpipe = deltaLpipe, each deltaSFlow = deltaSFlow, each f_flow = f_flow, each flowMomentumDynamics = flowMomentumDynamics, each ke = ke, m_flow_start = transpose(fill(D_flow_v, numberOfTubeSections)))  annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNodeFixFlow[numberOfFlueSections] channel_fix_flow(D_flow_v = D_flow_v, each Din = Din, each deltaLpiezo = Lpiezo / (numberOfTubeSections + 1), each deltaLpipe = deltaLpipe, each deltaSFlow = deltaSFlow, each f_flow = f_flow, each ke = ke)  annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  Pipes.VolumeNodeWH[numberOfFlueSections, numberOfTubeSections] node(each deltaVFlow = deltaVFlow,
                                                                    h_start = if numberOfTubeSections == 1 then fill(fill((hin_start + hout_start) / 2, numberOfTubeSections), numberOfFlueSections)
                                                                              else fill(linspace(hin_start, hout_start, numberOfTubeSections), numberOfFlueSections),
                                                                    p_start = if numberOfTubeSections == 1 then fill(fill((pin_start + pout_start) / 2, numberOfTubeSections), numberOfFlueSections)
                                                                              else fill(linspace(pin_start, pout_start, numberOfTubeSections), numberOfFlueSections),
                                                                    each flowEnergyDynamics = flowEnergyDynamics,
                                                                    each flowMassDynamics = flowMassDynamics)  annotation(
    Placement(visible = true, transformation(origin = {30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));


equation
  for i in 1:numberOfFlueSections loop
    for j in 2:numberOfTubeSections loop
      
      connect(channel[i, j-1].Output, node[i, j].Input);
      connect(node[i, j].Output, channel[i, j].Input);

    end for;
  end for;
  
  for i in 1:numberOfFlueSections loop
    connect(channel_fix_flow[i].Output, node[i, 1].Input);
    connect(node[i, 1].Output, channel[i, 1].Input);
  end for;  
  
  
//Вход и выход
  for i in 1:numberOfFlueSections loop
    connect(Input, channel_fix_flow[i].Input);
    connect(channel[i, numberOfTubeSections].Output, Output);
  end for;
  
  connect(channel.heat, heat[:, 2:numberOfTubeSections+1]);
  connect(channel_fix_flow.heat, heat[:, 1]);

end FlowSideHEFixFlow;
