#include <stdio.h>
#include <stdlib.h>

int main()
{
  int elemszam,min,max,esetszam,t,i;

  scanf("%d",&esetszam);

  for(t=0;t<esetszam;t++)
  {
    scanf("%d",&elemszam);

    int T[elemszam];

    for(i=0;i<elemszam;i++)
      scanf("%d",&T[i]);

    min=T[0];
    max=T[0];

    for(i=1;i<elemszam;i++)
      {
        if(max<T[i]) max=T[i];
        if(min>T[i]) min=T[i];
      }

      printf("%d %d\n",min,max);

  }

  return 0;
}