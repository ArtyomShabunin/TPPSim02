within TPPSim02.Thermal;

model CounterCurrent1D
  extends ThermoPower.Icons.HeatFlow;
  // Параметры разбиения
  parameter Integer Nv = 1 "Число узлов" annotation(
    Dialog(group = "Параметры разбиения")); 
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[Nv] side1 annotation(
    Placement(visible = true, transformation(origin = {0, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_b[Nv] side2 annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  for i in 1:Nv loop
    connect(side1[i], side2[Nv+1-i]);
  end for;

end CounterCurrent1D;
