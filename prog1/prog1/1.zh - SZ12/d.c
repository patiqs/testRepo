#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prim(int a)
{
  int value=1;
  int i;
  if(a<2)
    return 0;
  if(a==2)
    return 1;
  for(i=2;i*i<=a;i++)
  {
    if(a%i==0)
      value=0;
  }
  return value;
}

int main()
{
  int primek,i,eset,szam;
  while(scanf("%d",&eset),eset!=0)
  {
    primek=1;
    for(i=0;i<eset;i++)
    {
      scanf("%d",&szam);
      if(!prim(szam))
	primek=0;
    } 
  if(primek)
    printf("YES\n");
  else
    printf("NO\n");
    
    
    
  }
  
  return EXIT_SUCCESS;
}
