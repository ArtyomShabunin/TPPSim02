within TPPSim02.Pipes;

model OneNodeChannel
  package Medium = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  
  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр трубопровода" annotation(
  Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Area f_flow = 0.002 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Area deltaSFlow = 1 "Внутренняя площадь одного участка ряда труб"; 
  
  Medium.MassFlowRate Dv "Массовый расход потока";
  
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-98, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode channelA annotation(
    Placement(visible = true, transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode channelB annotation(
    Placement(visible = true, transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode node(use_Q_in = true)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heat annotation(
    Placement(visible = true, transformation(origin = {0, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  Dv = abs(Input.m_flow-Output.m_flow)/2;
  node.Q_in = TPPSim02.Thermal.HeatFlowRates.hfrForPipeHeating(
              Din=Din,
              f_flow=f_flow,
              deltaSFlow=deltaSFlow,
              stateFlow=node.stateFlow,
              p = node.pv,
              t_m=heat.T,
              Dv=Dv);

  heat.Q_flow = node.Q_in;

  connect(channelA.Input, Input) annotation(
    Line(points = {{-60, 0}, {-98, 0}, {-98, 0}, {-98, 0}}, color = {0, 127, 255}));
  connect(channelA.Output, node.Input) annotation(
    Line(points = {{-40, 0}, {-10, 0}, {-10, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(node.Output, channelB.Input) annotation(
    Line(points = {{10, 0}, {40, 0}, {40, 0}, {40, 0}}, color = {0, 127, 255}));
  connect(channelB.Output, Output) annotation(
    Line(points = {{60, 0}, {100, 0}, {100, 0}, {100, 0}}, color = {0, 127, 255}));

annotation(
    Icon(graphics = {Rectangle(lineColor = {116, 116, 116}, fillColor = {85, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 40}, {100, -40}}), Ellipse(lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}})}));
end OneNodeChannel;
