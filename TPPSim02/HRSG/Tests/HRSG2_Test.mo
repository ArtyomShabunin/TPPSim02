within TPPSim02.HRSG.Tests;

model HRSG2_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner System system annotation(
    Placement(visible = true, transformation(origin = {92, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 60 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {18, 32}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {84, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {50, 70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode volumeNode1(T_start = 60 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-22, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start = 60 + 273.15, Tin_start = 60 + 273.15, Tout_gas_start = 60 + 273.15, Tout_start = 60 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, hfin = 15.88e-3, pin_start = 1e5 + 18.29 * 1000 * 9.8, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  //  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature[10] fixedTemperature(each T = 25 + 273.15)  annotation(
  //    Placement(visible = true, transformation(origin = {56, 18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
//  TPPSim02.Pipes.VolumeNode volumeNode(deltaVFlow = 0.1, h_start = 414881, p_start = 1e5 + 18.29 * 1000 * 9.8) annotation(
//    Placement(visible = true, transformation(origin = {10, -46}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  //  TPPSim02.Pipes.VolumeNode volumeNode2(deltaVFlow = 0.1, h_start = 414881, p_start = 1e5 + 18.29 * 1000 * 9.8) annotation(
  //    Placement(visible = true, transformation(origin = {70, -46}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  //  TPPSim.Pumps.simplePump simplePump(redeclare package Medium = Medium_F, setD_flow = 10) annotation(
  //    Placement(visible = true, transformation(origin = {40, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  //  TPPSim02.Pipes.HeatingNodesChannel pipe(Din = 0.5, Lpiezo = -18.29, Tin_start = 99 + 273.15, Tout_start = 99 + 273.15, numberOfVolumes = 10, pout_start = 1e5 + 18.29 * 1000 * 9.8) annotation(
  //    Placement(visible = true, transformation(origin = {24, 18}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pumps.PressurePump pump(redeclare package Medium = Medium_F, Lpipe = 18.29)  annotation(
    Placement(visible = true, transformation(origin = {30, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-58, 20}, {-46, 20}, {-46, 0}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-58, 50}, {-42, 50}, {-42, 0}}, color = {0, 0, 127}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{40, 70}, {25, 70}, {25, 41}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{11, 41}, {11, 70}, {-20, 70}}, color = {0, 127, 255}));
  connect(gt.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-40, -10}, {-32, -10}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, evo.gasIn) annotation(
    Line(points = {{-12, -10}, {4, -10}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{16, -10}, {74, -10}}, color = {0, 127, 255}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{11, 23}, {11, 12}, {6, 12}, {6, 0}}, color = {0, 127, 255}));
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{26, 24}, {26, 10}, {30, 10}, {30, 0}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{30, -20}, {30, -24}, {22, -24}, {22, 4}, {14, 4}, {14, 0}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-06, Interval = 0.01));
end HRSG2_Test;
