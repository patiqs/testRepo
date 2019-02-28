#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    char name[30];
    int age;
};

int rendez(const void *a, const void *b)
{
  struct person *x = (struct person*)a;
  struct person *y = (struct person*)b;

  if(x->age < y->age) return 1;
  if(x->age > y->age) return -1;

  return strcmp(x->name,y->name);
}

struct person *foo(char *megnyit, int eletkor)
{
  struct person tmp, *tomb;

  FILE *f;
  int i,db;

  f=fopen(megnyit,"rb");

  i=0;
  db=0;

  while(fread(&tmp,sizeof(struct person),1,f))
    if(tmp.age<=eletkor) db++;

  tomb=malloc((db+1)*(sizeof(struct person)));

  rewind(f);

  while(fread(&tmp,sizeof(struct person),1,f))
    if(tmp.age<=eletkor)
      tomb[i++] =tmp;

  qsort(tomb,db,sizeof(struct person),rendez);

  strcpy(tomb[db].name,"\0");

  return tomb;
}