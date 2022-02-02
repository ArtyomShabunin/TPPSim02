within TPPSim02.HRSG;

model EMA_028_HRSG
  extends TPPSim02.HRSG.Icons.Icon3pHorizontalHRSG;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
    //Интерфейс
  Modelica.Fluid.Interfaces.FluidPort_a gasIn(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-250, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, -130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b HP_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a RH_In(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, 14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b RH_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, -36}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, 104}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b LP_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {50, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum hp_drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-66, -18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {250, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T cond_pump(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {250, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-70, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_eco(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-10, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {140, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {110, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {-60, -70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {190, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {220, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-6, -16}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 2.424e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {110, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.815e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {130, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D cond_he(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.728e-3, z1 = 120, z2 = 12, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {170, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum lp_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 16e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {134, -18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode3(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {138, -64}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump1(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {150, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim.Pumps.simplePump simplePump2(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {170, 38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode4(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {230, -30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode5(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-10, -112}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {244, 104}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant3(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {210, 104}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary flash_tank(redeclare package Medium = Medium_F, p = 1e5, nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {210, -100}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump3(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {90, -100}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.156e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.195e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {10, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum ip_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 30e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {34, -18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump4(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode6(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {40, -70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant5(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {150, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID1(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {190, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim.Pumps.simplePump simplePump5(setD_flow = 200, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {196, 18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.ParallelGFHE1D parallelECO(Din_1 = 38.1e-3, Din_2 = 38.1e-3, Lpiezo_1 = 0, Lpiezo_2 = 18.29, Lpipe_1 = 18.29, Lpipe_2 = 18.29, Nv_1 = 3, Nv_2 = 3, Tin_gas_start_1 = 100 + 273.15, Tin_gas_start_2 = 100 + 273.15, Tin_start_1 = 100 + 273.15, Tin_start_2 = 100 + 273.15, Tout_gas_start_1 = 100 + 273.15, Tout_gas_start_2 = 100 + 273.15, Tout_start_1 = 100 + 273.15, Tout_start_2 = 100 + 273.15, delta_1 = 3.404e-3, delta_2 = 2.108e-3, delta_fin_1 = 0.9906e-3, delta_fin_2 = 0.9906e-3, flowMassDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMassDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, hfin_1 = 15.88e-3, hfin_2 = 15.88e-3, hin_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hin_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1_1 = 89.93e-3, s1_2 = 85.05e-3, s2_1 = 111.1e-3, s2_2 = 111.1e-3, sfin_1 = 2.67e-3, sfin_2 = 3.156e-3, z1_1 = 98, z1_2 = 22, z2_1 = 10, z2_2 = 8, zahod_1 = 1, zahod_2 = 1) annotation(
    Placement(visible = true, transformation(origin = {90, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode8(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {94, -22}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode9(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {180, -68}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim.Pumps.simplePump simplePump6(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {80, -80}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 10.25e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {70, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 9.017e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode10(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {0, -32}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode11(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {74, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.123e-3, z1 = 120, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-110, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode21( h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start),nPorts = 3)  annotation(
    Placement(visible = true, transformation(origin = {-106, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible vent_CV(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.OpPoint, dp_nominal(displayUnit = "Pa") = 2.98e+06, filteredOpening = true, m_flow_nominal = 17.83, p_nominal = 29.8e+05, rho_nominal = 11.44, riseTime = 600) annotation(
    Placement(visible = true, transformation(origin = {40, 38}, extent = {{10, -10}, {-10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode22(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 3) annotation(
    Placement(visible = true, transformation(origin = {20, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode23(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-210, -36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible checkValve(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.OpPoint, dp_nominal(displayUnit = "Pa") = 0.5e5, filteredOpening = true, m_flow_nominal = 17.83, p_nominal = 71e5, rho_nominal = 11.44, riseTime = 300) annotation(
    Placement(visible = true, transformation(origin = {-46, 28}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant7(k = -1e5) annotation(
    Placement(visible = true, transformation(origin = {-112, 48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-130, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0))); 
  TPPSim02.HeatExchanger.GFHE1D hp_sh_3(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 4.775e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.48e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-170, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.677e-3, z1 = 120, z2 = 3, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-150, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D rh_3(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.235e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-190, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode24(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-120, -26}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode25(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-162, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode26(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-100, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode27(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-156, -34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode28(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-180, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-66, 12}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID2(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 1e-6, limitsAtInit = true, yMax = 1, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-66, 48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 5)  annotation(
    Placement(visible = true, transformation(origin = {-10, 66}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Feedback feedback annotation(
    Placement(visible = true, transformation(origin = {12, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant8(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-70, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Max max annotation(
    Placement(visible = true, transformation(origin = {42, 86}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant9(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-8, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(hp_drum.upStr, hp_evo.flowOut) annotation(
    Line(points = {{-73, -27}, {-73, -34}, {-73.5, -34}, {-73.5, -40}}, color = {0, 127, 255}));
  connect(hp_drum.downStr, simplePump.port_a) annotation(
    Line(points = {{-59, -27}, {-59, -32}, {-50, -32}, {-50, -40}}, color = {0, 127, 255}));
  connect(hp_evo.gasIn, hp_sh_1.gasOut) annotation(
    Line(points = {{-74.7, -50}, {-83.7, -50}}, color = {0, 127, 255}));
  connect(hp_drum.steam, hp_sh_1.flowIn) annotation(
    Line(points = {{-73, -9}, {-73, -5}, {-85.5, -5}, {-85.5, -40}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{200, -50.2}, {210, -50.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{230, -50}, {240, -50}}, color = {0, 127, 255}));
  connect(hp_eco.flowOut, hp_drum.fedWater) annotation(
    Line(points = {{-13.5, -40}, {-13.5, -2}, {-59, -2}, {-59, -9}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasOut, lp_evo.gasIn) annotation(
    Line(points = {{115.7, -50}, {124.7, -50}}, color = {0, 127, 255}));
  connect(lp_evo.gasOut, cond_he.gasIn) annotation(
    Line(points = {{135.7, -50}, {164.7, -50}}, color = {0, 127, 255}));
  connect(cond_he.gasOut, gas_node.Input) annotation(
    Line(points = {{175.7, -50}, {179.7, -50}}, color = {0, 127, 255}));
  connect(lp_drum.downStr, simplePump1.port_a) annotation(
    Line(points = {{141, -27}, {141, -31}, {150, -31}, {150, -40}}, color = {0, 127, 255}));
  connect(lp_drum.upStr, lp_evo.flowOut) annotation(
    Line(points = {{127, -27}, {127, -35}, {126.5, -35}, {126.5, -40}}, color = {0, 127, 255}));
  connect(lp_drum.steam, lp_sh_1.flowIn) annotation(
    Line(points = {{127, -9}, {127, 3}, {114.5, 3}, {114.5, -40}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, simplePump2.port_a) annotation(
    Line(points = {{144.4, -23}, {215.6, -23}, {215.6, 38}, {180.4, 38}}, color = {0, 127, 255}));
  connect(cond_he.flowOut, lp_drum.fedWater) annotation(
    Line(points = {{166.5, -40}, {166.5, -9}, {141, -9}}, color = {0, 127, 255}));
  connect(lp_drum.waterLevel, limPID.u_m) annotation(
    Line(points = {{123, -12}, {123, 2}, {244, 2}, {244, 92}}, color = {0, 0, 127}));
  connect(constant3.y, limPID.u_s) annotation(
    Line(points = {{221, 104}, {232, 104}}, color = {0, 0, 127}));
  connect(simplePump3.port_b, flash_tank.ports[1]) annotation(
    Line(points = {{100, -100}, {200, -100}}));
  connect(ip_evo.gasIn, ip_sh_1.gasOut) annotation(
    Line(points = {{25.3, -50}, {16.3, -50}}, color = {0, 127, 255}));
  connect(ip_sh_1.gasIn, hp_eco.gasOut) annotation(
    Line(points = {{5.3, -50}, {-3.7, -50}}, color = {0, 127, 255}));
  connect(ip_evo.flowOut, ip_drum.upStr) annotation(
    Line(points = {{26.5, -40}, {26.5, -32}, {27, -32}, {27, -27}}, color = {0, 127, 255}));
  connect(simplePump4.port_a, ip_drum.downStr) annotation(
    Line(points = {{50, -40}, {50, -30}, {41, -30}, {41, -27}}, color = {0, 127, 255}));
  connect(ip_drum.steam, ip_sh_1.flowIn) annotation(
    Line(points = {{27, -9}, {27, 4}, {14.5, 4}, {14.5, -40}}, color = {0, 127, 255}));
  connect(simplePump3.port_a, hp_drum.HPFW) annotation(
    Line(points = {{80, -100}, {4, -100}, {4, -23}, {-56, -23}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, simplePump5.port_a) annotation(
    Line(points = {{144.4, -23}, {215.6, -23}, {215.6, 18}, {206.4, 18}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasIn, parallelECO.gasOut) annotation(
    Line(points = {{105.3, -50}, {95.3, -50}}, color = {0, 127, 255}));
  connect(ip_drum.HPFW, simplePump6.port_a) annotation(
    Line(points = {{44.4, -23}, {59.2, -23}, {59.2, -80}, {70.4, -80}}, color = {0, 127, 255}));
  connect(simplePump6.port_b, flash_tank.ports[2]) annotation(
    Line(points = {{90, -80}, {186, -80}, {186, -100}, {200, -100}}, color = {0, 127, 255}));
  connect(hp_eco.gasIn, ip_sh_2.gasOut) annotation(
    Line(points = {{-14.7, -50}, {-23.7, -50}}, color = {0, 127, 255}));
  connect(ip_sh_2.gasIn, hp_evo.gasOut) annotation(
    Line(points = {{-34.7, -50}, {-63.7, -50}}, color = {0, 127, 255}));
  connect(parallelECO.gasIn, lp_sh_2.gasOut) annotation(
    Line(points = {{84.6, -50}, {75.6, -50}}, color = {0, 127, 255}));
  connect(lp_sh_2.gasIn, ip_evo.gasOut) annotation(
    Line(points = {{65.3, -50}, {36.3, -50}}, color = {0, 127, 255}));
  connect(hp_sh_1.gasIn, rh_1.gasOut) annotation(
    Line(points = {{-94.7, -50}, {-103.7, -50}}, color = {0, 127, 255}));
  connect(rh_1.gasIn, hp_sh_2.gasOut) annotation(
    Line(points = {{-114.7, -50}, {-123.7, -50}}, color = {0, 127, 255}));
  connect(hp_sh_2.gasIn, rh_2.gasOut) annotation(
    Line(points = {{-134.7, -50}, {-143.7, -50}}, color = {0, 127, 255}));
  connect(rh_2.gasIn, hp_sh_3.gasOut) annotation(
    Line(points = {{-154.7, -50}, {-163.7, -50}}, color = {0, 127, 255}));
  connect(hp_sh_3.gasIn, rh_3.gasOut) annotation(
    Line(points = {{-174.7, -50}, {-183.7, -50}}, color = {0, 127, 255}));
  connect(limPID2.y, checkValve.opening) annotation(
    Line(points = {{-55, 48}, {-46, 48}, {-46, 36}}, color = {0, 0, 127}));
  connect(gain.y, feedback.u2) annotation(
    Line(points = {{1, 66}, {12, 66}, {12, 72}}, color = {0, 0, 127}));
  connect(limPID2.y, gain.u) annotation(
    Line(points = {{-55, 48}, {-52, 48}, {-52, 66}, {-22, 66}}, color = {0, 0, 127}));
  connect(constant8.y, feedback.u1) annotation(
    Line(points = {{-59, 80}, {4, 80}}, color = {0, 0, 127}));
  connect(constant9.y, max.u1) annotation(
    Line(points = {{3, 100}, {12.5, 100}, {12.5, 92}, {30, 92}}, color = {0, 0, 127}));
  connect(feedback.y, max.u2) annotation(
    Line(points = {{21, 80}, {30, 80}}, color = {0, 0, 127}));
  connect(max.y, vent_CV.opening) annotation(
    Line(points = {{53, 86}, {60, 86}, {60, 38}, {48, 38}}, color = {0, 0, 127}));
  connect(cond_pump.ports[1], volumeNode4.Port[1]) annotation(
    Line(points = {{240, -10}, {230, -10}, {230, -30}}, color = {0, 127, 255}));
  connect(volumeNode4.Port[2], cond_he.flowIn) annotation(
    Line(points = {{229.6, -30}, {174.1, -30}, {174.1, -40}}, color = {0, 127, 255}));
  connect(simplePump1.port_b, volumeNode3.Port[1]) annotation(
    Line(points = {{150, -60}, {150, -65}, {138, -65}, {138, -64}}, color = {0, 127, 255}));
  connect(volumeNode3.Port[2], lp_evo.flowIn) annotation(
    Line(points = {{138, -64.4}, {138, -38.8}, {134.5, -38.8}, {134.5, -40.4}}, color = {0, 127, 255}));
  connect(lp_sh_1.flowOut, volumeNode11.Port[1]) annotation(
    Line(points = {{106.5, -40}, {106.5, -30}, {74, -30}}, color = {0, 127, 255}));
  connect(volumeNode11.Port[2], lp_sh_2.flowIn) annotation(
    Line(points = {{74, -30.4}, {74.5, -30.4}, {74.5, -40.4}}, color = {0, 127, 255}));
  connect(volumeNode9.Port[2], parallelECO.flowIn_2) annotation(
    Line(points = {{179.6, -68}, {93.6, -68}, {93.6, -60}}, color = {0, 127, 255}));
  connect(simplePump2.port_b, volumeNode8.Port[1]) annotation(
    Line(points = {{160, 38}, {161, 38}, {161, 6}, {94, 6}, {94, -22}}, color = {0, 127, 255}));
  connect(volumeNode8.Port[2], parallelECO.flowIn_1) annotation(
    Line(points = {{93.6, -22}, {93.6, -40}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_1, volumeNode2.Port[1]) annotation(
    Line(points = {{86, -40}, {86, 6}, {-6, 6}, {-6, -16}}, color = {0, 127, 255}));
  connect(volumeNode2.Port[2], hp_eco.flowIn) annotation(
    Line(points = {{-6.4, -16}, {-5.9, -16}, {-5.9, -40}}, color = {0, 127, 255}));
  connect(ip_sh_1.flowOut, volumeNode10.Port[1]) annotation(
    Line(points = {{6.5, -40}, {6.5, -36}, {0, -36}, {0, -32}}, color = {0, 127, 255}));
  connect(volumeNode10.Port[2], ip_sh_2.flowIn) annotation(
    Line(points = {{0, -32.4}, {-25.5, -32.4}, {-25.5, -40.4}}, color = {0, 127, 255}));
  connect(ip_sh_2.flowOut, volumeNode22.Port[1]) annotation(
    Line(points = {{-33.5, -40}, {-33.5, -26}, {20, -26}, {20, 20}}, color = {0, 127, 255}));
  connect(volumeNode22.Port[2], checkValve.port_a) annotation(
    Line(points = {{20, 19.6}, {20, 27.2}, {-36, 27.2}}, color = {0, 127, 255}));
  connect(volumeNode22.Port[3], vent_CV.port_a) annotation(
    Line(points = {{20, 19.6}, {40, 19.6}, {40, 27.6}}, color = {0, 127, 255}));
  connect(simplePump4.port_b, volumeNode6.Port[1]) annotation(
    Line(points = {{50, -60}, {50, -70}, {40, -70}}, color = {0, 127, 255}));
  connect(constant7.y, limPID2.u_s) annotation(
    Line(points = {{-101, 48}, {-78, 48}}, color = {0, 0, 127}));
  connect(relativePressure.p_rel, limPID2.u_m) annotation(
    Line(points = {{-66, 21}, {-66, 36}}, color = {0, 0, 127}));
  connect(lp_sh_2.flowOut, volumeNode5.Port[1]) annotation(
    Line(points = {{66.5, -40}, {62, -40}, {62, -72}, {230, -72}, {230, -112}, {-10, -112}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[1], hp_sh_1.flowOut) annotation(
    Line(points = {{-100, -32.4}, {-100, -38.6}, {-93.5, -38.6}, {-93.5, -40.4}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[2], hp_sh_2.flowIn) annotation(
    Line(points = {{-100, -32.4}, {-125.5, -32.4}, {-125.5, -40.4}}, color = {0, 127, 255}));
  connect(hp_sh_2.flowOut, volumeNode27.Port[1]) annotation(
    Line(points = {{-133.5, -40}, {-133.5, -34}, {-156, -34}}, color = {0, 127, 255}));
  connect(volumeNode27.Port[2], hp_sh_3.flowIn) annotation(
    Line(points = {{-156, -34.4}, {-165.5, -34.4}, {-165.5, -40}}, color = {0, 127, 255}));
  connect(rh_1.flowOut, volumeNode24.Port[1]) annotation(
    Line(points = {{-113.5, -40}, {-113.5, -26}, {-120, -26}}, color = {0, 127, 255}));
  connect(rh_2.flowOut, volumeNode25.Port[1]) annotation(
    Line(points = {{-153.5, -40}, {-153.5, -14}, {-162, -14}}, color = {0, 127, 255}));
  connect(volumeNode25.Port[2], rh_3.flowIn) annotation(
    Line(points = {{-162, -14.4}, {-185.5, -14.4}, {-185.5, -40.4}}, color = {0, 127, 255}));
  connect(rh_3.flowOut, volumeNode23.Port[1]) annotation(
    Line(points = {{-193.5, -40}, {-193.5, -36}, {-210, -36}}, color = {0, 127, 255}));
  connect(volumeNode24.Port[2], rh_2.flowIn) annotation(
    Line(points = {{-120, -26.4}, {-145.5, -26.4}, {-145.5, -40}}, color = {0, 127, 255}));
  connect(volumeNode6.Port[2], ip_evo.flowIn) annotation(
    Line(points = {{40, -70.4}, {40, -36.8}, {34.5, -36.8}, {34.5, -40.4}}, color = {0, 127, 255}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{121, 44}, {128, 44}}, color = {0, 0, 127}));
  connect(pid.y, simplePump2.D_flow_in) annotation(
    Line(points = {{151, 44}, {156, 44}, {156, 58}, {170, 58}, {170, 48}}, color = {0, 0, 127}));
  connect(hp_drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-77, -12}, {-47, -12}, {-47, 6}, {-21, 6}, {-21, 12}, {140, 12}, {140, 32}}, color = {0, 0, 127}));
  connect(constant5.y, limPID1.u_s) annotation(
    Line(points = {{161, 80}, {177, 80}}, color = {0, 0, 127}));
  connect(ip_drum.waterLevel, limPID1.u_m) annotation(
    Line(points = {{23, -12}, {92, -12}, {92, 60}, {190, 60}, {190, 68}}, color = {0, 0, 127}));
  connect(limPID.y, cond_pump.m_flow_in) annotation(
    Line(points = {{255, 104}, {280, 104}, {280, -2}, {260, -2}}, color = {0, 0, 127}));
  connect(hp_sh_3.flowOut, volumeNode28.Port[1]) annotation(
    Line(points = {{-173.5, -40}, {-173.5, -30}, {-179.5, -30}}, color = {0, 127, 255}));
  connect(volumeNode28.Port[2], HP_Out) annotation(
    Line(points = {{-180, -30.4}, {-205, -30.4}, {-205, -10.4}, {-230, -10.4}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Port[1]) annotation(
    Line(points = {{-50, -60}, {-50, -70}, {-60, -70}}, color = {0, 127, 255}));
  connect(volumeNode.Port[2], hp_evo.flowIn) annotation(
    Line(points = {{-60, -70.4}, {-60, -38.4}, {-66, -38.4}, {-66, -40.4}}, color = {0, 127, 255}));
  connect(volumeNode23.Port[2], RH_Out) annotation(
    Line(points = {{-210, -36.4}, {-230, -36.4}}, color = {0, 127, 255}));
  connect(volumeNode21.Port[1], RH_In) annotation(
    Line(points = {{-106, 1.6}, {-142, 1.6}, {-142, 13.6}, {-230, 13.6}}, color = {0, 127, 255}));
  connect(checkValve.port_b, volumeNode21.Port[2]) annotation(
    Line(points = {{-56, 28}, {-106, 28}, {-106, 2}}, color = {0, 127, 255}));
  connect(volumeNode21.Port[3], rh_1.flowIn) annotation(
    Line(points = {{-106, 1.6}, {-106, -40.4}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_2, ip_drum.fedWater) annotation(
    Line(points = {{86, -60}, {86, -62}, {80, -62}, {80, -2}, {41, -2}, {41, -9}}, color = {0, 127, 255}));
  connect(simplePump5.port_b, volumeNode9.Port[1]) annotation(
    Line(points = {{186, 18}, {180, 18}, {180, -68}}, color = {0, 127, 255}));
  connect(limPID1.y, simplePump5.D_flow_in) annotation(
    Line(points = {{201, 80}, {207, 80}, {207, 46}, {195, 46}, {195, 28}}, color = {0, 0, 127}));
  connect(volumeNode5.Port[2], LP_Out) annotation(
    Line(points = {{-10, -112.4}, {-230, -112.4}, {-230, -110.4}}, color = {0, 127, 255}));
  connect(relativePressure.port_a, checkValve.port_b) annotation(
    Line(points = {{-76, 12}, {-86, 12}, {-86, 28}, {-56, 28}}, color = {0, 127, 255}));
  connect(relativePressure.port_b, checkValve.port_a) annotation(
    Line(points = {{-56, 12}, {-28, 12}, {-28, 28}, {-36, 28}}, color = {0, 127, 255}));
  annotation(
    Diagram(coordinateSystem(extent = {{-280, -120}, {280, 120}})));
end EMA_028_HRSG;
