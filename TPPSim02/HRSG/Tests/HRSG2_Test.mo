within TPPSim02.HRSG.Tests;

model HRSG2_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner System system annotation(
    Placement(visible = true, transformation(origin = {92, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 60 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {18, 12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {70, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode volumeNode1(T_start = 60 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-22, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D evo(flowSide(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaForEVO), Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start = 60 + 273.15, Tin_start = 60 + 273.15, Tout_gas_start = 60 + 273.15, Tout_start = 60 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, hfin = 15.88e-3, pin_start = 1e5 + 18.29 * 1000 * 9.8, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {10, -30}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.PressurePump pump(redeclare package Medium = Medium_F, Lpipe = 18.29)  annotation(
    Placement(visible = true, transformation(origin = {30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 30, yMin = 0, y_start = 0)  annotation(
    Placement(visible = true, transformation(origin = {30, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-68, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-59, 0}, {-47, 0}, {-47, -20}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-59, 30}, {-43, 30}, {-43, -20}}, color = {0, 0, 127}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{40, 50}, {25, 50}, {25, 21}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{11, 21}, {11, 50}, {-20, 50}}, color = {0, 127, 255}));
  connect(gt.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-40, -30}, {-32, -30}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, evo.gasIn) annotation(
    Line(points = {{-12, -30.2}, {4, -30.2}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{15.2, -30}, {59.2, -30}}, color = {0, 127, 255}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{11, 3}, {11, -8}, {6, -8}, {6, -20}}, color = {0, 127, 255}));
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{25, 3}, {25, -11}, {29, -11}, {29, -21}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{30, -40}, {30, -44}, {22, -44}, {22, -16}, {14, -16}, {14, -20}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-56, 78}, {18, 78}}, color = {0, 0, 127}));
  connect(pid.y, fw.m_flow_in) annotation(
    Line(points = {{42, 78}, {68, 78}, {68, 58}, {60, 58}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{8, 18}, {0, 18}, {0, 58}, {30, 58}, {30, 66}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 10, Tolerance = 1e-06, Interval = 0.1));
end HRSG2_Test;
