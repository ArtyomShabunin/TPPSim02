within TPPSim02.Pipes;

model VolumeNodeWH
  package Medium = Modelica.Media.Water.StandardWater;
  import TPPSim02.Choices.Dynamics;
  outer ThermoPower.System system;
  
  parameter Modelica.SIunits.Volume deltaVFlow = 1 "Внутренний объем узла";
  parameter Modelica.SIunits.HeatFlowRate Q = 0 "Тепло переданное стенкой канала потоку теплоносителя";
  parameter Medium.AbsolutePressure p_start = system.p_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy h_start = 1e5 "Начальная энтальпия" annotation(Evaluate=true,Dialog(tab = "Initialization"));

  // Параметры уравнений динамики
  parameter Dynamics flowEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics flowMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы вода/пар" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
    
  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Medium.AbsolutePressure pv(start = p_start);
  Medium.SpecificEnthalpy hv(start = h_start);
  Medium.SpecificEnthalpy[2] H;
    
  Medium.DerDensityByEnthalpy drdh;
  Medium.DerDensityByPressure drdp;

  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation

  stateFlow = Medium.setState_phX(pv, hv);
  drdp = min(0.00004, Medium.density_derp_h(stateFlow));
  drdh = max(-0.0002, Medium.density_derh_p(stateFlow));

  if flowEnergyDynamics == Dynamics.SteadyState then
    H[2] + H[1] = 0;
  else
    deltaVFlow * stateFlow.d * der(hv) = H[2] + H[1];
  end if;
  
  if flowMassDynamics == Dynamics.SteadyState then
    Input.m_flow + Output.m_flow = 0;
  else
    Input.m_flow + Output.m_flow = deltaVFlow * drdp * der(pv) + deltaVFlow * drdh * der(hv);
  end if;

  H[1] = semiLinear(Input.m_flow, inStream(Input.h_outflow), Input.h_outflow);
  H[2] = semiLinear(Output.m_flow, inStream(Output.h_outflow), Output.h_outflow);

  Input.p = pv;
  Output.p = pv;
  
  Output.h_outflow = hv;
  Input.h_outflow = hv;
  
initial equation
  if flowEnergyDynamics == Dynamics.FixedInitial or flowMassDynamics == Dynamics.FixedInitial then
    hv = h_start;
  end if;
  
  if flowMassDynamics == Dynamics.FixedInitial then
    pv = p_start;
  end if;

annotation(
    Icon(graphics = {Ellipse(lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-100, 100}, {100, -100}})}));

end VolumeNodeWH;
