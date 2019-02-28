#include <stdio.h>
#include <stdlib.h>

double *average( double t[], int N, int M)
{
 double *vissza;
 int i;

 vissza=(double*)calloc(M,sizeof(double));

 for(i=0;i<N*M;i++)
 {
  vissza[i%M]+=t[i];
 }

 for(i=0;i<M;i++)
 {
  vissza[i]/=N;
 }

 return vissza;
}