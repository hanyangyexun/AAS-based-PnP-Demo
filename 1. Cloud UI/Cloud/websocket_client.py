#!/usr/bin/env /usr/bin/python3.7

import websocket
import threading
import json
from collections import OrderedDict
import time
import random
from opcua import Client
from opcua import ua
robot1='0'
robot2='0'
client = Client("opc.tcp://192.168.0.178:16664")
client.connect()  
client.load_type_definitions()  
ks='0';kl='0';kg='0';kx='0';ky='0';kz='0';ku='179.984039';kv='-0.044344';kw='-179.984039'
e1s='R';e1l='0';e1g='0';e1x='0';e1y='0';e1z='0';e1u='90.189';e1v='0';e1w='-179.451'
e2s='R';e2l='0';e2g='0';e2x='0';e2y='0';e2z='0';e2u='90.189';e2v='0';e2w='-179.451'
pp='0';pe2='0';pe1='0';pk='0';pa='0'
class SubHandler(object):
    def datachange_notification(self, node, val, data):
        global ks,kl,kg,kx,ky,kz,ku,kv,kw
        global e1s,e1l,e1g,e1x,e1y,e1z,e1u,e1v,e1w
        global e2s,e2l,e2g,e2x,e2y,e2z,e2u,e2v,e2w
        global pp,pe1,pe2,pk,pa
        nodeid=str(node).split('StringNodeId(')[1].split('))')[0]
        print(robot1,robot2)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors"):
         ks=str(val) 
#         print("ks",ks)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light"):
         kl=str(val) 
#         print("kl",kl)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper"):
         kg=str(val) 
#         print("kg",kg)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX"):
         kx=str(val) 
#         print("kx",kx)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY"):
         ky=str(val)
#         print("ky",ky)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ"):
         kz=str(val)
#         print("kz",kz)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA"):
         ku=str(val)
#         print("ku",ku)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB"):
         kv=str(val)
#         print("kv",kv)
        if(nodeid == "ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC"):
         kw=str(val)
#         print("kw",kw)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors"):
         e1s=str(val) 
#         print("e1s",e1s)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light"):
         e1l=str(val) 
#         print("e1l",e1l)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper"):
         e1g=str(val) 
#         print("e1g",e1g)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX"):
         e1x=str(val) 
#         print("e1x",e1x)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY"):
         e1y=str(val)
#         print("e1y",e1y)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ"):
         e1z=str(val)
#         print("e1z",e1z)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU"):
         e1u=str(val)
#         print("e1u",e1u)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV"):
         e1v=str(val)
#         print("e1v",e1v)
        if(nodeid == "ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW"):
         e1w=str(val)
#         print("e1w",e1w)

        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors"):
         e2s=str(val) 
#         print("e2s",e2s)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light"):
         e2l=str(val) 
#         print("e2l",e2l)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper"):
         e2g=str(val) 
#         print("e2g",e2g)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX"):
         e2x=str(val) 
#         print("e2x",e2x)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY"):
         e2y=str(val)
#         print("e2y",e2y)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ"):
         e2z=str(val)
#         print("e2z",e2z)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"):
         e2u=str(val)
#         print("e2u",e2u)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"):
         e2v=str(val)
#         print("e2v",e2v)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionW"):
         e2w=str(val)
#         print("e2w",e2w)

        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU"):
         e2u=str(val)
#         print("e2u",e2u)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV"):
         e2v=str(val)
#         print("e2v",e2v)
        if(nodeid == "ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionW"):
         e2w=str(val)
