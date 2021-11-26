within TPPSim02.GasTurbine.Tests;

model GTParam_Test

  package Medium = TPPSim02.Media.ExhaustGas;

  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary boundary(redeclare package Medium = Medium, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(gt.flowOut, boundary.ports[1]) annotation(
    Line(points = {{-20, 0}, {20, 0}}, color = {0, 127, 255}));
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-58, 30}, {-26, 30}, {-26, 10}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-58, 70}, {-22, 70}, {-22, 10}}, color = {0, 0, 127}));
annotation(
    experiment(StartTime = 0, StopTime = 3600, Tolerance = 1e-6, Interval = 0.002));
end GTParam_Test;
