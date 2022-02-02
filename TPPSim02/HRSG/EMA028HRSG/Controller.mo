within TPPSim02.HRSG.EMA028HRSG;

model Controller
  extends TPPSim02.HRSG.Icons.IconController;
  Modelica.Blocks.Sources.Constant hp_level_set(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID hp_level_pid(Ti = 120, controllerType =    Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ThermoPower.PowerPlants.Buses.Sensors sensors annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {20, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ThermoPower.PowerPlants.Buses.Actuators actuators annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-20, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ip_level_set(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID ip_level_pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {30, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID lp_level_pid(Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PI, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 100, limitsAtInit = true, yMax = 50, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant lp_level_set(k = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ip_cv_dp_set(k = -0.5e5) annotation(
    Placement(visible = true, transformation(origin = {-32, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.LimPID ip_cv_pid(Td = 20, Ti = 120, controllerType = Modelica.Blocks.Types.SimpleController.PID, initType = Modelica.Blocks.Types.InitPID.InitialOutput, k = 1e-6, limitsAtInit = true, yMax = 1, yMin = 0, y_start = 0) annotation(
    Placement(visible = true, transformation(origin = {30, -110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(hp_level_set.y, hp_level_pid.u_s) annotation(
    Line(points = {{-19, 70}, {18, 70}}, color = {0, 0, 127}));
  connect(hp_level_pid.y, actuators.hp_fw_flow) annotation(
    Line(points = {{41, 70}, {80, 70}, {80, 0}, {100, 0}}, color = {0, 0, 127}));
  connect(sensors.hp_level, hp_level_pid.u_m) annotation(
    Line(points = {{-100, 0}, {-80, 0}, {-80, 40}, {30, 40}, {30, 58}}, color = {0, 0, 127}));
  connect(ip_level_set.y, ip_level_pid.u_s) annotation(
    Line(points = {{-18, 10}, {18, 10}}, color = {0, 0, 127}));
  connect(sensors.ip_level, ip_level_pid.u_m) annotation(
    Line(points = {{-100, 0}, {-80, 0}, {-80, -20}, {30, -20}, {30, -2}}, color = {0, 0, 127}));
  connect(ip_level_pid.y, actuators.ip_fw_flow) annotation(
    Line(points = {{42, 10}, {60, 10}, {60, 0}, {100, 0}}, color = {0, 0, 127}));
  connect(lp_level_set.y, lp_level_pid.u_s) annotation(
    Line(points = {{-18, -50}, {18, -50}}, color = {0, 0, 127}));
  connect(lp_level_pid.y, actuators.cond_flow) annotation(
    Line(points = {{42, -50}, {80, -50}, {80, 0}, {100, 0}}, color = {0, 0, 127}));
  connect(sensors.lp_level, lp_level_pid.u_m) annotation(
    Line(points = {{-100, 0}, {-80, 0}, {-80, -80}, {30, -80}, {30, -62}}, color = {0, 0, 127}));
  connect(sensors.ip_cv_dp, ip_cv_pid.u_m) annotation(
    Line(points = {{-100, 0}, {-80, 0}, {-80, -136}, {30, -136}, {30, -122}}, color = {0, 0, 127}));
  connect(ip_cv_pid.y, actuators.ip_cv_pos) annotation(
    Line(points = {{42, -110}, {80, -110}, {80, 0}, {100, 0}}, color = {0, 0, 127}));
  connect(ip_cv_dp_set.y, ip_cv_pid.u_s) annotation(
    Line(points = {{-20, -110}, {18, -110}}, color = {0, 0, 127}));

annotation(
    Diagram(coordinateSystem(extent = {{-100, -140}, {100, 100}})));
end Controller;
