#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct subject
{
  char name[40];
  int credit;
};

int rendez(const void *a,const void *b)
{
  struct subject *x = (struct subject*)a;
  struct subject *y = (struct subject*)b;

  if(x->credit < y->credit) return 1;
  if(x->credit > y->credit) return -1;

  return strcmp(x->name,y->name);

}

struct subject *foo(char *be, int kredit)
{
  struct subject tmp, *tomb;
  int i,db;
  FILE *f;

  f = fopen(be,"rb");

  db=0;
  i=0;

  while(fread(&tmp,1,sizeof(struct subject),f))
    if(tmp.credit>=kredit) db++;

  tomb=malloc((db+1)*(sizeof(struct subject)));

  rewind(f);

  while(fread(&tmp,1,sizeof(struct subject),f))
    if(tmp.credit>=kredit)
      tomb[i++]=tmp;


  qsort(tomb,db,sizeof(struct subject),rendez);

  strcpy(tomb[db].name,"\0");

  return tomb;
}