#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int foo(char *t[], int s,int o)
{
  int i,j,osszeg;
  char keres;

  keres=t[0][0];
  osszeg=0;

  for(i=0;i<s;i++)
    for(j=0;j<o;j++)
        if(t[i*o+j][0]==keres) osszeg++;

      if(osszeg==s*o) return 1;

  return 0;
}