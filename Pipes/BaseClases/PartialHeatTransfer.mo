within TPPSim02.Pipes.BaseClases;

partial model PartialHeatTransfer "Базовая модель передачи тепла"

  extends TPPSim02.Pipes.BaseClases.Icons.IconHeatTransfer;

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

  annotation(
    Documentation(
      info = "<html>
          <head>
          </head>
            <body>
              Базовая модель передачи тепла.
            </body>
        </html>",
      revisions = "<html>
        <head>
        </head>
          <body>
            <ul>
              <li>
                <i>20 April 2020</i>
                by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
                Создан.
              </li>
            </ul>
          </body>
      </html>"));
end PartialHeatTransfer;
