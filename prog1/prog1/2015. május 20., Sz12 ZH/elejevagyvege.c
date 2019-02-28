#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(char *t[], int s, int o)
{
  int i,hossz;

  for(i=0;i<s*o;i++)
  {
    hossz=strlen(t[i]);

    if(t[i][0]!=t[i][hossz-1]) return 0;

  }


  return 1;
}