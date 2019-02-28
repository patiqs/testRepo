#include <stdio.h>
#include <stdlib.h>

int days_between(int ev,int honap1,int nap1,int honap2,int nap2)
{
  int osszeg1,osszeg2,vissza,i;
  int T[12]={31,28,31,30,31,30,31,31,30,31,30,31};




  if ( ((ev % 4 == 0 && ev %100!=0) || ev % 400 == 0))
        {
                   T[1]++;
        }


  osszeg1=0;
  osszeg2=0;
  vissza=0;



  for(i=0;i<honap1-1;i++)
  {
    if(honap1==1) osszeg1=osszeg1;
    else osszeg1=osszeg1+T[i];
  }



  for(i=0;i<honap2-1;i++)
  {
    if(honap2==1) osszeg2=osszeg2;
    else osszeg2=osszeg2+T[i];
  }


  osszeg1=osszeg1+nap1;
  osszeg2=osszeg2+nap2;

  vissza=0;

  vissza=osszeg2-osszeg1;


  return vissza;
}
