// File: calcChecksum.h
//
// Author: Douglas Harms
//
// Description:  function to calculate the 8-bit internet checksum
//
//
#ifndef _CALCCHECKSUM_H
#define _CALCCHECKSUM_H
#include <arpa/inet.h>  // htonl

int calcChecksum (unsigned char *buf,int length)
{
  int sum = 0;
  int i;
  
  // process all bytes in buffer
  for (i=0;i<length;i++) {
    // TODO - add buf[i] to sum, properly handling the carry
  }
  
  // return 1's complement of sum
  
  return htonl( (~sum) & 0xff );
}

#endif
