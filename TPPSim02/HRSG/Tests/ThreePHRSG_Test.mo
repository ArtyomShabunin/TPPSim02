within TPPSim02.HRSG.Tests;

model ThreePHRSG_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-210, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-210, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system(m_flow_small = 1e-1)  annotation(
    Placement(visible = true, transformation(origin = {212, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-130, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G, Tmin = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-190, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {210, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium_F, nPorts = 3) annotation(
    Placement(visible = true, transformation(origin = {-210, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T cond_pump(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {190, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-134, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D eco(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D sh(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-160, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0)  annotation(
    Placement(visible = true, transformation(origin = {-114, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3)  annotation(
    Placement(visible = true, transformation(origin = {-144, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-190, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear steam_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-168, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000)  annotation(
    Placement(visible = true, transformation(origin = {-106, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29)  annotation(
    Placement(visible = true, transformation(origin = {-116, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode1(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-164, -14}, extent = {{10, -10}, {-10, 10}}, rotation = -90)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {156, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState)  annotation(
    Placement(visible = true, transformation(origin = {182, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-80, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 2.424e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {60, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D lp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.815e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {86, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D cond_he(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.728e-3, z1 = 120, z2 = 12, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {130, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum lp_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 16e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {84, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));  
  TPPSim02.Pipes.VolumeNode volumeNode3(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29) annotation(
    Placement(visible = true, transformation(origin = {100, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump1(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {112, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim.Pumps.simplePump simplePump2(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {30, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode4(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15)) annotation(
    Placement(visible = true, transformation(origin = {142, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Fluid.Valves.ValveLinear lp_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-170, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant2(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-210, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode5(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-110, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {122, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant3(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {88, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary flash_tank(redeclare package Medium = Medium_F, p = 1e5, nPorts = 2)  annotation(
    Placement(visible = true, transformation(origin = {72, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump3(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {26, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.156e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D ip_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.195e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-58, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum ip_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 30e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-30, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump4(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {-4, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode6(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = system.p_start + 1000 * system.g * 18.29) annotation(
    Placement(visible = true, transformation(origin = {-18, -80}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant4(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-210, -76}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear ip_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, dp_start = 0, m_flow_nominal = 42, m_flow_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-170, -90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode7(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {-86, -90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant5(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-90, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID1(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-60, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump5(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {46, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.ParallelGFHE1D parallelECO( Din_1 = 38.1e-3, Din_2 = 38.1e-3, Lpiezo_1 = 0, Lpiezo_2 = 18.29, Lpipe_1 = 18.29, Lpipe_2 = 18.29, Nv_1 = 3, Nv_2 = 3, Tin_gas_start_1 = 100 + 273.15, Tin_gas_start_2 = 100 + 273.15, Tin_start_1 = 100 + 273.15, Tin_start_2 = 100 + 273.15, Tout_gas_start_1 = 100 + 273.15, Tout_gas_start_2 = 100 + 273.15, Tout_start_1 = 100 + 273.15, Tout_start_2 = 100 + 273.15, delta_1 = 3.404e-3, delta_2 = 2.108e-3, delta_fin_1 = 0.9906e-3, delta_fin_2 = 0.9906e-3, flowMassDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMassDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, hfin_1 = 15.88e-3, hfin_2 = 15.88e-3, hin_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hin_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1_1 = 89.93e-3, s1_2 = 85.05e-3, s2_1 = 111.1e-3, s2_2 = 111.1e-3, sfin_1 = 2.67e-3, sfin_2 = 3.156e-3, z1_1 = 98, z1_2 = 22, z2_1 = 10, z2_2 = 8, zahod_1 = 1, zahod_2 = 1)  annotation(
    Placement(visible = true, transformation(origin = {30, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode8(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {12, -2}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode9(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start)) annotation(
    Placement(visible = true, transformation(origin = {36, -2}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim.Pumps.simplePump simplePump6(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {26, -88}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-199, -30}, {-187, -30}, {-187, -40}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-199, 0}, {-182, 0}, {-182, -40}}, color = {0, 0, 127}));
  connect(drum.upStr, evo.flowOut) annotation(
    Line(points = {{-137, -25}, {-137, -32}, {-138, -32}, {-138, -40}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-133, 58}, {-126, 58}}, color = {0, 0, 127}));
  connect(steam_cv.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-178, 30}, {-200, 30}}, color = {0, 127, 255}));
  connect(drum.downStr, simplePump.port_a) annotation(
    Line(points = {{-123, -25}, {-123, -30}, {-106, -30}, {-106, -40}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Input) annotation(
    Line(points = {{-106, -60}, {-106, -78}}, color = {0, 127, 255}));
  connect(volumeNode.Output, evo.flowIn) annotation(
    Line(points = {{-126, -78.2}, {-126, -40.2}, {-130, -40.2}}, color = {0, 127, 255}));
  connect(evo.gasIn, sh.gasOut) annotation(
    Line(points = {{-139.2, -50}, {-155, -50}}, color = {0, 127, 255}));
  connect(sh.gasIn, gt.flowOut) annotation(
    Line(points = {{-165.2, -50}, {-179.4, -50}}, color = {0, 127, 255}));
  connect(drum.steam, sh.flowIn) annotation(
    Line(points = {{-137, -7}, {-139, -7}, {-139, -3}, {-156, -3}, {-156, -40}}, color = {0, 127, 255}));
  connect(sh.flowOut, volumeNode1.Input) annotation(
    Line(points = {{-164, -40}, {-164, -24}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, steam_cv.port_a) annotation(
    Line(points = {{-164.2, -4}, {-164.2, 14}, {-158.2, 14}, {-158.2, 30}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{166, -50.2}, {172, -50.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{192, -50}, {200, -50}}, color = {0, 127, 255}));
  connect(eco.gasIn, evo.gasOut) annotation(
    Line(points = {{-95.2, -50}, {-127.2, -50}}, color = {0, 127, 255}));
  connect(eco.flowOut, drum.fedWater) annotation(
    Line(points = {{-94, -40}, {-94, 0}, {-122, 0}, {-122, -6}}, color = {0, 127, 255}));
  connect(volumeNode2.Output, eco.flowIn) annotation(
    Line(points = {{-80.2, -20}, {-80.2, -28}, {-86.2, -28}, {-86.2, -40}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasOut, lp_evo.gasIn) annotation(
    Line(points = {{65.2, -50}, {79.2, -50}}, color = {0, 127, 255}));
  connect(lp_evo.gasOut, cond_he.gasIn) annotation(
    Line(points = {{91.2, -50}, {124.2, -50}}, color = {0, 127, 255}));
  connect(cond_he.gasOut, gas_node.Input) annotation(
    Line(points = {{135.2, -50}, {145.2, -50}}, color = {0, 127, 255}));
  connect(lp_drum.downStr, simplePump1.port_a) annotation(
    Line(points = {{91, -19}, {91, -29}, {111, -29}, {111, -41}}, color = {0, 127, 255}));
  connect(volumeNode3.Input, simplePump1.port_b) annotation(
    Line(points = {{110, -78}, {112, -78}, {112, -60}}, color = {0, 127, 255}));
  connect(volumeNode3.Output, lp_evo.flowIn) annotation(
    Line(points = {{90, -78.2}, {86, -78.2}, {86, -62.2}, {96, -62.2}, {96, -36.2}, {90, -36.2}, {90, -40.2}}, color = {0, 127, 255}));
  connect(lp_drum.upStr, lp_evo.flowOut) annotation(
    Line(points = {{77, -19}, {75, -19}, {75, -33}, {81, -33}, {81, -41}}, color = {0, 127, 255}));
  connect(lp_drum.steam, lp_sh_1.flowIn) annotation(
    Line(points = {{77, -1}, {75, -1}, {75, 5}, {63, 5}, {63, -41}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, simplePump2.port_a) annotation(
    Line(points = {{94, -15}, {106.4, -15}, {106.4, 40}, {40, 40}}, color = {0, 127, 255}));
  connect(pid.y, simplePump2.D_flow_in) annotation(
    Line(points = {{-103, 58}, {30, 58}, {30, 50}}, color = {0, 0, 127}));
  connect(cond_he.flowOut, lp_drum.fedWater) annotation(
    Line(points = {{126, -40}, {126, 0}, {92, 0}}, color = {0, 127, 255}));
  connect(volumeNode4.Output, cond_he.flowIn) annotation(
    Line(points = {{141.8, -20}, {141.8, -28}, {133.8, -28}, {133.8, -40}}, color = {0, 127, 255}));
  connect(cond_pump.ports[1], volumeNode4.Input) annotation(
    Line(points = {{180, 50}, {142, 50}, {142, 0}}, color = {0, 127, 255}));
  connect(constant2.y, lp_cv.opening) annotation(
    Line(points = {{-199, -110}, {-171, -110}, {-171, -116}}, color = {0, 0, 127}));
  connect(lp_cv.port_b, steam_out.ports[2]) annotation(
    Line(points = {{-180, -124}, {-190, -124}, {-190, 30}, {-200, 30}}, color = {0, 127, 255}));
  connect(volumeNode5.Output, lp_cv.port_a) annotation(
    Line(points = {{-120, -124.2}, {-160, -124.2}}, color = {0, 127, 255}));
  connect(lp_drum.waterLevel, limPID.u_m) annotation(
    Line(points = {{73, -4}, {67, -4}, {67, 4}, {121, 4}, {121, 48}}, color = {0, 0, 127}));
  connect(constant3.y, limPID.u_s) annotation(
    Line(points = {{99, 60}, {109, 60}}, color = {0, 0, 127}));
  connect(limPID.y, cond_pump.m_flow_in) annotation(
    Line(points = {{133, 60}, {157, 60}, {157, 70}, {205, 70}, {205, 58}, {199, 58}}, color = {0, 0, 127}));
  connect(simplePump3.port_b, flash_tank.ports[1]) annotation(
    Line(points = {{36, -110}, {62, -110}}));
  connect(ip_evo.gasIn, ip_sh_1.gasOut) annotation(
    Line(points = {{-35.2, -50}, {-53.2, -50}}, color = {0, 127, 255}));
  connect(ip_sh_1.gasIn, eco.gasOut) annotation(
    Line(points = {{-63.2, -50}, {-84.2, -50}}, color = {0, 127, 255}));
  connect(simplePump4.port_b, volumeNode6.Input) annotation(
    Line(points = {{-4, -60}, {-4, -80}, {-8, -80}}, color = {0, 127, 255}));
  connect(volumeNode6.Output, ip_evo.flowIn) annotation(
    Line(points = {{-28, -80.2}, {-34, -80.2}, {-34, -64.2}, {-20, -64.2}, {-20, -36.2}, {-26, -36.2}, {-26, -40.2}}, color = {0, 127, 255}));
  connect(ip_evo.flowOut, ip_drum.upStr) annotation(
    Line(points = {{-34, -40}, {-34, -30}, {-37, -30}, {-37, -19}}, color = {0, 127, 255}));
  connect(simplePump4.port_a, ip_drum.downStr) annotation(
    Line(points = {{-4, -40}, {-4, -28}, {-23, -28}, {-23, -19}}, color = {0, 127, 255}));
  connect(ip_drum.steam, ip_sh_1.flowIn) annotation(
    Line(points = {{-37, -1}, {-37, 6}, {-54, 6}, {-54, -40}}, color = {0, 127, 255}));
  connect(lp_sh_1.flowOut, volumeNode5.Input) annotation(
    Line(points = {{56, -40}, {56, -34}, {8, -34}, {8, -124}, {-100, -124}}, color = {0, 127, 255}));
  connect(simplePump3.port_a, drum.HPFW) annotation(
    Line(points = {{16, -110}, {-100, -110}, {-100, -20}, {-120, -20}}, color = {0, 127, 255}));
  connect(constant4.y, ip_cv.opening) annotation(
    Line(points = {{-199, -76}, {-171, -76}, {-171, -82}}, color = {0, 0, 127}));
  connect(ip_sh_1.flowOut, volumeNode7.Input) annotation(
    Line(points = {{-62, -40}, {-62, -34}, {-68, -34}, {-68, -90}, {-76, -90}}, color = {0, 127, 255}));
  connect(volumeNode7.Output, ip_cv.port_a) annotation(
    Line(points = {{-96, -90.2}, {-160, -90.2}}, color = {0, 127, 255}));
  connect(ip_cv.port_b, steam_out.ports[3]) annotation(
    Line(points = {{-180, -90}, {-186, -90}, {-186, 30}, {-200, 30}}, color = {0, 127, 255}));
  connect(constant1.y, steam_cv.opening) annotation(
    Line(points = {{-179, 60}, {-169, 60}, {-169, 38}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-141, -10}, {-147, -10}, {-147, 12}, {-115, 12}, {-115, 46}}, color = {0, 0, 127}));
  connect(constant5.y, limPID1.u_s) annotation(
    Line(points = {{-79, 78}, {-72, 78}}, color = {0, 0, 127}));
  connect(ip_drum.waterLevel, limPID1.u_m) annotation(
    Line(points = {{-41, -4}, {-61, -4}, {-61, 66}}, color = {0, 0, 127}));
  connect(lp_drum.HPFW, simplePump5.port_a) annotation(
    Line(points = {{94, -15}, {98.4, -15}, {98.4, 20}, {56, 20}}, color = {0, 127, 255}));
  connect(limPID1.y, simplePump5.D_flow_in) annotation(
    Line(points = {{-49, 78}, {46, 78}, {46, 30}}, color = {0, 0, 127}));
  connect(lp_sh_1.gasIn, parallelECO.gasOut) annotation(
    Line(points = {{54, -50}, {36, -50}}, color = {0, 127, 255}));
  connect(parallelECO.gasIn, ip_evo.gasOut) annotation(
    Line(points = {{24, -50}, {-24, -50}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_2, ip_drum.fedWater) annotation(
    Line(points = {{26, -60}, {26, -66}, {14, -66}, {14, -24}, {-12, -24}, {-12, 4}, {-22, 4}, {-22, 0}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_1, volumeNode2.Input) annotation(
    Line(points = {{26, -40}, {26, -18}, {0, -18}, {0, 12}, {-80, 12}, {-80, 0}}, color = {0, 127, 255}));
  connect(simplePump5.port_b, volumeNode9.Input) annotation(
    Line(points = {{36, 20}, {30, 20}, {30, 14}, {36, 14}, {36, 8}}, color = {0, 127, 255}));
  connect(volumeNode9.Output, parallelECO.flowIn_2) annotation(
    Line(points = {{36, -12}, {36, -20}, {44, -20}, {44, -68}, {34, -68}, {34, -60}}, color = {0, 127, 255}));
  connect(volumeNode8.Output, parallelECO.flowIn_1) annotation(
    Line(points = {{12, -12}, {12, -14}, {32, -14}, {32, -30}, {34, -30}, {34, -40}}, color = {0, 127, 255}));
  connect(simplePump2.port_b, volumeNode8.Input) annotation(
    Line(points = {{20, 40}, {12, 40}, {12, 8}}, color = {0, 127, 255}));
  connect(ip_drum.HPFW, simplePump6.port_a) annotation(
    Line(points = {{-20, -14}, {-16, -14}, {-16, -26}, {4, -26}, {4, -88}, {16, -88}}, color = {0, 127, 255}));
  connect(simplePump6.port_b, flash_tank.ports[2]) annotation(
    Line(points = {{36, -88}, {48, -88}, {48, -110}, {62, -110}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 5000, Tolerance = 1e-3, Interval = 0.1),
    Diagram(coordinateSystem(extent = {{-220, -140}, {220, 100}})),
    Icon(coordinateSystem(extent = {{-220, -140}, {220, 100}})));

end ThreePHRSG_Test;