#         print("e2w",e2w)

        if(nodeid == "ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka"):
         pk=str(val)
        if(nodeid == "ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1"):
         pe1=str(val)
        if(nodeid == "ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2"):
         pe2=str(val)
        if(nodeid == "ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start"):
         pa=str(val)
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka").get_value()=="1"):
#              message["PLC_TURNTABLE"]["Kuka"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["Kuka"] = "1" 
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1").get_value()=="1"):
#              message["PLC_TURNTABLE"]["EPSON_C4"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["EPSON_C4"] = "1" 
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2").get_value()=="1"):
#              message["PLC_TURNTABLE"]["EPSON_SCARA"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["EPSON_SCARA"] = "1" 
#            if(message["PLC_TURNTABLE"]["Kuka"]=="0" and message["PLC_TURNTABLE"]["EPSON_C4"]=="0" and message["PLC_TURNTABLE"]["EPSON_SCARA"]=="0"):
#              message["PLC_TURNTABLE"]["PLC"] = "1"
#            else:
#              message["PLC_TURNTABLE"]["PLC"] = "0" 


        message = OrderedDict()
        message.clear()
        message["MSG_TYPE"] = "MONITOR"
        message["ROBOT1"] = robot1
        message["ROBOT2"] = robot2
        message["Kuka_K3"] = {}
        message["Kuka_K3"]["ObjectType"] = "KUKA_Robot"
        message["Kuka_K3"]["SensorLR_Running_State"] = ks
        message["Kuka_K3"]["Indicator_Light_State"]=kl
        message["Kuka_K3"]["Gripper_State"]=kg
        message["Kuka_K3"]["X_Data"] =kx
        message["Kuka_K3"]["Y_Data"] =ky
        message["Kuka_K3"]["Z_Data"] =kz
        message["Kuka_K3"]["U_Data"] =ku
        message["Kuka_K3"]["V_Data"] =kv
        message["Kuka_K3"]["W_Data"] =kw
        message["EPSON_C4"] = {}
        message["EPSON_C4"]["ObjectType"] = "EPSON_Robot"
        message["EPSON_C4"]["SensorLR_Running_State"] = e1s.split('R')[1]
        message["EPSON_C4"]["Indicator_Light_State"]=e1l
        message["EPSON_C4"]["Gripper_State"]=e1g
        message["EPSON_C4"]["X_Data"] =e1x
        message["EPSON_C4"]["Y_Data"] =e1y
        message["EPSON_C4"]["Z_Data"] =e1z
        message["EPSON_C4"]["U_Data"] =e1u
        message["EPSON_C4"]["V_Data"] =e1v
        message["EPSON_C4"]["W_Data"] =e1w

        message["EPSON_SCARA"] = {}
        message["EPSON_SCARA"]["ObjectType"] = "EPSON_Robot"
        message["EPSON_SCARA"]["SensorLR_Running_State"] = e2s.split('R')[1]
        message["EPSON_SCARA"]["Indicator_Light_State"]=e2l
        message["EPSON_SCARA"]["Gripper_State"]=e2g
        message["EPSON_SCARA"]["X_Data"] =e2x
        message["EPSON_SCARA"]["Y_Data"] =e2y
        message["EPSON_SCARA"]["Z_Data"] =e2z
        message["EPSON_SCARA"]["U_Data"] ='0'
        message["EPSON_SCARA"]["V_Data"] ='0'

        message["PLC_TURNTABLE"] = {}
        if(pk=='1'):
         message["PLC_TURNTABLE"]["Kuka"] = "0"
        else:
         message["PLC_TURNTABLE"]["Kuka"] = "1"
        if(pe1=='1'):
         message["PLC_TURNTABLE"]["EPSON_C4"] = "0"
        else:
         message["PLC_TURNTABLE"]["EPSON_C4"] = "1"
        if(pe2=='1'):
         message["PLC_TURNTABLE"]["EPSON_SCARA"] = "0"
        else:
         message["PLC_TURNTABLE"]["EPSON_SCARA"] = "1"
        if(pk=='1' and pe1=='1' and pe2=='1'):
         message["PLC_TURNTABLE"]["PLC"] = "1"
        else:
         message["PLC_TURNTABLE"]["PLC"] = "0"
        if(pa=='S1'):
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "180"
         message["Kuka_K3"]["Indicator_Light_State"] ="3CGO"
        elif(pa=='S2' and not (pe2=='1')):
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "90"
        elif(pa=='S2' and not (pk=='1')):
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "270"
         message["Kuka_K3"]["Indicator_Light_State"] ="3CGO"
        elif(pa=='S3'and not (pe1=='1')):
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "90"
         message["Kuka_K3"]["Indicator_Light_State"] ="red"
        elif(pa=='S3'and not (pe2=='1')):
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "270"
         message["Kuka_K3"]["Indicator_Light_State"] ="red"
        elif(pa=='T1' or pa=='T2' or pa=='T3') :
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "home"
        else:
         message["PLC_TURNTABLE"]["PLC_ANGLE"] = "operating"
          # print("message",message)
        if(pa=='S2'):
         message["Kuka_K3"]["Indicator_Light_State"] ="3CGO"
        elif (pa=='T1' or pa=='T2' or pa=='T3'):
         message["Kuka_K3"]["Indicator_Light_State"] ="3CYO"
        elif (pa =='S3'):
         message["Kuka_K3"]["Indicator_Light_State"] ="3CRO"
        ws.send(json.dumps(message, ensure_ascii=False, indent="\t"))

