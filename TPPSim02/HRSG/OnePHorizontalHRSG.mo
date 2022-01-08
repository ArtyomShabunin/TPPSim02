within TPPSim02.HRSG;

model OnePHorizontalHRSG
  extends TPPSim02.HRSG.Icons.Icon1pHorizontalHRSG;
  outer ThermoPower.System system;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  Modelica.Fluid.Interfaces.FluidPort_a fw_in(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {100, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {140, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b steam_out(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-100, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-180, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a gas_in(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-100, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-300, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  //  TPPSim02.HeatExchanger.GFHE1D evo(flowSide(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc),
  //                                    Din = 38.1e-3,
  //                                    Lpiezo = 18.29,
  //                                    Lpipe = 18.29,
  //                                    Nv = 5,
  //                                    Tin_gas_start(displayUnit = "K") = 333.15,
  //                                    Tin_start(displayUnit = "K") = 363.15,
  //                                    Tout_gas_start(displayUnit = "K") = 333.15,
  //                                    Tout_start(displayUnit = "K") = 363.15,
  //                                    delta = 3.404e-3,
  //                                    delta_fin = 0.9906e-3,
  //                                    gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,
  //                                    gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState,
  //                                    hfin = 15.88e-3,
  //                                    pin_start = system.p_start + system.g * 1000 * 18.29,
  //                                    s1 = 85.15e-3,
  //                                    s2 = 111.1e-3,
  //                                    sfin = 2.921e-3,
  //                                    z1 = 126,
  //                                    z2 = 16,
  //                                    zahod = 16) annotation(
  //    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  
  TPPSim02.HeatExchanger.GFHE1D evo(redeclare function alpha_func = TPPSim02.Thermal.Alpha.alfaEvoCirc, Din = 38.1e-3, Lpiezo = 18.29, Lpipe = 18.29, Nv = 16, Tin_gas_start = 60 + 273.15, Tout_gas_start = 60 + 273.15, delta = 3.404e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), m_flow_start = 1000, pin_start = 1e5 + 18.29 * 1000 * 9.8, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
    
  TPPSim.Pumps.simplePump simplePump(setD_flow = 1000)  annotation(
    Placement(visible = true, transformation(origin = {0, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  TPPSim02.Pipes.VolumeNode volumeNode(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(system.p_start), p_start = 2e5)  annotation(
    Placement(visible = true, transformation(origin = {-10, -80}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3) annotation(
    Placement(visible = true, transformation(origin = {-24, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-78, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 1, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {-18, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary ambient(redeclare package Medium = Medium_G, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {72, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveIncompressible cv(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 50, dp_nominal(displayUnit = "Pa") = 1e6) annotation(
    Placement(visible = true, transformation(origin = {40, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D eco(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 333.15, Tin_start(displayUnit = "K") = 333.15, Tout_gas_start(displayUnit = "K") = 333.15, Tout_start(displayUnit = "K") = 333.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {22, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D sh(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 373.15, Tin_start(displayUnit = "K") , Tout_gas_start(displayUnit = "K") = 373.15, Tout_start(displayUnit = "K") , delta = 3.048e-3, delta_fin = 0.9906e-3, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 12.7e-3, hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), s1 = 89.39e-3, s2 = 111.1e-3, sfin = 5.412e-3, z1 = 120, z2 = 6, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {-66, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  Modelica.Fluid.Machines.PrescribedPump FWP(redeclare function flowCharacteristic = Modelica.Fluid.Machines.BaseClasses.PumpCharacteristics.quadraticFlow(V_flow_nominal = {0, 0.25, 0.5}, head_nominal = {1500, 1000, 0}), redeclare package Medium = Medium_F, N_const = 1200, N_nominal = 1200, T_start = 50 + 273.15, V(displayUnit = "l") = 0.05, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, massDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, nParallel = 1, p_b_start = 1e5, use_N_in = true) annotation(
    Placement(visible = true, transformation(origin = {70, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {38, 66}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID limPID(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 1, limitsAtInit = true, yMax = 1200, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {70, 82}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1e6) annotation(
    Placement(visible = true, transformation(origin = {-4, 84}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode1 annotation(
    Placement(visible = true, transformation(origin = {30, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
equation
  connect(pid.y, cv.opening) annotation(
    Line(points = {{-7, 50}, {40, 50}, {40, 18}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-35, -4}, {-43, -4}, {-43, 24}, {-19, 24}, {-19, 38}}, color = {0, 0, 127}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-67, 50}, {-31, 50}}, color = {0, 0, 127}));
  connect(eco.gasOut, ambient.ports[1]) annotation(
    Line(points = {{27, -50}, {62, -50}}, color = {0, 127, 255}));
  connect(eco.flowOut, drum.fedWater) annotation(
    Line(points = {{18, -40}, {18, 4}, {-16, 4}, {-16, 0}}, color = {0, 127, 255}));
  connect(sh.gasIn, gas_in) annotation(
    Line(points = {{-71, -50}, {-100, -50}}, color = {0, 127, 255}));
  connect(sh.flowOut, steam_out) annotation(
    Line(points = {{-70, -40}, {-70, 10}, {-100, 10}}, color = {0, 127, 255}));
  connect(drum.steam, sh.flowIn) annotation(
    Line(points = {{-31, -1}, {-62, -1}, {-62, -40}}, color = {0, 127, 255}));
  connect(relativePressure.port_a, cv.port_a) annotation(
    Line(points = {{48, 66}, {50, 66}, {50, 10}}, color = {0, 127, 255}));
  connect(relativePressure.port_b, cv.port_b) annotation(
    Line(points = {{28, 66}, {18, 66}, {18, 10}, {30, 10}}, color = {0, 127, 255}));
  connect(constant1.y, limPID.u_s) annotation(
    Line(points = {{8, 84}, {58, 84}, {58, 82}}, color = {0, 0, 127}));
  connect(relativePressure.p_rel, limPID.u_m) annotation(
    Line(points = {{38, 58}, {38, 54}, {70, 54}, {70, 70}}, color = {0, 0, 127}));
  connect(limPID.y, FWP.N_in) annotation(
    Line(points = {{82, 82}, {88, 82}, {88, 32}, {70, 32}, {70, 20}}, color = {0, 0, 127}));
  connect(FWP.port_a, fw_in) annotation(
    Line(points = {{80, 10}, {100, 10}}, color = {0, 127, 255}));
  connect(FWP.port_b, cv.port_a) annotation(
    Line(points = {{60, 10}, {50, 10}}, color = {0, 127, 255}));
  connect(sh.gasOut, evo.gasIn) annotation(
    Line(points = {{-60, -50}, {-36, -50}}, color = {0, 127, 255}));
  connect(evo.gasOut, eco.gasIn) annotation(
    Line(points = {{-24, -50}, {16, -50}}, color = {0, 127, 255}));
  connect(simplePump.port_b, volumeNode.Input) annotation(
    Line(points = {{0, -60}, {0, -80}}, color = {0, 127, 255}));
  connect(drum.downStr, simplePump.port_a) annotation(
    Line(points = {{-16, -18}, {-16, -26}, {0, -26}, {0, -40}}, color = {0, 127, 255}));
  connect(volumeNode.Output, evo.flowIn) annotation(
    Line(points = {{-20, -80}, {-20, -40}, {-26, -40}}, color = {0, 127, 255}));
  connect(evo.flowOut, drum.upStr) annotation(
    Line(points = {{-34, -40}, {-34, -18}, {-30, -18}}, color = {0, 127, 255}));
  connect(volumeNode1.Output, eco.flowIn) annotation(
    Line(points = {{30, -30}, {30, -40}, {26, -40}}, color = {0, 127, 255}));
  connect(cv.port_b, volumeNode1.Input) annotation(
    Line(points = {{30, 10}, {30, -10}}, color = {0, 127, 255}));
end OnePHorizontalHRSG;
