within TPPSim02.HRSG.EMA028HRSG;

model EMA028HRSG
  extends TPPSim02.HRSG.Icons.Icon3pHorizontalHRSG;
  outer ThermoPower.System system;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
    //Интерфейс
  Modelica.Fluid.Interfaces.FluidPort_a gasIn(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-250, -52}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, -130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b HP_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, 8}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, 146}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a RH_In(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b RH_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, 110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b LP_Out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-230, -92}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {50, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum hp_drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-66, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {250, -32}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T cond_pump(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, use_m_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {250, 8}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-70, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_eco(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-10, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-90, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.FixFlow circHP(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {-50, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {-60, -52}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode gas_node(T_start = 100 + 273.15, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {190, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode gas_duct(gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState) annotation(
    Placement(visible = true, transformation(origin = {220, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode2(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-6, 2}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 2.424e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {110, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.815e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {130, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D cond_he(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 60 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 60 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.728e-3, z1 = 120, z2 = 12, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {170, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum lp_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 16e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {134, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode3(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {138, -46}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pumps.FixFlow circLP(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {150, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pumps.FixFlow hpFixFlow(setD_flow = 0, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {170, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode4(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.h_pT(system.p_start, 60 + 273.15), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {230, -12}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode5(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-10, -94}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary flash_tank(redeclare package Medium = Medium_F, p = 1e5, nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {210, -82}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pumps.FixFlow blowdownHP(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {90, -88}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_evo(Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 10, Tin_gas_start = 100 + 273.15, Tin_start = 100 + 273.15, Tout_gas_start = 100 + 273.15, Tout_start = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = system.p_start + 960 * system.g * (18.29 + 0.34), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.156e-3, z1 = 120, z2 = 10, zahod = 10) annotation(
    Placement(visible = true, transformation(origin = {30, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_1(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.195e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {10, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum ip_drum(Din = 1.4, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 14.2, delta = 30e-3, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {34, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pumps.FixFlow circIP(setD_flow = 1000) annotation(
    Placement(visible = true, transformation(origin = {50, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode6(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2, p_start = system.p_start + 960 * system.g * (18.29 + 0.34)) annotation(
    Placement(visible = true, transformation(origin = {40, -52}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pumps.FixFlow ipFixFlow(setD_flow = 0, use_D_flow_in = true) annotation(
    Placement(visible = true, transformation(origin = {196, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.ParallelGFHE1D parallelECO(Din_1 = 38.1e-3, Din_2 = 38.1e-3, Lpiezo_1 = 0, Lpiezo_2 = 18.29, Lpipe_1 = 18.29, Lpipe_2 = 18.29, Nv_1 = 3, Nv_2 = 3, Tin_gas_start_1 = 100 + 273.15, Tin_gas_start_2 = 100 + 273.15, Tin_start_1 = 100 + 273.15, Tin_start_2 = 100 + 273.15, Tout_gas_start_1 = 100 + 273.15, Tout_gas_start_2 = 100 + 273.15, Tout_start_1 = 100 + 273.15, Tout_start_2 = 100 + 273.15, delta_1 = 3.404e-3, delta_2 = 2.108e-3, delta_fin_1 = 0.9906e-3, delta_fin_2 = 0.9906e-3, flowMassDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMassDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_1 = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics_2 = TPPSim02.Choices.Dynamics.SteadyState, hfin_1 = 15.88e-3, hfin_2 = 15.88e-3, hin_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hin_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_1 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start_2 = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), s1_1 = 89.93e-3, s1_2 = 85.05e-3, s2_1 = 111.1e-3, s2_2 = 111.1e-3, sfin_1 = 2.67e-3, sfin_2 = 3.156e-3, z1_1 = 98, z1_2 = 22, z2_1 = 10, z2_2 = 8, zahod_1 = 1, zahod_2 = 1) annotation(
    Placement(visible = true, transformation(origin = {90, -32}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode8(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 3) annotation(
    Placement(visible = true, transformation(origin = {94, 24}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pipes.VolumeNode volumeNode9(flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {180, -50}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  TPPSim02.Pumps.FixFlow blowdownIP(setD_flow = 1, use_D_flow_in = false) annotation(
    Placement(visible = true, transformation(origin = {80, -68}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D lp_sh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 88.29e-3, s2 = 111.1e-3, sfin = 10.25e-3, z1 = 122, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {70, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D ip_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 3, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.108e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 9.017e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode10(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {0, -14}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode11(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {74, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_1(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.123e-3, z1 = 120, z2 = 1, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-110, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode21( h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start),nPorts = 3)  annotation(
    Placement(visible = true, transformation(origin = {-106, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode22(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {20, 38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode23(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-210, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible ip_cv(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.OpPoint, dp_nominal(displayUnit = "Pa") = 0.5e5, filteredOpening = true, m_flow_nominal = 17.83, p_nominal = 71e5, rho_nominal = 11.44, riseTime = 300) annotation(
    Placement(visible = true, transformation(origin = {-50, 68}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D hp_sh_2(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-130, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0))); 
  TPPSim02.HeatExchanger.GFHE1D hp_sh_3(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 4.775e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.48e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-170, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D rh_2(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 4.677e-3, z1 = 120, z2 = 3, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-150, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));  
  TPPSim02.HeatExchanger.GFHE1D rh_3(Din = 50.8e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 100 + 273.15, Tin_start(displayUnit = "K") = 100 + 273.15, Tout_gas_start(displayUnit = "K") = 100 + 273.15, Tout_start(displayUnit = "K") = 100 + 273.15, delta = 2.667e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 3.235e-3, z1 = 120, z2 = 2, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-190, -32}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode24(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-120, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode25(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-162, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode26(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-100, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode27(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-156, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode28(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2) annotation(
    Placement(visible = true, transformation(origin = {-180, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.RelativePressure dp_ip_cv(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-66, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ThermoPower.PowerPlants.Buses.Actuators actuators annotation(
    Placement(visible = true, transformation(origin = {-190, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-250, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ThermoPower.PowerPlants.Buses.Sensors sensors annotation(
    Placement(visible = true, transformation(origin = {-150, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-208, 200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b HP_FW(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {94, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {60, -200}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(hp_drum.upStr, hp_evo.flowOut) annotation(
    Line(points = {{-73, -9}, {-73, -16}, {-73.5, -16}, {-73.5, -22}}, color = {0, 127, 255}));
  connect(hp_drum.downStr, circHP.port_a) annotation(
    Line(points = {{-59, -9}, {-59, -14}, {-50, -14}, {-50, -22}}, color = {0, 127, 255}));
  connect(hp_evo.gasIn, hp_sh_1.gasOut) annotation(
    Line(points = {{-74.96, -32}, {-83.96, -32}}, color = {0, 127, 255}));
  connect(hp_drum.steam, hp_sh_1.flowIn) annotation(
    Line(points = {{-73, 9}, {-73, 13}, {-85.5, 13}, {-85.5, -22}}, color = {0, 127, 255}));
  connect(gas_node.Output, gas_duct.Input) annotation(
    Line(points = {{200, -32.2}, {210, -32.2}}, color = {0, 127, 255}));
  connect(gas_duct.Output, gas_out.ports[1]) annotation(
    Line(points = {{230, -32}, {240, -32}}, color = {0, 127, 255}));
  connect(hp_eco.flowOut, hp_drum.fedWater) annotation(
    Line(points = {{-13.7, -22}, {-13.7, 16}, {-59.2, 16}, {-59.2, 9}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasOut, lp_evo.gasIn) annotation(
    Line(points = {{115.96, -32}, {124.96, -32}}, color = {0, 127, 255}));
  connect(lp_evo.gasOut, cond_he.gasIn) annotation(
    Line(points = {{135.96, -32}, {164.96, -32}}, color = {0, 127, 255}));
  connect(cond_he.gasOut, gas_node.Input) annotation(
    Line(points = {{175.96, -32}, {179.96, -32}}, color = {0, 127, 255}));
  connect(lp_drum.downStr, circLP.port_a) annotation(
    Line(points = {{141, -9}, {141, -13}, {150, -13}, {150, -22}}, color = {0, 127, 255}));
  connect(lp_drum.upStr, lp_evo.flowOut) annotation(
    Line(points = {{127, -9}, {127, -17}, {126.5, -17}, {126.5, -22}}, color = {0, 127, 255}));
  connect(lp_drum.steam, lp_sh_1.flowIn) annotation(
    Line(points = {{127, 9}, {127, 21}, {114.5, 21}, {114.5, -22}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, hpFixFlow.port_a) annotation(
    Line(points = {{144.4, -5}, {215.6, -5}, {215.6, 56}, {180.4, 56}}, color = {0, 127, 255}));
  connect(cond_he.flowOut, lp_drum.fedWater) annotation(
    Line(points = {{166.3, -22}, {166.3, 9}, {140.8, 9}}, color = {0, 127, 255}));
  connect(blowdownHP.port_b, flash_tank.ports[1]) annotation(
    Line(points = {{100, -88}, {150, -88}, {150, -82}, {200, -82}}));
  connect(ip_evo.gasIn, ip_sh_1.gasOut) annotation(
    Line(points = {{25.04, -32}, {16.04, -32}}, color = {0, 127, 255}));
  connect(ip_sh_1.gasIn, hp_eco.gasOut) annotation(
    Line(points = {{5.04, -32}, {-3.96, -32}}, color = {0, 127, 255}));
  connect(ip_evo.flowOut, ip_drum.upStr) annotation(
    Line(points = {{26.3, -22}, {26.3, -14}, {26.8, -14}, {26.8, -9}}, color = {0, 127, 255}));
  connect(circIP.port_a, ip_drum.downStr) annotation(
    Line(points = {{50, -22}, {50, -12}, {41, -12}, {41, -9}}, color = {0, 127, 255}));
  connect(ip_drum.steam, ip_sh_1.flowIn) annotation(
    Line(points = {{27, 9}, {27, 22}, {14.5, 22}, {14.5, -22}}, color = {0, 127, 255}));
  connect(blowdownHP.port_a, hp_drum.HPFW) annotation(
    Line(points = {{80, -88}, {4, -88}, {4, -5}, {-56, -5}}, color = {0, 127, 255}));
  connect(lp_drum.HPFW, ipFixFlow.port_a) annotation(
    Line(points = {{144.4, -5}, {215.6, -5}, {215.6, 36}, {206.4, 36}}, color = {0, 127, 255}));
  connect(lp_sh_1.gasIn, parallelECO.gasOut) annotation(
    Line(points = {{105.04, -32}, {95.04, -32}}, color = {0, 127, 255}));
  connect(ip_drum.HPFW, blowdownIP.port_a) annotation(
    Line(points = {{44.4, -5}, {59.2, -5}, {59.2, -68}, {70, -68}}, color = {0, 127, 255}));
  connect(blowdownIP.port_b, flash_tank.ports[2]) annotation(
    Line(points = {{90, -68}, {186, -68}, {186, -82}, {200, -82}}, color = {0, 127, 255}));
  connect(hp_eco.gasIn, ip_sh_2.gasOut) annotation(
    Line(points = {{-14.96, -32}, {-23.96, -32}}, color = {0, 127, 255}));
  connect(ip_sh_2.gasIn, hp_evo.gasOut) annotation(
    Line(points = {{-34.96, -32}, {-63.96, -32}}, color = {0, 127, 255}));
  connect(parallelECO.gasIn, lp_sh_2.gasOut) annotation(
    Line(points = {{84.6, -32}, {75.6, -32}}, color = {0, 127, 255}));
  connect(lp_sh_2.gasIn, ip_evo.gasOut) annotation(
    Line(points = {{65.04, -32}, {36.04, -32}}, color = {0, 127, 255}));
  connect(hp_sh_1.gasIn, rh_1.gasOut) annotation(
    Line(points = {{-94.96, -32}, {-103.96, -32}}, color = {0, 127, 255}));
  connect(rh_1.gasIn, hp_sh_2.gasOut) annotation(
    Line(points = {{-114.96, -32}, {-123.96, -32}}, color = {0, 127, 255}));
  connect(hp_sh_2.gasIn, rh_2.gasOut) annotation(
    Line(points = {{-134.96, -32}, {-143.96, -32}}, color = {0, 127, 255}));
  connect(rh_2.gasIn, hp_sh_3.gasOut) annotation(
    Line(points = {{-154.96, -32}, {-163.96, -32}}, color = {0, 127, 255}));
  connect(hp_sh_3.gasIn, rh_3.gasOut) annotation(
    Line(points = {{-174.96, -32}, {-183.96, -32}}, color = {0, 127, 255}));
  connect(cond_pump.ports[1], volumeNode4.Port[1]) annotation(
    Line(points = {{240, 8}, {230, 8}, {230, -12}}, color = {0, 127, 255}));
  connect(volumeNode4.Port[2], cond_he.flowIn) annotation(
    Line(points = {{229.6, -12}, {174.1, -12}, {174.1, -22}}, color = {0, 127, 255}));
  connect(circLP.port_b, volumeNode3.Port[1]) annotation(
    Line(points = {{150, -42}, {150, -47}, {138, -47}, {138, -46}}, color = {0, 127, 255}));
  connect(volumeNode3.Port[2], lp_evo.flowIn) annotation(
    Line(points = {{138, -46.4}, {138, -20.8}, {134.5, -20.8}, {134.5, -22.4}}, color = {0, 127, 255}));
  connect(lp_sh_1.flowOut, volumeNode11.Port[1]) annotation(
    Line(points = {{106.3, -22}, {106.3, -12}, {73.8, -12}}, color = {0, 127, 255}));
  connect(volumeNode11.Port[2], lp_sh_2.flowIn) annotation(
    Line(points = {{74, -12.4}, {74.5, -12.4}, {74.5, -22.4}}, color = {0, 127, 255}));
  connect(volumeNode9.Port[2], parallelECO.flowIn_2) annotation(
    Line(points = {{179.6, -50}, {93.6, -50}, {93.6, -42}}, color = {0, 127, 255}));
  connect(hpFixFlow.port_b, volumeNode8.Port[1]) annotation(
    Line(points = {{160, 56}, {161, 56}, {161, 24}, {94, 24}}, color = {0, 127, 255}));
  connect(volumeNode8.Port[2], parallelECO.flowIn_1) annotation(
    Line(points = {{94, 24}, {94, -13}, {93.6, -13}, {93.6, -22}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_1, volumeNode2.Port[1]) annotation(
    Line(points = {{86, -22}, {86, 24}, {-6, 24}, {-6, 2}}, color = {0, 127, 255}));
  connect(volumeNode2.Port[2], hp_eco.flowIn) annotation(
    Line(points = {{-6.4, 2}, {-5.9, 2}, {-5.9, -22}}, color = {0, 127, 255}));
  connect(ip_sh_1.flowOut, volumeNode10.Port[1]) annotation(
    Line(points = {{6.3, -22}, {6.3, -18}, {-0.2, -18}, {-0.2, -14}}, color = {0, 127, 255}));
  connect(volumeNode10.Port[2], ip_sh_2.flowIn) annotation(
    Line(points = {{0, -14.4}, {-25.5, -14.4}, {-25.5, -22.4}}, color = {0, 127, 255}));
  connect(ip_sh_2.flowOut, volumeNode22.Port[1]) annotation(
    Line(points = {{-33.7, -22}, {-33.7, -8}, {19.8, -8}, {19.8, 38}}, color = {0, 127, 255}));
  connect(volumeNode22.Port[2], ip_cv.port_a) annotation(
    Line(points = {{20, 37.6}, {20, 68}, {-40, 68}}, color = {0, 127, 255}));
  connect(circIP.port_b, volumeNode6.Port[1]) annotation(
    Line(points = {{50, -42}, {50, -52}, {40, -52}}, color = {0, 127, 255}));
  connect(lp_sh_2.flowOut, volumeNode5.Port[1]) annotation(
    Line(points = {{66.3, -22}, {61.8, -22}, {61.8, -54}, {229.8, -54}, {229.8, -94}, {-10.2, -94}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[1], hp_sh_1.flowOut) annotation(
    Line(points = {{-100, -14.4}, {-100, -20.6}, {-93.5, -20.6}, {-93.5, -22.4}}, color = {0, 127, 255}));
  connect(volumeNode26.Port[2], hp_sh_2.flowIn) annotation(
    Line(points = {{-100, -14.4}, {-125.5, -14.4}, {-125.5, -22.4}}, color = {0, 127, 255}));
  connect(hp_sh_2.flowOut, volumeNode27.Port[1]) annotation(
    Line(points = {{-133.7, -22}, {-133.7, -16}, {-156.2, -16}}, color = {0, 127, 255}));
  connect(volumeNode27.Port[2], hp_sh_3.flowIn) annotation(
    Line(points = {{-156, -16.4}, {-165.5, -16.4}, {-165.5, -22}}, color = {0, 127, 255}));
  connect(rh_1.flowOut, volumeNode24.Port[1]) annotation(
    Line(points = {{-113.7, -22}, {-113.7, -8}, {-120.2, -8}}, color = {0, 127, 255}));
  connect(rh_2.flowOut, volumeNode25.Port[1]) annotation(
    Line(points = {{-153.7, -22}, {-153.7, 4}, {-162.2, 4}}, color = {0, 127, 255}));
  connect(volumeNode25.Port[2], rh_3.flowIn) annotation(
    Line(points = {{-162, 3.6}, {-185.5, 3.6}, {-185.5, -22.4}}, color = {0, 127, 255}));
  connect(rh_3.flowOut, volumeNode23.Port[1]) annotation(
    Line(points = {{-193.7, -22}, {-193.7, -18}, {-210.2, -18}}, color = {0, 127, 255}));
  connect(volumeNode24.Port[2], rh_2.flowIn) annotation(
    Line(points = {{-120, -8.4}, {-145.5, -8.4}, {-145.5, -22}}, color = {0, 127, 255}));
  connect(volumeNode6.Port[2], ip_evo.flowIn) annotation(
    Line(points = {{40, -52.4}, {40, -18.8}, {34.5, -18.8}, {34.5, -22.4}}, color = {0, 127, 255}));
  connect(hp_sh_3.flowOut, volumeNode28.Port[1]) annotation(
    Line(points = {{-173.7, -22}, {-173.7, -12}, {-179.7, -12}}, color = {0, 127, 255}));
  connect(volumeNode28.Port[2], HP_Out) annotation(
    Line(points = {{-180, -12.4}, {-205, -12.4}, {-205, 7.6}, {-230, 7.6}}, color = {0, 127, 255}));
  connect(circHP.port_b, volumeNode.Port[1]) annotation(
    Line(points = {{-50, -42}, {-50, -52}, {-60, -52}}, color = {0, 127, 255}));
  connect(volumeNode.Port[2], hp_evo.flowIn) annotation(
    Line(points = {{-60, -52.4}, {-60, -20.4}, {-66, -20.4}, {-66, -22.4}}, color = {0, 127, 255}));
  connect(volumeNode23.Port[2], RH_Out) annotation(
    Line(points = {{-210, -18.4}, {-230, -18.4}}, color = {0, 127, 255}));
  connect(volumeNode21.Port[1], RH_In) annotation(
    Line(points = {{-106, 19.6}, {-142, 19.6}, {-142, 31.6}, {-230, 31.6}}, color = {0, 127, 255}));
  connect(ip_cv.port_b, volumeNode21.Port[2]) annotation(
    Line(points = {{-60, 68}, {-106, 68}, {-106, 20}}, color = {0, 127, 255}));
  connect(volumeNode21.Port[3], rh_1.flowIn) annotation(
    Line(points = {{-106, 19.6}, {-106, -22.4}}, color = {0, 127, 255}));
  connect(parallelECO.flowOut_2, ip_drum.fedWater) annotation(
    Line(points = {{86, -42}, {86, -44}, {80, -44}, {80, 16}, {41, 16}, {41, 9}}, color = {0, 127, 255}));
  connect(ipFixFlow.port_b, volumeNode9.Port[1]) annotation(
    Line(points = {{186, 36}, {180, 36}, {180, -50}}, color = {0, 127, 255}));
  connect(volumeNode5.Port[2], LP_Out) annotation(
    Line(points = {{-10, -94.4}, {-230, -94.4}, {-230, -92.4}}, color = {0, 127, 255}));
  connect(dp_ip_cv.port_a, ip_cv.port_b) annotation(
    Line(points = {{-76, 30}, {-86, 30}, {-86, 68}, {-60, 68}}, color = {0, 127, 255}));
  connect(dp_ip_cv.port_b, ip_cv.port_a) annotation(
    Line(points = {{-56, 30}, {-28, 30}, {-28, 68}, {-40, 68}}, color = {0, 127, 255}));
  connect(rh_3.gasIn, gasIn) annotation(
    Line(points = {{-194.96, -32}, {-218.96, -32}, {-218.96, -52}, {-250.96, -52}}, color = {0, 127, 255}));
  connect(hp_drum.waterLevel, sensors.hp_level) annotation(
    Line(points = {{-77, 6}, {-123, 6}, {-123, 50}, {-150, 50}, {-150, 90}}, color = {0, 0, 127}));
  connect(hpFixFlow.D_flow_in, actuators.hp_fw_flow) annotation(
    Line(points = {{170, 66}, {170, 78}, {60, 78}, {60, 44}, {-190, 44}, {-190, 90}}, color = {0, 0, 127}));
  connect(ip_drum.waterLevel, sensors.ip_level) annotation(
    Line(points = {{23, 6}, {5, 6}, {5, 50}, {-150, 50}, {-150, 90}}, color = {0, 0, 127}));
  connect(actuators.ip_fw_flow, ipFixFlow.D_flow_in) annotation(
    Line(points = {{-190, 90}, {-190, 44}, {60, 44}, {60, 78}, {196, 78}, {196, 46}}, color = {0, 0, 127}));
  connect(lp_drum.waterLevel, sensors.lp_level) annotation(
    Line(points = {{123, 6}, {107, 6}, {107, 50}, {-150, 50}, {-150, 90}}, color = {0, 0, 127}));
  connect(cond_pump.m_flow_in, actuators.cond_flow) annotation(
    Line(points = {{260, 16}, {270, 16}, {270, 78}, {60, 78}, {60, 44}, {-190, 44}, {-190, 90}}, color = {0, 0, 127}));
  connect(ip_cv.opening, actuators.ip_cv_pos) annotation(
    Line(points = {{-50, 76}, {-50, 84}, {-130, 84}, {-130, 44}, {-190, 44}, {-190, 90}}, color = {0, 0, 127}));
  connect(dp_ip_cv.p_rel, sensors.ip_cv_dp) annotation(
    Line(points = {{-66, 39}, {-66, 49}, {-150, 49}, {-150, 90}}, color = {0, 0, 127}));
  connect(HP_FW, volumeNode8.Port[3]) annotation(
    Line(points = {{94, 100}, {94, 24}}));
  annotation(
    Diagram(coordinateSystem(extent = {{-280, -100}, {280, 100}})));
end EMA028HRSG;
