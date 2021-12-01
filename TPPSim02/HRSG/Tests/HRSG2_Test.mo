within TPPSim02.HRSG.Tests;

model HRSG2_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-76, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-76, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 60 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {10, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {64, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-36, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {44, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D evo(flowSide(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaForEVO), Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start = 60 + 273.15, Tin_start = 60 + 273.15, Tout_gas_start = 60 + 273.15, Tout_start = 60 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, hfin = 15.88e-3, pin_start = 1e5 + 18.29 * 1000 * 9.8, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {6, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.DropLine pump(redeclare package Medium = Medium_F, Lpipe = 18.29)  annotation(
    Placement(visible = true, transformation(origin = {18, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 30, yMin = 0, y_start = 0)  annotation(
    Placement(visible = true, transformation(origin = {24, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-74, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-65, -20}, {-27, -20}, {-27, -40}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-65, 10}, {-22, 10}, {-22, -40}}, color = {0, 0, 127}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{34, 30}, {17, 30}, {17, -7}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{3, -7}, {3, 30}, {-26, 30}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{11, -50}, {53.4, -50}}, color = {0, 127, 255}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{3, -25}, {3, -32}, {2, -32}, {2, -40}}, color = {0, 127, 255}));
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{17, -25}, {17, -31}, {18, -31}, {18, -40}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-63, 58}, {11, 58}}, color = {0, 0, 127}));
  connect(pid.y, fw.m_flow_in) annotation(
    Line(points = {{35, 58}, {61, 58}, {61, 38}, {53, 38}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-1, -10}, {-6, -10}, {-6, 38}, {24, 38}, {24, 46}}, color = {0, 0, 127}));
  connect(gt.flowOut, evo.gasIn) annotation(
    Line(points = {{-20, -50}, {1, -50}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{18, -60}, {18, -62}, {14, -62}, {14, -38}, {10, -38}, {10, -40}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-06, Interval = 0.1));
end HRSG2_Test;