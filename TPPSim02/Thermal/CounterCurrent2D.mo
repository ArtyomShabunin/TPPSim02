within TPPSim02.Thermal;

model CounterCurrent2D
  extends ThermoPower.Icons.HeatFlow;
  // Параметры разбиения
  parameter Integer numberOfTubeSections = 1 "Число участков разбиения трубы" annotation(
    Dialog(group = "Параметры разбиения"));
  parameter Integer numberOfFlueSections = 1 "Число участков разбиения газохода" annotation(
    Dialog(group = "Параметры разбиения"));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[numberOfFlueSections, numberOfTubeSections] side1 annotation(
    Placement(visible = true, transformation(origin = {0, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[numberOfFlueSections, numberOfTubeSections] side2 annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  for i in 1:numberOfFlueSections loop
    for j in 1:numberOfTubeSections loop
      connect(side1[i,j], side2[numberOfFlueSections+1-i,j]);
    end for;
  end for;

  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-100, -100}, {100, 100}}), graphics = {Polygon(fillPattern = FillPattern.Solid, lineThickness = 0.5, points = {{-72, 0}, {-72, -16}, {-50, -8}, {-72, 0}}), Polygon(fillPattern = FillPattern.Solid, lineThickness = 0.5, points = {{72, 0}, {52, 8}, {72, 16}, {72, 0}})}));
end CounterCurrent2D;
