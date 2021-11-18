within TPPSim02.GasDuct.Tests;

model GasDuct_Test
  package Medium = TPPSim02.Media.ExhaustGas;
  inner Modelica.Fluid.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode channel1(m_flow_start = 10)  annotation(
    Placement(visible = true, transformation(origin = {-38, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode node annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode channel2 annotation(
    Placement(visible = true, transformation(origin = {38, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T boundary_in(redeclare package Medium = Medium, m_flow = 10, nPorts = 1, use_m_flow_in = true)  annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = -100, offset = 10, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {-90, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(channel1.Output, node.Input) annotation(
    Line(points = {{-28, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(node.Output, channel2.Input) annotation(
    Line(points = {{10, 0}, {28, 0}}, color = {0, 127, 255}));
  connect(channel2.Output, boundary_out.ports[1]) annotation(
    Line(points = {{48, 0}, {60, 0}}, color = {0, 127, 255}));
  connect(boundary_in.ports[1], channel1.Input) annotation(
    Line(points = {{-60, 0}, {-48, 0}}, color = {0, 127, 255}));
  connect(ramp.y, boundary_in.m_flow_in) annotation(
    Line(points = {{-78, 50}, {-74, 50}, {-74, 26}, {-92, 26}, {-92, 8}, {-80, 8}}, color = {0, 0, 127}));
annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));
end GasDuct_Test;
