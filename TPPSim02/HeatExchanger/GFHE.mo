within TPPSim02.HeatExchanger;

model GFHE
  extends TPPSim02.HeatExchanger.Icons.IconHE;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  
  //Параметры разбиения
  inner parameter Integer numberOfTubeSections = 1 "Число участков разбиения трубы" annotation(
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
  //Конструктивные характеристики труб
  inner parameter Modelica.SIunits.Diameter Din = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  inner parameter Modelica.SIunits.Length delta = 0.003 "Толщина стенки трубки теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  inner parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  //Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin = 0.017 "Высота ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin = 0.00404 "Шаг ребер, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  //Характеристики металла
  inner parameter Modelica.SIunits.SpecificHeatCapacity C_m = 578.05 "Удельная теплоемкость металла" annotation(
    Dialog(group = "Характеристики металла"));
  inner parameter Modelica.SIunits.ThermalConductivity lambda_m = 20 "Теплопроводность метала" annotation(
    Dialog(group = "Характеристики металла"));  
  parameter Modelica.SIunits.Density rho_m = 7800 "Плотность металла" annotation(
    Dialog(group = "Характеристики металла"));  
  
  
  
  
  
  
  Modelica.Fluid.Interfaces.FluidPort_a gasIn(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-52, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b gasOut(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {52, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a flowIn(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b flowOut(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[z2, numberOfTubeSections] wall(each L = Lpipe,
                                                           each Tstart1 = 40 + 273.15,
                                                           each TstartN = 40 + 273.15,
                                                           each lambda = 20,
                                                           each rext = (Din + 2 * delta) / 2,
                                                           each rhomcm = 7800 * 650,
                                                           each rint = Din / 2) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GasSideHE gasSide(each Dout = Din + 2*delta,
                                           each Lpipe = Lpipe,
                                           each delta_fin = delta_fin,
                                           each hfin = hfin,
                                           each numberOfFlueSections = z2,
                                           each numberOfTubeSections = numberOfTubeSections,
                                           each s1 = s1,
                                           each s2 = s2,
                                           each sfin = sfin,
                                           each z1 = z1,
                                           each z2 = z2,
                                           each zahod = zahod)  annotation(
    Placement(visible = true, transformation(origin = {0, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.FlowSideHE flowSide annotation(
    Placement(visible = true, transformation(origin = {0, 46}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
equation
  connect(gasSide.Input, gasIn) annotation(
    Line(points = {{-10, -50}, {-50, -50}}, color = {0, 127, 255}));
  connect(gasSide.Output, gasOut) annotation(
    Line(points = {{10, -50}, {50, -50}}, color = {0, 127, 255}));
  connect(flowSide.Output, flowOut) annotation(
    Line(points = {{-10, 50}, {-50, 50}}, color = {0, 127, 255}));
  connect(flowSide.Input, flowIn) annotation(
    Line(points = {{10, 50}, {50, 50}}, color = {0, 127, 255}));
  connect(wall.ext, gasSide.heat) annotation(
    Line(points = {{0, -2}, {0, -36}}, color = {191, 0, 0}, thickness = 0.5));
  connect(wall.int, flowSide.heat) annotation(
    Line(points = {{0, 4}, {0, 36}}, color = {191, 0, 0}, thickness = 0.5));
end GFHE;
