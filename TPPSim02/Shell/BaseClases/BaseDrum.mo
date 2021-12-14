within TPPSim02.Shell.BaseClases;

model BaseDrum
  extends TPPSim02.Shell.Icons.IconDrum;
  //Вспомогательные функции
  import Modelica.Fluid.Types;
  
  function drumBottomArea "Функция для расчета площади внутренней поверхности нижней части барабана"
    extends Modelica.Icons.Function;
    input Real R "внутренний радиус барабана";
    input Real L "длина барабана";
    input Real Hw "уровень воды в барабане";
    output Real Sbot "площадь внутренней поверхности нижней части барабана";
  protected
    Real Lsec "длина дуги сектора";
    Real alfa "йентральный угол сектора";
    Real Ssec;
    Real Str;
  algorithm 
    alfa := if Hw < R then 2 * acos((R - Hw) / R) else 2 * Modelica.Constants.pi - 2 * acos((Hw - R) / R);
    Lsec := alfa * R;
    Ssec := alfa * R ^ 2 / 2;
    Str := (R - Hw) * R * sin(alfa / 2);
    Sbot := Ssec - Str + Lsec * L;
  end drumBottomArea;
  
  function drumWaterVolume "Формула для расчета объема воды в барабане"
    extends Modelica.Icons.Function;
    input Real R "внутренний радиус барабана";
    input Real L "длина барабана";
    input Real Hw "уровень воды в барабане";
    output Real V "объем занимаемый водой в барабане";
  protected
    Real alfa;
    Real Ssec;
    Real Str;
    Real H;
  algorithm
    H := if Hw < R then Hw else 2 * R - Hw;
    alfa := 2 * acos((R - H) / R);
    Ssec := alfa * R ^ 2 / 2;
    Str := (R - H) * R * sin(alfa / 2);
    V := if Hw < R then (Ssec - Str) * L else (Modelica.Constants.pi * R ^ 2 - (Ssec - Str)) * L;
  end drumWaterVolume;

  function drumWaterLevel
    extends Modelica.Icons.Function;
    input Real R "внутренний радиус барабана";
    input Real L "длина барабана";
    input Real V "объем занимаемый водой в барабане";
    output Real Hw "уровень воды в барабане";
  protected
    Real Sw;
    //Площадь сечения занятой водой
    Real Skr;
  algorithm
    Sw := max(V, 0) / L;
    Skr := Modelica.Constants.pi * R ^ 2;
    Hw := 2 * R * ((-5e-10 * (Sw / Skr) ^ 6) + 4.005 * (Sw / Skr) ^ 5 - 10.012 * (Sw / Skr) ^ 4 + 9.6531 * (Sw / Skr) ^ 3 - 4.4672 * (Sw / Skr) ^ 2 + 1.7942 * (Sw / Skr) + 0.0137);
