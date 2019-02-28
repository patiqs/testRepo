#include <stdio.h>
#include <stdlib.h>

int foo(int *t, int s, int o)
{
  int i,j,osszeg;

  osszeg=0;
  
  if(s!=o) return 0;  

  for(i=0;i<s;i++)
    {
      for(j=0;j<o;j++)
        if(t[i*o+j]==t[j*s+i]) osszeg++;

    }

  if(osszeg==(s*o)) return 1;

  return 0;
}