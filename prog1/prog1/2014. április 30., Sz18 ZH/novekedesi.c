#include <stdio.h>
#include <stdlib.h>

int *differences( int *tomb, int elemszam)
{
  int *uj,maximum,i;

  maximum=tomb[0];

  for(i=0;i<elemszam;i++)
  {
    if(tomb[i]>maximum) maximum=tomb[i];
  }

  uj=(int*)calloc(elemszam,sizeof(int));

  for(i=0;i<elemszam;i++)
    uj[i]=maximum-tomb[i];

  return uj;
}