#include <stdio.h>
#include <stdlib.h>


int main()
{
  int elemszam,teszt,rossz,jo,t,i;

  scanf("%d",&teszt);

  for(t=0;t<teszt;t++)
  {
    scanf("%d",&elemszam);

    int tomb[elemszam];

    for(i=0;i<elemszam;i++)
      scanf("%d",&tomb[i]);

    jo=0;


  if(tomb[0]<=tomb[elemszam-1])
    for(i=1;i<elemszam-1;i++)
      if( (tomb[0]<=tomb[i]) && (tomb[i]<=tomb[elemszam-1]) ) jo++;

  if(tomb[0]>=tomb[elemszam-1])
    for(i=1;i<elemszam-1;i++)
      if( (tomb[0]>=tomb[i]) && (tomb[i]>=tomb[elemszam-1]) ) jo++;

  if(jo+2==elemszam) printf("YES\n");
  else printf("NO\n");

  }

  return 0;
}