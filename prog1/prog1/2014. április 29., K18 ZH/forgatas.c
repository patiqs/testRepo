#include <stdio.h>
#include <stdlib.h>

int *rotate (int *tomb, int N, int hanyszor)
{
  int *uj,*vissza, i,k,x,db, *darab;


  uj = (int *) calloc (N, sizeof (int));
  vissza= (int*)calloc(N,sizeof(int));
  darab=(int*)calloc(N,sizeof(int));

  for (i = 0; i < N; i++)
    uj[i] = tomb[i];


 k=hanyszor%N;

 db=0;

 if(k!=0)
  {
  for(x=N-k;x<N;x++)
   {
    darab[db]=uj[x];
    db++;
    }

  for(x=0;x<N-1;x++)
   vissza[x]=darab[x];


   for(x=0;x<N-k;x++)
    {
    vissza[db]=tomb[x];
    db++;
    }

  }


  db=0;
  if(k==0)
  {
   for(i=0;i<N;i++)
    {
    vissza[db]=tomb[i];
    db++;
    }
   }



    return vissza;
  }