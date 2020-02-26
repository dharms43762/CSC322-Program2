// File: receiver.c

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "ABP.h"
#include "unreliableSend.h"

#define MAX_LINE 5
#define MAX_PENDING 5
#define SERVER_PORT 50000
int main (int argc, char *argv[]) {
  char buf[MAX_LINE];
  int len;

  // intialize reveiver
  if(ABP_recvInit(SERVER_PORT)<0)
    printf ("recvinit failed\n");

  // set failure probability for acks
  US_SetFailureProb (0);

  // wait for message  and print text
  while (1) {
    ABP_recv (buf,&len);
    printf ("packet received:%s\n",buf);
  }
}

