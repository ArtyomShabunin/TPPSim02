within TPPSim02.Pipes.Tests;

model PipeWithWall_Test
  parameter Integer numberOfVolumes = 5;
  package Medium = Modelica.Media.Water.StandardWater;
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-72, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel channel(Tin_start = 20 + 273.15, Tout_start = 30 + 273.15, numberOfVolumes = numberOfVolumes) annotation(
    Placement(visible = true, transformation(origin = {-10, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[numberOfVolumes] wall(each L = 1 * 10, each Tstart1 = 40 + 273.15, each TstartN = 40 + 273.15, each lambda = 20, each rext = 0.301 / 2, each rhomcm = 7800 * 650, each rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow[numberOfVolumes] fixedHeatFlow(each Q_flow = 0) annotation(
    Placement(visible = true, transformation(origin = {-10, 40}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 90 + 273.15, nPorts = 1, use_p_in = true)  annotation(
    Placement(visible = true, transformation(origin = {50, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundary_in.ports[1], channel.Input) annotation(
    Line(points = {{-62, -20}, {-20, -20}}, color = {0, 127, 255}));
  connect(wall.int, channel.heat) annotation(
    Line(points = {{-10, 7}, {-10, -17}}, color = {191, 0, 0}, thickness = 0.5));
  connect(fixedHeatFlow.port, wall.ext) annotation(
    Line(points = {{-10, 30}, {-10, 14}}, color = {191, 0, 0}, thickness = 0.5));
  connect(boundary_out.ports[1], channel.Output) annotation(
    Line(points = {{40, -20}, {0, -20}}, color = {0, 127, 255}));
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{80, -12}, {62, -12}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-03, Interval = 0.2));
end PipeWithWall_Test;
