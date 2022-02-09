within TPPSim02.Shell.Tests;

model DrumShell2d_Test
  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.DrumShell2d drumShell2d annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow[10] fixedHeatFlow(each Q_flow = 10) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  parameter Real x_min = -1 "Minimum value of x";
  parameter Real x_max = +1 "Maximum value of x";
  parameter Real y_min = -1 "Minimum value of y";
  parameter Real y_max = +1 "Maximum value of y";
  parameter Real z_min = 0 "Minimum value of z";
  parameter Real z_max = 1 "Maximum value of z";
  Real wz = time;

equation
  connect(fixedHeatFlow.port, drumShell2d.port) annotation(
    Line(points = {{20, 0}, {-20, 0}}, color = {191, 0, 0}, thickness = 0.5));
end DrumShell2d_Test;
