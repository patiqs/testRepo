#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct banknote
{
  int value;
  char description[30];
  int amount;
};

int rendez(const void *a,const void *b)
{
  struct banknote *x = (struct banknote*)a;
  struct banknote *y = (struct banknote*)b;

  if(x->value < y->value) return 1;
  if(y->value > y->value) return -1;
  return 0;
}

struct banknote *foo(char *be, int hatar)
{
  int i,db;

  i=0;
  db=0;

  struct banknote tmp,*tomb;

  FILE *f;

  f=fopen(be,"rb");

  while(fread(&tmp,sizeof(struct banknote),1,f))
    if(tmp.value*tmp.amount>hatar)
      db++;

  rewind(f);

  tomb=malloc( (db+1)*sizeof(struct banknote) );

  while(fread(&tmp,sizeof(struct banknote),1,f))
    if(tmp.value*tmp.amount>hatar)
      tomb[i++]=tmp;

  qsort(tomb,db,sizeof(struct banknote),rendez);

  tomb[db].amount=-1;

  return tomb;
}