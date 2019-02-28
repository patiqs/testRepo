#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct building
{
  char address[50];
  int year, floors;
};

int rendez(const void *a, const void *b)
{
  struct building *x = (struct building*)a;
  struct building *y = (struct building*)b;

  if(x->year < y->year) return 1;
  if(x->year > y->year) return -1;
  if(x->floors < y->floors) return 1;
  if(x->floors > y->floors) return -1;

  return strcmp(x->address,y->address);
}

struct building *foo(char *be, int emelet)
{
  struct building tmp, *tomb;
  int i,db;
  FILE *f;

  f=fopen(be,"rb");
  i=0;
  db=0;

  while(fread(&tmp,sizeof(struct building),1,f))
    if(tmp.floors>emelet)
      db++;

  tomb=malloc( (db+1)*sizeof(struct building));

  rewind(f);

  while(fread(&tmp,sizeof(struct building),1,f))
    if(tmp.floors>emelet)
      tomb[i++]=tmp;

  qsort(tomb,db,sizeof(struct building),rendez);

  tomb[db].floors=-1;

  return tomb;
}