within TPPSim02.HeatExchanger;

model GasSideHE2D
  extends TPPSim02.HeatExchanger.Icons.IconGasSideHE;
  package Medium = TPPSim02.Media.ExhaustGas;
  outer ThermoPower.System system;
  
  // Параметры разбиения
  parameter Integer numberOfTubeSections = 1 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));
  final parameter Integer numberOfFlueSections = z2 "Число участков разбиения газохода" annotation(
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
  //Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin = 0.017 "Высота ребра, м" annotation(
    Dialog(group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin = 0.00404 "Шаг ребер, м" annotation(
    Dialog(group = "Характеристики оребрения"));

  parameter Real k_gamma_gas = 1 "Поправка к коэффициенту теплоотдачи со стороны газов";
  
  //  Расчетные конструктивные параметры
  final parameter Modelica.SIunits.Length deltaLpipe = Lpipe / numberOfTubeSections "Длина теплообменной трубки для элемента разбиения";
  final parameter Modelica.SIunits.Length omega = Modelica.Constants.pi * Dout "Наружный периметр трубы";
  final parameter Modelica.SIunits.Volume deltaVGas = deltaLpipe * (s1 * s2 - Modelica.Constants.pi * Dout ^ 2 / 4) * z1 "Объем одного участка газового тракта";
  final parameter Modelica.SIunits.Area f_gas = (1 - Dout / s1 * (1 + 2 * hfin * delta_fin / sfin / Dout)) * deltaLpipe * s2 * z1 "Площадь для прохода газов";
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
  //Характеристики оребрения
  final parameter Real H_fin = (omega * deltaLpipe * (1 - delta_fin / sfin) + (2 * Modelica.Constants.pi * (Dfin ^ 2 - Dout ^ 2) / 4 + Modelica.Constants.pi * Dfin * delta_fin) * (deltaLpipe / sfin)) * z1 * zahod "Площадь оребренной поверхности";  
   
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.FlowNode[numberOfFlueSections+1, numberOfTubeSections] channel(each Kaer = Kaer,
                                                                                  each deltaLpiezo = 0,
                                                                                  each deltaLpipe = s2,
                                                                                  each f_flow = f_gas)  annotation(
    Placement(visible = true, transformation(origin = {-30, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.GasDuct.VolumeNode[numberOfFlueSections, numberOfTubeSections] node(each deltaVFlow = deltaVGas,
                                                                               each use_Q_in = true)   annotation(
    Placement(visible = true, transformation(origin = {50, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[numberOfFlueSections, numberOfTubeSections] heat annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Medium.DynamicViscosity[numberOfFlueSections, numberOfTubeSections] mu "Динамическая вязкость газов";
  Medium.ThermalConductivity[numberOfFlueSections, numberOfTubeSections] k "Коэффициент теплопроводности газов";
  Modelica.SIunits.PerUnit[numberOfFlueSections, numberOfTubeSections] Re "Число Рейнольдса";
  Medium.PrandtlNumber[numberOfFlueSections, numberOfTubeSections] Pr "Число Прандтля";
  Modelica.SIunits.CoefficientOfHeatTransfer[numberOfFlueSections, numberOfTubeSections] alfa "Коэффициент теплопередачи со стороны потока газов";
  Medium.MassFlowRate[numberOfFlueSections, numberOfTubeSections] Dv "Массовый расход потока";

equation

  for i in 1:numberOfFlueSections loop
    for j in 1:numberOfTubeSections loop
      
      mu[i,j] = Medium.dynamicViscosity(node[i,j].stateFlow);
      k[i,j] = Medium.thermalConductivity(node[i,j].stateFlow);
      Pr[i,j] = Medium.prandtlNumber(node[i,j].stateFlow);
      Dv[i,j] = abs(node[i,j].Input.m_flow-node[i,j].Output.m_flow)/2;
      Re[i,j] = Dv[i,j] * Dout / (channel[i,j].f_flow * mu[i,j]);
      alfa[i,j] = k_gamma_gas * 0.113 * Cs * Cz * k[i,j] / Dout * Re[i,j] ^ n_fin * Pr[i,j] ^ 0.33;

      node[i,j].Q_in = -alfa[i,j] * H_fin * (node[i,j].Tv - heat[i,j].T);     
      heat[i,j].Q_flow = node[i,j].Q_in;
         
      connect(channel[i,j].Output, node[i,j].Input);
      connect(node[i,j].Output, channel[i+1,j].Input);
      
    end for;
  end for;

  for i in 1:numberOfTubeSections loop
    connect(Input, channel[1,i].Input);
    connect(channel[numberOfFlueSections+1,i].Output, Output);  
  end for;

end GasSideHE2D;
