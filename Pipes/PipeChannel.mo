within TPPSim02.Pipes;

model PipeChannel "Модель канала в круглой трубе"
  extends TPPSim02.Pipes.BaseClases.PartialChannel;
  
  //Конструктивные характеристики
  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр трубопровода" annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length delta = 0.01 "Толщина стенки трубопровода" annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length Lpipe = 25 "Длина теплообменной трубки" annotation(
    Dialog(group = "Конструктивные характеристики"));
  inner parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость"  annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Modelica.SIunits.Length Lpiezo = 0 "Перепад высот между выходом и входом трубы"   annotation(
    Dialog(group = "Конструктивные характеристики"));
  parameter Real n_parallel = 1 "Число параллельных трубопроводов" annotation(
    Dialog(group = "Конструктивные характеристики"));

  //Параметры разбиения
  parameter Integer numberOfVolumes "Число участков разбиения" annotation(
    Dialog(group = "Параметры разбиения"));
  
  //Расчетные конструктивные параметры
  final parameter Modelica.SIunits.Length deltaLpipe = Lpipe / numberOfVolumes;
  final parameter Modelica.SIunits.Length deltaLpiezo = Lpiezo / numberOfVolumes;
  final parameter Modelica.SIunits.Area deltaSFlow = n_parallel * deltaLpipe * Modelica.Constants.pi * Din "Внутренняя площадь одного участка ряда труб";
  final parameter Modelica.SIunits.Volume deltaVFlow = k_volume * n_parallel * deltaLpipe * Modelica.Constants.pi * Din ^ 2 / 4 "Внутренний объем одного участка ряда труб";
  final parameter Modelica.SIunits.Area f_flow = n_parallel * Modelica.Constants.pi * Din ^ 2 / 4 "Площадь для прохода теплоносителя";
  
  //Переменные
  replaceable TPPSim02.Pipes.ElementaryChannel Channel[1, numberOfVolumes](redeclare package Medium = Medium,
                                                                     ke = fill(ke,1, numberOfVolumes),
                                                                     f_flow = fill(f_flow,1, numberOfVolumes),
                                                                     deltaLpipe = fill(deltaLpipe, 1, numberOfVolumes),
                                                                     deltaLpiezo = fill(deltaLpiezo, 1, numberOfVolumes),
                                                                     deltaSFlow = fill(deltaSFlow, 1, numberOfVolumes),
                                                                     deltaVFlow = fill(deltaVFlow, 1, numberOfVolumes),
                                                                     p_flow_start = fill(p_flow_start, 1, numberOfVolumes),
                                                                     h_start = fill(h_start, 1, numberOfVolumes),
                                                                     energyDynamics = fill(energyDynamics, 1, numberOfVolumes),
                                                                     massDynamics = fill(energyDynamics, 1, numberOfVolumes),
                                                                     momentumDynamics = fill(momentumDynamics, 1, numberOfVolumes))
                                                                     annotation(
    Placement(visible = true, transformation(origin = {2, 5.32907e-15}, extent = {{-40, -40}, {40, 40}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b waterOut(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a waterIn(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100,0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-110, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

  // Объединение элементарных моделей трубопровода
  for i in 1:(numberOfVolumes-1) loop
    Channel[1,i].p[2] = Channel[1,i+1].p[1];
    Channel[1,i].D[2] + Channel[1,i+1].D[1] = 0;
    
    Channel[1,i].H[2] = semiLinear(Channel[1,i].D_flow_v, Channel[1,i].stateFlow.h, Channel[1,i+1].H[1] / Channel[1,i].D_flow_v);
    Channel[1,i+1].H[1] = semiLinear(Channel[1,i+1].D_flow_v, Channel[1,i].H[2] / Channel[1,i+1].D_flow_v, Channel[1,i+1].stateFlow.h);    
  end for;
   
  Channel[1, 1].H[1] = semiLinear(Channel[1,1].D_flow_v, inStream(waterIn.h_outflow), Channel[1,1].stateFlow.h);
  Channel[1, numberOfVolumes].H[2] = semiLinear(Channel[1,numberOfVolumes].D_flow_v, Channel[1,numberOfVolumes].stateFlow.h, inStream(waterOut.h_outflow));

  for i in 1:numberOfVolumes loop
    Channel[1,i].stateFlow.p = Channel[1,i].p[1];
    Channel[1,i].D_flow_v + Channel[1,i].D[2] = 0;
  end for;
  
  waterIn.h_outflow = Channel[1,1].stateFlow.h;
  Channel[1, 1].D[1] = waterIn.m_flow;
  Channel[1, 1].p[1] = waterIn.p;
  Channel[1, numberOfVolumes].stateFlow.h = waterOut.h_outflow;
  Channel[1, numberOfVolumes].D[2] = waterOut.m_flow;
  Channel[1, numberOfVolumes].p[2] = waterOut.p;

  annotation(
    Documentation(info = "<html>
          <head>
          </head>
            <body>
              Модель канала в круглой трубе. Поток теплоносителя без стенок.
            </body>
        </html>", revisions = "<html>
        <head>
        </head>
          <body>
            <ul>
              <li>
                <i>20 April 2020</i>
                by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
                Создан.
              </li>
            </ul>
          </body>
      </html>"),
    Icon);
end PipeChannel;
