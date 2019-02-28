#include <stdio.h>
#include <stdlib.h>

int *differences( int *t, int N)
{
  int i;
  int *ujtomb;


  ujtomb=(int*)calloc(N,sizeof(int));

  for(i=0;i<N;i++)
    ujtomb[i]=t[i+1]-t[i];







  return ujtomb;
}