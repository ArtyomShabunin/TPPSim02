within TPPSim02.Pipes.BaseClases;

partial model PartialElementaryChannel "Базовая модель участка канала"

  extends TPPSim02.Pipes.BaseClases.Icons.IconElementaryChannel;

  replaceable package Medium=Modelica.Media.Interfaces.PartialMedium
  "Medium in the component"
  annotation(Dialog(tab="Внутренний интерфейс",enable=false));

  //Конструктивные характеристики
  parameter Modelica.SIunits.Length ke "Абсолютная эквивалентная шероховатость";
  parameter Modelica.SIunits.Length deltaLpipe "Длина одного участка канала";
  parameter Modelica.SIunits.Length deltaLpiezo "Разность высотных отметок выхода и входа";
  parameter Modelica.SIunits.Area deltaSFlow "Внутренняя площадь одного участка ряда труб";
  parameter Modelica.SIunits.Volume deltaVFlow "Внутренний объем одного участка ряда труб";
  parameter Modelica.SIunits.Area f_flow "Площадь для прохода теплоносителя";
  parameter Modelica.SIunits.Diameter Din "Внутренний диаметр";
    
  //Начальные значения 
  parameter Medium.AbsolutePressure p_start "Начальное давление потока" annotation(Dialog(tab = "Initialization"));
  parameter Medium.Temperature t_start "Начальная температура потока" annotation(Dialog(tab = "Initialization"));
  parameter Medium.SpecificEnthalpy h_start "Начальная удельная энтальпия потока" annotation(Dialog(tab = "Initialization"));
  parameter Modelica.SIunits.MassFlowRate m_flow_start"Начальное значение массового расхода" annotation(Dialog(tab = "Initialization"));   
  
  //Переменные
  Modelica.SIunits.HeatFlowRate Q "Тепло переданное стенкой канала потоку теплоносителя";
//  Modelica.SIunits.CoefficientOfHeatTransfer alpha "Коэффициент теплопередачи со стороны потока вода/пар";
  Modelica.SIunits.Velocity w_flow_v "Скорость потока в конечных объемах";
  Modelica.SIunits.Temperature t_m "Температура металла на участках трубопровода";
  Medium.ThermodynamicState stateFlow "Термодинамическое состояние потока";  
  Real dp_fric "Потеря давления из-за сил трения";
  Real Xi_flow "Коэффициент гидравлического сопротивления участка";
  Real lambda_tr "Коэффициент трения";
  Medium.AbsolutePressure p[2] "Давление потока вода/пар в узловых точках";
  Modelica.SIunits.HeatFlowRate H[2] "Теплота потока вода/пар в узловых точках";  
  Medium.MassFlowRate D[2] "Массовый расход потока вода/пар в узловых точках";  
  Real dp_piez "Перепад давления из-за изменения пьезометрической высоты";  
  
  //Интерфейс
  outer Modelica.Fluid.System system;

  annotation(
    Documentation(
      info = "<html>
          <head>
          </head>
            <body>
              Базовая модель участка канала.
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
end PartialElementaryChannel;
