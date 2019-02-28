#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct town
{
  char name[35];
  int zip_code;
};

int rendez(const void *a, const void *b)
{
  struct town *x = (struct town*)a;
  struct town *y = (struct town*)b;

  int diff;

  diff=strcmp(x->name,y->name);

  if(diff!=0) return diff;

  if(x->zip_code < y->zip_code) return -1;
  if(x->zip_code > y->zip_code) return 1;

}

struct town *foo(char *be, int kod)
{
  struct town tmp, *tomb;
  FILE *f;
  int i,db;

  i=0;
  db=0;

  f=fopen(be,"rb");

  while(fread(&tmp,sizeof(struct town),1,f))
    if( (tmp.zip_code/100) ==kod) db++;

  tomb=malloc( (db+1)*sizeof(struct town));

  rewind(f);

  while(fread(&tmp,sizeof(struct town),1,f))
    if( (tmp.zip_code / 100)==kod)
      tomb[i++]=tmp;

  qsort(tomb,db,sizeof(struct town),rendez);

  tomb[db].zip_code = -1;

  return tomb;
}