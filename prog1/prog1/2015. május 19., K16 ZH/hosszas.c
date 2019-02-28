#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int foo(char *t[], int s, int o)
{
  int i,hossz,ker;

  ker=strlen(t[0]);

  for(i=1;i<s*o;i++)
    {
      hossz=strlen(t[i]);

      if(ker!=hossz) return 0;

    }

  return 1;
}