within TPPSim02.Shell.Tests;

model Drum_Test

  package Medium = Modelica.Media.Water.StandardWater;

  inner TPPSim02.System system annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum(Din = 1.6,
                           Dynamics = Modelica.Fluid.Types.Dynamics.FixedInitial,
                           Hw_start = 0.34,
                           L = 16.2,
                           delta = 80e-3,
                           ps_start = 1e5,
                           t_m_steam_start = 100+273.15,
                           t_m_water_start = 100+273.15) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT steam_out(redeclare package Medium = Medium, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {50, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_T FW(redeclare package Medium = Medium, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.MassFlowSource_h evo_out(redeclare package Medium = Medium, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  Modelica.Fluid.Sources.MassFlowSource_h evo_in(redeclare package Medium = Medium, nPorts = 1)  annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));

equation
  connect(FW.ports[1], drum.fedWater) annotation(
    Line(points = {{-40, 30}, {-6, 30}, {-6, 10}}, color = {0, 127, 255}));
  connect(drum.steam, steam_out.ports[1]) annotation(
    Line(points = {{8, 10}, {8, 30}, {40, 30}}, color = {0, 127, 255}));
  connect(evo_in.ports[1], drum.downStr) annotation(
    Line(points = {{-20, -40}, {-20, -26}, {-6, -26}, {-6, -8}}, color = {0, 127, 255}));
  connect(evo_out.ports[1], drum.upStr) annotation(
    Line(points = {{20, -40}, {20, -26}, {8, -26}, {8, -8}}, color = {0, 127, 255}));
end Drum_Test;
