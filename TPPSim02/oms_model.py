from OMSimulator import OMSimulator

oms = OMSimulator()

oms.setTempDirectory("./temp/")
oms.newModel("model")
oms.addSystem("model.root", oms.system_sc)

# instantiate FMUs
oms.addSubModel("model.root.system1", "PipeChannelFMU_Test.fmu")

# simulation settings
oms.setResultFile("model", "")
oms.setStopTime("model", 700)

oms.instantiate("model")

oms.initialize("model")

print('Start simulation')
for t in range(700):
    oms.stepUntil('model', t)
    print('time: ', str(t))
    print('p_1 = ' + str(oms.getReal('model.root.system1.p_1')))

print('Finish')