def on_message(ws, message):
    global robot1,robot2
    m = json.loads(message)
    if(m["MSG_TYPE"]=="CONTROL"):
      if(m["Comand"]=="Init_Start" or m["Comand"]=="PnP_Start"):
       robot1=(m["Data1"])
       robot2=(m["Data2"])
       if(robot1=="KUKA" and robot2=="EPSON1" or robot1=="EPSON1" and robot2=="KUKA"):
           print("robot1",robot1)
           print("robot2",robot2)
           client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start").set_value("S1")
           print("111111")
           client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand").set_value("S1")
           print("222222")
           client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand").set_value("S1")
           print("333333")
           client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand").set_value("S1")
           print("444444")
       if(robot1=="KUKA" and robot2=="EPSON2" or robot1=="EPSON2" and robot2=="KUKA"):
           client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start").set_value("S2")
           client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand").set_value("S2")
           client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand").set_value("S2")
           client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand").set_value("S2")
       if(robot1=="EPSON2" and robot2=="EPSON1" or robot1=="EPSON1" and robot2=="EPSON2"):
           client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start").set_value("S3")
           client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand").set_value("S3")
           client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand").set_value("S3")
           client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand").set_value("S3")
      if(m["Comand"]=="PnP_Ready" or m["Comand"]=="Init_Ready"):
       client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.StartCommand").set_value("T1")
       client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.StartCommand").set_value("T1")
       client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.StartCommand").set_value("T1")
       client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start").set_value("T1")

def on_error(ws, error):
    print(error)

def on_close(ws):
    print("### closed ###")

def on_open(ws):
    global robot1,robot2
    print("### opend ###")
    kuka_s=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_sensors")
    kuka_l=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light")
    kuka_g=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper")
    kuka_x=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX")
    kuka_y=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY")
    kuka_z=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ")
    kuka_u=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA")
    kuka_v=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB")
    kuka_w=client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC")

    epson1_s=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors")
    epson1_l=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light")
    epson1_g=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper")
    epson1_x=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX")
    epson1_y=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY")
    epson1_z=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ")
    epson1_u=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU")
    epson1_v=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV")
    epson1_w=client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW")

    epson2_s=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors")
    epson2_l=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light")
    epson2_g=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper")
    epson2_x=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX")
    epson2_y=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY")
    epson2_z=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ")
    epson2_u=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionU")
    epson2_v=client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV")

    plc_kuka=client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka")
    plc_epson1=client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1")
    plc_epson2=client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2")
    plc_angle=client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.PLC_Start")

    handler = SubHandler()
    sub = client.create_subscription(500, handler)
    handle = sub.subscribe_data_change(plc_angle)
    handle = sub.subscribe_data_change(plc_kuka)
    handle = sub.subscribe_data_change(plc_epson1)
    handle = sub.subscribe_data_change(plc_epson2)
    handle = sub.subscribe_data_change(epson2_s)
    handle = sub.subscribe_data_change(epson2_l)
    handle = sub.subscribe_data_change(epson2_g)
    handle = sub.subscribe_data_change(epson2_x)
    handle = sub.subscribe_data_change(epson2_y)
    handle = sub.subscribe_data_change(epson2_z)
    handle = sub.subscribe_data_change(epson2_u)
    handle = sub.subscribe_data_change(epson2_v)
    handle = sub.subscribe_data_change(epson1_s)
    handle = sub.subscribe_data_change(epson1_l)
    handle = sub.subscribe_data_change(epson1_g)
    handle = sub.subscribe_data_change(epson1_x)
    handle = sub.subscribe_data_change(epson1_y)
    handle = sub.subscribe_data_change(epson1_z)
    handle = sub.subscribe_data_change(epson1_u)
    handle = sub.subscribe_data_change(epson1_v)
    handle = sub.subscribe_data_change(epson1_w)
    handle = sub.subscribe_data_change(kuka_s)
    handle = sub.subscribe_data_change(kuka_l)
    handle = sub.subscribe_data_change(kuka_g)
    handle = sub.subscribe_data_change(kuka_x)
    handle = sub.subscribe_data_change(kuka_y)
    handle = sub.subscribe_data_change(kuka_z)
    handle = sub.subscribe_data_change(kuka_u)
    handle = sub.subscribe_data_change(kuka_v)
    handle = sub.subscribe_data_change(kuka_w)


    def run(*args):
