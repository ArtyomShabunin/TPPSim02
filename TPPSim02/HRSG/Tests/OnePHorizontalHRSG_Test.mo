within TPPSim02.HRSG.Tests;

model OnePHorizontalHRSG_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HRSG.OnePHorizontalHRSG HRSG annotation(
    Placement(visible = true, transformation(origin = {30, -20}, extent = {{-30, -20}, {30, 20}}, rotation = 0)));
  TPPSim02.GasTurbine.GTParam gt(redeclare package Medium = Medium_G, Tmin = 100 + 273.15) annotation(
    Placement(visible = true, transformation(origin = {-70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-90, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_ph steam_out(redeclare package Medium = Medium_F, h = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start), nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT fw(redeclare package Medium = Medium_F, T = 50 + 273.15, nPorts = 1, p = 1e5) annotation(
    Placement(visible = true, transformation(origin = {70, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  //  Modelica.Fluid.Valves.ValveCompressible steam_cv(redeclare package Medium = Medium_F, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 150, m_flow(fixed = true)) annotation(
  //    Placement(visible = true, transformation(origin = {0, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveLinear steam_cv(redeclare package Medium = Medium_F, dp_nominal(displayUnit = "Pa") = 13e6, m_flow_nominal = 42) annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.VolumeNode volumeNode(h_start = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(system.p_start))  annotation(
    Placement(visible = true, transformation(origin = {12, 6}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
equation
  connect(gt.flowOut, HRSG.gas_in) annotation(
    Line(points = {{-60, -30}, {0, -30}}, color = {0, 127, 255}));
  connect(derN_set.y, gt.derN_set) annotation(
    Line(points = {{-78, 10}, {-66, 10}, {-66, -20}}, color = {0, 0, 127}));
  connect(N_set.y, gt.N_set) annotation(
    Line(points = {{-78, 40}, {-62, 40}, {-62, -20}}, color = {0, 0, 127}));
  connect(fw.ports[1], HRSG.fw_in) annotation(
    Line(points = {{60, 30}, {44, 30}, {44, -12}}, color = {0, 127, 255}));
  connect(steam_cv.port_b, steam_out.ports[1]) annotation(
    Line(points = {{-10, 30}, {-20, 30}}, color = {0, 127, 255}));
  connect(const.y, steam_cv.opening) annotation(
    Line(points = {{-18, 70}, {0, 70}, {0, 38}}, color = {0, 0, 127}));
  connect(HRSG.steam_out, volumeNode.Input) annotation(
    Line(points = {{12, -12}, {12, -4}}, color = {0, 127, 255}));
  connect(volumeNode.Output, steam_cv.port_a) annotation(
    Line(points = {{12, 16}, {12, 30}, {10, 30}}, color = {0, 127, 255}));
  annotation(
    experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-06, Interval = 0.1));
end OnePHorizontalHRSG_Test;
