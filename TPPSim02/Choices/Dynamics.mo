within TPPSim02.Choices;

type Dynamics = enumeration(
    FixedInitial "FixedInitial -- Dynamic balance, Initial value fixed",
    SteadyState "SteadyState -- Steady state balance, Initial guess value")
  "Enumeration to define definition of balance equations";
