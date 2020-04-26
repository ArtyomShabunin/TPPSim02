within TPPSim02.Pipes.BaseClases;

partial model PartialChannel "Базовая модель канала"

  extends TPPSim02.Pipes.BaseClases.Icons.IconChannel;
  import Modelica.Fluid.Types.*;
  
  replaceable package Medium=Modelica.Media.Interfaces.PartialMedium
    "Medium in the component"
    annotation(Dialog(tab="Внутренний интерфейс",enable=false));

  //Поправки
  parameter Real k_volume = 1 "Поправка к объему" annotation(
    Dialog(group = "Поправки"));
  
  //Параметры уравнений динамики
  parameter Dynamics energyDynamics = system.energyDynamics "Параметры уравнения сохранения энергии" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Dynamics"));
  parameter Dynamics massDynamics = system.massDynamics "Параметры уравнения сохранения массы" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Dynamics"));
  parameter Dynamics momentumDynamics = system.momentumDynamics "Параметры уравнения сохранения момента" annotation(Evaluate=true, Dialog(tab = "Assumptions", group="Dynamics"));
  //Начальные значения
  parameter Modelica.SIunits.AbsolutePressure p_start = system.p_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Modelica.SIunits.Temperature t_start = system.T_start "Начальное давление" annotation(Evaluate=true,Dialog(tab = "Initialization"));  
  parameter Modelica.SIunits.SpecificEnthalpy h_start = Medium.specificEnthalpy_pT(p_start, t_start) "Начальная энтальпия" annotation(Evaluate=true,Dialog(tab = "Initialization"));
  parameter Modelica.SIunits.MassFlowRate m_flow_start = system.m_flow_start "Начальное значение массового расхода" annotation(Evaluate=true,Dialog(tab = "Initialization"));

  //Интерфейс
  outer Modelica.Fluid.System system;
  
  annotation(
    Documentation(
      info = "<html>
          <head>
          </head>
            <body>
              Базовая модель канала с сосредоточенными параметрами. Поток теплоносителя без стенок.
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
end PartialChannel;
