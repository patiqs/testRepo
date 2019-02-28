#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ora1,perc1,ora2,perc2,osszeg1,osszeg2;

  while(scanf("%d %d %d %d",&ora1,&perc1,&ora2,&perc2)>-1)
  {
  if(ora1==-1) return 0;

  osszeg1=ora1*60+perc1;
  osszeg2=ora2*60+perc2;

  if(osszeg1>osszeg2) printf(">\n");
  if(osszeg1<osszeg2) printf("<\n");
  if(osszeg1==osszeg2) printf("=\n");

  }


  return 0;
}