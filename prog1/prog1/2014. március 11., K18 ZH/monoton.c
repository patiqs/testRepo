#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T[1000];
  int elso,ertek,maxmonoton,monoton;

  scanf("%d",&elso);
  monoton=1;
  maxmonoton=0;

  while(scanf("%d",&ertek)>-1)
  {
    if(ertek>=elso)
    {
    monoton++;
    elso=ertek;
    }

    if(ertek<elso)
    {
    elso=ertek;
    monoton=1;
    }

    if(maxmonoton<monoton) maxmonoton=monoton;
  }

  printf("%d\n",maxmonoton);

  return 0;
}