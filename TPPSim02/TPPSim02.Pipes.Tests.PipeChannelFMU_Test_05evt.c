/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "TPPSim02.Pipes.Tests.PipeChannelFMU_Test_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *TPPSim02_Pipes_Tests_PipeChannelFMU_Test_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < ramp1.startTime",
  "time < ramp1.startTime + ramp1.duration",
  "Source_2.ports[1].h_outflow < $cse50.h or Source_2.ports[1].h_outflow > $cse51.h or channel_1.Channel[1,1].pv > 22064000.0",
  "Sink_2.ports[1].h_outflow < $cse54.h or Sink_2.ports[1].h_outflow > $cse55.h or Sink_2.p > 22064000.0",
  "channel_1.Channel[1,1].D_flow_v >= 0.0",
  "channel_1.Channel[1,2].D_flow_v >= 0.0",
  "channel_1.Channel[1,3].D_flow_v >= 0.0",
  "channel_1.Channel[1,4].D_flow_v >= 0.0",
  "channel_1.Channel[1,5].D_flow_v >= 0.0",
  "channel_2.Channel[1,2].D_flow_v >= 0.0",
  "channel_2.Channel[1,1].D_flow_v >= 0.0",
  "channel_2.Channel[1,3].D_flow_v >= 0.0",
  "channel_2.Channel[1,4].D_flow_v >= 0.0",
  "channel_2.Channel[1,5].D_flow_v >= 0.0",
  "channel_3.Channel[1,1].D_flow_v >= 0.0",
  "channel_3.Channel[1,2].D_flow_v >= 0.0",
  "channel_3.Channel[1,3].D_flow_v >= 0.0",
  "channel_3.Channel[1,4].D_flow_v >= 0.0",
  "channel_3.Channel[1,5].D_flow_v >= 0.0"};
  static const int occurEqs0[] = {1,1256};
  static const int occurEqs1[] = {1,1256};
  static const int occurEqs2[] = {1,1250};
  static const int occurEqs3[] = {1,1242};
  static const int occurEqs4[] = {1,1512};
  static const int occurEqs5[] = {1,1494};
  static const int occurEqs6[] = {1,1494};
  static const int occurEqs7[] = {1,1512};
  static const int occurEqs8[] = {1,1512};
  static const int occurEqs9[] = {1,1512};
  static const int occurEqs10[] = {1,1494};
  static const int occurEqs11[] = {1,1494};
  static const int occurEqs12[] = {1,1512};
  static const int occurEqs13[] = {1,1512};
  static const int occurEqs14[] = {1,1512};
  static const int occurEqs15[] = {1,1494};
  static const int occurEqs16[] = {1,1512};
  static const int occurEqs17[] = {1,1494};
  static const int occurEqs18[] = {1,1494};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1234(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1235(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(DATA* data, threadData_t *threadData);
extern void TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(DATA* data, threadData_t *threadData);

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1174(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1176(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1177(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1178(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1179(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1180(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1181(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1182(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1183(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1184(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1185(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1186(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1187(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1188(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1189(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1190(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1191(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1192(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1193(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1194(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1195(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1197(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1198(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1199(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1200(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1201(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1202(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1203(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1204(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1205(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1206(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1207(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1208(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1209(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1210(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1211(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1212(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1213(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1214(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1215(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1216(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1217(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1218(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1219(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1220(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1221(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1222(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1223(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1224(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1225(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1226(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1227(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1228(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1229(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1230(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1231(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1232(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1233(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1234(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1235(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1237(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1238(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1241(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1249(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1258(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1259(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1260(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1261(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1262(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1263(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1265(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1266(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1267(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1268(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1269(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1270(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1272(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1273(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1274(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1275(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1276(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1277(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1279(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1280(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1281(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1282(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1283(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1284(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1286(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1287(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1288(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1289(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1290(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1295(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1300(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1301(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1302(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1307(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1308(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1309(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1314(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1315(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1316(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1317(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1318(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1320(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1321(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1322(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1324(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1325(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1326(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1327(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1328(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1329(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1331(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1332(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1333(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1334(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1335(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1336(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1338(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1339(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1340(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1341(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1342(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1343(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1345(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1346(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1347(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1348(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1349(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1350(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1352(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1353(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1354(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1355(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1356(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1361(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1366(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1367(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1368(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1373(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1374(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1375(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1380(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1381(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1382(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1383(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1384(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1385(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1386(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1387(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1388(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1389(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1390(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1391(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1392(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1393(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1394(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1395(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1396(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1399(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1410(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1411(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1418(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1419(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1420(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1421(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1422(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1423(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1425(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1426(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1427(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1428(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1429(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1430(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1432(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1433(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1434(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1435(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1436(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1437(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1439(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1440(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1441(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1442(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1443(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1444(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1446(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1447(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1448(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1449(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1450(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1451(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1456(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1461(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1462(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1463(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1468(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1469(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1470(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1475(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1476(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1477(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1478(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1479(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1480(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1481(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1482(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1483(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1484(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1485(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1486(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1487(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1488(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1489(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1490(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1491(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1494(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1505(data, threadData);

  TPPSim02_Pipes_Tests_PipeChannelFMU_Test_eqFunction_1506(data, threadData);
  
  TRACE_POP
  return 0;
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp742;
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  modelica_boolean tmp747;
  modelica_boolean tmp748;
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  modelica_boolean tmp753;
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  modelica_boolean tmp756;
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  modelica_boolean tmp761;
  modelica_boolean tmp762;
  modelica_boolean tmp763;
  modelica_boolean tmp764;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp742 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp742) ? 1 : -1;
  tmp743 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp743) ? 1 : -1;
  tmp744 = LessZC(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[434] /* $cse50.h variable */, data->simulationInfo->storedRelations[2]);
  tmp745 = GreaterZC(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[446] /* $cse51.h variable */, data->simulationInfo->storedRelations[3]);
  tmp746 = GreaterZC(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, 22064000.0, data->simulationInfo->storedRelations[4]);
  gout[2] = (((tmp744 || tmp745) || tmp746)) ? 1 : -1;
  tmp747 = LessZC(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[486] /* $cse54.h variable */, data->simulationInfo->storedRelations[5]);
  tmp748 = GreaterZC(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[498] /* $cse55.h variable */, data->simulationInfo->storedRelations[6]);
  tmp749 = Greater(data->simulationInfo->realParameter[7] /* Sink_2.p PARAM */,22064000.0);
  gout[3] = (((tmp747 || tmp748) || tmp749)) ? 1 : -1;
  tmp750 = GreaterEqZC(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
  gout[4] = (tmp750) ? 1 : -1;
  tmp751 = GreaterEqZC(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[8]);
  gout[5] = (tmp751) ? 1 : -1;
  tmp752 = GreaterEqZC(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[9]);
  gout[6] = (tmp752) ? 1 : -1;
  tmp753 = GreaterEqZC(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[10]);
  gout[7] = (tmp753) ? 1 : -1;
  tmp754 = GreaterEqZC(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[11]);
  gout[8] = (tmp754) ? 1 : -1;
  tmp755 = GreaterEqZC(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[12]);
  gout[9] = (tmp755) ? 1 : -1;
  tmp756 = GreaterEqZC(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[13]);
  gout[10] = (tmp756) ? 1 : -1;
  tmp757 = GreaterEqZC(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[11] = (tmp757) ? 1 : -1;
  tmp758 = GreaterEqZC(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
  gout[12] = (tmp758) ? 1 : -1;
  tmp759 = GreaterEqZC(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[13] = (tmp759) ? 1 : -1;
  tmp760 = GreaterEqZC(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
  gout[14] = (tmp760) ? 1 : -1;
  tmp761 = GreaterEqZC(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[15] = (tmp761) ? 1 : -1;
  tmp762 = GreaterEqZC(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
  gout[16] = (tmp762) ? 1 : -1;
  tmp763 = GreaterEqZC(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[20]);
  gout[17] = (tmp763) ? 1 : -1;
  tmp764 = GreaterEqZC(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
  gout[18] = (tmp764) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *TPPSim02_Pipes_Tests_PipeChannelFMU_Test_relationDescription(int i)
{
  const char *res[] = {"time < ramp1.startTime",
  "time < ramp1.startTime + ramp1.duration",
  "Source_2.ports[1].h_outflow < $cse50.h",
  "Source_2.ports[1].h_outflow > $cse51.h",
  "channel_1.Channel[1,1].pv > 22064000.0",
  "Sink_2.ports[1].h_outflow < $cse54.h",
  "Sink_2.ports[1].h_outflow > $cse55.h",
  "channel_1.Channel[1,1].D_flow_v >= 0.0",
  "channel_1.Channel[1,2].D_flow_v >= 0.0",
  "channel_1.Channel[1,3].D_flow_v >= 0.0",
  "channel_1.Channel[1,4].D_flow_v >= 0.0",
  "channel_1.Channel[1,5].D_flow_v >= 0.0",
  "channel_2.Channel[1,2].D_flow_v >= 0.0",
  "channel_2.Channel[1,1].D_flow_v >= 0.0",
  "channel_2.Channel[1,3].D_flow_v >= 0.0",
  "channel_2.Channel[1,4].D_flow_v >= 0.0",
  "channel_2.Channel[1,5].D_flow_v >= 0.0",
  "channel_3.Channel[1,1].D_flow_v >= 0.0",
  "channel_3.Channel[1,2].D_flow_v >= 0.0",
  "channel_3.Channel[1,3].D_flow_v >= 0.0",
  "channel_3.Channel[1,4].D_flow_v >= 0.0",
  "channel_3.Channel[1,5].D_flow_v >= 0.0"};
  return res[i];
}

int TPPSim02_Pipes_Tests_PipeChannelFMU_Test_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp765;
  modelica_boolean tmp766;
  modelica_boolean tmp767;
  modelica_boolean tmp768;
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  modelica_boolean tmp771;
  modelica_boolean tmp772;
  modelica_boolean tmp773;
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  modelica_boolean tmp777;
  modelica_boolean tmp778;
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  modelica_boolean tmp783;
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  modelica_boolean tmp786;
  
  if(evalforZeroCross) {
    tmp765 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp765;
    tmp766 = LessZC(data->localData[0]->timeValue, data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp766;
    tmp767 = LessZC(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[434] /* $cse50.h variable */, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp767;
    tmp768 = GreaterZC(data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */, data->localData[0]->realVars[446] /* $cse51.h variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp768;
    tmp769 = GreaterZC(data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */, 22064000.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp769;
    tmp770 = LessZC(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[486] /* $cse54.h variable */, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp770;
    tmp771 = GreaterZC(data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */, data->localData[0]->realVars[498] /* $cse55.h variable */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp771;
    tmp772 = GreaterEqZC(data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp772;
    tmp773 = GreaterEqZC(data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp773;
    tmp774 = GreaterEqZC(data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp774;
    tmp775 = GreaterEqZC(data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp775;
    tmp776 = GreaterEqZC(data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp776;
    tmp777 = GreaterEqZC(data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp777;
    tmp778 = GreaterEqZC(data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp778;
    tmp779 = GreaterEqZC(data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp779;
    tmp780 = GreaterEqZC(data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp780;
    tmp781 = GreaterEqZC(data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp781;
    tmp782 = GreaterEqZC(data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp782;
    tmp783 = GreaterEqZC(data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp783;
    tmp784 = GreaterEqZC(data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp784;
    tmp785 = GreaterEqZC(data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp785;
    tmp786 = GreaterEqZC(data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */, 0.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp786;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < data->simulationInfo->realParameter[217] /* ramp1.startTime PARAM */ + data->simulationInfo->realParameter[214] /* ramp1.duration PARAM */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */ < data->localData[0]->realVars[434] /* $cse50.h variable */);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[556] /* Source_2.ports[1].h_outflow variable */ > data->localData[0]->realVars[446] /* $cse51.h variable */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[614] /* channel_1.Channel[1,1].pv DUMMY_STATE */ > 22064000.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */ < data->localData[0]->realVars[486] /* $cse54.h variable */);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[543] /* Sink_2.ports[1].h_outflow variable */ > data->localData[0]->realVars[498] /* $cse55.h variable */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[0] /* channel_1.Channel[1,1].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[1] /* channel_1.Channel[1,2].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[2] /* channel_1.Channel[1,3].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[3] /* channel_1.Channel[1,4].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[4] /* channel_1.Channel[1,5].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[15] /* channel_2.Channel[1,2].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[14] /* channel_2.Channel[1,1].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[16] /* channel_2.Channel[1,3].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[15] = (data->localData[0]->realVars[17] /* channel_2.Channel[1,4].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[18] /* channel_2.Channel[1,5].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[17] = (data->localData[0]->realVars[29] /* channel_3.Channel[1,1].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[30] /* channel_3.Channel[1,2].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[19] = (data->localData[0]->realVars[31] /* channel_3.Channel[1,3].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[32] /* channel_3.Channel[1,4].D_flow_v STATE(1) */ >= 0.0);
    data->simulationInfo->relations[21] = (data->localData[0]->realVars[33] /* channel_3.Channel[1,5].D_flow_v STATE(1) */ >= 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

