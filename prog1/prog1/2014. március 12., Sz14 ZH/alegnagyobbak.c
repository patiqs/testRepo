#include <stdio.h>

int main()
{
  int N, i,max , jelenlegi, maxdb;

  while(scanf("%d",&N)>-1 && N!=0)
  {
  scanf("%d",&max);
  maxdb=1;

  for(i=0;i<N-1;i++)
  {
    scanf("%d",&jelenlegi);

    if(max==jelenlegi) maxdb++;

    if(max<jelenlegi)
    {
      max=jelenlegi;
      maxdb=1;
    }


  }

  printf("%d\n",maxdb);

  }
  return 0;
}