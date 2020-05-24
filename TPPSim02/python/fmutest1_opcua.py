from OMPython import OMCSessionZMQ
omc = OMCSessionZMQ()


cmds = ['cd()',
        'cd("../")',
        'loadModel(Modelica)',
        'loadFile("package.mo")',
        'simulate(TPPSim02.FMU_tests.FMU_test1, stopTime=1000.0, simflags="-embeddedServer=opc-ua -embeddedServerPort=4841");getErrorString()']

for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))
