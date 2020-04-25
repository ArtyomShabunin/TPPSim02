within TPPSim02.Pipes.Tests;

model PipeChannel_Test
  package Medium = Modelica.Media.Water.StandardWater;
  inner Modelica.Fluid.System system(T_start = 573.15) annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary Sink_2(redeclare package Medium = Medium, T = 500 + 273.15, nPorts = 1, p = 2e5, use_T = true, use_p = true) annotation(
    Placement(visible = true, transformation(origin = {90, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT Source_2(redeclare package Medium = Medium, T = 300 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {-90, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp1(duration = 600, height = -2e5, offset = 3e5, startTime = 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_1(redeclare package Medium = Medium, Lpiezo = -10, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, momentumDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {-60, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_2(redeclare package Medium = Medium, Lpiezo = -10, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, momentumDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_1(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300) annotation(
    Placement(visible = true, transformation(origin = {-30, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp2(duration = 600, height = -0.9, offset = 1, startTime = 660) annotation(
    Placement(visible = true, transformation(origin = {-50, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_3(redeclare package Medium = Medium, Lpiezo = -10, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, momentumDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {60, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_2(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300) annotation(
    Placement(visible = true, transformation(origin = {30, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 1)  annotation(
    Placement(visible = true, transformation(origin = {10, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(Source_2.ports[1], channel_1.waterIn) annotation(
    Line(points = {{-80, -20}, {-70, -20}, {-70, -20}, {-70, -20}}, color = {0, 127, 255}));
  connect(channel_1.waterOut, valve_1.port_a) annotation(
    Line(points = {{-48, -20}, {-40, -20}, {-40, -20}, {-40, -20}}, color = {0, 127, 255}));
  connect(valve_1.port_b, channel_2.waterIn) annotation(
    Line(points = {{-20, -20}, {-8, -20}, {-8, -20}, {-8, -20}}, color = {0, 127, 255}));
  connect(ramp1.y, Source_2.p_in) annotation(
    Line(points = {{-78, 22}, {-74, 22}, {-74, 2}, {-106, 2}, {-106, -12}, {-102, -12}, {-102, -12}, {-102, -12}}, color = {0, 0, 127}));
  connect(ramp2.y, valve_1.opening) annotation(
    Line(points = {{-38, 22}, {-30, 22}, {-30, -12}, {-30, -12}}, color = {0, 0, 127}));
  connect(valve_2.port_a, channel_2.waterOut) annotation(
    Line(points = {{20, -20}, {10, -20}, {10, -20}, {12, -20}}, color = {0, 127, 255}));
  connect(valve_2.port_b, channel_3.waterIn) annotation(
    Line(points = {{40, -20}, {50, -20}, {50, -20}, {50, -20}}, color = {0, 127, 255}));
  connect(channel_3.waterOut, Sink_2.ports[1]) annotation(
    Line(points = {{72, -20}, {80, -20}, {80, -20}, {80, -20}}, color = {0, 127, 255}));
  connect(const1.y, valve_2.opening) annotation(
    Line(points = {{22, 22}, {30, 22}, {30, -12}, {30, -12}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 1300, Tolerance = 1e-03, Interval = 0.01));
end PipeChannel_Test;
