within TPPSim02.Pipes.Tests;

model FlowNode_Test
  package Medium = Modelica.Media.Water.StandardWater;
  inner Modelica.Fluid.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_in(redeclare package Medium = Medium, nPorts = 1, p = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode channel annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature fixedTemperature(T = 60 + 273.15)  annotation(
    Placement(visible = true, transformation(origin = {-10, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundary_in.ports[1], channel.Input) annotation(
    Line(points = {{-60, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(channel.Output, boundary_out.ports[1]) annotation(
    Line(points = {{10, 0}, {60, 0}}, color = {0, 127, 255}));
  connect(fixedTemperature.port, channel.heat) annotation(
    Line(points = {{0, 50}, {0, 4}}, color = {191, 0, 0}));

annotation(
    experiment(StartTime = 0, StopTime = 3600, Tolerance = 1e-6, Interval = 0.1));
end FlowNode_Test;
