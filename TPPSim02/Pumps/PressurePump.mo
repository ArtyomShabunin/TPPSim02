within TPPSim02.Pumps;

model PressurePump
  replaceable package Medium = Modelica.Media.Water.StandardWater constrainedby Modelica.Media.Interfaces.PartialMedium;
  outer ThermoPower.System system;
  Modelica.Fluid.Interfaces.FluidPort_a port_a(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b port_b(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  parameter Modelica.SIunits.Diameter Din = 0.3 "Внутренний диаметр";
  parameter Modelica.SIunits.Length Lpipe = 10 "Длина";
  parameter Modelica.SIunits.Length Lpiezo = Lpipe "Разность высотных отметок выхода и входа";
  final parameter Modelica.SIunits.Area f_flow = 3.14 * Din^2 / 4 "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Length ke = 0.00014 "Абсолютная эквивалентная шероховатость";
  


  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";
  Modelica.SIunits.Velocity w_flow "Скорость потока";
  Real dp_fric "Потеря давления из-за сил трения";
  Real Xi_flow "Коэффициент гидравлического сопротивления участка";
  Real lambda_tr "Коэффициент трения";  
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты"; 


equation 

  stateFlow = Medium.setState_phX(port_a.p, inStream(port_a.h_outflow));

  w_flow = port_a.m_flow / stateFlow.d / f_flow "Расчет скорости потока вода/пар в конечных объемах";

  lambda_tr = 1 / (1.14 + 2 * log10(Din / ke)) ^ 2;
  Xi_flow = lambda_tr * Lpipe / Din;
  dp_fric = abs(w_flow) * w_flow * Xi_flow * stateFlow.d / 2 / system.g;
  dp_piez = stateFlow.d * system.g * Lpiezo "Расчет перепада давления из-за изменения пьезометрической высоты";
 
  port_b.p - port_a.p =  dp_piez - dp_fric; 
  port_a.m_flow = -port_b.m_flow;
  port_b.h_outflow = inStream(port_a.h_outflow);
  port_a.h_outflow = inStream(port_b.h_outflow);
  annotation(
    Documentation(info = "<html><head></head><body>Модель насоса которая, поддержание заданного давления.</body></html>", revisions = "<html><head></head><body>
    <ul>
      <li><i>May 24, 2018</i>
   by Artyom Shabunin:<br></li>
</ul></body></html>"),
    Icon(graphics = {Rectangle(fillColor = {0, 170, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Solid, extent = {{-20, 100}, {20, -100}}), Polygon(origin = {-2, 2}, lineColor = {0, 85, 255}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid, points = {{-2, 60}, {6, 60}, {10, -36}, {18, -36}, {2, -70}, {-14, -36}, {-6, -36}, {-2, 60}})}));

end PressurePump;
