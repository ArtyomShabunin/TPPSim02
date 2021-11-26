within TPPSim02.HeatExchanger.Tests;

model GFHE1D_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;

  Modelica.Fluid.Sources.Boundary_pT gas_in(redeclare package Medium = Medium_G, T = 40 + 273.15, nPorts = 1, p = 1.1e5, use_T_in = true) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT gas_out(redeclare package Medium = Medium_G, nPorts = 1, p = 1e5) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT flow_in(redeclare package Medium = Medium_F, T = 40 + 273.15, nPorts = 1, p = 2e5) annotation(
    Placement(visible = true, transformation(origin = {70, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT flow_out(redeclare package Medium = Medium_F, nPorts = 1, p = 1e5) annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp_Tgas(duration = 200, height = 500, offset = 40 + 273.15, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {-70, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  GFHE1D gfhe1d(Nv = 5)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-5, -10}, {5, 10}}, rotation = 0)));
equation
  connect(ramp_Tgas.y, gas_in.T_in) annotation(
    Line(points = {{-80, -30}, {-94, -30}, {-94, 4}, {-82, 4}}, color = {0, 0, 127}));
  connect(gas_in.ports[1], gfhe1d.gasIn) annotation(
    Line(points = {{-60, 0}, {-6, 0}}, color = {0, 127, 255}));
  connect(gfhe1d.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{6, 0}, {60, 0}}, color = {0, 127, 255}));
  connect(flow_in.ports[1], gfhe1d.flowIn) annotation(
    Line(points = {{60, 30}, {4, 30}, {4, 10}}, color = {0, 127, 255}));
  connect(gfhe1d.flowOut, flow_out.ports[1]) annotation(
    Line(points = {{-4, 10}, {-4, 30}, {-60, 30}}, color = {0, 127, 255}));

annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));

end GFHE1D_Test;
