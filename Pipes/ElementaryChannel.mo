within TPPSim02.Pipes;

model ElementaryChannel "Модель одного участка канала"
  import Modelica.Fluid.Types.*;
  extends TPPSim02.Pipes.BaseClases.PartialElementaryChannel;
  
  
  
  // Уравнения динамики
  parameter Dynamics energyDynamics "Параметры уравнения сохранения энергии";
  parameter Dynamics massDynamics "Параметры уравнения сохранения массы";
  parameter Dynamics momentumDynamics "Параметры уравнения сохранения момента";
  
  // Переменные
  Modelica.SIunits.SpecificEnthalpy hv "Удельная энтальпия в объеме";
  Modelica.SIunits.Pressure pv "Давление в объеме";
  
  replaceable TPPSim02.Pipes.Interfaces.ZeroHeatTransfer heatTransfer(
    redeclare final package Medium = Medium,
    state = stateFlow,
    surfaceArea = deltaSFlow)
    annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  if energyDynamics == Dynamics.SteadyState then
    0 = Q - (H[2] - H[1]);  
  else
    deltaVFlow * stateFlow.d * der(hv) = Q - (H[2] - H[1]);
  end if;
  
  Q = heatTransfer.Q_flow;

//Уравнения состояния
  //stateFlow.d = Medium.density_ph(pv, hv);
  //stateFlow.T = Medium.temperature_ph(pv, hv);
  stateFlow = Medium.setState_ph(pv, hv);
//Уравнения для расчета процессов теплообмена
  w_flow_v = D_flow_v / stateFlow.d / f_flow "Расчет скорости потока вода/пар в конечных объемах";

  D[2] + D[1] = 0;
//Уравнения для расчета процессов массообмена
  lambda_tr = 1 / (1.14 + 2 * log10(0.3 / 0.00014)) ^ 2;
  Xi_flow = lambda_tr * deltaLpipe / 0.3;

  w_flow_v = sqrt(abs(2 * dp_fric / Xi_flow / stateFlow.d)) * sign(dp_fric);
  
  if momentumDynamics == Dynamics.SteadyState then
    p[1] - p[2] = dp_fric + dp_piez;     
  else
    p[1] - p[2] = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;
  end if;
  dp_piez = stateFlow.d * Modelica.Constants.g_n * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";
initial equation
  if energyDynamics == Dynamics.FixedInitial then
    hv = h_start; 
  elseif energyDynamics == Dynamics.SteadyStateInitial then
    der(hv) = 0;    
  end if;
  der(D_flow_v) = 0;

  annotation(
    Documentation(
      info = "<html>
          <head>
          </head>
            <body>
              Модель используется для построения модели канала с сосредоточенными параметры из множества участков.
            </body>
        </html>",
      revisions = "<html>
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
      </html>"));
end ElementaryChannel;
