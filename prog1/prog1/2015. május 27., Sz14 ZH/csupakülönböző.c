#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int foo(char *t[], int s, int o)
{
  int i,j,egyezes=0;

  for(j=0;j<s*o;j++)
  {
  for(i=0;i<s*o;i++)
    if(strcmp(t[i],t[j])==0) egyezes++;
  }

  if(egyezes==s*o) return 1;

  return 0;
}