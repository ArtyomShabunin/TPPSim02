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
  Medium.MassFlowRate Dv; 
  Medium.MassFlowRate D_flow_v "Массовый расход потока вода/пар";
  Modelica.SIunits.DerDensityByEnthalpy drdh;
  Modelica.SIunits.DerDensityByPressure drdp;
  
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
  stateFlow = Medium.setState_phX(pv, hv);
  drdp = min(0.00004, Medium.density_derp_h(stateFlow));
  drdh = max(-0.0002, Medium.density_derh_p(stateFlow));
//Уравнения для расчета процессов теплообмена
  w_flow_v = Dv / stateFlow.d / f_flow "Расчет скорости потока вода/пар в конечных объемах";

  
// Уравнение сплошности  
  if massDynamics == Dynamics.SteadyState then
    D[2] + D[1] = 0;
  else
    D[2] + D[1] = deltaVFlow * drdp * der(pv) + deltaVFlow * drdh * der(hv);
  end if;
  
//Уравнения для расчета процессов массообмена
  lambda_tr = 1 / (1.14 + 2 * log10(0.3 / 0.00014)) ^ 2;
  Xi_flow = lambda_tr * deltaLpipe / 0.3;

  
  dp_fric = sign(w_flow_v) * (w_flow_v^2) * Xi_flow * stateFlow.d / 2;
  
  if momentumDynamics == Dynamics.SteadyState then
    p[1] - p[2] = dp_fric + dp_piez;     
  else
    p[1] - p[2] = dp_fric + dp_piez + der(D_flow_v) * deltaLpipe / f_flow;
  end if;
  
  
  Dv = sign(D_flow_v) * max(abs(D_flow_v), 1e-4);
 
  dp_piez = stateFlow.d * Modelica.Constants.g_n * deltaLpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";
initial equation
  
  if energyDynamics == Dynamics.FixedInitial then
    hv = h_start;
  elseif energyDynamics == Dynamics.SteadyStateInitial then
    der(hv) = 0;
  end if;
  if massDynamics == Dynamics.FixedInitial then
    pv = p_start;
  elseif massDynamics == Dynamics.SteadyStateInitial then
    der(pv) = 0;
  end if;
  if momentumDynamics == Dynamics.FixedInitial then
    D_flow_v = m_flow_start; 
  elseif momentumDynamics == Dynamics.SteadyStateInitial then
    der(D_flow_v) = 0;
  end if; 

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
