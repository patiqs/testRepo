#include <stdio.h>

int main()
{
  int i,nap,honap,osszeg;
  int T[12]={31,28,31,30,31,30,31,31,30,31,30,31};

  while(scanf("%d.%d.",&honap,&nap)>-1 && (honap!=00 && nap!=00))
  {
    osszeg=0;

    for(i=0;i<honap-1;i++)
    {
      if(honap==1) osszeg=osszeg;

    else osszeg= osszeg+T[i];

    }

    osszeg=osszeg+nap;

    if(osszeg%7==0) printf("Sunday\n");
    if(osszeg%7==1) printf("Monday\n");
    if(osszeg%7==2) printf("Tuesday\n");
    if(osszeg%7==3) printf("Wednesday\n");
    if(osszeg%7==4) printf("Thursday\n");
    if(osszeg%7==5) printf("Friday\n");
    if(osszeg%7==6) printf("Saturday\n");

  }



  return 0;
}