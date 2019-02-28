#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct car
{
  char type[30];
  int max_speed;
  char fuel;
};

int rendez(const void *a,const void *b)
{
  struct car *x = (struct car*)a;
  struct car *y = (struct car*)b;

  if(x->max_speed < y->max_speed) return 1;
  if(x->max_speed > y->max_speed) return -1;

  return strcmp(x->type,y->type);
}

struct car *foo(char *nev, int seb)
{
  FILE *f;
  struct car tmp;
  struct car *tomb;
  int i,db;

  f = fopen(nev,"rb");

  i=0;
  db=0;

  while(fread(&tmp,sizeof(struct car),1,f))
    if(tmp.fuel=='B' && tmp.max_speed>seb)
      db++;

  tomb=malloc( (db+1)*sizeof(struct car));

  rewind(f);

  while(fread(&tmp,sizeof(struct car),1,f))
    if(tmp.fuel=='B' && tmp.max_speed>seb)
      tomb[i++]=tmp;

   qsort(tomb,db,sizeof(struct car),rendez);

   tomb[db].max_speed = -1;

  return tomb;
}