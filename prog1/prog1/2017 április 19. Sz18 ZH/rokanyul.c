#include <stdio.h>

int main()
{
  int perc,elony,tomb1[256],tomb2[256],roka=0,nyul=0,x,veg;
  
  scanf("%d %d",&perc,&elony);
  for(x=0;x<perc;x++)
  {
      scanf("%d",&tomb1[x]);
  }
  for(x=0;x<perc;x++)
  {
      scanf("%d",&tomb2[x]);
  }
  nyul = elony;
  for (x=0;x<perc;x++)
  {
    nyul +=tomb1[x];
  }
  for (x=0;x<perc;x++)
  {
    roka +=tomb2[x];
  }  
  if(nyul > roka)
  {
    veg = (nyul-roka);
    printf("%d\n", veg);
    printf("RABBIT\n");
    
  }
  else if(nyul < roka)
  {
    veg = (roka-nyul);
    printf("%d\n", veg);
    printf("FOX\n");
  }
  else
  {
    veg = (roka-nyul);
    printf("%d\n", veg);
    printf("DRAW\n");
  }
  return 0;
}
