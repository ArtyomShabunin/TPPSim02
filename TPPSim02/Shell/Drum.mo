within TPPSim02.Shell;

model Drum
  extends TPPSim02.Shell.BaseClases.BaseDrum;
  import Modelica.Fluid.Types;
  import TPPSim02.Thermal.HeatFlowRates.hfrDrumTop;
  import TPPSim02.Thermal.HeatFlowRates.hfrDrumBot;
  
  Real dt_m_top_bot "Разница между температурой металла верха и низа барабана";
  Medium.Temperature t_m_steam(start = t_m_steam_start) "Температура металла паровой части барабана";
  Medium.Temperature t_m_water(start = t_m_water_start) "Температура металла водяной части барабана"; 
  //Интерфейс
  Modelica.Blocks.Interfaces.RealOutput waterLevel annotation(
    Placement(visible = true, transformation(origin = {110, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Interfaces.FluidPort_b HPFW(redeclare package Medium = Medium) annotation(
    Placement(visible = true, transformation(origin = {-104, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-104, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput p_drum annotation(
    Placement(visible = true, transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  //расчет площадей внутренней поверхности барабана
  S_bot = drumBottomArea(Din / 2, L, Hw);
  S_top = drumBottomArea(Din / 2, L, Din - Hw);  
  //
  fedWater.m_flow = D_fw;
  waterLevel = Hw;
  p_drum = ps;
  //Паровое пространство барабана
  state_eco = Medium.setState_ph(ps, inStream(fedWater.h_outflow));
  x_eco = Medium.vapourQuality(state_eco);
  state_upStr = Medium.setState_ph(ps, inStream(upStr.h_outflow));
  x_upStr = Medium.vapourQuality(state_upStr);
  sat = Medium.setSat_p(ps);
  ts = Medium.saturationTemperature_sat(sat);
  h_dew = Medium.dewEnthalpy(sat);
  h_bubble = Medium.bubbleEnthalpy(sat);
  Q_top = D_cond_dr * (h_dew - h_bubble);
  Q_top = hfrDrumTop(S_top=S_top,
                     t_m_steam=t_m_steam,
                     ts=ts,
                     D_st_circ=D_st_circ,
                     D_st_eco=D_st_eco,
                     Dvipar=Dvipar,
                     h_dew=h_dew,
                     h_bubble=h_bubble);
  D_st_circ = D_upStr * x_upStr;
  D_st_eco = max(min(D_fw * (inStream(fedWater.h_outflow) - h_bubble) / (h_dew - h_bubble), D_fw), -D_st_circ);
  D_st_cond_fw_test = min(D_st_circ, max(D_fw * (h_bubble - inStream(fedWater.h_outflow)) / (h_dew - h_bubble), 0));
  D_st_cond_fw = -min(D_st_eco, 0);
  G_m_steam = rho_m * drumMetallVolume(Din / 2, delta, L, Hw, "top");
  D_cond_dr * (h_dew - h_bubble) = G_m_steam * C_m * der(t_m_steam) "Для моделирования снижения температуры стенки паровой части барабана в левую часть уравнения должно быть добавлено слагаемое равное произведению паропроизводительности на прирост энтальпии пара за счет охлаждения стенки!!! ВАЖНО!!!";
//Временная замена ур-я выше
  der(ps) = (D_st_circ + D_st_eco + Dvipar + Dsteam - D_cond_dr) / Vs / d_rhoDew_by_press "Уравнение определения давления в паровом пространстве";
  d_rhoDew_by_press = Medium.dDewDensity_dPressure(sat);
  Vs = 0.25 * Modelica.Constants.pi * Din ^ 2 * L - Vw;
//Водяное пространство барабана
  D_w_circ = D_upStr * (1 - x_upStr);
  D_w_eco = D_fw * min((h_dew - inStream(fedWater.h_outflow)) / (h_dew - h_bubble), 1);
  Dvipar = Gw * x_w * k;
  pw = ps + Hw * rhow * Modelica.Constants.g_n;
  sat_w = Medium.setSat_p(pw);
  rhow = Medium.density_ph(pw, hw);
  state_w = Medium.setState_ph(pw, hw);
  x_w = Medium.vapourQuality(state_w);
//  tw = Medium.saturationTemperature(pw);
  Q_bot = G_m_water * C_m * der(t_m_water) "ВОЗМОЖНО имеет смысл добавить площадь теплообмена";
  Q_bot = hfrDrumBot(S_bot=S_bot,
                     T=state_w.T,
                     t_m_water=t_m_water);
  G_m_water = rho_m * drumMetallVolume(Din / 2, delta, L, Hw, "bottom");
  D_w_circ + D_w_eco + D_cond_dr + D_st_cond_fw + D_downStr - Dvipar = der(Gw);
  D_w_circ * min(h_bubble, inStream(upStr.h_outflow)) + D_w_eco * min(h_bubble, inStream(fedWater.h_outflow)) + D_cond_dr * h_bubble + D_st_cond_fw * h_dew + D_downStr * hw - Dvipar * h_dew = der(Gw) * hw + Gw * der(hw) + G_m_water * C_m * der(t_m_water);
//Упрощенная формула, не учитывается масса металла
  rhow_dew = Medium.dewDensity(sat_w);
  rhow_bubble = Medium.bubbleDensity(sat_w);
  Vw = Gw * (1 - x_w) / rhow_bubble + Gw * x_w * (1 - k) / rhow_dew;
  Hw = drumWaterLevel(Din / 2, L, Vw);
  dt_m_top_bot = t_m_steam - t_m_water;
initial equation
  if Dynamics == Types.Dynamics.SteadyStateInitial then
    der(t_m_water) = 0;
    der(t_m_steam) = 0;
    der(hw) = 0;
  else
    Gw = Gw_start;
    h_dew = Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hv_p(ps_start);
    ps = ps_start;
//    der(t_m_water) = 0;
    t_m_water = t_m_water_start;
    t_m_steam = t_m_steam_start;
//    hw =  Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(ps_start);
    hw =  min(Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.hl_p(ps_start), Modelica.Media.Water.IF97_Utilities.h_pT(ps_start, t_m_water));
  end if;
//der(Gw) = 0;
//hw = inStream(upStr.h_outflow);
//der(ps) = 0;
  annotation(
    Diagram(coordinateSystem(extent = {{-100, -100}, {100, 100}}, preserveAspectRatio = true, initialScale = 0.1, grid = {2, 2})),
    uses(Modelica(version = "3.2.1")),
    Documentation(info = "<html>
<style>
p {
  text-indent: 20px;
  text-align: 'justify';
 }
</style>
<p>Модель построенна на основе уравнений представленных в докторской диссертации Рубашкина А.С. С рядом дополнений которые позволяют использовать ее для моделирования пуска из состояния в котором парообразование в испарителе не происходит:</p>
<ul>
<li>принято что расход пара на догрев питательной воды до состояния насыщения не может быть больше паропроизводительности испарителя;</li>
</ul>
<p>Тепло передаваемое внутренней стенке барабана расчитывается в моделе <b>TPPSim.thermal.hfrForDrum</b>.</p>

</html>", revisions = "<html>
<ul>
<li><i>4 Apr 2017</i>
by <a href=\"mailto:shabunin_a@mail.ru\">Artyom Shabunin</a>:<br>
   Создан.</li>
</ul>
</html>"));
end Drum;
