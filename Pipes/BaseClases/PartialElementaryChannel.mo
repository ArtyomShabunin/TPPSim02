within TPPSim02.Pipes.BaseClases;

partial model PartialElementaryChannel "Модель канала с теплоносителем"
  replaceable package Medium = TPPSim.Media.Sodium_ph;

  //Конструктивные характеристики
  parameter Modelica.SIunits.Length ke "Абсолютная эквивалентная шероховатость";
  parameter Modelica.SIunits.Length deltaLpipe "Длина одного участка канала";
  parameter Modelica.SIunits.Length deltaLpiezo "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area deltaSFlow "Внутренняя площадь одного участка ряда труб";
  parameter Modelica.SIunits.Volume deltaVFlow "Внутренний объем одного участка ряда труб";
  parameter Modelica.SIunits.Area f_flow "Площадь для прохода теплоносителя";
    
  //Начальные значения 
  parameter Medium.AbsolutePressure p_flow_start "Начальное давление вода/пар" annotation(Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy h_start "Начальная удельная энтальпия вода/пар" annotation(Dialog(tab = "Initialization")); 
  
  //Переменные
  Modelica.SIunits.HeatFlowRate Q "Тепло переданное стенкой канала потоку теплоносителя";
  Modelica.SIunits.Velocity w_flow_v "Скорость потока в конечных объемах";
  Medium.ThermodynamicState stateFlow(p(start = system.p_start)) "Термодинамическое состояние потока натрия";  
  Real dp_fric "Потеря давления из-за сил трения";
  Real Xi_flow "Коэффициент гидравлического сопротивления участка";
  Real lambda_tr "Коэффициент трения";
  Medium.AbsolutePressure p[2] "Давление потока вода/пар в узловых точках";
  Medium.SpecificEnthalpy H[2] "Теплота потока вода/пар в узловых точках";  
  Medium.MassFlowRate D[2] "Массовый расход потока вода/пар в узловых точках";  
  Medium.MassFlowRate D_flow_v(start = 0) "Массовый расход потока вода/пар";
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты";  
  
  //Интерфейс
  outer Modelica.Fluid.System system;
  
end PartialElementaryChannel;
