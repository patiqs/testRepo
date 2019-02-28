#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct eredmeny
{
  char nev[33];
  char neptun[7];
  int pont[5];
}ELEM;

int rendez(const void *a,const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  return strcmp(x->neptun,y->neptun);

}

int main(int argc, char *argv[])
{
  FILE *f;
  int db,i,index;


  f=fopen(argv[1],"rb");

  ELEM buff;

  db=0;

  while(fread(&buff,sizeof(ELEM),1,f))
  {
    if(buff.pont[0]==1 || buff.pont[1]==1 || buff.pont[2]==1 || buff.pont[3]==1 || buff.pont[4]==1)
      db++;
  }

  ELEM tomb[db];

  rewind(f);

  index=0;

  while(fread(&buff,sizeof(ELEM),1,f))
  {
    if(buff.pont[0]==1 || buff.pont[1]==1 || buff.pont[2]==1 || buff.pont[3]==1 || buff.pont[4]==1)
      {
        strcpy(tomb[index].nev,buff.nev);
        strcpy(tomb[index].neptun,buff.neptun);
        index++;
      }

  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  for(i=0;i<db;i++)
    printf("%s (%s)\n",tomb[i].nev,tomb[i].neptun);


  fclose(f);

  return 0;
}