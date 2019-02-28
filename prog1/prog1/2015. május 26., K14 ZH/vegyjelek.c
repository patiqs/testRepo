#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct atom
{
  char name[30];
  char symbol[3];
  double weight;
};

int rendez(const void *a, const void *b)
{
  struct atom *x = (struct atom*)a;
  struct atom *y = (struct atom*)b;
  
  if(x->weight < y->weight) return 1;
  if(x->weight > y->weight) return -1;


}

struct atom *foo(char *be, double ertek)
{
  FILE *f;
  struct atom tmp,*tomb;
  int i=0,db=0;
  
  
  f=fopen(be,"rb");  

  while(fread(&tmp,sizeof(struct atom),1,f))
    if(tmp.weight>ertek && tmp.symbol[2]=='\0')
      db++;
      
  tomb=malloc( (db+1)*sizeof(struct atom) );
  
  rewind(f);
  
  while(fread(&tmp,sizeof(struct atom),1,f))
    if(tmp.weight>ertek && tmp.symbol[2]=='\0')
      tomb[i++]=tmp;
      
  qsort(tomb,db,sizeof(struct atom),rendez);
  
  strcpy(tomb[db].name,"\0");


  return tomb;
}