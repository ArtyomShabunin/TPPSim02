within TPPSim02.Pipes;

model ElementaryChannel
  import Modelica.Fluid.Types.*;
  extends TPPSim02.Pipes.BaseClases.PartialElementaryChannel;
  
  // Уравнения динамики
  parameter Dynamics energyDynamics "Параметры уравнения сохранения энергии";
  parameter Dynamics massDynamics "Параметры уравнения сохранения массы";
  parameter Dynamics momentumDynamics "Параметры уравнения сохранения момента";
  
  TPPSim02.Pipes.Interfaces.ZeroHeatTransfer heatTransfer(
    redeclare final package Medium = Medium,
    state = stateFlow,
    surfaceArea = deltaSFlow);

equation
  if energyDynamics == Dynamics.SteadyState then
    0 = Q - (H[2] - H[1]);  
  else
    deltaVFlow * stateFlow.d * der(stateFlow.h) = Q - (H[2] - H[1]);
  end if;
  
  Q = heatTransfer.Q_flow;

//Уравнения состояния
  stateFlow.d = Medium.density_ph(stateFlow.p, stateFlow.h);
  stateFlow.T = Medium.temperature_ph(stateFlow.p, stateFlow.h);
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
    stateFlow.h = h_start; 
  elseif energyDynamics == Dynamics.SteadyStateInitial then
    der(stateFlow.h) = 0;    
  end if;
  der(D_flow_v) = 0;


end ElementaryChannel;
