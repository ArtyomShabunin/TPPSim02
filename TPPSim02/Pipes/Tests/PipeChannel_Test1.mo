within TPPSim02.Pipes.Tests;

model PipeChannel_Test1
  package Medium = Modelica.Media.Water.StandardWater;
  inner Modelica.Fluid.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, nPorts = 1, p = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary boundary_out(redeclare package Medium = Medium, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode channelA annotation(
    Placement(visible = true, transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode node(nPorts = 2)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode channelB annotation(
    Placement(visible = true, transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature fixedTemperature(T = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature fixedTemperature1(T = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {50, 52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundary_in.ports[1], channelA.Input) annotation(
    Line(points = {{-80, 0}, {-60, 0}, {-60, 0}, {-60, 0}}, color = {0, 127, 255}));
  connect(channelB.Output, boundary_out.ports[1]) annotation(
    Line(points = {{60, 0}, {78, 0}, {78, 0}, {80, 0}}, color = {0, 127, 255}));
  connect(channelA.heat, fixedTemperature.port) annotation(
    Line(points = {{-50, 4}, {-50, 20}, {-30, 20}, {-30, 50}, {-40, 50}}, color = {191, 0, 0}));
  connect(channelB.heat, fixedTemperature1.port) annotation(
    Line(points = {{50, 4}, {50, 20}, {70, 20}, {70, 52}, {60, 52}}, color = {191, 0, 0}));
  connect(node.heat, fixedTemperature.port) annotation(
    Line(points = {{0, 10}, {0, 50}, {-40, 50}}, color = {191, 0, 0}));
  connect(channelA.Output, node.Port[1]) annotation(
    Line(points = {{-40, 0}, {0, 0}}, color = {0, 127, 255}));
  connect(node.Port[2], channelB.Input) annotation(
    Line(points = {{0, 0}, {40, 0}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-06, Interval = 0.1));
end PipeChannel_Test1;
