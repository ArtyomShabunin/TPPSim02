within TPPSim02.Thermal.Tests;

model alfaForEVO_Test

  import alpha_func = TPPSim02.Thermal.Alpha.alfaForEVO;
  package Medium = Modelica.Media.Water.StandardWater;
  
  Medium.ThermodynamicState state;
  Modelica.SIunits.CoefficientOfHeatTransfer alpha;
  
equation

  state = Medium.setState_pT(1e5, 60+273.15);
  alpha = alpha_func(1, 1, state, state, 1e5, 10);

end alfaForEVO_Test;
