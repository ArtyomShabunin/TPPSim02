within TPPSim02.GasDuct.Tests;

model FlowNodeHeated_Test
  package Medium = TPPSim02.Media.ExhaustGas;
  Modelica.Fluid.Sources.Boundary_pT boundary_in(redeclare package Medium = Medium, nPorts = 1, p = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100) annotation(
    Placement(visible = true, transformation(origin = {70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  FlowNodeHeated flowNodeHeated annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Thermal.TubeWall wall1(L = 1 * 10, Tstart1 = 40 + 273.15, TstartN = 40 + 273.15, lambda = 20, rext = 0.301 / 2, rhomcm = 7800 * 650, rint = 0.3 / 2) annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow fixedHeatFlow1(Q_flow = 0) annotation(
    Placement(visible = true, transformation(origin = {0, 60}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{82, 50}, {90, 50}, {90, 8}, {82, 8}}, color = {0, 0, 127}));
  connect(boundary_in.ports[1], flowNodeHeated.Input) annotation(
    Line(points = {{-60, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(flowNodeHeated.Output, boundary_out.ports[1]) annotation(
    Line(points = {{10, 0}, {60, 0}}, color = {0, 127, 255}));
  connect(fixedHeatFlow1.port, wall1.ext) annotation(
    Line(points = {{0, 50}, {0, 34}}, color = {191, 0, 0}));
  connect(wall1.int, flowNodeHeated.heat) annotation(
    Line(points = {{0, 28}, {0, 4}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));


end FlowNodeHeated_Test;
