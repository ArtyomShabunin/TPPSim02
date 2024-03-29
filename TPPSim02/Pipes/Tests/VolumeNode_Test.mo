within TPPSim02.Pipes.Tests;

model VolumeNode_Test
  package Medium = Modelica.Media.Water.StandardWater;
  TPPSim02.Pipes.VolumeNode node(nPorts = 2)   annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner Modelica.Fluid.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T boundary_in(redeclare package Medium = Medium, nPorts = 1, use_m_flow_in = true)  annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T boundary_out(redeclare package Medium = Medium, nPorts = 1, use_m_flow_in = true)  annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 10)  annotation(
    Placement(visible = true, transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = -1)  annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundary_in.ports[1], node.Port[1]) annotation(
    Line(points = {{-60, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(node.Port[2], boundary_out.ports[1]) annotation(
    Line(points = {{10, 0}, {60, 0}}, color = {0, 127, 255}));
  connect(const.y, boundary_in.m_flow_in) annotation(
    Line(points = {{-78, 70}, {-72, 70}, {-72, 38}, {-88, 38}, {-88, 8}, {-80, 8}}, color = {0, 0, 127}));
  connect(const.y, gain.u) annotation(
    Line(points = {{-78, 70}, {-42, 70}}, color = {0, 0, 127}));
  connect(gain.y, boundary_out.m_flow_in) annotation(
    Line(points = {{-18, 70}, {88, 70}, {88, 8}, {80, 8}}, color = {0, 0, 127}));
end VolumeNode_Test;
