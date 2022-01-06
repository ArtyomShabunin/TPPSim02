within TPPSim02.Pipes.Tests;

model TwoPipeWithWall_Test
  parameter Integer numberOfVolumes = 5;
  package Medium = Modelica.Media.Water.StandardWater;
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-72, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel channel1(Tin_start = 20 + 273.15, Tout_start = 30 + 273.15, numberOfVolumes = numberOfVolumes) annotation(
    Placement(visible = true, transformation(origin = {-30, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel channel2(Tin_start = 20 + 273.15, Tout_start = 30 + 273.15, numberOfVolumes = numberOfVolumes) annotation(
    Placement(visible = true, transformation(origin = {10, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[numberOfVolumes+1] wall1(each L = 1 * 10, each Tstart1 = 40 + 273.15, each TstartN = 40 + 273.15, each lambda = 20, each rext = 0.301 / 2, each rhomcm = 7800 * 650, each rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall[numberOfVolumes+1] wall2(each L = 1 * 10, each Tstart1 = 40 + 273.15, each TstartN = 40 + 273.15, each lambda = 20, each rext = 0.301 / 2, each rhomcm = 7800 * 650, each rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 90 + 273.15, nPorts = 1, use_p_in = true)  annotation(
    Placement(visible = true, transformation(origin = {50, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{80, -12}, {62, -12}}, color = {0, 0, 127}));
  connect(boundary_in.ports[1], channel1.Input) annotation(
    Line(points = {{-62, -20}, {-40, -20}}, color = {0, 127, 255}));
  connect(channel1.Output, channel2.Input) annotation(
    Line(points = {{-20, -20}, {0, -20}}, color = {0, 127, 255}));
  connect(channel2.Output, boundary_out.ports[1]) annotation(
    Line(points = {{20, -20}, {40, -20}}, color = {0, 127, 255}));
  connect(wall1.int, channel1.heat) annotation(
    Line(points = {{-30, 8}, {-30, -16}}, color = {191, 0, 0}, thickness = 0.5));
  connect(wall2.int, channel2.heat) annotation(
    Line(points = {{10, 8}, {10, -16}}, color = {191, 0, 0}, thickness = 0.5));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-03, Interval = 0.2));
end TwoPipeWithWall_Test;
