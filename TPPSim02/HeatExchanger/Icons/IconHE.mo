within TPPSim02.HeatExchanger.Icons;

partial model IconHE
  annotation(
    Icon(graphics = {Rectangle(lineColor = {255, 85, 0}, fillColor = {255, 255, 0}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, borderPattern = BorderPattern.Raised, extent = {{-52, 100}, {52, -100}}), Rectangle(origin = {-40, 0}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.VerticalCylinder, extent = {{-5, 84}, {5, -84}}), Rectangle(origin = {0, -89}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-52, -11}, {52, 5}}), Rectangle(lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.VerticalCylinder, extent = {{-5, 84}, {5, -84}}), Rectangle(origin = {-20, 0}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.VerticalCylinder, extent = {{-5, 84}, {5, -84}}), Rectangle(origin = {20, 0}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.VerticalCylinder, extent = {{-5, 84}, {5, -84}}), Rectangle(origin = {40, 0}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.VerticalCylinder, extent = {{-5, 84}, {5, -84}}), Rectangle(origin = {0, 95}, lineColor = {162, 162, 162}, fillColor = {255, 255, 255}, pattern = LinePattern.None, fillPattern = FillPattern.HorizontalCylinder, extent = {{-52, -11}, {52, 5}}), Text(origin = {1, 3}, extent = {{-35, 21}, {35, -21}}, textString = "%name")}, coordinateSystem(extent = {{-50, -100}, {50, 100}})),
    Diagram(coordinateSystem(extent = {{-50, -100}, {50, 100}})),
    version = "",
    uses,
    __OpenModelica_commandLineOptions = "");
end IconHE;
