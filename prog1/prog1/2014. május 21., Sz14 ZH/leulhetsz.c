#include <stdio.h>
#include <stdlib.h>

int *sitdown( int *t, int N)
{
  int *uj,i,j,index;

  uj=(int*)calloc(N,sizeof(int));

  for(i=0;i<N*N;i++)
    {
      if(t[i]==1) index=i/N;
    }

  j=0;
  for(i=index*N;i<index*N+N;i++)
    {
    uj[j] = t[i];
    j++;
    }

  return uj;
}