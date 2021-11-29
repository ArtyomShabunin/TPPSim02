within TPPSim02.HRSG.Tests;

model HRSG2_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  TPPSim.Pumps.simplePump simplePump(redeclare package Medium = Medium_F, setD_flow = 10) annotation(
    Placement(visible = true, transformation(origin = {28, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner System system annotation(
    Placement(visible = true, transformation(origin = {92, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {50, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {50, 70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode annotation(
    Placement(visible = true, transformation(origin = {18, -40}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode volumeNode1 annotation(
    Placement(visible = true, transformation(origin = {-22, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  HeatExchanger.GFHE1D evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 1, delta = 3.404e-3, delta_fin = 0.9906e-3, hfin = 15.88e-3, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {0, -10}, extent = {{-5, -10}, {5, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-58, 20}, {-46, 20}, {-46, 0}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-58, 50}, {-42, 50}, {-42, 0}}, color = {0, 0, 127}));
  connect(drum.downStr, simplePump.port_a) annotation(
    Line(points = {{8, 22}, {28, 22}, {28, 20}}, color = {0, 127, 255}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{40, 70}, {8, 70}, {8, 40}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{-6, 40}, {-6, 70}, {-20, 70}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Input) annotation(
    Line(points = {{28, 0}, {28, -40}}, color = {0, 127, 255}));
  connect(gt.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-40, -10}, {-32, -10}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, evo.gasIn) annotation(
    Line(points = {{-12, -10}, {-6, -10}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{6, -10}, {40, -10}}, color = {0, 127, 255}));
  connect(volumeNode.Output, evo.flowIn) annotation(
    Line(points = {{8, -40}, {8, 0}, {4, 0}}, color = {0, 127, 255}));
  connect(evo.flowOut, drum.upStr) annotation(
    Line(points = {{-4, 0}, {-4, 10}, {-6, 10}, {-6, 22}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 500, Tolerance = 1e-06, Interval = 0.01));
end HRSG2_Test;
