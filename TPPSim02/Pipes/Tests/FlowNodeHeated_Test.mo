within TPPSim02.Pipes.Tests;

model FlowNodeHeated_Test
  package Medium = Modelica.Media.Water.StandardWater;
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-72, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall wall1(L = 1 * 10, Tstart1 = 50 + 273.15, TstartN = 50 + 273.15, lambda = 20, rext = 0.301 / 2, rhomcm = 7800 * 650, rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.FlowNode flowNodeHeated annotation(
    Placement(visible = true, transformation(origin = {-10, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{80, -12}, {62, -12}}, color = {0, 0, 127}));
  connect(boundary_in.ports[1], flowNodeHeated.Input) annotation(
    Line(points = {{-62, -20}, {-20, -20}}, color = {0, 127, 255}));
  connect(flowNodeHeated.Output, boundary_out.ports[1]) annotation(
    Line(points = {{0, -20}, {40, -20}}, color = {0, 127, 255}));
  connect(wall1.int, flowNodeHeated.heat) annotation(
    Line(points = {{-10, 8}, {-10, -16}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));

end FlowNodeHeated_Test;
