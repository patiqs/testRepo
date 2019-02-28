#include <stdlib.h>


int *bounds( int *t, int elemszam)
{
  int *vissza,min,max,i;

  min=t[0];
  max=t[0];

  for(i=1;i<elemszam;i++)
  {
    if(t[i]>max) max=t[i];
    if(t[i]<min) min=t[i];
  }

  vissza=(int*)calloc(2,sizeof(int));

  vissza[0]=min;
  vissza[1]=max;

  return vissza;

}