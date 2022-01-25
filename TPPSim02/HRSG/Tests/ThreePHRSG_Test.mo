within TPPSim02.HRSG.Tests;

model ThreePHRSG_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-190, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-190, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system(m_flow_small = 1e-1)  annotation(
    Placement(visible = true, transformation(origin = {192, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-110, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G, Tmin = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-170, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {190, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 3) annotation(
    Placement(visible = true, transformation(origin = {-190, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T cond_pump(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {170, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-114, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D eco(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-70, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D sh(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-140, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0)  annotation(
    Placement(visible = true, transformation(origin = {-94, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-124, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-170, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear steam_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-148, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000)  annotation(
    Placement(visible = true, transformation(origin = {-86, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29)  annotation(
    Placement(visible = true, transformation(origin = {-96, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode1(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-144, -14}, extent = {{10, -10}, {-10, 10}}, rotation = -90)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {136, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {162, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-60, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 2.424e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {40, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D lp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.815e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {66, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D cond_he(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.728e-3, z1 = 120, z2 = 12, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {110, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum lp_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 16e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {64, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));  
  TPPSim02.Pipes.VolumeNode volumeNode3(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29) annotation(
    Placement(visible = true, transformation(origin = {80, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump1(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {92, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim.Pumps.simplePump simplePump2(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {42, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode4(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15)) annotation(
    Placement(visible = true, transformation(origin = {122, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Fluid.Valves.ValveLinear lp_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-150, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant2(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-190, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode5(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-90, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {102, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant3(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {68, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary flash_tank(redeclare package Medium = Medium_F, p = 1e5, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {92, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump3(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {46, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.156e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {-10, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D ip_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.195e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-38, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum ip_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 30e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-10, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump4(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {16, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode6(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29) annotation(
    Placement(visible = true, transformation(origin = {2, -80}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant4(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-190, -76}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear ip_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-150, -90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode7(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-66, -90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant5(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-70, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID1(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-40, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump5(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {22, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-179, -30}, {-167, -30}, {-167, -40}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-179, 0}, {-162, 0}, {-162, -40}}, color = {0, 0, 127}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{-117, -25}, {-117, -32}, {-118, -32}, {-118, -40}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-113, 58}, {-106, 58}}, color = {0, 0, 127}));
  connect(steam_cv.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-158, 30}, {-180, 30}}, color = {0, 127, 255}));
  connect(drum.downStr, simplePump.port_a) annotation(
    Line(points = {{-103, -25}, {-103, -30}, {-86, -30}, {-86, -40}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Input) annotation(
    Line(points = {{-86, -60}, {-86, -78}}, color = {0, 127, 255}));
  connect(volumeNode.Output, evo.flowIn) annotation(
    Line(points = {{-106, -78.2}, {-106, -40.2}, {-110, -40.2}}, color = {0, 127, 255}));
  connect(evo.gasIn, sh.gasOut) annotation(
    Line(points = {{-119.2, -50}, {-135, -50}}, color = {0, 127, 255}));
  connect(sh.gasIn, gt.flowOut) annotation(
    Line(points = {{-145.2, -50}, {-159.4, -50}}, color = {0, 127, 255}));
  connect(drum.steam, sh.flowIn) annotation(
    Line(points = {{-117, -7}, {-119, -7}, {-119, -3}, {-136, -3}, {-136, -40}}, color = {0, 127, 255}));
  connect(sh.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-144, -40}, {-144, -24}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, steam_cv.port_a) annotation(
    Line(points = {{-144.2, -4}, {-144.2, 14}, {-138.2, 14}, {-138.2, 30}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{146, -50.2}, {152, -50.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{172, -50}, {180, -50}}, color = {0, 127, 255}));
  connect(eco.gasIn, evo.gasOut) annotation(
    Line(points = {{-75.2, -50}, {-107.2, -50}}, color = {0, 127, 255}));
  connect(eco.flowOut, drum.fedWater) annotation(
    Line(points = {{-74, -40}, {-74, 0}, {-102, 0}, {-102, -6}}, color = {0, 127, 255}));
  connect(volumeNode2.Output, eco.flowIn) annotation(
    Line(points = {{-60.2, -20}, {-60.2, -28}, {-66.2, -28}, {-66.2, -40}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasOut, lp_evo.gasIn) annotation(
    Line(points = {{45.2, -50}, {59.2, -50}}, color = {0, 127, 255}));
  connect(lp_evo.gasOut, cond_he.gasIn) annotation(
    Line(points = {{71.2, -50}, {104.2, -50}}, color = {0, 127, 255}));
  connect(cond_he.gasOut, gas_node.Input) annotation(
    Line(points = {{115.2, -50}, {125.2, -50}}, color = {0, 127, 255}));
  connect(lp_drum.downStr, simplePump1.port_a) annotation(
    Line(points = {{71, -19}, {71, -29}, {91, -29}, {91, -41}}, color = {0, 127, 255}));
  connect(volumeNode3.Input, simplePump1.port_b) annotation(
    Line(points = {{90, -78}, {92, -78}, {92, -60}}, color = {0, 127, 255}));
  connect(volumeNode3.Output, lp_evo.flowIn) annotation(
    Line(points = {{70, -78.2}, {66, -78.2}, {66, -62.2}, {76, -62.2}, {76, -36.2}, {70, -36.2}, {70, -40.2}}, color = {0, 127, 255}));
  connect(lp_drum.upStr, lp_evo.flowOut) annotation(
    Line(points = {{57, -19}, {55, -19}, {55, -33}, {61, -33}, {61, -41}}, color = {0, 127, 255}));
  connect(lp_drum.steam, lp_sh_1.flowIn) annotation(
    Line(points = {{57, -1}, {55, -1}, {55, 5}, {43, 5}, {43, -41}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, simplePump2.port_a) annotation(
    Line(points = {{74.4, -15}, {78.4, -15}, {78.4, 40}, {52, 40}}, color = {0, 127, 255}));
  connect(simplePump2.port_b, volumeNode2.Input) annotation(
    Line(points = {{32, 40}, {-60, 40}, {-60, 0}}, color = {0, 127, 255}));
  connect(pid.y, simplePump2.D_flow_in) annotation(
    Line(points = {{-83, 58}, {42, 58}, {42, 50}}, color = {0, 0, 127}));
  connect(cond_he.flowOut, lp_drum.fedWater) annotation(
    Line(points = {{106, -40}, {106, 0}, {72, 0}}, color = {0, 127, 255}));
  connect(volumeNode4.Output, cond_he.flowIn) annotation(
    Line(points = {{121.8, -20}, {121.8, -28}, {113.8, -28}, {113.8, -40}}, color = {0, 127, 255}));
  connect(cond_pump.ports[1], volumeNode4.Input) annotation(
    Line(points = {{160, 50}, {122, 50}, {122, 0}}, color = {0, 127, 255}));
  connect(constant2.y, lp_cv.opening) annotation(
    Line(points = {{-179, -110}, {-151, -110}, {-151, -116}}, color = {0, 0, 127}));
  connect(lp_cv.port_b, steam_out.ports[2]) annotation(
    Line(points = {{-160, -124}, {-170, -124}, {-170, 30}, {-180, 30}}, color = {0, 127, 255}));
  connect(volumeNode5.Output, lp_cv.port_a) annotation(
    Line(points = {{-100, -124.2}, {-140, -124.2}}, color = {0, 127, 255}));
  connect(lp_drum.waterLevel, limPID.u_m) annotation(
    Line(points = {{53, -4}, {47, -4}, {47, 4}, {101, 4}, {101, 48}}, color = {0, 0, 127}));
  connect(constant3.y, limPID.u_s) annotation(
    Line(points = {{79, 60}, {89, 60}}, color = {0, 0, 127}));
  connect(limPID.y, cond_pump.m_flow_in) annotation(
    Line(points = {{113, 60}, {137, 60}, {137, 70}, {185, 70}, {185, 58}, {179, 58}}, color = {0, 0, 127}));
  connect(simplePump3.port_b, flash_tank.ports[1]) annotation(
    Line(points = {{56, -110}, {82, -110}}));
  connect(lp_sh_1.gasIn, ip_evo.gasOut) annotation(
    Line(points = {{34, -50}, {-5, -50}}, color = {0, 127, 255}));
  connect(ip_evo.gasIn, ip_sh_1.gasOut) annotation(
    Line(points = {{-15, -50}, {-33, -50}}, color = {0, 127, 255}));
  connect(ip_sh_1.gasIn, eco.gasOut) annotation(
    Line(points = {{-43, -50}, {-64, -50}}, color = {0, 127, 255}));
  connect(simplePump4.port_b, volumeNode6.Input) annotation(
    Line(points = {{16, -60}, {16, -80}, {12, -80}}, color = {0, 127, 255}));
  connect(volumeNode6.Output, ip_evo.flowIn) annotation(
    Line(points = {{-8, -80}, {-14, -80}, {-14, -64}, {0, -64}, {0, -36}, {-6, -36}, {-6, -40}}, color = {0, 127, 255}));
  connect(ip_evo.flowOut, ip_drum.upStr) annotation(
    Line(points = {{-14, -40}, {-14, -30}, {-17, -30}, {-17, -19}}, color = {0, 127, 255}));
  connect(simplePump4.port_a, ip_drum.downStr) annotation(
    Line(points = {{16, -40}, {16, -28}, {-3, -28}, {-3, -19}}, color = {0, 127, 255}));
  connect(ip_drum.steam, ip_sh_1.flowIn) annotation(
    Line(points = {{-17, -1}, {-17, 6}, {-34, 6}, {-34, -40}}, color = {0, 127, 255}));
  connect(lp_sh_1.flowOut, volumeNode5.Input) annotation(
    Line(points = {{36, -40}, {36, -34}, {28, -34}, {28, -124}, {-80, -124}}, color = {0, 127, 255}));
  connect(simplePump3.port_a, drum.HPFW) annotation(
    Line(points = {{36, -110}, {-80, -110}, {-80, -20}, {-100, -20}}, color = {0, 127, 255}));
  connect(constant4.y, ip_cv.opening) annotation(
    Line(points = {{-179, -76}, {-151, -76}, {-151, -82}}, color = {0, 0, 127}));
  connect(ip_sh_1.flowOut, volumeNode7.Input) annotation(
    Line(points = {{-42, -40}, {-42, -34}, {-48, -34}, {-48, -90}, {-56, -90}}, color = {0, 127, 255}));
  connect(volumeNode7.Output, ip_cv.port_a) annotation(
    Line(points = {{-76, -90}, {-140, -90}}, color = {0, 127, 255}));
  connect(ip_cv.port_b, steam_out.ports[3]) annotation(
    Line(points = {{-160, -90}, {-166, -90}, {-166, 30}, {-180, 30}}, color = {0, 127, 255}));
  connect(constant1.y, steam_cv.opening) annotation(
    Line(points = {{-158, 60}, {-148, 60}, {-148, 38}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-120, -10}, {-126, -10}, {-126, 12}, {-94, 12}, {-94, 46}}, color = {0, 0, 127}));
  connect(constant5.y, limPID1.u_s) annotation(
    Line(points = {{-59, 78}, {-52, 78}}, color = {0, 0, 127}));
  connect(ip_drum.waterLevel, limPID1.u_m) annotation(
    Line(points = {{-20, -4}, {-40, -4}, {-40, 66}}, color = {0, 0, 127}));
  connect(lp_drum.HPFW, simplePump5.port_a) annotation(
    Line(points = {{74, -14}, {76, -14}, {76, 20}, {32, 20}}, color = {0, 127, 255}));
  connect(simplePump5.port_b, ip_drum.fedWater) annotation(
    Line(points = {{12, 20}, {-2, 20}, {-2, 0}}, color = {0, 127, 255}));
  connect(limPID1.y, simplePump5.D_flow_in) annotation(
    Line(points = {{-28, 78}, {22, 78}, {22, 30}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 5000, Tolerance = 1e-3, Interval = 0.1),
    Diagram(coordinateSystem(extent = {{-200, -140}, {200, 100}})),
    Icon(coordinateSystem(extent = {{-200, -140}, {200, 100}})));

end ThreePHRSG_Test;
