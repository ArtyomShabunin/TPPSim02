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

  TPPSim02.HeatExchanger.GFHE2D evo( Din = 38.1e-3, Lpipe = 18.29, Tin_gas_start(displayUnit = "K") = 333.15, Tin_start(displayUnit = "K") = 373.15, Tout_gas_start(displayUnit = "K") = 333.15, Tout_start(displayUnit = "K") = 373.15, delta = 3.404e-3, delta_fin = 0.9906e-3, hfin = 15.88e-3, numberOfTubeSections = 2, s1 = 85.15e-3, s2 = 111.1e-3, sfin = 2.921e-3, z1 = 126, z2 = 16, zahod = 16) annotation(
    Placement(visible = true, transformation(origin = {-2, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.Pumps.DropLine pump(redeclare package Medium = Medium_F, Lpipe = 18.29) annotation(
    Placement(visible = true, transformation(origin = {12, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6, Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, Hw_start = 0.34, L = 16.2, delta = 80e-3, ps_start = 1e5, t_m_steam_start = 100 + 273.15, t_m_water_start = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {4, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 30, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {10, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary ambient(redeclare package Medium = Medium_G, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {72, -50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveIncompressible cv(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 50, dp_nominal(displayUnit = "Pa") = 1e6) annotation(
    Placement(visible = true, transformation(origin = {50, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D eco(Din = 38.1e-3, Lpiezo = 0, Lpipe = 18.29, Nv = 5, Tin_gas_start(displayUnit = "K") = 333.15, Tin_start(displayUnit = "K") = 333.15, Tout_gas_start(displayUnit = "K") = 333.15, Tout_start(displayUnit = "K") = 333.15, delta = 3.404e-3, delta_fin = 0.9906e-3, flowMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, flowMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, hfin = 15.88e-3, s1 = 89.39e-3, s2 = 111.1e-3, sfin = 2.421e-3, z1 = 120, z2 = 10, zahod = 1) annotation(
    Placement(visible = true, transformation(origin = {30, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D sh(Din = 38.1e-3,
                                   Lpiezo = 0,
                                   Lpipe = 18.29,
                                   Nv = 5,
                                   Tin_gas_start(displayUnit = "K") = 373.15,
                                   Tin_start(displayUnit = "K") = 373.15,
                                   Tout_gas_start(displayUnit = "K") = 373.15,
                                   Tout_start(displayUnit = "K") = 373.15,
                                   delta = 3.048e-3,
                                   delta_fin = 0.9906e-3,
                                   gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState,
                                   gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState,
                                   hfin = 12.7e-3,
                                   hin_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start),
                                   hout_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start),
                                   s1 = 89.39e-3,
                                   s2 = 111.1e-3,
                                   sfin = 5.412e-3,
                                   z1 = 120,
                                   z2 = 6,
                                   zahod = 1)  annotation(
    Placement(visible = true, transformation(origin = {-66, -50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
//  TPPSim02.Pipes.VolumeNode node(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start))  annotation(
//    Placement(visible = true, transformation(origin = {-38, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(drum.downStr, pump.port_a) annotation(
    Line(points = {{11, -19}, {11, -31}, {12, -31}, {12, -40}}, color = {0, 127, 255}));
  connect(pump.port_b, evo.flowIn) annotation(
    Line(points = {{12, -60}, {12, -64}, {8, -64}, {8, -32}, {2, -32}, {2, -40}}, color = {0, 127, 255}));
  connect(evo.flowOut, drum.upStr) annotation(
    Line(points = {{-6, -40}, {-6, -30}, {-3, -30}, {-3, -19}}, color = {0, 127, 255}));
  connect(cv.port_a, fw_in) annotation(
    Line(points = {{60, 10}, {100, 10}}, color = {0, 127, 255}));
  connect(pid.y, cv.opening) annotation(
    Line(points = {{22, 50}, {50, 50}, {50, 18}}, color = {0, 0, 127}));
  connect(drum.waterLevel, pid.u_m) annotation(
    Line(points = {{-6, -4}, {-14, -4}, {-14, 24}, {10, 24}, {10, 38}}, color = {0, 0, 127}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-38, 50}, {-2, 50}}, color = {0, 0, 127}));
  connect(evo.gasOut, eco.gasIn) annotation(
    Line(points = {{4, -50}, {24, -50}}, color = {0, 127, 255}));
  connect(eco.gasOut, ambient.ports[1]) annotation(
    Line(points = {{36, -50}, {62, -50}}, color = {0, 127, 255}));
  connect(cv.port_b, eco.flowIn) annotation(
    Line(points = {{40, 10}, {34, 10}, {34, -40}}, color = {0, 127, 255}));
  connect(eco.flowOut, drum.fedWater) annotation(
    Line(points = {{26, -40}, {26, 4}, {12, 4}, {12, 0}}, color = {0, 127, 255}));
  connect(evo.gasIn, sh.gasOut) annotation(
    Line(points = {{-8, -50}, {-61, -50}}, color = {0, 127, 255}));
  connect(sh.gasIn, gas_in) annotation(
    Line(points = {{-71, -50}, {-100, -50}}, color = {0, 127, 255}));
  connect(sh.flowOut, steam_out) annotation(
    Line(points = {{-70, -40}, {-70, 10}, {-100, 10}}, color = {0, 127, 255}));
  connect(drum.steam, sh.flowIn) annotation(
    Line(points = {{-2, 0}, {-62, 0}, {-62, -40}}, color = {0, 127, 255}));
end OnePHorizontalHRSG;
