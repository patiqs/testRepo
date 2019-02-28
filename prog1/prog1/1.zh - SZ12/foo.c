#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char foo(char *szoveg)
{
  int min;
  int i;
  min=szoveg[0];

  for(i=1;i<strlen(szoveg);i++)
  {
    if(szoveg[i]<min)
      min=szoveg[i];
  }
  
  return min; 
}