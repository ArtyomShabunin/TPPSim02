within TPPSim02.HeatExchanger.Tests;

model FlowSideHEFixFlow_Test
  package Medium = Modelica.Media.Water.StandardWater;
  
  parameter Integer numberOfTubeSections = 3 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));
  parameter Integer numberOfFlueSections = 4 "Число участков разбиения газохода" annotation(
    Dialog(group = "Параметры разбиения")); 
  
  Modelica.Fluid.Sources.FixedBoundary boundary_in(redeclare package Medium = Medium, T = 50 + 273.15, nPorts = 1, p = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-72, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT boundary_out(redeclare package Medium = Medium, T = 90 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {50, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 3e5, offset = 1e5, startTime = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.FlowSideHEFixFlow flowSideHE(D_flow_v = {40, 42, 44, 50},Tin_start = 50 + 273.15, Tout_start = 50 + 273.15, numberOfTubeSections = numberOfTubeSections, pin_start = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-10, -14}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature[numberOfFlueSections, numberOfTubeSections+1] fixedTemperature(each T = 50 + 273.15)  annotation(
    Placement(visible = true, transformation(origin = {-10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
equation
  connect(ramp.y, boundary_out.p_in) annotation(
    Line(points = {{80, -12}, {62, -12}}, color = {0, 0, 127}));
  connect(flowSideHE.Input, boundary_in.ports[1]) annotation(
    Line(points = {{-20, -20}, {-62, -20}}, color = {0, 127, 255}));
  connect(flowSideHE.Output, boundary_out.ports[1]) annotation(
    Line(points = {{0, -20}, {40, -20}}, color = {0, 127, 255}));
  connect(flowSideHE.heat, fixedTemperature.port) annotation(
    Line(points = {{-10, -4}, {-10, 20}}, color = {191, 0, 0}, thickness = 0.5));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-03, Interval = 0.2));

end FlowSideHEFixFlow_Test;
