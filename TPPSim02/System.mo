within TPPSim02;

model System
extends Modelica.Fluid.System;
  package SI = Modelica.SIunits;
  package Choices = ThermoPower.Choices;

//  parameter Boolean allowFlowReversal=true
//    "= false to restrict to design flow direction (flangeA -> flangeB)"
//    annotation (
//      Evaluate=true,
//      Dialog(group="Simulation options"));
  parameter Choices.Init.Options initOpt = ThermoPower.Choices.Init.Options.fixedState
    annotation(Dialog(group="Simulation options"));
  // parameter ThermoPower.Choices.System.Dynamics Dynamics=ThermoPower.Choices.System.Dynamics.DynamicFreeInitial;

  final parameter SI.Pressure p_amb = p_ambient "Ambient pressure";
  final parameter SI.Temperature T_amb = T_ambient "Ambient Temperature (dry bulb)";
  parameter SI.Temperature T_wb = 288.15 "Ambient temperature (wet bulb)"
    annotation(Dialog(group="Environment"));
  parameter SI.Frequency fnom = 50 "Nominal grid frequency"
    annotation(Dialog(group="Electrical system defaults"));

equation


  annotation (
    defaultComponentName="system",
    defaultComponentPrefixes="inner");
end System;
