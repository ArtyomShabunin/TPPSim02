within TPPSim02.Pipes.Tests;

model PipeChannelFMU_Test "Тестовый пример с моделью PipeChannel экспорт в FMU"
  package Medium = Modelica.Media.Water.StandardWater annotation(
    Documentation);
  inner Modelica.Fluid.System system(T_start = 573.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, m_flow_start = 1e-2, massDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, momentumDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, p_start = 200000) annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary Sink_2(redeclare package Medium = Medium, T = 500 + 273.15, nPorts = 1, p = system.p_start, use_T = true, use_p = true) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT Source_2(redeclare package Medium = Medium, T = 300 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp1(duration = 600, height = 0.5e5, offset = 2e5, startTime = 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_1(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {-66, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_2(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {12, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_1(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300, dp(fixed = false), dp_nominal = system.dp_small, filteredOpening = true, m_flow(fixed = false), m_flow_nominal = system.m_flow_start, p_nominal = system.p_start, riseTime = 30) annotation(
    Placement(visible = true, transformation(origin = {-14, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_3(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), numberOfVolumes = 5) annotation(
    Placement(visible = true, transformation(origin = {64, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Valves.ValveCompressible valve_2(redeclare package Medium = Medium, CvData = Modelica.Fluid.Types.CvTypes.Kv, Kv = 300, dp_nominal = system.dp_small, filteredOpening = true, m_flow_nominal = system.m_flow_start, m_flow_start = system.m_flow_start, p_nominal = system.p_start, riseTime = 30) annotation(
    Placement(visible = true, transformation(origin = {38, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput valve1_pos(start=1) annotation(
    Placement(visible = true, transformation(origin = {-20, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {-20, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealInput valve2_pos(start=1) annotation(
    Placement(visible = true, transformation(origin = {30, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {30, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  Modelica.Fluid.Sensors.MassFlowRate massFlowRate_1(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = { -40, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.Pressure pressure_1(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.Pressure pressure_2(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sensors.Temperature temperature_1(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {10, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput m_1 annotation(
    Placement(visible = true, transformation(origin = {-70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealOutput p_1 annotation(
    Placement(visible = true, transformation(origin = {-16, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-16, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealOutput t_1 annotation(
    Placement(visible = true, transformation(origin = {20, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {20, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Interfaces.RealOutput p_2 annotation(
    Placement(visible = true, transformation(origin = {70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
equation
  connect(massFlowRate_1.port_a, channel_1.waterOut) annotation(
    Line(points = {{-50, 0}, {-54, 0}, {-54, 0}, {-54, 0}}, color = {0, 127, 255}));
  connect(massFlowRate_1.port_b, valve_1.port_a) annotation(
    Line(points = {{-30, 0}, {-24, 0}, {-24, 0}, {-24, 0}}, color = {0, 127, 255}));
  connect(channel_1.waterIn, Source_2.ports[1]) annotation(
    Line(points = {{-76, 0}, {-80, 0}, {-80, 0}, {-80, 0}}, color = {0, 127, 255}));
  connect(Source_2.p_in, ramp1.y) annotation(
    Line(points = {{-102, 8}, {-108, 8}, {-108, 24}, {-74, 24}, {-74, 50}, {-78, 50}, {-78, 50}}, color = {0, 0, 127}));
  connect(valve_1.opening, valve1_pos) annotation(
    Line(points = {{-14, 8}, {-14, 8}, {-14, 60}, {-20, 60}, {-20, 100}, {-20, 100}}, color = {0, 0, 127}));
  connect(valve_2.opening, valve2_pos) annotation(
    Line(points = {{38, 8}, {38, 8}, {38, 60}, {30, 60}, {30, 100}, {30, 100}}, color = {0, 0, 127}));
  connect(valve_1.port_b, channel_2.waterIn) annotation(
    Line(points = {{-4, 0}, {0, 0}, {0, 0}, {2, 0}}, color = {0, 127, 255}));
  connect(channel_2.waterOut, valve_2.port_a) annotation(
    Line(points = {{24, 0}, {28, 0}, {28, 0}, {28, 0}}, color = {0, 127, 255}));
  connect(valve_2.port_b, channel_3.waterIn) annotation(
    Line(points = {{48, 0}, {52, 0}, {52, 0}, {54, 0}}, color = {0, 127, 255}));
  connect(channel_3.waterOut, Sink_2.ports[1]) annotation(
    Line(points = {{76, 0}, {78, 0}, {78, 0}, {80, 0}}, color = {0, 127, 255}));
  connect(pressure_2.port, channel_2.waterOut) annotation(
    Line(points = {{50, -40}, {22, -40}, {22, 0}, {24, 0}}, color = {0, 127, 255}));
  connect(temperature_1.port, valve_1.port_b) annotation(
    Line(points = {{10, -40}, {-4, -40}, {-4, 0}, {-4, 0}}, color = {0, 127, 255}));
  connect(pressure_1.port, channel_1.waterOut) annotation(
    Line(points = {{-30, -40}, {-54, -40}, {-54, 0}, {-54, 0}}, color = {0, 127, 255}));
  connect(massFlowRate_1.m_flow, m_1) annotation(
    Line(points = {{-40, 12}, {-40, 12}, {-40, 14}, {-72, 14}, {-72, -90}, {-70, -90}}, color = {0, 0, 127}));
  connect(pressure_1.p, p_1) annotation(
    Line(points = {{-18, -30}, {-10, -30}, {-10, -90}, {-10, -90}}, color = {0, 0, 127}));
  connect(temperature_1.T, t_1) annotation(
    Line(points = {{18, -30}, {20, -30}, {20, -90}, {20, -90}}, color = {0, 0, 127}));
  connect(pressure_2.p, p_2) annotation(
    Line(points = {{62, -30}, {70, -30}, {70, -90}, {70, -90}}, color = {0, 0, 127}));
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
  __OpenModelica_simulationFlags(s = "dassl"));

end PipeChannelFMU_Test;
