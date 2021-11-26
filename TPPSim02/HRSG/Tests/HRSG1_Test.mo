within TPPSim02.HRSG.Tests;

model HRSG1_Test
  package Medium_G = TPPSim02.Media.ExhaustGas;
  package Medium_F = Modelica.Media.Water.StandardWater;
  
  TPPSim.Pumps.simplePump simplePump(redeclare package Medium = Medium_F) annotation(
    Placement(visible = true, transformation(origin = {38, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant derN_set(k = 4e6 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant N_set(k = 372.621e6) annotation(
    Placement(visible = true, transformation(origin = {-70, 88}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  inner System system annotation(
    Placement(visible = true, transformation(origin = {92, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  TPPSim02.Shell.Drum drum annotation(
    Placement(visible = true, transformation(origin = {-4, 26}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  TPPSim02.HeatExchanger.GFHE2D evo(Din = 38.1e-3,
                                    Lpipe = 18.29,
                                    delta = 3.404e-3,
                                    delta_fin = 0.9906e-3,
                                    hfin = 15.88e-3,
                                    numberOfTubeSections = 1,
                                    s1 = 85.15e-3,
                                    s2 = 111.1e-3,
                                    sfin = 2.921e-3,
                                    z1 = 126,
                                    z2 = 16,
                                    zahod = 16)  annotation(
    Placement(visible = true, transformation(origin = {-4, -14}, extent = {{-5, -10}, {5, 10}}, rotation = 0)));





equation

end HRSG1_Test;
