within TPPSim02.HeatExchanger;

model ParallelGFHE1D
  extends TPPSim02.HeatExchanger.Icons.IconParallelHE;
  import TPPSim02.Choices.Dynamics;
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  outer ThermoPower.System system;
  
  //Теплообменник №1
  //Параметры разбиения
  parameter Integer Nv_1 = 1 "Число узлов" annotation(
    Dialog(tab = "1-st HE", group = "Параметры разбиения")); 
  // Геометрия пучка
  parameter Modelica.SIunits.Length s1_1 = 82e-3 "Поперечный шаг" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length s2_1 = 110e-3 "Продольный шаг" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Integer zahod_1 = 1 "Заходность труб теплообменника" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Integer z1_1 = 126 "Число труб по ширине газохода" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Integer z2_1 = 4 "Число труб по ходу газов в теплообменнике" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpipe_1 = 20.85 "Длина теплообменной трубки" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpiezo_1 = 20.85 "Разность высот выходного и входного фланцев" annotation(
    Dialog(tab = "1-st HE", group = "Геометрия пучка"));
  //Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Din_1 = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(tab = "1-st HE", group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length delta_1 = 0.003 "Толщина стенки трубки теплообменника" annotation(
    Dialog(tab = "1-st HE", group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length ke_1 = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(tab = "1-st HE", group = "Конструктивные характеристики труб"));
  //Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin_1 = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin_1 = 0.017 "Высота ребра, м" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin_1 = 0.00404 "Шаг ребер, м" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики оребрения"));
  //Характеристики металла
  parameter Modelica.SIunits.SpecificHeatCapacity C_m_1 = 578.05 "Удельная теплоемкость металла" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики металла"));
  parameter Modelica.SIunits.ThermalConductivity lambda_m_1 = 20 "Теплопроводность метала" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики металла"));  
  parameter Modelica.SIunits.Density rho_m_1 = 7800 "Плотность металла" annotation(
    Dialog(tab = "1-st HE", group = "Характеристики металла"));  
  // Начальные параметры
  // Вода/Пар
  parameter Modelica.SIunits.AbsolutePressure pin_start_1 = pout_start_1+system.g*1000*Lpiezo_1 "Начальное давление на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.AbsolutePressure pout_start_1 = system.p_start "Начальное давление на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tin_start_1 = system.T_start "Начальная температура на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tout_start_1 = system.T_start "Начальная температура на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.SpecificEnthalpy hin_start_1 = Medium_F.specificEnthalpy_pT(pin_start_1,Tin_start_1) "Начальная энтальпия на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.SpecificEnthalpy hout_start_1 = Medium_F.specificEnthalpy_pT(pout_start_1,Tout_start_1) "Начальная энтальпия на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));  
  parameter Modelica.SIunits.MassFlowRate m_flow_start_1 = system.m_flow_start "Начальное значение массового расхода" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization water/steam"));
  // Газы
  parameter Modelica.SIunits.AbsolutePressure pin_gas_start_1 = system.p_start "Начальное давление на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization gas"));
  parameter Modelica.SIunits.AbsolutePressure pout_gas_start_1 = system.p_start "Начальное давление на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tin_gas_start_1 = system.T_start "Начальная температура на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tout_gas_start_1 = system.T_start "Начальная температура на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization gas"));
  parameter Modelica.SIunits.MassFlowRate m_gas_start_1 = system.m_flow_start "Начальное значение массового расхода" annotation(
    Evaluate=true, Dialog(tab = "Initialization 1-st HE", group = "Initialization gas"));
  // Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics_1 = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics_1 = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics"));
  parameter Dynamics flowMomentumDynamics_1 = Dynamics.FixedInitial "Параметры уравнения сохранения момента вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics")); 
  parameter Dynamics gasEnergyDynamics_1 = Dynamics.FixedInitial "Параметры уравнения сохранения энергии газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics"));
  parameter Dynamics gasMassDynamics_1 = Dynamics.SteadyState "Параметры уравнения сохранения массы газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics"));
  parameter Dynamics gasMomentumDynamics_1 = Dynamics.SteadyState "Параметры уравнения сохранения момента газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 1-st HE", group="Water/Steam dynamics"));

  //Теплообменник №2
  //Параметры разбиения
  parameter Integer Nv_2 = 1 "Число узлов" annotation(
    Dialog(tab = "2-nd HE", group = "Параметры разбиения")); 
  // Геометрия пучка
  parameter Modelica.SIunits.Length s1_2 = 82e-3 "Поперечный шаг" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length s2_2 = 110e-3 "Продольный шаг" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Integer zahod_2 = 1 "Заходность труб теплообменника" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Integer z1_2 = 126 "Число труб по ширине газохода" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Integer z2_2 = 4 "Число труб по ходу газов в теплообменнике" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpipe_2 = 20.85 "Длина теплообменной трубки" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  parameter Modelica.SIunits.Length Lpiezo_2 = 20.85 "Разность высот выходного и входного фланцев" annotation(
    Dialog(tab = "2-nd HE", group = "Геометрия пучка"));
  //Конструктивные характеристики труб
  parameter Modelica.SIunits.Diameter Din_2 = 0.038 "Внутренний диаметр трубок теплообменника" annotation(
    Dialog(tab = "2-nd HE", group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length delta_2 = 0.003 "Толщина стенки трубки теплообменника" annotation(
    Dialog(tab = "2-nd HE", group = "Конструктивные характеристики труб"));
  parameter Modelica.SIunits.Length ke_2 = 0.00014 "Абсолютная эквивалентная шероховатость" annotation(
    Dialog(tab = "2-nd HE", group = "Конструктивные характеристики труб"));
  //Характеристики оребрения
  parameter Modelica.SIunits.Length delta_fin_2 = 0.0008 "Средняя толщина ребра, м" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length hfin_2 = 0.017 "Высота ребра, м" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики оребрения"));
  parameter Modelica.SIunits.Length sfin_2 = 0.00404 "Шаг ребер, м" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики оребрения"));
  //Характеристики металла
  parameter Modelica.SIunits.SpecificHeatCapacity C_m_2 = 578.05 "Удельная теплоемкость металла" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики металла"));
  parameter Modelica.SIunits.ThermalConductivity lambda_m_2 = 20 "Теплопроводность метала" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики металла"));  
  parameter Modelica.SIunits.Density rho_m_2 = 7800 "Плотность металла" annotation(
    Dialog(tab = "2-nd HE", group = "Характеристики металла"));  
  // Начальные параметры
  // Вода/Пар
  parameter Modelica.SIunits.AbsolutePressure pin_start_2 = pout_start_2+system.g*1000*Lpiezo_2 "Начальное давление на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.AbsolutePressure pout_start_2 = system.p_start "Начальное давление на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tin_start_2 = system.T_start "Начальная температура на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.Temperature Tout_start_2 = system.T_start "Начальная температура на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.SpecificEnthalpy hin_start_2 = Medium_F.specificEnthalpy_pT(pin_start_2,Tin_start_2) "Начальная энтальпия на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  parameter Modelica.SIunits.SpecificEnthalpy hout_start_2 = Medium_F.specificEnthalpy_pT(pout_start_2,Tout_start_2) "Начальная энтальпия на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));  
  parameter Modelica.SIunits.MassFlowRate m_flow_start_2 = system.m_flow_start "Начальное значение массового расхода" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization water/steam"));
  // Газы
  parameter Modelica.SIunits.AbsolutePressure pin_gas_start_2 = system.p_start "Начальное давление на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization gas"));
  parameter Modelica.SIunits.AbsolutePressure pout_gas_start_2 = system.p_start "Начальное давление на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tin_gas_start_2 = system.T_start "Начальная температура на входе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization gas"));
  parameter Modelica.SIunits.Temperature Tout_gas_start_2 = system.T_start "Начальная температура на выходе" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization gas"));
  parameter Modelica.SIunits.MassFlowRate m_gas_start_2 = system.m_flow_start "Начальное значение массового расхода" annotation(
    Evaluate=true, Dialog(tab = "Initialization 2-nd HE", group = "Initialization gas"));
  // Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics_2 = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics_2 = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics"));
  parameter Dynamics flowMomentumDynamics_2 = Dynamics.FixedInitial "Параметры уравнения сохранения момента вода/пар" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics")); 
  parameter Dynamics gasEnergyDynamics_2 = Dynamics.FixedInitial "Параметры уравнения сохранения энергии газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics"));
  parameter Dynamics gasMassDynamics_2 = Dynamics.SteadyState "Параметры уравнения сохранения массы газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics"));
  parameter Dynamics gasMomentumDynamics_2 = Dynamics.SteadyState "Параметры уравнения сохранения момента газы" annotation(
    Evaluate=true, Dialog(tab = "Assumptions 2-nd HE", group="Water/Steam dynamics"));



  TPPSim02.HeatExchanger.GFHE1D gfhe1(C_m = C_m_1, Din = Din_1, Lpiezo = Lpiezo_1, Lpipe = Lpipe_1, Nv = Nv_1, Tin_gas_start = Tin_gas_start_1, Tin_start = Tin_start_1, Tout_gas_start = Tout_gas_start_1, Tout_start = Tout_start_1, delta = delta_1, delta_fin = delta_fin_1, flowEnergyDynamics = flowEnergyDynamics_1, flowMassDynamics = flowMassDynamics_1, flowMomentumDynamics = flowMomentumDynamics_1, gasEnergyDynamics = gasEnergyDynamics_1, gasMassDynamics = gasMassDynamics_1, gasMomentumDynamics = gasMomentumDynamics_1, hfin = hfin_1, hin_start = hin_start_1, hout_start = hout_start_1, ke = ke_1, lambda_m = lambda_m_1, m_flow_start = m_flow_start_1, m_gas_start = m_gas_start_1, pin_gas_start = pin_gas_start_1, pin_start = pin_start_1, pout_gas_start = pout_gas_start_1, pout_start = pout_start_1, rho_m = rho_m_1, s1 = s1_1, s2 = s2_1, sfin = sfin_1, z1 = z1_1, z2 = z2_1, zahod = zahod_1)  annotation(
    Placement(visible = true, transformation(origin = {0, 50}, extent = {{-10, -10}, {11, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE1D gfhe2(C_m = C_m_2, Din = Din_2, Lpiezo = Lpiezo_2, Lpipe = Lpipe_2, Nv = Nv_2, Tin_gas_start = Tin_gas_start_2, Tin_start = Tin_start_2, Tout_gas_start = Tout_gas_start_2, Tout_start = Tout_start_2, delta = delta_2, delta_fin = delta_fin_2, flowEnergyDynamics = flowEnergyDynamics_2, flowMassDynamics = flowMassDynamics_2, flowMomentumDynamics = flowMomentumDynamics_2, gasEnergyDynamics = gasEnergyDynamics_2, gasMassDynamics = gasMassDynamics_2, gasMomentumDynamics = gasMomentumDynamics_2, hfin = hfin_2, hin_start = hin_start_2, hout_start = hout_start_2, ke = ke_2, lambda_m = lambda_m_2, m_flow_start = m_flow_start_2, m_gas_start = m_gas_start_2, pin_gas_start = pin_gas_start_2, pin_start = pin_start_2, pout_gas_start = pout_gas_start_2, pout_start = pout_start_2, rho_m = rho_m_2, s1 = s1_2, s2 = s2_2, sfin = sfin_2, z1 = z1_2, z2 = z2_2, zahod = zahod_2) annotation(
    Placement(visible = true, transformation(origin = {0, -50}, extent = {{-10, 10}, {11, -10}}, rotation = 0)));
  TPPSim02.GasDuct.GasSplitter gasSplitter(numberOfTubeSections = 2)  annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  //Интерфейс
  Modelica.Fluid.Interfaces.FluidPort_a flowIn_1(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {100, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b flowOut_1(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-100, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {40, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a gasIn(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {54, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b gasOut(redeclare package Medium = Medium_G) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_a flowIn_2(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {100, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-40, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b flowOut_2(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {-100, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {40, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(gasSplitter.Input, gasIn) annotation(
    Line(points = {{-80, 0}, {-100, 0}}, color = {0, 127, 255}));
  connect(gasSplitter.Output[1], gfhe1.gasIn) annotation(
    Line(points = {{-60, 0}, {-40, 0}, {-40, 50}, {-6, 50}}, color = {0, 127, 255}));
  connect(gasSplitter.Output[2], gfhe2.gasIn) annotation(
    Line(points = {{-60, 0}, {-40, 0}, {-40, -50}, {-6, -50}}, color = {0, 127, 255}));
  connect(gfhe2.gasOut, gasOut) annotation(
    Line(points = {{6, -50}, {40, -50}, {40, 0}, {100, 0}}, color = {0, 127, 255}));
  connect(gfhe1.gasOut, gasOut) annotation(
    Line(points = {{6, 50}, {40, 50}, {40, 0}, {100, 0}}, color = {0, 127, 255}));
  connect(gfhe1.flowOut, flowOut_1) annotation(
    Line(points = {{-4, 60}, {-4, 80}, {-100, 80}}, color = {0, 127, 255}));
  connect(gfhe1.flowIn, flowIn_1) annotation(
    Line(points = {{4, 60}, {4, 80}, {100, 80}}, color = {0, 127, 255}));
  connect(gfhe2.flowOut, flowOut_2) annotation(
    Line(points = {{-4, -60}, {-4, -80}, {-100, -80}}, color = {0, 127, 255}));
  connect(gfhe2.flowIn, flowIn_2) annotation(
    Line(points = {{4, -60}, {4, -80}, {100, -80}}, color = {0, 127, 255}));
end ParallelGFHE1D;