#        message = OrderedDict()
        while True:
  #       print("aaaa")
#            message.clear()
#            message["MSG_TYPE"] = "MONITOR"
#            message["ROBOT1"] = robot1
#            message["ROBOT2"] = robot2
#            message["Kuka_K3"] = {}
#            message["Kuka_K3"]["ObjectType"] = "KUKA_Robot"
#            message["Kuka_K3"]["SensorLR_Running_State"] = 'b'
#            message["Kuka_K3"]["Indicator_Light_State"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_light").get_value()
#            message["Kuka_K3"]["Gripper_State"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.kuka_gripper").get_value()
#            message["Kuka_K3"]["X_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionX").get_value()
#            message["Kuka_K3"]["Y_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionY").get_value()
#            message["Kuka_K3"]["Z_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionZ").get_value()
#            message["Kuka_K3"]["U_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionA").get_value()
#            message["Kuka_K3"]["V_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionB").get_value()
#            message["Kuka_K3"]["W_Data"] = client.get_node("ns=1;s=65b425fa-0bdb-496e-a1ae-28171cea1fcd.PositionC").get_value()
#            print("Kuka_K3",kuka_x.get_value)
##            print("Kuka_K3")
#            print("Kuka_K3")
#            print("Kuka_K3")
#            print("Kuka_K3")

#            print("Kuka_K3",message["Kuka_K3"]["X_Data"])
#            print("Kuka_K3",message["Kuka_K3"]["Y_Data"])
#            print("Kuka_K3",message["Kuka_K3"]["Z_Data"])
#            print("Kuka_K3",message["Kuka_K3"]["U_Data"])
#            print("Kuka_K3",message["Kuka_K3"]["V_Data"])

#            message["EPSON_C4"] = {}
#            message["EPSON_C4"]["ObjectType"] = "EPSON_Robot"
#            message["EPSON_C4"]["SensorLR_Running_State"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_sensors").get_value().split('R')[1]
#            message["EPSON_C4"]["Indicator_Light_State"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light").get_value()

