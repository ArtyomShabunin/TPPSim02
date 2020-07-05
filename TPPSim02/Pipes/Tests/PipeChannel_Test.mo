within TPPSim02.Pipes.Tests;

model PipeChannel_Test
  package Medium = Modelica.Media.Water.StandardWater;
  inner Modelica.Fluid.System system(T_start = 573.15, energyDynamics = Modelica.Fluid.Types.Dynamics.FixedInitial, massDynamics = Modelica.Fluid.Types.Dynamics.SteadyState, momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyStateInitial, p_start = 200000) annotation(
    Placement(visible = true, transformation(origin = {90, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary Sink_2(redeclare package Medium = Medium, T = 300 + 273.15, nPorts = 1, p = 2e5, use_T = true, use_p = true) annotation(
    Placement(visible = true, transformation(origin = {90, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.Boundary_pT Source_2(redeclare package Medium = Medium, T = 300 + 273.15, nPorts = 1, use_p_in = true) annotation(
    Placement(visible = true, transformation(origin = {-90, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp1(duration = 600, height = -2e5, offset = 3e5, startTime = 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_1(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), m_flow_start = 10, numberOfVolumes = 10) annotation(
    Placement(visible = true, transformation(origin = {-60, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_2(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), m_flow_start = 10, numberOfVolumes = 10) annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Pipes.PipeChannel channel_3(redeclare package Medium = Medium, Lpiezo = -10, h_start = Medium.specificEnthalpy_pT(system.p_start, system.T_start), m_flow_start = 10, numberOfVolumes = 10) annotation(
    Placement(visible = true, transformation(origin = {60, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow fixedHeatFlow_1[10](Q_flow = fill(0, 10)) annotation(
    Placement(visible = true, transformation(origin = {-10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow fixedHeatFlow_2[10](Q_flow = fill(0, 10)) annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow fixedHeatFlow_3[10](Q_flow = fill(0, 10))  annotation(
    Placement(visible = true, transformation(origin = {30, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation
  connect(Source_2.ports[1], channel_1.waterIn) annotation(
    Line(points = {{-80, -20}, {-70, -20}, {-70, -20}, {-70, -20}}, color = {0, 127, 255}));
  connect(channel_3.waterOut, Sink_2.ports[1]) annotation(
    Line(points = {{72, -20}, {80, -20}, {80, -20}, {80, -20}}, color = {0, 127, 255}));
  connect(channel_1.waterOut, channel_2.waterIn) annotation(
    Line(points = {{-48, -20}, {-12, -20}, {-12, -20}, {-10, -20}}, color = {0, 127, 255}));
  connect(channel_2.waterOut, channel_3.waterIn) annotation(
    Line(points = {{12, -20}, {50, -20}, {50, -20}, {50, -20}}, color = {0, 127, 255}));
  connect(ramp1.y, Source_2.p_in) annotation(
    Line(points = {{-78, 30}, {-72, 30}, {-72, 6}, {-112, 6}, {-112, -12}, {-102, -12}, {-102, -12}}, color = {0, 0, 127}));
  connect(fixedHeatFlow_1[:].port, channel_1.heatTransfer[1, :]) annotation(
    Line(points = {{-40, 30}, {-32, 30}, {-32, 0}, {-60, 0}, {-60, -10}, {-60, -10}}, color = {191, 0, 0}, thickness = 0.5));
  connect(fixedHeatFlow_2[:].port, channel_2.heatTransfer[1, :]) annotation(
    Line(points = {{0, 30}, {8, 30}, {8, 2}, {0, 2}, {0, -10}, {0, -10}}, color = {191, 0, 0}, thickness = 0.5));
  connect(fixedHeatFlow_3[:].port, channel_3.heatTransfer[1, :]) annotation(
    Line(points = {{40, 30}, {60, 30}, {60, -10}, {60, -10}}, color = {191, 0, 0}));  
  annotation(
  Documentation(info = "<html>
        <head>
        </head>
            <body>
              Трубопровод с реверсом потока.
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
    experiment(StartTime = 0, StopTime = 700, Tolerance = 1e-03, Interval = 0.01));
end PipeChannel_Test;
