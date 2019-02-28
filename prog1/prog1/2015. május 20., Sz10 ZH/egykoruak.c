#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
  char name[25];
  int year, month, day;
};

int rendez(const void *a, const void *b)
{
  struct person *x = (struct person*)a;
  struct person *y = (struct person*)b;

  if(x->year < y->year) return 1;
  if(x->year > y->year) return -1;

  if(x->month < y->month) return 1;
  if(x->month > y->month) return -1;

  if(x->day < y->day) return 1;
  if(x->day > y->day) return -1;

  return strcmp(x->name,y->name);
}

struct person *foo(char *be, int ev)
{
  struct person tmp,*tomb;
  int i,db;
  FILE *f;

  f=fopen(be,"rb");

  i=0;
  db=0;

  while(fread(&tmp,sizeof(struct person),1,f))
    if(tmp.year==ev) db++;

  tomb=malloc( (db+1)*(sizeof(struct person)));

  rewind(f);

  while(fread(&tmp,sizeof(struct person),1,f))
    if(tmp.year==ev)
      tomb[i++]=tmp;

  qsort(tomb,db,sizeof(struct person),rendez);

  tomb[db].year=-1;

  return tomb;
}