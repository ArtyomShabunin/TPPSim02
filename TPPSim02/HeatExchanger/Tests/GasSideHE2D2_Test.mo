within TPPSim02.HeatExchanger.Tests;

model GasSideHE2D2_Test
  package Medium = TPPSim02.Media.ExhaustGas;
  
  parameter Integer numberOfTubeSections = 3 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));
  parameter Integer numberOfFlueSections = 4 "Число участков разбиения газохода" annotation(
    Dialog(group = "Параметры разбиения")); 
  
  Modelica.Fluid.Sources.MassFlowSource_T boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, m_flow = 10, nPorts = 1) annotation(
    Placement(visible = true, transformation(origin = {-70, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 90 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GasSideHE2D2 gasSideHE(gasMassDynamics = TPPSim02.Choices.Dynamics.SteadyState, gasMomentumDynamics = TPPSim02.Choices.Dynamics.SteadyState, numberOfTubeSections = numberOfTubeSections) annotation(
    Placement(visible = true, transformation(origin = {-10, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature[numberOfFlueSections+1, numberOfTubeSections] fixedTemperature(each T = 50 + 273.15)  annotation(
    Placement(visible = true, transformation(origin = {-10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  GasDuct.GasSplitter gasSplitter(numberOfTubeSections = numberOfTubeSections)  annotation(
    Placement(visible = true, transformation(origin = {-42, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{80, -12}, {62, -12}}, color = {0, 0, 127}));
  connect(fixedTemperature.port, gasSideHE.heat) annotation(
    Line(points = {{-10, 20}, {-10, -6}}, color = {191, 0, 0}));
  connect(gasSideHE.Output, boundary_out.ports[1]) annotation(
    Line(points = {{0, -20}, {40, -20}}, color = {0, 127, 255}));
  connect(boundary_in.ports[1], gasSplitter.Input) annotation(
    Line(points = {{-60, -20}, {-52, -20}}, color = {0, 127, 255}));
  connect(gasSplitter.Output, gasSideHE.Input) annotation(
    Line(points = {{-32, -20}, {-20, -20}}, color = {0, 127, 255}, thickness = 0.5));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-03, Interval = 0.2));


end GasSideHE2D2_Test;
