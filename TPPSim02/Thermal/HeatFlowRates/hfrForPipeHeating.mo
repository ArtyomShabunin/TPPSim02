within TPPSim02.Thermal.HeatFlowRates;

function hfrForPipeHeating "Тепловой поток (HeatFlowRate) к внутренней стенке паропровода при прогреве"
  input Modelica.SIunits.Diameter Din "Внутренний диаметр трубок теплообменника";
  input Modelica.SIunits.Area f_flow "Площадь для прохода теплоносителя";
  input Modelica.SIunits.Area deltaSFlow "Внутренняя площадь одного участка ряда труб";
   
  input Medium.ThermodynamicState stateFlow;
  input Modelica.SIunits.Temperature t_m "Температура металла на участках трубопровода";
  input Medium.MassFlowRate Dv "Массовый расход";
 
  output Modelica.SIunits.HeatFlowRate Q "Тепло переданное стенкой паропровода потоку пара";
  
protected
  package Medium = Modelica.Media.Water.WaterIF97_ph;
  
  Medium.SpecificEnthalpy hl "Энтальпия воды на линии насыщения";
  Medium.SpecificEnthalpy hv "Энтальпия пара на линии насыщения";
  
  Modelica.SIunits.HeatFlowRate Q_cond;
  Modelica.SIunits.HeatFlowRate Q_cond_max;
  Modelica.SIunits.HeatFlowRate Q_conv;
  
  Modelica.SIunits.CoefficientOfHeatTransfer alpha_sat "Коэффициент теплопередачи при конденсации пара";
  Modelica.SIunits.CoefficientOfHeatTransfer alpha_conv "Коэфициент теплопередачи при конвективном теплообмене";  
  
algorithm
  alpha_sat :=  TPPSim02.Thermal.Alpha.alphaSat(stateFlow.p, Dv, f_flow, Din, stateFlow.d);
  alpha_conv := TPPSim02.Thermal.Alpha.alfaForSHandECO(stateFlow, Dv, f_flow, Din); 
  Q_cond := deltaSFlow * alpha_sat * max((min(Medium.saturationTemperature(stateFlow.p), stateFlow.T) - t_m), 0);
  Q_cond_max := max(Dv * (stateFlow.h - Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(stateFlow.p)), 0);
  Q_conv := deltaSFlow * alpha_conv * (stateFlow.T - t_m);
  Q := -max(Q_conv,min(Q_cond, Q_cond_max));
  annotation(
    Documentation(info = "<html><head></head><body>
      Модель для расчета теплового потока к внутренней стенке паропровода при прогреве. Модель учитывает конвективный теплообмен и теплообмен при конденсации пара.<br>Используются глобальные переменные, из-за чего модель может использоваться только совместно с моделью ElementarySteamPipe.
      </body></html>", revisions = "<html><head></head><body>
    <ul>
      <li><i>Match 15, 2018</i>
   by Artyom Shabunin:<br></li>
</ul></body></html>"));
end hfrForPipeHeating;
