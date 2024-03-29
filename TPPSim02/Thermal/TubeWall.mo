within TPPSim02.Thermal;

model TubeWall
  package SI = Modelica.SIunits;
  package Choices = ThermoPower.Choices;
  package Functions = ThermoPower.Functions;
  extends ThermoPower.Icons.MetalWall;
  parameter Integer Nw = 1 "Number of volumes on the wall ports";
  parameter Integer Nt = 1 "Number of tubes in parallel";
  parameter SI.Length L "Tube length";
  parameter SI.Length rint "Internal radius (single tube)";
  parameter SI.Length rext "External radius (single tube)";
  parameter Real rhomcm "Metal heat capacity per unit volume [J/m^3.K]";
  parameter SI.ThermalConductivity lambda "Thermal conductivity";
  parameter Boolean WallRes = true "Wall thermal resistance accounted for";
  parameter SI.Temperature Tstartbar = 300 "Avarage temperature" annotation(
    Dialog(tab = "Initialisation"));
  parameter SI.Temperature Tstart1 = Tstartbar "Temperature start value - first volume" annotation(
    Dialog(tab = "Initialisation"));
  parameter SI.Temperature TstartN = Tstartbar "Temperature start value - last volume" annotation(
    Dialog(tab = "Initialisation"));
  //  parameter SI.Temperature Tvolstart = Functions.linspaceExt(Tstart1, TstartN, Nw) annotation(
  //    Dialog(tab = "Initialisation"));
  parameter SI.Temperature Tvolstart = Tstart1 annotation(
    Dialog(tab = "Initialisation"));
  parameter Choices.Init.Options initOpt = system.initOpt "Initialisation option" annotation(
    Dialog(tab = "Initialisation"));
  constant Real pi = Modelica.Constants.pi;
  final parameter SI.Area Am = (rext ^ 2 - rint ^ 2) * pi "Area of the metal tube cross-section";
  final parameter SI.HeatCapacity Cm = Nt * L * Am * rhomcm "Total heat capacity";
  outer ThermoPower.System system "System wide properties";
  SI.Temperature Tvol(start = Tvolstart) "Volume temperatures";
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a ext annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b int annotation(
    Placement(visible = true, transformation(origin = {0, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  assert(rext > rint, "External radius must be greater than internal radius");
  L / Nw * Nt * rhomcm * Am * der(Tvol) = int.Q_flow + ext.Q_flow "Energy balance";
  if WallRes then
// Thermal resistance of the tube walls accounted for
    int.Q_flow = lambda * (2 * pi * L / Nw) * (int.T - Tvol) / log((rint + rext) / (2 * rint)) * Nt "Heat conduction through the internal half-thickness";
    ext.Q_flow = lambda * (2 * pi * L / Nw) * (ext.T - Tvol) / log(2 * rext / (rint + rext)) * Nt "Heat conduction through the external half-thickness";
  else
// No temperature gradients across the thickness
    ext.T = Tvol;
    int.T = Tvol;
  end if;
initial equation
  if initOpt == Choices.Init.Options.noInit then
// do nothing
  elseif initOpt == Choices.Init.Options.fixedState then
    Tvol = Tvolstart;
  elseif initOpt == Choices.Init.Options.steadyState then
    der(Tvol) = zeros(Nw);
  elseif initOpt == Choices.Init.Options.steadyStateNoT then
// do nothing
  else
    assert(false, "Unsupported initialisation option");
  end if;
  annotation(
    Icon(graphics = {Text(extent = {{-100, 60}, {-40, 20}}, lineColor = {0, 0, 0}, fillColor = {128, 128, 128}, fillPattern = FillPattern.Forward, textString = "Int"), Text(extent = {{-100, -20}, {-40, -60}}, lineColor = {0, 0, 0}, fillColor = {128, 128, 128}, fillPattern = FillPattern.Forward, textString = "Ext"), Text(extent = {{-138, -60}, {142, -100}}, lineColor = {191, 95, 0}, textString = "%name")}),
    Documentation(info = "<HTML>
<p>This is the model of a cylindrical tube of solid material.
<p>The heat capacity (which is lumped at the center of the tube thickness) is accounted for, as well as the thermal resistance due to the finite heat conduction coefficient. Longitudinal heat conduction is neglected.
<p><b>Modelling options</b></p>
<p>The following options are available:
<ul>
<li><tt>WallRes = false</tt>: the thermal resistance of the tube wall is neglected.
<li><tt>WallRes = true</tt>: the thermal resistance of the tube wall is accounted for.
</ul>
</HTML>", revisions = "<html>
<ul>
<li><i>30 May 2005</i>
  by <a href=\"mailto:francesco.casella@polimi.it\">Francesco Casella</a>:<br>
     Initialisation support added.</li>
<li><i>1 Oct 2003</i>
  by <a href=\"mailto:francesco.casella@polimi.it\">Francesco Casella</a>:<br>
     First release.</li>
</ul>
</html>
    "),
    Diagram(graphics));
end TubeWall;
