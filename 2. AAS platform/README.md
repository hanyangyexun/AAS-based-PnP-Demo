This folder contains the source code of AAS layer.

This layer contains AASs of the robots and turntable, and these AASs communicate operation data with each other to implement the PnP function.

The AAS layer was implemented as an AAS platform running an AutomationML-OPC UA aggregation server, which also connects with the four underlying field sub-systems (three robots and one turntable) using four integrated OPC UA clients separately.

This aggregation server implements the AAS information model using AutomationML and the AAS communication interface using OPC UA.

The integration  of AutomationML and OPC UA was completed based on the DIN SPEC 16592 using a converting tool from Fraunhofer IOSB.

