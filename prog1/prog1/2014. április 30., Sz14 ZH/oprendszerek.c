#include <stdio.h>
#include <stdlib.h>

typedef struct operacios{
  char osnev[25];
  int felhasz;
}op;

int rendez(const void *a, const void *b)
{
  op *x = (op*)a;
  op *y = (op*)b;

  if(x->felhasz < y->felhasz) return 1;
  if(x->felhasz > y->felhasz) return -1;

  return strcmp(x->osnev, y->osnev);
}

int main()
{
 struct operacios oprendszerek[1000];
 int i,db;

 db=0;
 i=0;
 while(scanf("%s %d",oprendszerek[i].osnev, &oprendszerek[i].felhasz)>-1)
 {
   i++;
   db++;
 }

 qsort(oprendszerek, db, sizeof(struct operacios),rendez);

 for(i=0;i<db;i++)
   if(oprendszerek[i].felhasz>=10000) printf("%s %d\n",oprendszerek[i].osnev, oprendszerek[i].felhasz);

  return 0;
}