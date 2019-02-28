#include <stdio.h>
#include <stdlib.h>

int *antidiagonal( int *eredeti_tomb, int N)
{
  int *vissza,i,*mentett_tomb;

  vissza=(int*)calloc(N,sizeof(int));

  mentett_tomb=(int*)calloc(N*N,sizeof(int));

  for(i=0;i<N*N;i++)
    mentett_tomb[i]=eredeti_tomb[i];


  for(i=0;i<N;i++)
    vissza[i]=mentett_tomb[N-1+i*(N-1)];

  return vissza ;
}