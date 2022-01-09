within TPPSim02.HRSG.Tests;

model SH_EVO_ECO_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-76, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-76, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system(m_flow_small = 1e-1)  annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {10, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G, Tmin = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {132, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-90, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {44, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {6, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D eco(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 60 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 60 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D sh(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0)  annotation(
    Placement(visible = true, transformation(origin = {24, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-74, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-50, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear steam_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-48, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000)  annotation(
    Placement(visible = true, transformation(origin = {34, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29)  annotation(
    Placement(visible = true, transformation(origin = {24, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode1(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-24, -14}, extent = {{10, -10}, {-10, 10}}, rotation = -90)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {78, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {104, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15)) annotation(
    Placement(visible = true, transformation(origin = {70, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-65, -20}, {-47, -20}, {-47, -40}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-65, 10}, {-42, 10}, {-42, -40}}, color = {0, 0, 127}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{3, -25}, {3, -32}, {2, -32}, {2, -40}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-63, 58}, {11, 58}}, color = {0, 0, 127}));
  connect(pid.y, fw.m_flow_in) annotation(
    Line(points = {{35, 58}, {61, 58}, {61, 38}, {53, 38}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-1, -10}, {-6, -10}, {-6, 38}, {24, 38}, {24, 46}}, color = {0, 0, 127}));
  connect(steam_cv.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-58, 30}, {-80, 30}}, color = {0, 127, 255}));
  connect(constant1.y, steam_cv.opening) annotation(
    Line(points = {{-38, 90}, {-38, 64}, {-48, 64}, {-48, 38}}, color = {0, 0, 127}));
  connect(drum.downStr, simplePump.port_a) annotation(
    Line(points = {{17, -25}, {17, -30}, {34, -30}, {34, -40}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Input) annotation(
    Line(points = {{34, -60}, {34, -78}}, color = {0, 127, 255}));
  connect(volumeNode.Output, evo.flowIn) annotation(
    Line(points = {{14, -78}, {14, -40}, {10, -40}}, color = {0, 127, 255}));
  connect(evo.gasIn, sh.gasOut) annotation(
    Line(points = {{0, -50}, {-14, -50}}, color = {0, 127, 255}));
  connect(sh.gasIn, gt.flowOut) annotation(
    Line(points = {{-26, -50}, {-40, -50}}, color = {0, 127, 255}));
  connect(drum.steam, sh.flowIn) annotation(
    Line(points = {{4, -6}, {2, -6}, {2, -2}, {-16, -2}, {-16, -40}}, color = {0, 127, 255}));
  connect(sh.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-24, -40}, {-24, -24}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, steam_cv.port_a) annotation(
    Line(points = {{-24, -4}, {-24, 30}, {-38, 30}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{88, -50.2}, {94, -50.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{114, -50}, {122, -50}}, color = {0, 127, 255}));
  connect(eco.gasIn, evo.gasOut) annotation(
    Line(points = {{44, -50}, {12, -50}}, color = {0, 127, 255}));
  connect(eco.gasOut, gas_node.Input) annotation(
    Line(points = {{56, -50}, {68, -50}}, color = {0, 127, 255}));
  connect(eco.flowOut, drum.fedWater) annotation(
    Line(points = {{46, -40}, {46, 0}, {18, 0}, {18, -6}}, color = {0, 127, 255}));
  connect(volumeNode2.Output, eco.flowIn) annotation(
    Line(points = {{70, -20}, {70, -28}, {54, -28}, {54, -40}}, color = {0, 127, 255}));
  connect(fw.ports[1], volumeNode2.Input) annotation(
    Line(points = {{34, 30}, {28, 30}, {28, 12}, {70, 12}, {70, 0}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 5000, Tolerance = 1e-06, Interval = 0.1));
end SH_EVO_ECO_Test;
