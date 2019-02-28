#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *delete( char *str, int x, int y)
{
  char *vissza;

  int hossz=strlen(str);

  vissza=(char*)calloc(hossz,sizeof(char));

  int i;
  int index=0;

  if(x<=y)
  {
    for(i=0;i<x;i++)
  {
    vissza[index++]=str[i];
  }
  for(i=y+1;i<hossz;i++)
  {
    vissza[index++]=str[i];
  }
  }

  else {

    for(i=0;i<x;i++)
    vissza[index++]=str[i];

  }

  vissza[strlen(vissza)]='\0';

  return vissza;
}