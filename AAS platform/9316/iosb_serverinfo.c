/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "iosb_serverinfo.h"

void set_serverUrl(UA_ServerConfig *serverConfig) {
	serverConfig->applicationDescription.productUri = UA_STRING("https://aml2ua.iosb.fraunhofer.de");
	serverConfig->applicationDescription.applicationUri = UA_STRING("http://www.iosb.fraunhofer.de/pnpserver.aml");
	serverConfig->applicationDescription.applicationName = UA_LOCALIZEDTEXT("en", "AML2UA - Fraunhofer IOSB providing pnpserver.aml");
	serverConfig->buildInfo.manufacturerName = UA_STRING("open62541 - Fraunhofer IOSB");
}

