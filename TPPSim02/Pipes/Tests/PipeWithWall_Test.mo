within TPPSim02.Pipes.Tests;

model PipeWithWall_Test
  parameter Integer numberOfVolumes = 5;
  package Medium = Modelica.Media.Water.StandardWater;
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1, p = 1.5e5) annotation(
    Placement(visible = true, transformation(origin = {-70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[numberOfVolumes+1] wall(each L = 1 * 10, each Tstartbar = 50 + 273.15, each lambda = 20, each rext = 0.301 / 2, each rhomcm = 7800 * 650, each rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -22}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel channel(Tin_start = 50 + 273.15, Tout_start = 50 + 273.15, numberOfVolumes = numberOfVolumes)  annotation(
    Placement(visible = true, transformation(origin = {-10, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{79, -22}, {61, -22}}, color = {0, 0, 127}));
  connect(boundary_in.ports[1], channel.Input) annotation(
    Line(points = {{-60, -30}, {-20, -30}}, color = {0, 127, 255}));
  connect(channel.Output, boundary_out.ports[1]) annotation(
    Line(points = {{0, -30}, {40, -30}}, color = {0, 127, 255}));
  connect(wall.int, channel.heat) annotation(
    Line(points = {{-10, 8}, {-10, -26}}, color = {191, 0, 0}, thickness = 0.5));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));
end PipeWithWall_Test;
