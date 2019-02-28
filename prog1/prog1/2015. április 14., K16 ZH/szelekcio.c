#include <stdio.h>
#include <stdlib.h>

int main()
{
  int elemszam,esetszam,min,mindb,t,i;

  scanf("%d",&esetszam);

  for(t=0;t<esetszam;t++)
  {
    scanf("%d",&elemszam);

    int T[elemszam];

    for(i=0;i<elemszam;i++)
      scanf("%d",&T[i]);

    min=T[0];
    mindb=0;

    for(i=1;i<elemszam;i++)
      if(T[i]<min) min=T[i];

    for(i=0;i<elemszam;i++)
      if(min==T[i]) mindb++;

    int vissza[elemszam-mindb],index=0;

    for(i=0;i<elemszam;i++)
    {
      if(T[i]!=min) vissza[index++]=T[i];
    }

    for(i=0;i<index;i++)
     {
     if(i!=index-1) printf("%d ",vissza[i]);
     if(i==index-1) printf("%d",vissza[i]);
    }

    printf("\n");
  }


  return 0;
}