//приближенная формула
  end drumWaterLevel;

  function drumMetallVolume "Объем металла над и под уровнем воды в барабане"
    extends Modelica.Icons.Function;
    input Real R "внутренний радиус барабана";
    input Real delta "толщина стенки барабана";
    input Real L "длина барабана";
    input Real Hw "уровень воды в барабане";
    input String area "верх или низ барабана";
    output Real V "масса металла";
  protected
    Real alfa;
    Real H;
    Real Ssec_ext;
    Real Ssec_int;
    Real Smetall_ring;
    Real Str;
    Real Vbottom;
    Real Vtop;
  algorithm
    H := if Hw < R then Hw else 2 * R - Hw;
    alfa := 2 * acos((R - H) / R);
    Ssec_ext := alfa * (R + delta) ^ 2 / 2;
    Ssec_int := alfa * R ^ 2 / 2;
    Smetall_ring := Modelica.Constants.pi * ((R + delta) ^ 2 - R ^ 2);
    Str := (R - H) * R * sin(alfa / 2);
    Vbottom := if Hw < R then (Ssec_ext - Ssec_int) * L + 2 * (Ssec_int - Str) * delta else (Smetall_ring - (Ssec_ext - Ssec_int)) * L + 2 * (Modelica.Constants.pi * R ^ 2 - (Ssec_int - Str)) * delta;
    Vtop := if Hw > R then (Ssec_ext - Ssec_int) * L + 2 * (Ssec_int - Str) * delta else (Smetall_ring - (Ssec_ext - Ssec_int)) * L + 2 * (Modelica.Constants.pi * R ^ 2 - (Ssec_int - Str)) * delta;
    V := if area == "top" then Vtop else Vbottom;
  end drumMetallVolume;

  //Ограничения
  parameter Modelica.SIunits.MassFlowRate m_flow_small = system.m_flow_small "Ограничение минимального расхода" annotation(Dialog(group="Assumptions"));
  //Настройки уравнений динамики
  parameter Types.Dynamics Dynamics = Types.Dynamics.SteadyStateInitial "Параметры уравнений динамики" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Dynamics"));
  //Исходные данные
  replaceable package Medium = Modelica.Media.Water.WaterIF97_ph constrainedby Modelica.Media.Interfaces.PartialTwoPhaseMedium;
  parameter Real k = 0.9 "Доля пара, которая практически сразу выделяется из водяного объема";
  //Геометрические характеристики барабана
  parameter Modelica.SIunits.Length Din "Внутренний диаметр барабана";
  parameter Modelica.SIunits.Length L "Длина барабана";
  parameter Modelica.SIunits.Length delta "Толщина стенки барабана";
  //Характеристики металла
  parameter Modelica.SIunits.Density rho_m = 7800 "Плотность металла" annotation(
    Dialog(group = "Металл"));
  parameter Modelica.SIunits.SpecificHeatCapacity C_m = 578.05 "Удельная теплоемкость металла" annotation(
    Dialog(group = "Металл"));
  //Начальные значения
  parameter Modelica.SIunits.Length Hw_start = 0.5 "Начальное значение уровня воды в барабане";
  parameter Medium.AbsolutePressure ps_start = system.p_start "Начальное значение давления пара в барабане";
  parameter Medium.AbsolutePressure pw_start = ps_start + 0.5 * Hw_start * Medium.bubbleDensity(Medium.setSat_p(ps_start)) * Modelica.Constants.g_n "Начальное значение давления пара в барабане";
  parameter Medium.Temperature t_m_steam_start = 100 + 273.15 "Начальная температура металла верха барабана";
  parameter Medium.Temperature t_m_water_start = 100 + 273.15 "Начальная температура металла низа барабана";  
  parameter Modelica.SIunits.Volume Vw_start = drumWaterVolume(Din / 2, L, Hw_start);
  parameter Modelica.SIunits.Mass Gw_start = Vw_start * Medium.bubbleDensity(Medium.setSat_p(ps_start));
  //Переменные
  Modelica.SIunits.Volume Vs "Объем парового пространства барабана";
  Modelica.SIunits.Area S_top "Площадь внутренней поверхности паровой части барабана";
  Modelica.SIunits.Area S_bot "Площадь внутренней поверхности водяной части барабана";  
  Medium.Temperature ts "Температура пара в барабане";
