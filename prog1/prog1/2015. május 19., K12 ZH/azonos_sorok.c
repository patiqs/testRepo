#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(double *t, int s, int o)
{
  int i,osszeg;

  osszeg=0;

  for(i=0;i<o;i++)
    if(t[i]==t[(s-1)*o+i]) osszeg++;


  if(osszeg==o) return 1;


  return 0;
}