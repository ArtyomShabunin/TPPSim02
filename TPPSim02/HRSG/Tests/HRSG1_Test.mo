within TPPSim02.HRSG.Tests;

model HRSG1_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {50, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE2D evo(Din = 38.1e-3,
                                    Lpipe = 18.29,
                                    delta = 3.404e-3,
                                    delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.FixedInitial,
                                    hfin = 15.88e-3,
                                    numberOfTubeSections = 1,
                                    s1 = 85.15e-3,
                                    s2 = 111.1e-3,
                                    sfin = 2.921e-3,
                                    z1 = 126,
                                    z2 = 4,
                                    zahod = 4) annotation(
    Placement(visible = true, transformation(origin = {-2, -30}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.DropLine pump(redeclare package Medium = Medium_F, Lpipe = 18.29) annotation(
    Placement(visible = true, transformation(origin = {12, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {4, 6}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-59, 0}, {-47, 0}, {-47, -20}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-59, 30}, {-43, 30}, {-43, -20}}, color = {0, 0, 127}));
  connect(gt.flowOut, evo.gasIn) annotation(
    Line(points = {{-40, -30}, {-7, -30}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{3, -30}, {40.2, -30}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{12, -40}, {12, -42}, {6, -42}, {6, -16}, {2, -16}, {2, -20}}, color = {0, 127, 255}));
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{11, -3}, {11, -8}, {12, -8}, {12, -20}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{-3, 15}, {-3, 49}, {-21, 49}}, color = {0, 127, 255}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{40, 50}, {11, 50}, {11, 15}}, color = {0, 127, 255}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{-2, -2}, {-4, -2}, {-4, -12}, {-6, -12}, {-6, -20}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 0.1));
end HRSG1_Test;
