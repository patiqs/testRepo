#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  char nev[22];
  int osszeg;
  int alltak;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->osszeg < y->osszeg) return -1;
  if(x->osszeg > y->osszeg) return 1;

  return strcmp(x->nev,y->nev);

}

int main()
{
  int index=0,i,db=0;
  char sor[1000],*token;
  ELEM tomb[20];

  while(fgets(sor,1000,stdin))
  {
    token=strtok(sor,":");
    strcpy(tomb[index].nev,token);

    tomb[index].osszeg=0;
    tomb[index].alltak=0;

    while(token=strtok(NULL,","))
    {
      tomb[index].osszeg+=atoi(token);

      if(atoi(token)==1 || atoi(token)==2 || atoi(token)==3) tomb[index].alltak+=1;
    }

    index++;
    db++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
     if(tomb[i].alltak>=3)
        printf("%s (%d)\n",tomb[i].nev,tomb[i].osszeg);

  return 0;
}