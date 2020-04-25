within TPPSim02.Pipes.Interfaces;

model ZeroHeatTransfer "Нулевой тепловой поток"
  extends TPPSim02.Pipes.BaseClases.PartialHeatTransfer;
  
equation
  Ts = Medium.temperature(state);
  Q_flow = 0;

  annotation(
    Documentation(
      info = "<html>
          <head>
          </head>
            <body>
              Модель передачи тепла от потока теплоносителя, для случая нулевого теплового потока.
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
end ZeroHeatTransfer;
