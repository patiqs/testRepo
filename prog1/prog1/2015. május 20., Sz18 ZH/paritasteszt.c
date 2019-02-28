#include <stdio.h>
#include <stdlib.h>

int foo(int t[], int s, int o)
{
  int i,j,osszeg;

  for(i=0;i<s;i++)
    {
    osszeg=0;

    for(j=0;j<o;j++)
      {
      if(t[i*o+j]%2!=0) osszeg++;

      if(osszeg==o) return 1;
      }
  }
  return 0;
}