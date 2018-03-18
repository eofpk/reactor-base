#ifndef TCP_SERVER_H
#define TCP_SERVER_H

int createServerSocket(unsigned int tcpPort);

void disposeServerSocket(int serverSocket);

#endif
