from opcua import Client

model = Client ("opc.tcp://localhost:4841")
model.connect()
modelObject = model.get_objects_node()
modelID = modelObject.get_children()

for id, i in enumerate(modelID):
    if id==0:
        print('{}) {} -'.format(id, i.get_browse_name()))
    else:
        print('{}) {} - {}'.format(id, i.get_browse_name(), i.get_value()))

print(modelID[12].get_user_access_level())
modelID[12].set_writable()
modelID[2].set_value(True)

#for id, i in enumerate(modelID):
#    if id==0:
#        print('{}) {} -'.format(id, i.get_browse_name()))
#    else:
#        print('{}) {} - {}'.format(id, i.get_browse_name(), i.get_value()))


print(dir(modelID[1]))
