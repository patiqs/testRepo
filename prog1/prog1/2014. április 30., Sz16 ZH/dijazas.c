#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int rendez(const void *a, const void *b)
{
  int *ia=(int *)a;
  int *ib=(int *)b;
  int osszehasonlitas=0;

  osszehasonlitas++;
  if(*ia<*ib) return 1;
  if(*ia==*ib) return 0;

  return -1;
}

int main()
{
  char sor[305], *token;
  int tomb[300], elemszam,i,max,talalt_max;

  while(fgets(sor,305,stdin))
  {
    token=strtok(sor,"|");

    elemszam=0;

    while(token=strtok(NULL,"|"))
    {
      tomb[elemszam]=atoi(token);
      elemszam++;
    }

  qsort(tomb,elemszam,sizeof(int),rendez);

  max=tomb[0];
  talalt_max=1;

  for(i=0;i<elemszam;i++)
    if(tomb[i]<max && talalt_max<3)
      {
      max=tomb[i];
      talalt_max++;
      }

  if(elemszam==1 || elemszam==2) max=0;

  printf("%d\n",max);

  }

  return 0;
}