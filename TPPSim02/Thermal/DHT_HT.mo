within TPPSim02.Thermal;

model DHT_HT
  parameter Integer Nw=1;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a[Nw] HT annotation(
    Placement(visible = true, transformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ThermoPower.Thermal.DHTVolumes DHT(N = Nw) annotation(
    Placement(visible = true, transformation(extent = {{-40, -42}, {40, -20}}, rotation = 0), iconTransformation(extent = {{-40, -112}, {40, -90}}, rotation = 0)));
equation
  HT[:].Q_flow + DHT.Q[:] = fill(0,Nw);
  HT[:].T = DHT.T[:];

end DHT_HT;
