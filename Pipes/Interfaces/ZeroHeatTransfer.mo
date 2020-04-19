within TPPSim02.Pipes.Interfaces;

model ZeroHeatTransfer
  extends TPPSim02.Pipes.BaseClases.PartialHeatTransfer;
  
equation
  Ts = Medium.temperature(state);
  Q_flow = 0;

end ZeroHeatTransfer;
