#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nevnap
{
  char nev[21];
  int honap;
  int nap;
}ELEM;

int rendez(const void *a, const void *b)
{
 ELEM *x = (ELEM*)a;
 ELEM *y = (ELEM*)b;

 if(x->honap < y->honap) return -1;
 if(x->honap > y->honap) return 1;

 if(x->nap < y->nap) return -1;
 if(x->nap > y->nap) return 1;

}

int main(int argc, char *argv[])
{
  FILE *f,*g;
  ELEM buff;
  int db=0,index=0;

  f=fopen(argv[1],"rb");
  g=fopen(argv[2],"wb");


  while(fread(&buff,sizeof(ELEM),1,f))
  {
    if(strcmp(buff.nev,argv[3])==0) db++;
  }

  rewind(f);

  ELEM tomb[db];

  while(fread(&buff,sizeof(ELEM),1,f))
  {
    if(strcmp(buff.nev,argv[3])==0)
    {
      strcpy(tomb[index].nev, buff.nev);
      tomb[index].honap=buff.honap;
      tomb[index].nap=buff.nap;
      index++;
    }
  }

  qsort(tomb,db,sizeof(ELEM),rendez);

  fwrite(&tomb,sizeof(ELEM),db,g);

  fclose(f);
  fclose(g);

  return 0;
}