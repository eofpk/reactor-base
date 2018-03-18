#ifndef DIAGNOSTICS_SERVER_H
#define DIAGNOSTICS_SERVER_H

/* An opaque, incomplete type for the FIRST-CLASS ADT. */
typedef struct DiagnosticsServer* DiagnosticsServerPtr;

/**
* Creates a server listening for connect requests on the given port.
* The server registers itself at the Reactor upon creation.
*/
DiagnosticsServerPtr createServer(unsigned int tcpPort);

/**
* Unregisters at the Reactor and deletes all connected clients 
* before the server itself is disposed.
* After completion of this function, the server-handle is invalid.
*/
void destroyServer(DiagnosticsServerPtr server);

#endif
