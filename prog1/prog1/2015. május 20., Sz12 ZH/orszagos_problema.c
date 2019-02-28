#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct country
{
  char name[30];
  int area;
  int population;
};

int rendez(const void *a, const void *b)
{
  struct country *x = (struct country*)a;
  struct country *y = (struct country*)b;

  if(x->area < y->area) return 1;
  if(x->area > y->area) return -1;

  return strcmp(x->name, y->name);
}

struct country *foo(char *be,int szamlalo, int nevezo)
{
  struct country tmp, *tomb;
  int index,db;
  FILE *f;
  double rac,rac2;

  f=fopen(be,"rb");

  rac = (double)szamlalo / (double)nevezo;

  db=0;

  while(fread(&tmp,sizeof(struct country),1,f))
  {
    rac2 = (double)tmp.population / (double)tmp.area;
    if( rac2 > rac )
      db++;
   }
  tomb=malloc( (db+1)*(sizeof(struct country)));

  index=0;
  rewind(f);

  while(fread(&tmp,sizeof(struct country),1,f))
  {
    rac2 = (double)tmp.population / (double)tmp.area;
    if ( rac2 > rac )
      tomb[index++]=tmp;
   }
  qsort(tomb,db,sizeof(struct country),rendez);

  tomb[db].area = -1;

  return tomb;
}