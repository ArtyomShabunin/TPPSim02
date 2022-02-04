within TPPSim02.HRSG.EMA028HRSG.Tests;

model EMA028HRSG_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  TPPSim02.HRSG.EMA028HRSG.EMA028HRSG hrsg annotation(
    Placement(visible = true, transformation(origin = {40, -20}, extent = {{-30, -20}, {30, 20}}, rotation = 0)));
  TPPSim.Gas_turbine.combitable_startupGT GT(redeclare package Medium = Medium_G, fileName = "C:/Users/ASShabunin/TPPSim/Gas_turbine/Tests/TEC_16_GT_2.txt") annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible HP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 600, dp_nominal = 9e+06, m_flow_start = system.m_flow_small) annotation(
    Placement(visible = true, transformation(origin = {-82, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible IP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 1800, dp_nominal(displayUnit = "Pa") = 3e+06, m_flow_start = system.m_flow_small, p_nominal = 60e5) annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system(m_flow_small = 1e-1) annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_ph steam_out(redeclare package Medium = Medium_F, h = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 2, p = system.p_start) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HRSG.EMA028HRSG.Controller controller annotation(
    Placement(visible = true, transformation(origin = {50, 54}, extent = {{-10, -6}, {10, 6}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-56, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible LP_RS(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 1800, dp_nominal(displayUnit = "Pa") = 3e+06, m_flow_start = system.m_flow_small, p_nominal = 60e5) annotation(
    Placement(visible = true, transformation(origin = {10, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.Pipes.HeatingNodesChannel pipe1(numberOfVolumes = 3)  annotation(
    Placement(visible = true, transformation(origin = {-8, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode24(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 3) annotation(
    Placement(visible = true, transformation(origin = {-58, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveIncompressible desupValve(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 5, dp_nominal(displayUnit = "Pa") = 1e6)  annotation(
    Placement(visible = true, transformation(origin = {10, -70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.TemperatureTwoPort Tcoldrh(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-38, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = -1)  annotation(
    Placement(visible = true, transformation(origin = {-60, -120}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID pid(Ti = 10, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 0.1, limitsAtInit = true, yMax = 1, yMin = 0)  annotation(
    Placement(visible = true, transformation(origin = {-86, -90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = -1 * (300 + 273.15))  annotation(
    Placement(visible = true, transformation(origin = {-130, -90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(GT.flowOut, hrsg.gasIn) annotation(
    Line(points = {{-80, -50}, {-30, -50}, {-30, -33}, {10, -33}}, color = {0, 127, 255}));
  connect(IP_RS.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-40, 10}, {-80, 10}}, color = {0, 127, 255}));
  connect(hrsg.RH_Out, IP_RS.port_a) annotation(
    Line(points = {{10, -9}, {-10, -9}, {-10, 10}, {-20, 10}}, color = {0, 127, 255}));
  connect(hrsg.HP_Out, HP_RS.port_a) annotation(
    Line(points = {{10, -5}, {-92, -5}, {-92, -20}}, color = {0, 127, 255}));
  connect(constant1.y, IP_RS.opening) annotation(
    Line(points = {{-66, 50}, {-76, 50}, {-76, 36}, {-30, 36}, {-30, 18}}, color = {0, 0, 127}));
  connect(constant1.y, HP_RS.opening) annotation(
    Line(points = {{-66, 50}, {-90, 50}, {-90, -12}, {-82, -12}}, color = {0, 0, 127}));
  connect(hrsg.LP_Out, LP_RS.port_a) annotation(
    Line(points = {{45, 0}, {34, 0}, {34, 30}, {20, 30}}, color = {0, 127, 255}));
  connect(LP_RS.port_b, steam_out.ports[2]) annotation(
    Line(points = {{0, 30}, {-60, 30}, {-60, 10}, {-80, 10}}, color = {0, 127, 255}));
  connect(constant1.y, LP_RS.opening) annotation(
    Line(points = {{-66, 50}, {-72, 50}, {-72, 68}, {10, 68}, {10, 38}}, color = {0, 0, 127}));
  connect(hrsg.sensors, controller.sensors) annotation(
    Line(points = {{19, 0}, {19, 6}, {52, 6}, {52, 48}}, color = {255, 170, 213}, thickness = 0.5));
  connect(hrsg.actuators, controller.actuators) annotation(
    Line(points = {{15, 0}, {15, 10}, {48, 10}, {48, 48}}, color = {213, 255, 170}, thickness = 0.5));
  connect(pipe1.Output, hrsg.RH_In) annotation(
    Line(points = {{2, -20}, {2, -13}, {10, -13}}, color = {0, 127, 255}));
  connect(HP_RS.port_b, volumeNode24.Port[1]) annotation(
    Line(points = {{-72, -20}, {-58, -20}}, color = {0, 127, 255}));
  connect(hrsg.HP_FW, desupValve.port_a) annotation(
    Line(points = {{46, -40}, {46, -70}, {20, -70}}));
  connect(desupValve.port_b, volumeNode24.Port[3]) annotation(
    Line(points = {{0, -70}, {-58, -70}, {-58, -20}}, color = {0, 127, 255}));
  connect(volumeNode24.Port[2], Tcoldrh.port_a) annotation(
    Line(points = {{-58, -20}, {-48, -20}}, color = {0, 127, 255}));
  connect(Tcoldrh.port_b, pipe1.Input) annotation(
    Line(points = {{-28, -20}, {-18, -20}}, color = {0, 127, 255}));
  connect(Tcoldrh.T, gain.u) annotation(
    Line(points = {{-38, -8}, {-46, -8}, {-46, -120}, {-48, -120}}, color = {0, 0, 127}));
  connect(pid.y, desupValve.opening) annotation(
    Line(points = {{-74, -90}, {-26, -90}, {-26, -54}, {10, -54}, {10, -62}}, color = {0, 0, 127}));
  connect(gain.y, pid.u_m) annotation(
    Line(points = {{-70, -120}, {-86, -120}, {-86, -102}}, color = {0, 0, 127}));
  connect(const.y, pid.u_s) annotation(
    Line(points = {{-118, -90}, {-98, -90}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 4000, Tolerance = 0.001, Interval = 0.1),
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", single = "()"));
end EMA028HRSG_Test;
