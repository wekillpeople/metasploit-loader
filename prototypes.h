/*
 * prototypes.h
 *
 *  Created on: Jun 24, 2016
 *      Author: r-21-
 */

#ifndef PROTOTYPES_H_
#define PROTOTYPES_H_



typedef int (*PROTO_connect)(
  _In_ SOCKET                s,
  _In_ const struct sockaddr *name,
  _In_ int                   namelen
);

typedef int (*PROTO_recv)(
  _In_  SOCKET s,
  _Out_ char   *buf,
  _In_  int    len,
  _In_  int    flags
);

typedef int (*PROTO_WSAStartup)(
  _In_  WORD      wVersionRequested,
  _Out_ LPWSADATA lpWSAData
);

typedef int (*PROTO_WSACleanup)(void);

typedef int (*PROTO_closesocket)(SOCKET s);

#endif /* PROTOTYPES_H_ */
