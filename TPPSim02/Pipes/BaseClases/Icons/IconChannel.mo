within TPPSim02.Pipes.BaseClases.Icons;

partial model IconChannel
  annotation(
    Icon(coordinateSystem(extent = {{-100, -100}, {100, 100}}, initialScale = 0.1), graphics = {Rectangle(fillColor = {0, 170, 255}, pattern = LinePattern.None, fillPattern = FillPattern.Solid, extent = {{-100, 40}, {100, -40}}), Line(origin = {-40, 0}, points = {{0, 40}, {0, -40}}),  Line(origin = {40.2218, 0}, points = {{0, 40}, {0, -40}}), Text(origin = {-71, -1}, extent = {{-29, 41}, {31, -39}}, textString = "1"), Text(origin = {62, 7}, extent = {{-22, 33}, {38, -47}}, textString = "n"), Text(origin = {-6, 6}, extent = {{-34, 34}, {46, -46}}, textString = "..."), Text(origin = {-10, -190}, lineColor = {0, 0, 255}, extent = {{-130, 110}, {150, 150}}, textString = "%name")}),
    Diagram(coordinateSystem(extent = {{-100, -40}, {100, 40}})));
end IconChannel;
