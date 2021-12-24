within TPPSim02.HeatExchanger;

model GasSideHE1D2
  extends TPPSim02.HeatExchanger.Icons.IconGasSideHE;
  import Modelica.Constants.pi;
  import TPPSim02.Choices.Dynamics;
  package Medium = TPPSim02.Media.ExhaustGas;
  outer ThermoPower.System system;
  
  // Параметры разбиения
  parameter Integer Nv = 1 "Число узлов" annotation(
    Dialog(group = "Параметры разбиения")); 
  // Геометрия пучка
  parameter Modelica.SIunits.Length s1 = 82e-3 "Поперечный шаг" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length s2 = 110e-3 "Продольный шаг" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Integer zahod = 1 "Заходность труб теплообменника" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Integer z1 = 126 "Число труб по ширине газохода" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Integer z2 = 4 "Число труб по ходу газов в теплообменнике" annotation(
    Dialog(group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpipe = 20.85 "Длина теплообменной трубки" annotation(
    Dialog(group = "Геометрия пучка"));
  // Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Dout = 0.044 "Наружный диаметр трубок теплообменника" annotation(
    Dialog(group = "Конструктивные характеристики труб"));
  // Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin = 0.017 "Высота ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin = 0.00404 "Шаг ребер, м" annotation(
    Dialog(group = "Характеристики оребрения"));

  parameter Real k_gamma_gas = 1 "Поправка к коэффициенту теплоотдачи со стороны газов";

  // Параметры уравнений динамики
  parameter Dynamics gasEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics gasMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics gasMomentumDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения момента газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics")); 

  // Начальные параметры
  parameter Medium.AbsolutePressure pin_start = system.p_start "Начальное давление на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.AbsolutePressure pout_start = system.p_start "Начальное давление на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tin_start = system.T_start "Начальная температура на входе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature Tout_start = system.T_start "Начальная температура на выходе" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.MassFlowRate m_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  
  // Расчетные конструктивные параметры
  final parameter Modelica.SIunits.Length omega = pi * Dout "Наружный периметр трубы";
  final parameter Modelica.SIunits.Volume deltaVGas = Lpipe * (s1 * s2 - pi * Dout ^ 2 / 4) * z1 * z2 / Nv "Объем одного участка газового тракта";
  final parameter Modelica.SIunits.Area f_gas = (1 - Dout / s1 * (1 + 2 * hfin * delta_fin / sfin / Dout)) * Lpipe * s2 * z1 * z2 / Nv  "Площадь для прохода газов";
  final parameter Modelica.SIunits.Length Dfin = Dout + 2 * hfin "Диаметр ребер, м";
  final parameter Real psi_fin = 1 / (2 * Dout * sfin) * (Dfin ^ 2 - Dout ^ 2 + 2 * Dfin * delta_fin) + 1 - delta_fin / sfin "Коэффициент оребрения, равный отношению полной поверхности пучка к поверхности несущих труб на оребренном участке";  
  final parameter Real sigma1 = s1 / Dout "Относительный поперечный шаг";
  final parameter Real sigma2 = s2 / Dout "Относительный продольный шаг";
  final parameter Real sigma3 = sqrt(0.25 * sigma1 ^ 2 + sigma2) "Средний относительный диагональный шаг труб";
  final parameter Real xfin = sigma1 / sigma2 - 1.26 / psi_fin - 2 "Параметр 'x' для шахматного пучка";
  final parameter Real phi_fin = Modelica.Math.tanh(xfin) "Некий параметр 'фи'";
  final parameter Real n_fin = 0.7 + 0.08 * phi_fin + 0.005 * psi_fin "Показатель степени 'n' в формуле коэффициента теплоотдачи";
  final parameter Real Cs = (1.36 - phi_fin) * (11 / (psi_fin + 8) - 0.14) "Коэффициент, определяемый в зависимости от от относительного поперечного и продольного шага труб в пучке, типа пучка и коэффициента оребрения";
  final parameter Real Cz = if z2 < 8 and sigma1 / sigma2 < 2 then 3.15 * z2 ^ 0.05 - 2.5 elseif z2 < 8 and sigma1 / sigma2 >= 2 then 3.5 * z2 ^ 0.03 - 2.72 else 1 "Поправка на число рядов труб по ходу газов";
  final parameter Real Kaer = Dout ^ 0.611 * z2 / s1 ^ 0.412 / s2 ^ 0.515 "Коэффициент для расчета аэродинамического сопротивления";
  // Характеристики оребрения
  final parameter Real H_fin = (omega * Lpipe * (1 - delta_fin / sfin) + (2 * pi * (Dfin ^ 2 - Dout ^ 2) / 4 + pi * Dfin * delta_fin) * (Lpipe / sfin)) * z1 * zahod * z2 / Nv "Площадь оребренной поверхности";  
   
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNodeHeated[Nv+1] channel(each Cs = Cs,
                                                each Cz = Cz,
                                                each Dout = Dout,
                                                each H_fin = H_fin,
                                                each Kaer = Kaer,
                                                each deltaLpiezo = 0,
                                                each deltaLpipe = s2 * z2 / Nv,
                                                each f_flow = f_gas,
                                                each gasMomentumDynamics = gasMomentumDynamics,
                                                each k_gamma_gas = k_gamma_gas,
                                                each m_flow_start = m_start,
                                                each n_fin = n_fin)  annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNodeWH[Nv] node(each deltaVFlow = deltaVGas,
                                         T_start = if Nv == 1 then fill((Tin_start + Tout_start)/ 2, Nv)
                                                   else linspace(Tin_start, Tout_start, Nv),
                                         p_start = if Nv == 1 then fill((pin_start + pout_start)/ 2, Nv)
                                                   else linspace(pin_start, pout_start, Nv),
                                         each gasEnergyDynamics = gasEnergyDynamics,
                                         each gasMassDynamics = gasMassDynamics)   annotation(
    Placement(visible = true, transformation(origin = {50, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[Nv+1] heat annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));


equation

  for i in 1:Nv loop
            
    connect(channel[i].Output, node[i].Input);
    connect(node[i].Output, channel[i+1].Input);
      
  end for;

  connect(Input, channel[1].Input);
  connect(channel[Nv+1].Output, Output);
  connect(channel.heat, heat);
end GasSideHE1D2;
