within TPPSim02.Pipes.Tests;

model PipeChannel_Test4
  package Medium = Modelica.Media.Water.StandardWater;
  inner Modelica.Fluid.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary boundary_out(redeclare package Medium = Medium, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel pipe(numberOfVolumes = 10) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature[10] fixedTemperature(each T = 313.15) annotation(
    Placement(visible = true, transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundary_in.ports[1], pipe.Input) annotation(
    Line(points = {{-80, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(pipe.Output, boundary_out.ports[1]) annotation(
    Line(points = {{10, 0}, {80, 0}}, color = {0, 127, 255}));
  connect(fixedTemperature.port, pipe.heat) annotation(
    Line(points = {{-20, 30}, {0, 30}, {0, 4}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-06, Interval = 0.1));
end PipeChannel_Test4;
