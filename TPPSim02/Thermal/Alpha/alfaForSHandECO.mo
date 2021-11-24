within TPPSim02.Thermal.Alpha;

function alfaForSHandECO "Коэффициент теплопередачи при конвективном теплообмене"
  input Modelica.SIunits.Velocity w_flow "Скорость потока";
  input Modelica.SIunits.Diameter Din "Внутренний диаметр";
  input Modelica.SIunits.ThermalConductivity k "Теплопроводность";
  input Real Re "Число Рейнольдса";
  input Real Pr "Число Прандтля для воды";
  output Modelica.SIunits.CoefficientOfHeatTransfer alfa_flow "Коэффициент теплопередачи со стороны потока вода/пар";
algorithm
  alfa_flow := max(0.023 * k / Din * Re ^ 0.8 * Pr ^ 0.4, 0.1);
end alfaForSHandECO;
