within TPPSim02.Thermal.HeatFlowRates;

function hfrDrumTop

  package SI = Modelica.SIunits;

  input SI.Area S_top "Площадь поверхности теплообмена в верхней части барабана";
  input SI.Temperature t_m_steam "Температура металла паровой части барабана";
  input SI.Temperature ts "Температура насыщения в барабане (пар)";
  input SI.MassFlowRate D_st_circ "Пар поступающий в паровое пространство барабана из циркуляционных контуров ";
  input SI.MassFlowRate D_st_eco "Расход пара из питательной воды или необходимый для нагрева до h' недогретой питательной воды";
  input SI.MassFlowRate Dvipar "Выпар в паровой объем";
  input SI.SpecificEnthalpy h_dew "Энтальпия пара на линии насыщения при давлении в барабане";
  input SI.SpecificEnthalpy h_bubble "Энтальпия воды на линии насыщения при давлении в барабане";

  output Modelica.SIunits.HeatFlowRate Q_top "Тепловой поток к металлу верхней части барабана";


algorithm
  Q_top := 2000 * S_top * max((ts - t_m_steam), 0);
  Q_top := min(Q_top, max((D_st_circ + D_st_eco + Dvipar) * (h_dew - h_bubble), 0));

end hfrDrumTop;
