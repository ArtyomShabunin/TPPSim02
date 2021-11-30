within TPPSim02.Thermal.Alpha;

function alfaForEVO
  import Medium = Modelica.Media.Water.WaterIF97_ph;  
  
  input Modelica.SIunits.Diameter Din "Внутренний диаметр трубок теплообменника";
  input Modelica.SIunits.Area f_flow "Площадь для прохода теплоносителя";
  input Medium.ThermodynamicState state_in;
  input Medium.ThermodynamicState state_out; 
  input Modelica.SIunits.AbsolutePressure pv;
  input Modelica.SIunits.MassFlowRate Dv;
  
  // Не используемые аргументы
  input Modelica.SIunits.Velocity w_flow "Скорость потока";
  input Modelica.SIunits.ThermalConductivity k "Теплопроводность";
  input Real Re "Число Рейнольдса";
  input Real Pr "Число Прандтля для воды";

  output Modelica.SIunits.CoefficientOfHeatTransfer alfa_flow;

protected

  Medium.Density rhow_dew "Плотность воды на линии насыщения";
  Medium.Density rhow_bubble "Плотность пара на линии насыщения";
  Medium.SaturationProperties sat;
  
  Modelica.SIunits.Temperature ts;
  Modelica.SIunits.SpecificEnthalpy h_dew;
  Modelica.SIunits.SpecificEnthalpy h_bubble;

  Real x_eco;
  Medium.ThermalConductivity k_l;
  Medium.DynamicViscosity mu_l;
  Real Pr_l;  
  Modelica.SIunits.Velocity w_l;
  Real Re_l;
  Modelica.SIunits.CoefficientOfHeatTransfer alfa_l "Коэффициент теплопередачи на экономайзерном участке";   

  Real x_sh;
  Medium.ThermalConductivity k_v;
  Medium.DynamicViscosity mu_v;
  Real Pr_v;  
  Modelica.SIunits.Velocity w_v;
  Real Re_v;
  Modelica.SIunits.CoefficientOfHeatTransfer alfa_v "Коэффициент теплопередачи на пароперегревательном участке"; 
  
algorithm

  sat := Medium.setSat_p(pv);
  ts := Medium.saturationTemperature_sat(sat);
  h_dew := Medium.dewEnthalpy(sat);
  h_bubble := Medium.bubbleEnthalpy(sat);
 
  // Экономайзерный участок
  x_eco := if state_out.h < h_dew then 1
           elseif state_in.h > h_dew then 0
           else (h_dew - state_in.h) / (state_out.h - state_in.h);
  
  k_l := Medium.thermalConductivity(state_in);
  mu_l := Medium.dynamicViscosity(state_in);
  Pr_l := Medium.prandtlNumber(state_in);
  w_l := abs(Dv) / state_in.d / f_flow;
  Re_l := w_l * Din * state_in.d / mu_l;
  alfa_l := 0.023 * k_l / Din * Re_l ^ 0.8 * Pr_l ^ 0.4;

  // Перегревательный участок  
  x_sh := if state_out.h < h_bubble then 0
          elseif state_in.h > h_bubble then 1
          else (state_out.h - h_bubble) / (state_out.h - state_in.h);
       
  k_v := Medium.thermalConductivity(state_out);
  mu_v := Medium.dynamicViscosity(state_out);
  Pr_v := Medium.prandtlNumber(state_out);
  w_v := abs(Dv) / state_out.d / f_flow;
  Re_v := w_v * Din * state_out.d / mu_v;
  alfa_v := 0.023 * k_v / Din * Re_v ^ 0.8 * Pr_v ^ 0.4;
   
  alfa_flow := max((1 - x_eco - x_sh) * 20000 + x_eco * alfa_l + x_sh * alfa_v, 0.0001);

end alfaForEVO;
