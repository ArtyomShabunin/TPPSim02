within TPPSim02.Pipes;

model VolumeNode
  package Medium = Modelica.Media.Water.StandardWater;
  
  parameter Modelica.SIunits.Volume deltaVFlow = 1 "Внутренний объем узла";
  
  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  
  Medium.AbsolutePressure pv;
  Medium.SpecificEnthalpy hv;
  Medium.SpecificEnthalpy[2] H;
  Modelica.SIunits.HeatFlowRate Q "Тепло переданное стенкой канала потоку теплоносителя";
    
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

  deltaVFlow * stateFlow.d * der(hv) = Q + H[2] + H[1];
  
  Input.m_flow + Output.m_flow = deltaVFlow * drdp * der(pv) + deltaVFlow * drdh * der(hv);

  H[1] = semiLinear(Input.m_flow, inStream(Input.h_outflow), Input.h_outflow);
  H[2] = semiLinear(Output.m_flow, inStream(Output.h_outflow), Output.h_outflow);

  Input.p = pv;
  Output.p = pv;
  
  Output.h_outflow = hv;
  Input.h_outflow = hv;
  
initial equation
  hv = 1e5;
  pv = 1e5;

annotation(
    Icon(graphics = {Ellipse(lineColor = {85, 255, 255}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Sphere, extent = {{-100, 100}, {100, -100}})}));
end VolumeNode;
