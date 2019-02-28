#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct entry
{
  char name[40];
  char phone[10];
};

int rendez(const void *a, const void *b)
{
  struct entry *x = (struct entry*)a;
  struct entry *y = (struct entry*)b;

  return strcmp(y->phone,x->phone);

}

struct entry *foo(char *be, int szam)
{
  struct entry atmeneti,*tomb;
  int db=0,i=0;
  FILE *f;
  char x,y;


  f=fopen(be,"rb");

  x=szam/10 + '0';
  y=szam%10 + '0';

  while(fread(&atmeneti,sizeof(struct entry),1,f))
    if(atmeneti.phone[0]==x && atmeneti.phone[1]==y)
      db++;

  rewind(f);

  tomb = malloc ( (db+1)*sizeof(struct entry) );

  while(fread(&atmeneti,sizeof(struct entry),1,f))
    if(atmeneti.phone[0]==x && atmeneti.phone[1]==y)
      {
        tomb[i]=atmeneti;
        i++;
      }

  qsort(tomb,db,sizeof(struct entry),rendez);

  strcpy(tomb[db].phone,"");

  return tomb;
}