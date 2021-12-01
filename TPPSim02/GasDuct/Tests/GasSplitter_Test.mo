within TPPSim02.GasDuct.Tests;

model GasSplitter_Test
  inner System system annotation(
    Placement(visible = true, transformation(origin = {92, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  package Medium = TPPSim02.Media.ExhaustGas;
  Modelica.Fluid.Sources.MassFlowSource_T gas_in(redeclare package Medium = Medium, m_flow = 10, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary gas_out(redeclare package Medium = Medium, nPorts = 2)  annotation(
    Placement(visible = true, transformation(origin = {72, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.GasSplitter gasSplitter(numberOfTubeSections = 2)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(gas_in.ports[1], gasSplitter.Input) annotation(
    Line(points = {{-60, 0}, {-10, 0}}, color = {0, 127, 255}));
  connect(gasSplitter.Output, gas_out.ports) annotation(
    Line(points = {{10, 0}, {62, 0}}, color = {0, 127, 255}));
end GasSplitter_Test;
