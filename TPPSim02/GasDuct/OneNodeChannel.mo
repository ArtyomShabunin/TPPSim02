within TPPSim02.GasDuct;

model OneNodeChannel
  constant Real Kaer = (Din + 2 * delta) ^ 0.611 * z2 / s1 ^ 0.412 / s2 ^ 0.515 / numberOfVolumes "Коэффициент для расчета аэродинамического сопротивления";

equation


end OneNodeChannel;
