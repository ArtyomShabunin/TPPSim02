within TPPSim02.FMU_tests;

model FMU_test1

  input Real x1(start = 0);
  input Real x2(start = 0);
  input Real x3(start = 0);

  output Real y1;
  output Real y2;
  output Real y3;
equation

  der(y1) = x1;
  der(y2) = x2;
  der(y3) = x3;

initial equation

  y1 = 0;
  y2 = 1;
  y3 = 2;

end FMU_test1;
