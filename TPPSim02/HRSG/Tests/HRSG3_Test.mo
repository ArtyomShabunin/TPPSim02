within TPPSim02.HRSG.Tests;

model HRSG3_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system(p_start(displayUnit = "Pa") = 1e5)  annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1, p = 1e5) annotation(
    Placement(visible = true, transformation(origin = {-70, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.EVOFixFlow evo(
                                    D_flow_v = {40, 42, 44, 46, 40, 42, 44, 46, 40, 42, 44, 46, 40, 42, 44, 46},
                                    Din = 38.1e-3, Lpiezo = 18.29,
                                    Lpipe = 18.29,
                                    Tin_gas_start(displayUnit = "K") = 333.15,
                                    Tin_start(displayUnit = "K") = 363.15,
                                    Tout_gas_start(displayUnit = "K") = 333.15,
                                    Tout_start(displayUnit = "K") = 363.15,
                                    delta = 3.404e-3, delta_fin = 0.9906e-3,
                                    hfin = 15.88e-3,
                                    numberOfTubeSections = 2,
                                    s1 = 85.15e-3,
                                    s2 = 111.1e-3,
                                    sfin = 2.921e-3,
                                    z1 = 126,
                                    z2 = 16,
                                    zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-2, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.DropLine pump(redeclare package Medium = Medium_F, Lpipe = 18.29) annotation(
    Placement(visible = true, transformation(origin = {12, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_water_start = 90 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {4, -14}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-10, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 30, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {28, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-50, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear steam_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-30, 36}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-59, -20}, {-47, -20}, {-47, -40}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-59, 10}, {-43, 10}, {-43, -40}}, color = {0, 0, 127}));
  connect(gt.flowOut, evo.gasIn) annotation(
    Line(points = {{-40, -50}, {-7, -50}}, color = {0, 127, 255}));
  connect(evo.gasOut, gas_out.ports[1]) annotation(
    Line(points = {{3.2, -50}, {40.4, -50}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{12, -60}, {12, -62}, {6, -62}, {6, -36}, {2, -36}, {2, -40}}, color = {0, 127, 255}));
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{11, -23}, {11, -28}, {12, -28}, {12, -40}}, color = {0, 127, 255}));
  connect(fw.ports[1], drum.fedWater) annotation(
    Line(points = {{40, 30}, {11, 30}, {11, -5}}, color = {0, 127, 255}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{-3, -23}, {-5, -23}, {-5, -33}, {-7, -33}, {-7, -41}}, color = {0, 127, 255}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-6, -8}, {-12, -8}, {-12, 46}, {28, 46}, {28, 58}}, color = {0, 0, 127}));
  connect(pid.y, fw.m_flow_in) annotation(
    Line(points = {{40, 70}, {70, 70}, {70, 38}, {60, 38}}, color = {0, 0, 127}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{2, 70}, {16, 70}}, color = {0, 0, 127}));
  connect(steam_cv.port_a, drum.steam) annotation(
    Line(points = {{-20, 36}, {-2, 36}, {-2, -4}}, color = {0, 127, 255}));
  connect(steam_out.ports[1], steam_cv.port_b) annotation(
    Line(points = {{-60, 36}, {-40, 36}}, color = {0, 127, 255}));
  connect(constant1.y, steam_cv.opening) annotation(
    Line(points = {{-38, 70}, {-30, 70}, {-30, 44}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-06, Interval = 0.1));
end HRSG3_Test;