#            if(message["EPSON_C4"]["Indicator_Light_State"]!= '0'):
#                if(client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light").get_value()[2]=="G"):
#                  message["EPSON_C4"]["Indicator_Light_State"] ="green"
#                if(client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light").get_value()[2]=="R"):
#                  message["EPSON_C4"]["Indicator_Light_State"] ="red"
#                if(client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_light").get_value()[2]=="Y"):
#                  message["EPSON_C4"]["Indicator_Light_State"] ="yellow"
#                print("EPSON_C4",message["EPSON_C4"]["Indicator_Light_State"][2])
#            message["EPSON_C4"]["Gripper_State"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.epson1_gripper").get_value()
#            message["EPSON_C4"]["X_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionX").get_value()
#            message["EPSON_C4"]["Y_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionY").get_value()
#            message["EPSON_C4"]["Z_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionZ").get_value()
#            message["EPSON_C4"]["U_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionU").get_value()
#            message["EPSON_C4"]["V_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionV").get_value()
#            message["EPSON_C4"]["W_Data"] = client.get_node("ns=1;s=5edaf471-ae3c-4854-bcc3-a9340f6da7c2.PositionW").get_value()
#            print("EPSON_C4",message["EPSON_C4"]["X_Data"])
#            print("EPSON_C4",message["EPSON_C4"]["Y_Data"])
#            print("EPSON_C4",message["EPSON_C4"]["Z_Data"])
#            print("EPSON_C4",message["EPSON_C4"]["U_Data"])
#            print("EPSON_C4",message["EPSON_C4"]["V_Data"])
#            print("EPSON_C4",message["EPSON_C4"]["W_Data"])
#            message["EPSON_SCARA"] = {}
#            message["EPSON_SCARA"]["ObjectType"] = "EPSON_Robot"
#            message["EPSON_SCARA"]["SensorLR_Running_State"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_sensors").get_value().split('R')[1]
#            message["EPSON_SCARA"]["Indicator_Light_State"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light").get_value()
#            if(message["EPSON_SCARA"]["Indicator_Light_State"]!='0'):
#                if(client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light").get_value()[2]=="G"):
#                  message["EPSON_SCARA"]["Indicator_Light_State"] ="green"
#                if(client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light").get_value()[2]=="R"):
#                  message["EPSON_SCARA"]["Indicator_Light_State"] ="red"
#                if(client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_light").get_value()[2]=="Y"):
#                  message["EPSON_SCARA"]["Indicator_Light_State"] ="yellow"
#                print("EPSON_SCARA",message["EPSON_SCARA"]["Indicator_Light_State"][2])
#            message["EPSON_SCARA"]["Gripper_State"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.epson2_gripper").get_value()
#            message["EPSON_SCARA"]["X_Data"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionX").get_value()
#            message["EPSON_SCARA"]["Y_Data"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionY").get_value()
#            message["EPSON_SCARA"]["Z_Data"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionZ").get_value()
#            message["EPSON_SCARA"]["U_Data"] = '0'
#            message["EPSON_SCARA"]["V_Data"] = client.get_node("ns=1;s=d6a952c0-2c6c-4941-9c13-94177a3566f7.PositionV").get_value()
#            print("EPSON_SCARA",message["EPSON_SCARA"]["X_Data"])
#            print("EPSON_SCARA",message["EPSON_SCARA"]["Y_Data"])
#            print("EPSON_SCARA",message["EPSON_SCARA"]["Z_Data"])
#            print("EPSON_SCARA",message["EPSON_SCARA"]["U_Data"])
#            print("EPSON_SCARA",message["EPSON_SCARA"]["V_Data"])
     #       print("Kuka_K3",message["Kuka_K3"]["Indicator_Light_State"][0])
#            message["PLC_TURNTABLE"] = {}
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_kuka").get_value()=="1"):
#              message["PLC_TURNTABLE"]["Kuka"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["Kuka"] = "1" 
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson1").get_value()=="1"):
#              message["PLC_TURNTABLE"]["EPSON_C4"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["EPSON_C4"] = "1" 
#            if(client.get_node("ns=1;s=0a04cce4-a64a-4566-b916-06a8639d7dcd.table_to_epson2").get_value()=="1"):
#              message["PLC_TURNTABLE"]["EPSON_SCARA"] = "0"
#            else:
#              message["PLC_TURNTABLE"]["EPSON_SCARA"] = "1" 
#            if(message["PLC_TURNTABLE"]["Kuka"]=="0" and message["PLC_TURNTABLE"]["EPSON_C4"]=="0" and message["PLC_TURNTABLE"]["EPSON_SCARA"]=="0"):
#              message["PLC_TURNTABLE"]["PLC"] = "1"
#            else:
#              message["PLC_TURNTABLE"]["PLC"] = "0" 
#            ws.send(json.dumps(message, ensure_ascii=False, indent="\t"))

            time.sleep(0.01)

        #ttime.sleep(0.001)
#        ws.close()
    t = threading.Thread(target=run)
    t.start();

if __name__ == "__main__":
    # websocket.enableTrace(True)
    ws = websocket.WebSocketApp("ws://localhost:9001/",
                              on_open = on_open,
                              on_message = on_message,
                              on_error = on_error,
                              on_close = on_close)
    ws.run_forever()

