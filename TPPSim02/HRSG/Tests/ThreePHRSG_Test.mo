within TPPSim02.HRSG.Tests;

model ThreePHRSG_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-350, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-350, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner TPPSim02.System system(m_flow_small = 1e-1) annotation(
    Placement(visible = true, transformation(origin = {290, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum hp_drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-130, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
//  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G, Tmin = 100 + 273.15) annotation(
//    Placement(visible = true, transformation(origin = {-330, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Gas_turbine.combitable_startupGT GT(redeclare package Medium = Medium_G, fileName = "C:/Users/ASShabunin/TPPSim/Gas_turbine/Tests/TEC_16_GT_2.txt") annotation(
    Placement(visible = true, transformation(origin = {-350, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {288, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T cond_pump(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {268, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-134, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_eco(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-164, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-114, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-144, 58}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-230, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {-106, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {-116, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {234, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {260, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-40, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 2.424e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {138, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.815e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {164, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D cond_he(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.728e-3, z1 = 120, z2 = 12, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {208, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum lp_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 16e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {162, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode3(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {178, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump1(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {190, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim.Pumps.simplePump simplePump2(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {108, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode4(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {220, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Sources.Constant constant2(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-350, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode5(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-110, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {200, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant3(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {166, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary flash_tank(redeclare package Medium = Medium_F, p = 1e5, nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {112, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump3(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {66, -110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.156e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {10, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.195e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-18, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum ip_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 30e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump4(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {36, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode6(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {22, -80}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant5(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-50, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID1(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-20, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump5(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {150, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.ParallelGFHE1D parallelECO(Din_1 = 38.1e-3, Din_2 = 38.1e-3, Lpiezo_1 = 0, Lpiezo_2 = 18.29, Lpipe_1 = 18.29, Lpipe_2 = 18.29, Nv_1 = 3, Nv_2 = 3, Tin_gas_start_1 = 100 + 273.15, Tin_gas_start_2 = 100 + 273.15, Tin_start_1 = 100 + 273.15, Tin_start_2 = 100 + 273.15, Tout_gas_start_1 = 100 + 273.15, Tout_gas_start_2 = 100 + 273.15, Tout_start_1 = 100 + 273.15, Tout_start_2 = 100 + 273.15, delta_1 = 3.404e-3, delta_2 = 2.108e-3, delta_fin_1 = 0.9906e-3, delta_fin_2 = 0.9906e-3, flowMassDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMassDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, hfin_1 = 15.88e-3, hfin_2 = 15.88e-3, hin_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hin_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1_1 = 89.93e-3, s1_2 = 85.05e-3, s2_1 = 111.1e-3, s2_2 = 111.1e-3, sfin_1 = 2.67e-3, sfin_2 = 3.156e-3, z1_1 = 98, z1_2 = 22, z2_1 = 10, z2_2 = 8, zahod_1 = 1, zahod_2 = 1) annotation(
    Placement(visible = true, transformation(origin = {108, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode8(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode9(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {120, 6}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim.Pumps.simplePump simplePump6(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {66, -88}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 10.25e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {78, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 9.017e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-74, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode10(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-34, -34}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode11(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {94, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.123e-3, z1 = 120, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-196, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant6(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-310, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode21( h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start),nPorts = 3)  annotation(
    Placement(visible = true, transformation(origin = {-192, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode22(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-78, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible IP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 1800, dp_nominal(displayUnit = "Pa") = 3e+06, m_flow_start = system.m_flow_small, p_nominal = 60e5) annotation(
    Placement(visible = true, transformation(origin = {-290, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode23(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-264, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible HP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 600, dp_nominal = 9e+06, m_flow_start = system.m_flow_small) annotation(
    Placement(visible = true, transformation(origin = {-210, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible LP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 1800, dp_nominal(displayUnit = "Pa") = 3e+06, m_flow_start = system.m_flow_small, p_nominal = 60e5) annotation(
    Placement(visible = true, transformation(origin = {-290, -124}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_ph steam_out(redeclare package Medium = Medium_F, h = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), p = system.p_start, nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-350, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible checkValve(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.OpPoint, dp_nominal(displayUnit = "Pa") = 0.5e5, filteredOpening = true, m_flow_nominal = 17.83, p_nominal = 71e5, rho_nominal = 11.44, riseTime = 300) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant7(k = -0.5e5) annotation(
    Placement(visible = true, transformation(origin = {-194, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-220, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0))); 
  TPPSim02.HeatExchanger.GFHE1D hp_sh_3(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 4.775e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.48e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-270, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.677e-3, z1 = 120, z2 = 3, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-244, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D rh_3(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.235e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-290, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode24(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-218, -24}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode25(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-264, -24}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode26(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-180, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode27(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-254, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode28(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-274, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-160, 14}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID2(Td = 20,Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PID, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 1e-6, limitsAtInit = true, yMax = 1, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-164, 94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(hp_drum.upStr, hp_evo.flowOut) annotation(
    Line(points = {{-137, -25}, {-137, -32}, {-138, -32}, {-138, -40}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-133, 58}, {-126, 58}}, color = {0, 0, 127}));
  connect(hp_drum.downStr, simplePump.port_a) annotation(
    Line(points = {{-123, -25}, {-123, -30}, {-106, -30}, {-106, -40}}, color = {0, 127, 255}));
  connect(hp_evo.gasIn, hp_sh_1.gasOut) annotation(
    Line(points = {{-139.2, -50}, {-159, -50}}, color = {0, 127, 255}));
  connect(hp_drum.steam, hp_sh_1.flowIn) annotation(
    Line(points = {{-137, -7}, {-139, -7}, {-139, -3}, {-160, -3}, {-160, -40}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{244, -50.2}, {250, -50.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{270, -50}, {278, -50}}, color = {0, 127, 255}));
  connect(hp_eco.flowOut, hp_drum.fedWater) annotation(
    Line(points = {{-54, -40}, {-54, 0}, {-123, 0}, {-123, -7}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasOut, lp_evo.gasIn) annotation(
    Line(points = {{143.2, -50}, {159.2, -50}}, color = {0, 127, 255}));
  connect(lp_evo.gasOut, cond_he.gasIn) annotation(
    Line(points = {{169.2, -50}, {203.2, -50}}, color = {0, 127, 255}));
  connect(cond_he.gasOut, gas_node.Input) annotation(
    Line(points = {{213.2, -50}, {224.2, -50}}, color = {0, 127, 255}));
  connect(lp_drum.downStr, simplePump1.port_a) annotation(
    Line(points = {{169, -19}, {169, -29}, {190, -29}, {190, -40}}, color = {0, 127, 255}));
  connect(lp_drum.upStr, lp_evo.flowOut) annotation(
    Line(points = {{155, -19}, {153, -19}, {153, -33}, {160, -33}, {160, -40}}, color = {0, 127, 255}));
  connect(lp_drum.steam, lp_sh_1.flowIn) annotation(
    Line(points = {{155, -1}, {153, -1}, {153, 5}, {142, 5}, {142, -40}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, simplePump2.port_a) annotation(
    Line(points = {{172.4, -15}, {185.2, -15}, {185.2, 40}, {118.4, 40}}, color = {0, 127, 255}));
  connect(pid.y, simplePump2.D_flow_in) annotation(
    Line(points = {{-103, 58}, {108, 58}, {108, 50}}, color = {0, 0, 127}));
  connect(cond_he.flowOut, lp_drum.fedWater) annotation(
    Line(points = {{204, -40}, {204, -1}, {169, -1}}, color = {0, 127, 255}));
  connect(lp_drum.waterLevel, limPID.u_m) annotation(
    Line(points = {{151, -4}, {145, -4}, {145, 4}, {200, 4}, {200, 48}}, color = {0, 0, 127}));
  connect(constant3.y, limPID.u_s) annotation(
    Line(points = {{177, 60}, {188, 60}}, color = {0, 0, 127}));
  connect(limPID.y, cond_pump.m_flow_in) annotation(
    Line(points = {{211, 60}, {235, 60}, {235, 70}, {283, 70}, {283, 58}, {278, 58}}, color = {0, 0, 127}));
  connect(simplePump3.port_b, flash_tank.ports[1]) annotation(
    Line(points = {{76, -110}, {102, -110}}));
  connect(ip_evo.gasIn, ip_sh_1.gasOut) annotation(
    Line(points = {{4.8, -50}, {-13.2, -50}}, color = {0, 127, 255}));
  connect(ip_sh_1.gasIn, hp_eco.gasOut) annotation(
    Line(points = {{-23.2, -50}, {-45.2, -50}}, color = {0, 127, 255}));
  connect(ip_evo.flowOut, ip_drum.upStr) annotation(
    Line(points = {{6, -40}, {6, -30}, {3, -30}, {3, -19}}, color = {0, 127, 255}));
  connect(simplePump4.port_a, ip_drum.downStr) annotation(
    Line(points = {{36, -40}, {36, -28}, {17, -28}, {17, -19}}, color = {0, 127, 255}));
  connect(ip_drum.steam, ip_sh_1.flowIn) annotation(
    Line(points = {{3, -1}, {3, 6}, {-14, 6}, {-14, -40}}, color = {0, 127, 255}));
  connect(simplePump3.port_a, hp_drum.HPFW) annotation(
    Line(points = {{56, -110}, {-94, -110}, {-94, -21}, {-120, -21}}, color = {0, 127, 255}));
  connect(hp_drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-141, -10}, {-147, -10}, {-147, 4}, {-114, 4}, {-114, 46}}, color = {0, 0, 127}));
  connect(constant5.y, limPID1.u_s) annotation(
    Line(points = {{-39, 78}, {-32, 78}}, color = {0, 0, 127}));
  connect(ip_drum.waterLevel, limPID1.u_m) annotation(
    Line(points = {{-1, -4}, {-21, -4}, {-21, 66}}, color = {0, 0, 127}));
  connect(lp_drum.HPFW, simplePump5.port_a) annotation(
    Line(points = {{172.4, -15}, {177.2, -15}, {177.2, 20}, {160, 20}}, color = {0, 127, 255}));
  connect(limPID1.y, simplePump5.D_flow_in) annotation(
    Line(points = {{-9, 78}, {150, 78}, {150, 30}}, color = {0, 0, 127}));
  connect(lp_sh_1.gasIn, parallelECO.gasOut) annotation(
    Line(points = {{132.8, -50}, {112.8, -50}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_2, ip_drum.fedWater) annotation(
    Line(points = {{104, -60}, {104, -66}, {54, -66}, {54, -24}, {28, -24}, {28, 4}, {17, 4}, {17, -1}}, color = {0, 127, 255}));
  connect(ip_drum.HPFW, simplePump6.port_a) annotation(
    Line(points = {{20.4, -15}, {24.8, -15}, {24.8, -27}, {44.8, -27}, {44.8, -88}, {56.4, -88}}, color = {0, 127, 255}));
  connect(simplePump6.port_b, flash_tank.ports[2]) annotation(
    Line(points = {{76, -88}, {88, -88}, {88, -110}, {102, -110}}, color = {0, 127, 255}));
  connect(hp_eco.gasIn, ip_sh_2.gasOut) annotation(
    Line(points = {{-55.2, -50}, {-69.2, -50}}, color = {0, 127, 255}));
  connect(ip_sh_2.gasIn, hp_evo.gasOut) annotation(
    Line(points = {{-79.2, -50}, {-129.2, -50}}, color = {0, 127, 255}));
  connect(parallelECO.gasIn, lp_sh_2.gasOut) annotation(
    Line(points = {{102.6, -50}, {82.6, -50}}, color = {0, 127, 255}));
  connect(lp_sh_2.gasIn, ip_evo.gasOut) annotation(
    Line(points = {{72.8, -50}, {14.8, -50}}, color = {0, 127, 255}));
  connect(hp_sh_1.gasIn, rh_1.gasOut) annotation(
    Line(points = {{-170, -50}, {-191, -50}}, color = {0, 127, 255}));
  connect(constant6.y, IP_RS.opening) annotation(
    Line(points = {{-298, 70}, {-290, 70}, {-290, 38}}, color = {0, 0, 127}));
  connect(constant1.y, HP_RS.opening) annotation(
    Line(points = {{-218, 80}, {-210, 80}, {-210, 38}}, color = {0, 0, 127}));
  connect(constant2.y, LP_RS.opening) annotation(
    Line(points = {{-338, -110}, {-290, -110}, {-290, -116}}, color = {0, 0, 127}));
  connect(LP_RS.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-300, -124}, {-310, -124}, {-310, 30}, {-340, 30}}, color = {0, 127, 255}));
  connect(IP_RS.port_b, steam_out.ports[2]) annotation(
    Line(points = {{-300, 30}, {-340, 30}}, color = {0, 127, 255}));
  connect(rh_1.gasIn, hp_sh_2.gasOut) annotation(
    Line(points = {{-202, -50}, {-214, -50}}, color = {0, 127, 255}));
  connect(hp_sh_2.gasIn, rh_2.gasOut) annotation(
    Line(points = {{-226, -50}, {-238, -50}}, color = {0, 127, 255}));
  connect(rh_2.gasIn, hp_sh_3.gasOut) annotation(
    Line(points = {{-250, -50}, {-265, -50}}, color = {0, 127, 255}));
  connect(hp_sh_3.gasIn, rh_3.gasOut) annotation(
    Line(points = {{-275, -50}, {-285, -50}}, color = {0, 127, 255}));
  connect(limPID2.y, checkValve.opening) annotation(
    Line(points = {{-152, 94}, {-130, 94}, {-130, 38}}, color = {0, 0, 127}));
  connect(cond_pump.ports[1], volumeNode4.Port[1]) annotation(
    Line(points = {{258, 50}, {220, 50}, {220, -10}}, color = {0, 127, 255}));
  connect(volumeNode4.Port[2], cond_he.flowIn) annotation(
    Line(points = {{220, -10}, {220, -24}, {212, -24}, {212, -40}}, color = {0, 127, 255}));
  connect(simplePump1.port_b, volumeNode3.Port[1]) annotation(
    Line(points = {{190, -60}, {190, -78}, {178, -78}}, color = {0, 127, 255}));
  connect(volumeNode3.Port[2], lp_evo.flowIn) annotation(
    Line(points = {{178, -78}, {174, -78}, {174, -36}, {168, -36}, {168, -40}}, color = {0, 127, 255}));
  connect(lp_sh_1.flowOut, volumeNode11.Port[1]) annotation(
    Line(points = {{134, -40}, {134, -30}, {94, -30}}, color = {0, 127, 255}));
  connect(volumeNode11.Port[2], lp_sh_2.flowIn) annotation(
    Line(points = {{94, -30}, {82, -30}, {82, -40}}, color = {0, 127, 255}));
  connect(volumeNode9.Port[2], parallelECO.flowIn_2) annotation(
    Line(points = {{120, 6}, {120, -66}, {112, -66}, {112, -60}}, color = {0, 127, 255}));
  connect(simplePump2.port_b, volumeNode8.Port[1]) annotation(
    Line(points = {{98, 40}, {90, 40}, {90, 10}}, color = {0, 127, 255}));
  connect(volumeNode8.Port[2], parallelECO.flowIn_1) annotation(
    Line(points = {{90, 10}, {90, -14}, {112, -14}, {112, -40}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_1, volumeNode2.Port[1]) annotation(
    Line(points = {{104, -40}, {104, -20}, {62, -20}, {62, 8}, {-40, 8}, {-40, -10}}, color = {0, 127, 255}));
  connect(volumeNode2.Port[2], hp_eco.flowIn) annotation(
    Line(points = {{-40, -10}, {-46, -10}, {-46, -40}}, color = {0, 127, 255}));
  connect(ip_sh_1.flowOut, volumeNode10.Port[1]) annotation(
    Line(points = {{-22, -40}, {-22, -34}, {-34, -34}}, color = {0, 127, 255}));
  connect(volumeNode10.Port[2], ip_sh_2.flowIn) annotation(
    Line(points = {{-34, -34}, {-70, -34}, {-70, -40}}, color = {0, 127, 255}));
  connect(ip_sh_2.flowOut, volumeNode22.Port[1]) annotation(
    Line(points = {{-78, -40}, {-78, -8}}, color = {0, 127, 255}));
  connect(volumeNode22.Port[2], checkValve.port_a) annotation(
    Line(points = {{-78, -8}, {-78, 30}, {-120, 30}}, color = {0, 127, 255}));
  connect(simplePump4.port_b, volumeNode6.Port[1]) annotation(
    Line(points = {{36, -60}, {36, -80}, {22, -80}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Port[1]) annotation(
    Line(points = {{-106, -60}, {-106, -78}, {-116, -78}}, color = {0, 127, 255}));
  connect(volumeNode.Port[2], hp_evo.flowIn) annotation(
    Line(points = {{-116, -78}, {-124, -78}, {-124, -36}, {-130, -36}, {-130, -40}}, color = {0, 127, 255}));
  connect(checkValve.port_b, volumeNode21.Port[1]) annotation(
    Line(points = {{-140, 30}, {-192, 30}}, color = {0, 127, 255}));
  connect(volumeNode21.Port[2], rh_1.flowIn) annotation(
    Line(points = {{-192, 30}, {-192, -40}}, color = {0, 127, 255}));
  connect(HP_RS.port_b, volumeNode21.Port[3]) annotation(
    Line(points = {{-200, 30}, {-192, 30}}, color = {0, 127, 255}));
  connect(constant7.y, limPID2.u_s) annotation(
    Line(points = {{-182, 68}, {-180, 68}, {-180, 94}, {-176, 94}}, color = {0, 0, 127}));
  connect(relativePressure.p_rel, limPID2.u_m) annotation(
    Line(points = {{-160, 23}, {-160, 66}, {-164, 66}, {-164, 82}}, color = {0, 0, 127}));
  connect(lp_sh_2.flowOut, volumeNode5.Port[1]) annotation(
    Line(points = {{74, -40}, {74, -38}, {68, -38}, {68, -72}, {132, -72}, {132, -124}, {-110, -124}}, color = {0, 127, 255}));
  connect(volumeNode5.Port[2], LP_RS.port_a) annotation(
    Line(points = {{-110, -124}, {-280, -124}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[1], hp_sh_1.flowOut) annotation(
    Line(points = {{-180, -32}, {-168, -32}, {-168, -40}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[2], hp_sh_2.flowIn) annotation(
    Line(points = {{-180, -32}, {-216, -32}, {-216, -40}}, color = {0, 127, 255}));
  connect(hp_sh_2.flowOut, volumeNode27.Port[1]) annotation(
    Line(points = {{-224, -40}, {-224, -32}, {-254, -32}}, color = {0, 127, 255}));
  connect(volumeNode27.Port[2], hp_sh_3.flowIn) annotation(
    Line(points = {{-254, -32}, {-266, -32}, {-266, -40}}, color = {0, 127, 255}));
  connect(hp_sh_3.flowOut, volumeNode28.Port[1]) annotation(
    Line(points = {{-274, -40}, {-274, -30}}, color = {0, 127, 255}));
  connect(rh_1.flowOut, volumeNode24.Port[1]) annotation(
    Line(points = {{-200, -40}, {-200, -24}, {-218, -24}}, color = {0, 127, 255}));
  connect(rh_2.flowOut, volumeNode25.Port[1]) annotation(
    Line(points = {{-248, -40}, {-248, -24}, {-264, -24}}, color = {0, 127, 255}));
  connect(volumeNode25.Port[2], rh_3.flowIn) annotation(
    Line(points = {{-264, -24}, {-286, -24}, {-286, -40}}, color = {0, 127, 255}));
  connect(rh_3.flowOut, volumeNode23.Port[1]) annotation(
    Line(points = {{-294, -40}, {-294, 6}, {-264, 6}, {-264, 30}}, color = {0, 127, 255}));
  connect(volumeNode23.Port[2], IP_RS.port_a) annotation(
    Line(points = {{-264, 30}, {-280, 30}}, color = {0, 127, 255}));
  connect(volumeNode24.Port[2], rh_2.flowIn) annotation(
    Line(points = {{-218, -24}, {-240, -24}, {-240, -40}}, color = {0, 127, 255}));
  connect(volumeNode28.Port[2], HP_RS.port_a) annotation(
    Line(points = {{-274, -30}, {-274, -6}, {-232, -6}, {-232, 30}, {-220, 30}}, color = {0, 127, 255}));
  connect(volumeNode6.Port[2], ip_evo.flowIn) annotation(
    Line(points = {{22, -80}, {18, -80}, {18, -34}, {14, -34}, {14, -40}}, color = {0, 127, 255}));
  connect(simplePump5.port_b, volumeNode9.Port[1]) annotation(
    Line(points = {{140, 20}, {120, 20}, {120, 6}}, color = {0, 127, 255}));
  connect(relativePressure.port_b, checkValve.port_a) annotation(
    Line(points = {{-150, 14}, {-98, 14}, {-98, 30}, {-120, 30}}, color = {0, 127, 255}));
  connect(relativePressure.port_a, checkValve.port_b) annotation(
    Line(points = {{-170, 14}, {-178, 14}, {-178, 30}, {-140, 30}}));
  connect(GT.flowOut, rh_3.gasIn) annotation(
    Line(points = {{-340, -70}, {-324, -70}, {-324, -50}, {-294, -50}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 4000, Tolerance = 0.001, Interval = 0.1),
    Diagram(coordinateSystem(extent = {{-360, -140}, {300, 100}})),
    Icon(coordinateSystem(extent = {{-360, -140}, {300, 100}})),
  __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", single = "()"));
end ThreePHRSG_Test;