//  inner Medium.Temperature tw "Температура воды в барабане";  
  Medium.ThermodynamicState state_eco "Термодинамическое состояние потока питательной воды";
  Real x_eco "Степень сухости питательной воды";
  Medium.ThermodynamicState state_upStr "Термодинамическое состояние потока в подъемных трубах испарительного контура";
  Real x_upStr "Степень сухости в подъемных трубах испарительного контура";
  Medium.SaturationProperties sat "State vector to compute saturation properties для парового объема";
  Medium.MassFlowRate D_fw "Расход питательной воды";
  Medium.MassFlowRate D_st_circ "Пар поступающий в паровое пространство барабана из циркуляционных контуров ";
  Medium.MassFlowRate D_st_eco "Расход пара из питательной воды или необходимый для нагрева до h' недогретой питательной воды";
  Medium.MassFlowRate D_st_cond_fw "Расход пара конденсирующегося при нагреве питательной воды до энтальпии насыщения";
  Medium.MassFlowRate D_st_cond_fw_test;
  Medium.MassFlowRate Dsteam(start = 0, max = 0) "Расход пара из барабана";
  Medium.MassFlowRate D_cond_dr "Пар конденсирующийся на стенках барабана";
  Modelica.SIunits.Mass G_m_steam(start = rho_m * drumMetallVolume(Din / 2, delta, L, Hw_start, "top")) "Масса металла паровой части барабана";
  Modelica.SIunits.Mass G_m_water(start = rho_m * drumMetallVolume(Din / 2, delta, L, Hw_start, "bottom")) "Масса металла водяной части барабана";
  Modelica.SIunits.DerDensityByPressure d_rhoDew_by_press "Производная плотности сухого пара от давления";
  Medium.MassFlowRate Dvipar "Выпар в паровой объем";
  Modelica.SIunits.Length Hw(start = Hw_start, fixed = false, max = Din, min = 0) "Уровень воды в барабане";
  Modelica.SIunits.Volume Vw(start = Vw_start, nominal = Vw_start, min = 0, max = drumWaterVolume(Din / 2, L, Din)) "Объем водяной части барабана";
  Medium.MassFlowRate D_downStr "Расход воды в опускные трубы циркуляционных контуров";
  Medium.MassFlowRate D_upStr(min = 0, max = 500) "Расход пароводяной среды в подъемных трубах циркуляционных контуров";
  Medium.AbsolutePressure ps(start = ps_start) "Давление насыщения в барабане";
  Medium.SpecificEnthalpy h_dew "Энтальпия пара на линии насыщения при давлении в барабане";
  Medium.SpecificEnthalpy h_bubble "Энтальпия воды на линии насыщения при давлении в барабане";
  Medium.AbsolutePressure pw(start = pw_start) "Давление воды в барабане";
  Medium.Density rhow "Плотность воды в барабане";
  Medium.SpecificEnthalpy hw "Энтальпия воды в водяном объеме";
  Medium.ThermodynamicState state_w "Термодинамическое состояние воды в водяном объеме";
  Real x_w "Степень сухости воды в водяном объеме";
  Modelica.SIunits.Mass Gw(nominal = drumWaterVolume(Din / 2, L, Hw_start) * Medium.bubbleDensity(Medium.setSat_p(ps_start)), min = 0) "Масса воды в барабане";
  Medium.SaturationProperties sat_w "State vector to compute saturation properties для водяного объема";
  Medium.MassFlowRate D_w_circ "Вода поступающая в водяное пространство барабана из циркуляционных контуров ";
  Medium.MassFlowRate D_w_eco "Расход воды из экономайзера, с учетом выделившегося или дополнительно конденсировавшегося пара";
  Medium.Density rhow_dew "Плотность воды на линии насыщения в водяном объеме барабана";
  Medium.Density rhow_bubble "Плотность пара на линии насыщения в водяном объеме барабана";
  Modelica.SIunits.HeatFlowRate Q_top "Тепловой поток к металлу верхней части барабана";
  Modelica.SIunits.HeatFlowRate Q_bot "Тепловой поток к металлу нижней части барабана";
  //Интерфейс
  outer Modelica.Fluid.System system;   
  Modelica.Fluid.Interfaces.FluidPort_a fedWater(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-104, 14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-70, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b steam(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {62, -104}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {70, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b downStr(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-62, -104}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a upStr(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {104, 14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {70, -90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b HPFW(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-104, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-104, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
//Питательная вода
  fedWater.h_outflow = hw;
  fedWater.p = ps;
  steam.p = ps;
//Выход насыщенного пара
  steam.h_outflow = h_dew;
  steam.m_flow = Dsteam;
//Опускной стояк и подача питательной воды на ПЭН
  downStr.h_outflow = hw;
  HPFW.h_outflow = hw;
  downStr.p = pw;
  HPFW.p = pw;
  downStr.m_flow + min(HPFW.m_flow, -m_flow_small) = D_downStr;
//Подъемные трубы
  upStr.h_outflow = hw;
  upStr.p = ps + state_upStr.d * system.g * Hw;
  upStr.m_flow = D_upStr;
  annotation(
    Diagram(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = true, initialScale = 0.1, grid = {2, 2})),
    uses(Modelica(version = "3.2.1")),
    Documentation(info = "<html>
<style>
p {
  text-indent: 20px;
  text-align: 'justify';
 }
</style>  
</html>", revisions = "<html>
<ul>
<li><i>4 Apr 2017</i>
by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
   Создан.</li>
<li><i>07 June 2018</i>
by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
   Давление на выходе из подъемных труб приравнено ps.</li>
<li><i>11 July 2018</i>
by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
   Добавлены переменные: площадь внутренней поверхности верха и низа барабана.<br>Добавлена функция для расчета площади внутренней поверхности барабана.</li>
</ul>
</html>"));

end BaseDrum;
