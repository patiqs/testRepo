#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fruit
{
    char name[25];
    int calories;
};

int rendez(const void *a, const void *b)
{
  struct fruit *x = (struct fruit*)a;
  struct fruit *y = (struct fruit*)b;

  if(x->calories < y->calories) return 1;
  if(x->calories > y->calories) return -1;

  return strcmp(x->name,y->name);
}

struct fruit *foo(char *be, int kal1, int kal2)
{
  FILE *f;
  struct fruit *tomb,tmp;
  int i,db;

  i=0;
  db=0;

  f = fopen(be,"rb");

  while(fread(&tmp,sizeof(struct fruit),1,f))
    if( (kal1<=tmp.calories) && (tmp.calories<=kal2) )
      db++;

  tomb=malloc( (db+1)*(sizeof(struct fruit)) );

  rewind(f);

  while(fread(&tmp,sizeof(struct fruit),1,f))
    if( (kal1<=tmp.calories) && (tmp.calories<=kal2) )
      tomb[i++]=tmp;

  qsort(tomb,db,sizeof(struct fruit),rendez);

  strcpy(tomb[db].name,"\0");


  fclose(f);

  return tomb;
}