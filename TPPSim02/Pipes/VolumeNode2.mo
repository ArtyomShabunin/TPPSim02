within TPPSim02.Pipes;

model VolumeNode2
  package Medium = Modelica.Media.Water.StandardWater;
  import TPPSim02.Choices.Dynamics;
  outer ThermoPower.System system;
  
  parameter Integer nPorts = 1 "Кол-во входов/выходов";
  parameter Modelica.SIunits.Volume deltaVFlow = 1 "Внутренний объем узла";
  parameter Modelica.SIunits.Area deltaSFlow = 0.7 "Площадь поверхности теплообмена";
  parameter Medium.AbsolutePressure p_start = system.p_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy h_start = 1e5 "Начальная энтальпия" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  // Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(
    Evaluate = true,
    Dialog(tab = "Assumptions", group = "Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
    
  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Medium.AbsolutePressure pv(start = p_start);
  Medium.SpecificEnthalpy hv(start = h_start);
  Medium.SpecificEnthalpy[nPorts] H;
    
  Medium.DerDensityByEnthalpy drdh;
  Medium.DerDensityByPressure drdp;

  Modelica.Fluid.Interfaces.FluidPort_a[nPorts] Port(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -4}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a heat annotation(
    Placement(visible = true, transformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  Modelica.SIunits.CoefficientOfHeatTransfer alfa "Коэффициент теплопередачи при кондуктивном теплообмене";


equation

  stateFlow = Medium.setState_phX(pv, hv);
  drdp = Medium.density_derp_h(stateFlow);
  drdh = Medium.density_derh_p(stateFlow);


  if flowEnergyDynamics == Dynamics.SteadyState then
    sum(H) = 0;
  else
    deltaVFlow * stateFlow.d * der(hv) = sum(H) + heat.Q_flow;
  end if;
  
  if flowMassDynamics == Dynamics.SteadyState then
    sum(Port.m_flow) = 0;
  else
    sum(Port.m_flow) = deltaVFlow * drdp * der(pv) + deltaVFlow * drdh * der(hv);
  end if;
  
  alfa = 100;
  heat.Q_flow = -alfa * deltaSFlow * (stateFlow.T - heat.T);

  for i in 1:nPorts loop
    H[i] = semiLinear(Port[i].m_flow, inStream(Port[i].h_outflow), Port[i].h_outflow);
    Port[i].p = pv;
    Port[i].h_outflow = hv;
  end for;

  
initial equation
  if flowEnergyDynamics == Dynamics.FixedInitial or flowMassDynamics == Dynamics.FixedInitial then
    hv = h_start;
  end if;
  
  if flowMassDynamics == Dynamics.FixedInitial then
    pv = p_start;
  end if;

annotation(
    Icon(graphics = {Ellipse(lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-20, 20}, {20, -20}})}));

end VolumeNode2;
