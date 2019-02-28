#include <stdio.h>
#include <stdlib.h>

int foo(int t[], int s, int o)
{
  int i,j,osszeg;

  for(i=0;i<o;i++)
  {
    osszeg=0;

    for(j=0;j<s;j++)
     {
      if(t[j*o+i]%2==0)
        osszeg++;
      }

    if(osszeg==s) return 1;
  }



  return 0;
}