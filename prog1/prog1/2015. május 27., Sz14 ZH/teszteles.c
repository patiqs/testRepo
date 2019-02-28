#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char nev[32];
  int elert;
  int elerheto;
  int otven;
  float atlag;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->atlag < y->atlag) return -1;
  if(x->atlag > y->atlag) return 1;

  return strcmp(x->nev,y->nev);

}

int main()
{
  int index=0,db=0,i;
  char sor[1000],*token;
  ELEM tomb[20];

  while(fgets(sor,1000,stdin))
  {
    token=strtok(sor,":");
    strcpy(tomb[index].nev,token);

    tomb[index].elert=0;
    tomb[index].elerheto=0;

    while(token=strtok(NULL,"/"))
    {
      tomb[index].elert+=atoi(token);

      token=strtok(NULL,",");

      tomb[index].elerheto+=atoi(token);
    }
    if(tomb[index].elerheto/2 <= tomb[index].elert)
      tomb[index].otven=1;

      tomb[index].atlag=(float)tomb[index].elerheto/(float)tomb[index].elert;

  db++;
  index++;
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    if(tomb[i].otven==1)
      printf("%s (%d/%d)\n",tomb[i].nev,tomb[i].elert,tomb[i].elerheto,tomb[i].atlag);

  return 0;
}