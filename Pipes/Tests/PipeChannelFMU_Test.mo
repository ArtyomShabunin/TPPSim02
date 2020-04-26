within TPPSim02.Pipes.Tests;

model PipeChannelFMU_Test "Тестовый пример с моделью PipeChannel экспорт в FMU"
  package Medium = Modelica.Media.Water.StandardWater annotation(
    Documentation);
  inner Modelica.Fluid.System system(T_start = 573.15, energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, p_start = 200000) annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary Sink_2(redeclare package Medium = Medium, T = 500 + 273.15, nPorts = 1, p = 2e5, use_T = true, use_p = true) annotation(
    Placement(visible = true, transformation(origin = {90, -40}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT Source_2(redeclare package Medium = Medium, T = 300 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {-90, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp1(duration = 600, height = -0.5e5, offset = 3e5, startTime = 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_1(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {-60, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_2(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {0, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_1(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300, filteredOpening = true, riseTime = 30) annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_3(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_ambient, system.T_start), numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {60, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_2(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300, filteredOpening = true, riseTime = 30) annotation(
    Placement(visible = true, transformation(origin = {30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput valve1_pos(start=1) annotation(
    Placement(visible = true, transformation(origin = {-100, 50}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-100, 50}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput valve2_pos(start=1) annotation(
    Placement(visible = true, transformation(origin = {-100, 90}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-100, 90}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(valve1_pos, valve_1.opening) annotation(
    Line(points = {{-100, 50}, {-30, 50}, {-30, -32}, {-30, -32}}, color = {0, 0, 127}));
  connect(valve2_pos, valve_2.opening) annotation(
    Line(points = {{-100, 90}, {30, 90}, {30, -32}, {30, -32}}, color = {0, 0, 127}));
  connect(ramp1.y, Source_2.p_in) annotation(
    Line(points = {{-78, 10}, {-72, 10}, {-72, -14}, {-108, -14}, {-108, -32}, {-102, -32}, {-102, -32}}, color = {0, 0, 127}));
  connect(Source_2.ports[1], channel_1.waterIn) annotation(
    Line(points = {{-80, -40}, {-70, -40}, {-70, -40}, {-70, -40}}, color = {0, 127, 255}));
  connect(channel_1.waterOut, valve_1.port_a) annotation(
    Line(points = {{-48, -40}, {-40, -40}, {-40, -40}, {-40, -40}}, color = {0, 127, 255}));
  connect(valve_1.port_b, channel_2.waterIn) annotation(
    Line(points = {{-20, -40}, {-10, -40}, {-10, -40}, {-10, -40}}, color = {0, 127, 255}));
  connect(channel_2.waterOut, valve_2.port_a) annotation(
    Line(points = {{12, -40}, {20, -40}, {20, -40}, {20, -40}}, color = {0, 127, 255}));
  connect(valve_2.port_b, channel_3.waterIn) annotation(
    Line(points = {{40, -40}, {48, -40}, {48, -40}, {50, -40}}, color = {0, 127, 255}));
  connect(channel_3.waterOut, Sink_2.ports[1]) annotation(
    Line(points = {{72, -40}, {80, -40}, {80, -40}, {80, -40}}, color = {0, 127, 255}));
  annotation(
    Documentation(info = "<html>
          <head>
          </head>
            <body>
              Трубопровод с двумя клапанами.
            </body>
        </html>", revisions = "<html>
        <head>
        </head>
          <body>
            <ul>
              <li>
                <i>26 April 2020</i>
                by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
                Создан.
              </li>
            </ul>
          </body>
      </html>"),
    experiment(StartTime = 0, StopTime = 700, Tolerance = 1e-03, Interval = 0.01),
    Documentation);

end PipeChannelFMU_Test;
