within TPPSim02.Thermal.HeatFlowRates;

function hfrDrumBot

  package SI = Modelica.SIunits;

  input SI.Area S_bot "Площадь поверхности теплообмена в нижней части барабана";
  input SI.Temperature T;        
  input SI.Temperature t_m_water "Температура металла водяной части барабана";

  output Modelica.SIunits.HeatFlowRate Q_bot "Тепловой поток к металлу нижней части барабана";

algorithm

  Q_bot := 1000 * S_bot * max((T - t_m_water), 0);

end hfrDrumBot;
