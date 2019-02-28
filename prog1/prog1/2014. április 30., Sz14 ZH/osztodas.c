#include <stdio.h>
#include <stdlib.h>

int *proliferate( int *t, int db, int N )
{
   int *uj, x,i,j;
   int elemszam;


   elemszam=db*N;

   uj=(int*)calloc(elemszam,sizeof(int));

   j=0;

   x=0;
   for(i=0;i<db;i++)
    for(j=i*N;j<elemszam;j++)
        {
        uj[j]=t[i];
        }

    return uj;
}