#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *logical(char *eredeti[], int N, int M, char *keresett)
{
  int *vissza,i,j,index;
  char *mentett;

  vissza=(int *)calloc(M,sizeof(int));


  for(i=0;i<N*M;i++)
    {
    if(strcmp(eredeti[i],keresett)==0)
    {
      index=i%M;
      vissza[index]=1;
    }

    }

  return vissza;
}