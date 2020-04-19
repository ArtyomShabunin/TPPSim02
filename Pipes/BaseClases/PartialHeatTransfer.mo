within TPPSim02.Pipes.BaseClases;

partial model PartialHeatTransfer
  import SI = Modelica.SIunits;
  // Параметры
  replaceable package Medium=Modelica.Media.Interfaces.PartialMedium
    "Medium in the component"
    annotation(Dialog(tab="Внутренний интерфейс",enable=false));

  // Входные переменные
  input Medium.ThermodynamicState state
    "Термодинамические параметры потока в элементе";

  input SI.Area surfaceArea "Площадь поверхности теплообмена";

  // Выходные переменные
  output SI.HeatFlowRate Q_flow "Тепловой поток";

  // Параметры
  outer Modelica.Fluid.System system "Параметры окружающей среды";

  // Переменные
  SI.Temperature Ts "Температура потока";

end PartialHeatTransfer;
