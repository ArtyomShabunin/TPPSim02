within TPPSim02.Thermal.Alpha;

function alphaSat "Коэффициент теплоотдачи при конденсации водяного пара"
  import Medium = Modelica.Media.Water.WaterIF97_ph; 

  input Medium.AbsolutePressure p "Давление";    
  input Medium.MassFlowRate D_flow_v;
  input Modelica.SIunits.Area f_flow;  
  input Modelica.SIunits.Diameter Din;
  input Medium.Density rho "Плотность среды";  
  output Modelica.SIunits.CoefficientOfHeatTransfer alfa_sat "Коэффициент теплопередачи со стороны потока вода/пар";
protected
//  package Medium = Modelica.Media.Water.WaterIF97_ph;
  Medium.ThermodynamicState stateLiquid;
  Modelica.SIunits.Velocity w_flow;
  Medium.DynamicViscosity mu "Динамическая вязкость";
  Modelica.SIunits.ThermalConductivity k_flow;
  Modelica.SIunits.PerUnit Re "Число Рейнольдса";
  Medium.PrandtlNumber Pr "Число Прандтля";
  Modelica.SIunits.CoefficientOfHeatTransfer alfa_l "Коэффициент теплопередачи для воды"; 
algorithm
  stateLiquid := Medium.setState_px(p, 0);
  w_flow := abs(D_flow_v) / stateLiquid.d / f_flow;
  mu := Medium.dynamicViscosity(stateLiquid);
  k_flow := Medium.thermalConductivity(stateLiquid);
  Pr := Medium.prandtlNumber(stateLiquid);
  Re := w_flow * Din * stateLiquid.d / mu;
//  alfa_l := TPPSim02.Thermal.Alpha.alfaForSHandECO(stateLiquid, D_flow_v, f_flow, Din);
  alfa_l := TPPSim02.Thermal.Alpha.alfaForSHandECO(w_flow = w_flow,
                                                   Din = Din,
                                                   k = k_flow,
                                                   Re = Re,
                                                   Pr = Pr,
                                                   f_flow = f_flow,
                                                   state_in = stateLiquid,
                                                   state_out = stateLiquid,
                                                   pv = p,
                                                   Dv = D_flow_v);
  alfa_sat :=  alfa_l * (stateLiquid.d / rho) ^ 0.5;
  annotation(
    Documentation(info = "<html><head></head><body>
      Расчет коэффициента теплоотдачи при конденсации водяного пара по формуле 4.32 из книги 'Основы теплопередачи' М.А. Михеев, И.М. Михеева.
      </body></html>", revisions = "<html><head></head><body>
    <ul>
      <li><i>Match 15, 2018</i>
   by Artyom Shabunin:<br></li>
</ul></body></html>"));
end alphaSat;
