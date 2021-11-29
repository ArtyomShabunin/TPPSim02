within TPPSim02.GasDuct;

model VolumeNode
  package Medium = TPPSim02.Media.ExhaustGas;
  outer ThermoPower.System system;
  
  parameter Modelica.SIunits.Volume deltaVFlow = 1 "Внутренний объем узла";
  parameter Modelica.SIunits.HeatFlowRate Q = 0 "Тепло переданное стенкой канала потоку теплоносителя";
  parameter Medium.AbsolutePressure p_start = system.p_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Medium.Temperature T_start = system.T_start "Начальная Температура" annotation(Evaluate=true,Dialog(tab = "Initialization"));

  parameter Boolean use_Q_in = false
    "Get the heat flow rate from the input connector"
    annotation(Evaluate=true, HideResult=true, choices(checkBox=true));
  
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

  Modelica.Blocks.Interfaces.RealInput Q_in if     use_Q_in
    "Prescribed heat flow rate"
    annotation (Placement(visible = true,transformation(origin = {0, 100},extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));

protected
  Modelica.Blocks.Interfaces.RealInput Q_in_internal
    "Needed to connect to conditional connector";

equation

  connect(Q_in, Q_in_internal);
  if not use_Q_in then
    Q_in_internal = Q;
  end if;

  stateFlow = Medium.setState_pTX(pv, Tv, actualStream(Input.Xi_outflow));

  drdp = Medium.density_derp_T(stateFlow);
  drdT = Medium.density_derT_p(stateFlow);

  deltaVFlow * Medium.density(stateFlow) * Medium.heatCapacity_cp(stateFlow) * der(Tv) = Q_in_internal + H[2] + H[1];
  
//  Input.m_flow + Output.m_flow = deltaVFlow * drdp * der(pv) + deltaVFlow * drdT * der(Tv);
  Input.m_flow + Output.m_flow = 0;
  
  H[1] = semiLinear(Input.m_flow, inStream(Input.h_outflow), Input.h_outflow);
  H[2] = semiLinear(Output.m_flow, inStream(Output.h_outflow), Output.h_outflow);

  Input.p = pv;
  Output.p = pv;
  
  Output.h_outflow = Medium.specificEnthalpy(stateFlow);
  Input.h_outflow = Medium.specificEnthalpy(stateFlow);
  
  Output.Xi_outflow = inStream(Input.Xi_outflow);
  Input.Xi_outflow = inStream(Output.Xi_outflow);
  
initial equation
//  Tv = T_start;
//  pv = p_start;

annotation(
    Icon(graphics = {Ellipse(lineColor = {255, 170, 0}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Sphere, extent = {{-100, 100}, {100, -100}})}));
end VolumeNode;
