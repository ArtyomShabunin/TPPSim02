within TPPSim02.Pipes;

model NodesChannel
  package Medium = Modelica.Media.Water.StandardWater;
  
  parameter Integer numberOfVolumes = 1 "Число участков разбиения" annotation(
    Dialog(group = "Параметры разбиения"));

  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр трубопровода" annotation(
  Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Area f_flow = 0.002 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Area deltaSFlow = 1 "Внутренняя площадь одного участка ряда труб"; 
  
  TPPSim02.Pipes.Node[numberOfVolumes] node;
  TPPSim02.Pipes.Channel2[numberOfVolumes+1] channel;
  Medium.MassFlowRate Dv[numberOfVolumes] "Массовый расход потока";
  
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-98, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  node.Q = fill(0,numberOfVolumes);
  for i in 1:(numberOfVolumes) loop
    connect(channel[i].Output, node[i].Input);
    connect(node[i].Output, channel[i+1].Input);
  end for;
  
  connect(Input, channel[1].Input);
  connect(channel[numberOfVolumes+1].Output, Output);
annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {225, 225, 225}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}}), Ellipse(origin = {0, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}}), Ellipse(origin = {62, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}}), Ellipse(origin = {-60, -2}, lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-24, 24}, {24, -24}})}));
end NodesChannel;
