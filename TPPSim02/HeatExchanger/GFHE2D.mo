within TPPSim02.HeatExchanger;

model GFHE2D
  extends TPPSim02.HeatExchanger.Icons.IconHE;
  import TPPSim02.Choices.Dynamics;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  //Параметры разбиения
  parameter Integer numberOfTubeSections = 1 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));  
//Геометрия пучка
  //  parameter TPPSim.Choices.HRSG_type HRSG_type_set = Choices.HRSG_type.horizontalBottom "Геометрия пучка (горизонтальный/вертикальный)" annotation(
  //    Dialog(group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length s1 = 82e-3 "Поперечный шаг" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length s2 = 110e-3 "Продольный шаг" annotation(
    Dialog(group = "Геометрия пучка"));
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
  //Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Din = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length delta = 0.003 "Толщина стенки трубки теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  //Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin = 0.017 "Высота ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin = 0.00404 "Шаг ребер, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  //Характеристики металла
  parameter Modelica.SIunits.SpecificHeatCapacity C_m = 578.05 "Удельная теплоемкость металла" annotation(
    Dialog(group = "Характеристики металла"));
  parameter Modelica.SIunits.ThermalConductivity lambda_m = 20 "Теплопроводность метала" annotation(
    Dialog(group = "Характеристики металла"));  
  parameter Modelica.SIunits.Density rho_m = 7800 "Плотность металла" annotation(
    Dialog(group = "Характеристики металла"));  
// Начальные параметры
  parameter Modelica.SIunits.AbsolutePressure pin_start = system.p_start "Начальное давление на входе" annotation(Evaluate=true,Dialog(tab = "Initialization water/steam"));
  parameter Modelica.SIunits.AbsolutePressure pout_start = system.p_start "Начальное давление на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tin_start = system.T_start "Начальная температура на входе" annotation(Evaluate=true,Dialog(tab = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tout_start = system.T_start "Начальная температура на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization water/steam"));
  parameter Modelica.SIunits.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization water/steam"));
  
  parameter Modelica.SIunits.AbsolutePressure pin_gas_start = system.p_start "Начальное давление на входе" annotation(Evaluate=true,Dialog(tab = "Initialization gas"));
  parameter Modelica.SIunits.AbsolutePressure pout_gas_start = system.p_start "Начальное давление на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tin_gas_start = system.T_start "Начальная температура на входе" annotation(Evaluate=true,Dialog(tab = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tout_gas_start = system.T_start "Начальная температура на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization gas"));
  parameter Modelica.SIunits.MassFlowRate m_gas_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization gas"));

// Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics flowMomentumDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения момента вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  
  parameter Dynamics gasEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics gasMassDynamics = Dynamics.SteadyState "Параметры уравнения сохранения массы газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics gasMomentumDynamics = Dynamics.SteadyState "Параметры уравнения сохранения момента газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics")); 
  
  Modelica.Fluid.Interfaces.FluidPort_a gasIn(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-52, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b gasOut(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {52, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a flowIn(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b flowOut(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GasSideHE2D gasSide(Dout = Din + 2*delta,
                                             Lpipe = Lpipe,
                                             delta_fin = delta_fin,
                                             hfin = hfin,
                                             numberOfTubeSections = numberOfTubeSections,
                                             s1 = s1,
                                             s2 = s2,
                                             sfin = sfin,
                                             z1 = z1,
                                             z2 = z2,
                                             zahod = zahod,
                                             pin_start = pin_gas_start,
                                             pout_start = pout_gas_start,
                                             Tin_start = Tin_gas_start,
                                             Tout_start = Tout_gas_start,
                                             m_start = m_gas_start,
                                             gasEnergyDynamics = gasEnergyDynamics,
                                             gasMassDynamics = gasMassDynamics,
                                             gasMomentumDynamics = gasMomentumDynamics)  annotation(
    Placement(visible = true, transformation(origin = {0, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.FlowSideHE2D flowSide(Din = Din,
                                               Lpipe = Lpipe,
                                               Lpiezo = Lpiezo,
                                               ke = ke,
                                               numberOfTubeSections = numberOfTubeSections,
                                               z1 = z1,
                                               z2 = z2,
                                               zahod = zahod,
                                               pin_start = pin_start,
                                               pout_start = pout_start,
                                               Tin_start = Tin_start,
                                               Tout_start = Tout_start,
                                               m_flow_start = m_flow_start,
                                               flowEnergyDynamics = flowEnergyDynamics,
                                               flowMassDynamics = flowMassDynamics,
                                               flowMomentumDynamics = flowMomentumDynamics)  annotation(
    Placement(visible = true, transformation(origin = {0, 44}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Thermal.CounterCurrent2D counterCurrent(numberOfFlueSections = z2, numberOfTubeSections = numberOfTubeSections)  annotation(
    Placement(visible = true, transformation(origin = {0, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[z2, numberOfTubeSections] wall(each L = Lpipe,
                                                           each Nt = z1,
                                                           each Tstart1 = 40 + 273.15,
                                                           each TstartN = 40 + 273.15,
                                                           each WallRes = false,
                                                           each lambda = 20,
                                                           each rext = (Din + 2 * delta) / 2,
                                                           each rhomcm = 7800 * 650,
                                                           each rint = Din / 2) annotation(
    Placement(visible = true, transformation(origin = {0, 16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.GasSplitter gasSplitter(numberOfTubeSections = numberOfTubeSections) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(gasSide.Output, gasOut) annotation(
    Line(points = {{10, -50}, {50, -50}}, color = {0, 127, 255}));
  connect(flowSide.Output, flowOut) annotation(
    Line(points = {{-10, 50}, {-50, 50}}, color = {0, 127, 255}));
  connect(flowSide.Input, flowIn) annotation(
    Line(points = {{10, 50}, {50, 50}}, color = {0, 127, 255}));
  connect(wall.int, flowSide.heat) annotation(
    Line(points = {{0, 20}, {0, 34}}, color = {191, 0, 0}));
  connect(counterCurrent.side1, wall.ext) annotation(
    Line(points = {{0, -12}, {0, 14}}, color = {191, 0, 0}, thickness = 0.5));
  connect(counterCurrent.side2, gasSide.heat) annotation(
    Line(points = {{0, -18}, {0, -36}}, color = {191, 0, 0}, thickness = 0.5));
  connect(gasIn, gasSplitter.Input) annotation(
    Line(points = {{-50, -50}, {-40, -50}}));
  connect(gasSplitter.Output, gasSide.Input) annotation(
    Line(points = {{-20, -50}, {-10, -50}}, color = {0, 127, 255}, thickness = 0.5));
end GFHE2D;
