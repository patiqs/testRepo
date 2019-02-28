#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char **foo(char **tomb, int N)
{
  char **vissza;
  int nagy=0,szum=0,i,j,index=0;

  for(i=0;i<N;i++)
  {
    nagy=0;

    for(j=0;j<strlen(tomb[i]);j++)
    {
      if(isupper(tomb[i][j])) nagy++;
    }
    if(nagy==strlen(tomb[i])) szum++;
  }

  vissza=(char**)calloc((szum+1),sizeof(char*));

  for(i=0;i<N;i++)
  {
    nagy=0;

    for(j=0;j<strlen(tomb[i]);j++)
    {
      if(isupper(tomb[i][j])) nagy++;
    }

  if(nagy==strlen(tomb[i]))
  {
    vissza[index++]=tomb[i];
  }

  }

  vissza[index]=NULL;

  return vissza;
}