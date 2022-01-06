within TPPSim02.GasDuct;

model VolumeNode
  import TPPSim02.Choices.Dynamics;
  package Medium = TPPSim02.Media.ExhaustGas;
  outer ThermoPower.System system;
  
  parameter Modelica.SIunits.Volume deltaVFlow = 1 "Внутренний объем узла";
  parameter Medium.AbsolutePressure p_start = system.p_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature T_start = system.T_start "Начальная Температура" annotation(Evaluate=true,Dialog(tab = "Initialization"));

  // Параметры уравнений динамики
  parameter Dynamics gasEnergyDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения энергии газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  parameter Dynamics gasMassDynamics = Dynamics.FixedInitial "Параметры уравнения сохранения массы газы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Water/Steam dynamics"));
  
  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Medium.AbsolutePressure pv;
  Medium.Temperature Tv;
  Medium.SpecificEnthalpy[2] H;
    
  Medium.DerDensityByTemperature drdT;
  Medium.DerDensityByPressure drdp;

  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 8.88178e-16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

equation

  stateFlow = Medium.setState_pTX(pv, Tv, actualStream(Input.Xi_outflow));

  drdp = Medium.density_derp_T(stateFlow);
  drdT = Medium.density_derT_p(stateFlow);

  if gasEnergyDynamics == Dynamics.SteadyState then
    H[2] + H[1] = 0;
  else
    deltaVFlow * Medium.density(stateFlow) * Medium.heatCapacity_cp(stateFlow) * der(Tv) = H[2] + H[1];
  end if;
  
  if gasMassDynamics == Dynamics.SteadyState then
    Input.m_flow + Output.m_flow = 0;
  else
    Input.m_flow + Output.m_flow = deltaVFlow * drdp * der(pv) + deltaVFlow * drdT * der(Tv);
  end if;
  
  H[1] = semiLinear(Input.m_flow, inStream(Input.h_outflow), Input.h_outflow);
  H[2] = semiLinear(Output.m_flow, inStream(Output.h_outflow), Output.h_outflow);

  Input.p = pv;
  Output.p = pv;
  
  Output.h_outflow = Medium.specificEnthalpy(stateFlow);
  Input.h_outflow = Medium.specificEnthalpy(stateFlow);
  
  Output.Xi_outflow = inStream(Input.Xi_outflow);
  Input.Xi_outflow = inStream(Output.Xi_outflow);
  
initial equation
  if gasEnergyDynamics == Dynamics.FixedInitial or gasMassDynamics == Dynamics.FixedInitial then
    Tv = T_start;
  end if;
  
  if gasMassDynamics == Dynamics.FixedInitial then
    pv = p_start;
  end if;

annotation(
    Icon(graphics = {Ellipse(lineColor = {255, 170, 0}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-100, 100}, {100, -100}})}));

end VolumeNode;
