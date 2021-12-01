within TPPSim02.GasDuct;

model GasSplitter
  package Medium = TPPSim02.Media.ExhaustGas;
  parameter Integer numberOfTubeSections = 1;
  Modelica.Fluid.Interfaces.FluidPort_a Input(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-100, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPorts_b[numberOfTubeSections] Output(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{-10, -40}, {10, 40}}, rotation = 0), iconTransformation(origin = {100, 0}, extent = {{-10, -40}, {10, 40}}, rotation = 0)));
equation
  
  for i in 1:numberOfTubeSections loop
    Input.m_flow / numberOfTubeSections + Output[i].m_flow = 0;
    Output[i].h_outflow = inStream(Input.h_outflow);
    Output[i].Xi_outflow = inStream(Input.Xi_outflow);
  end for;
  Input.p = Output[1].p;
  Input.h_outflow = inStream(Output[1].h_outflow);
  Input.Xi_outflow = inStream(Output[1].Xi_outflow);

end GasSplitter;
