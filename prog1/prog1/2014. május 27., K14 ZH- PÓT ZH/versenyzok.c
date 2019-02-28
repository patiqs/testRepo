#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct eredmeny
{
  int sorszam;
  char nev[36];
  int pontszam;
}ELEM;

int rendez(const void *a, const void *b)
{
  ELEM *x = (ELEM*)a;
  ELEM *y = (ELEM*)b;

  if(x->pontszam < y->pontszam) return 1;
  if(x->pontszam > y->pontszam) return -1;

  if(x->sorszam < y->sorszam) return -1;
  if(x->sorszam > y->sorszam) return 1;

}

int main(int argc, char *argv[])
{
  FILE *f,*g;
  ELEM buffer;
  int db,szam,index,i;
  char sor[100],*token;


  f=fopen(argv[1],"r");
  g=fopen(argv[2],"wb");

  db=0;

  while(fgets(sor,100,f))
  {
    db++;
  }

  rewind(f);

  ELEM tomb[db];

  index=0;

  while(fgets(sor,100,f))
  {
    tomb[index].sorszam=index+1;

    token=strtok(sor,";");
    strcpy(tomb[index].nev,token);

    tomb[index].pontszam=0;

    while(token=strtok(NULL,";"))
    {
      tomb[index].pontszam+= atoi(token);
    }
    index++;

  }


  qsort(tomb,index,sizeof(ELEM),rendez);




  fwrite(&tomb,sizeof(ELEM),db,g);


  fclose(f);
  fclose(g);

  return 0;
}