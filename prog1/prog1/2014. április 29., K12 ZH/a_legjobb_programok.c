#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct program{
  char nev[25];
  char fejl[25];
  float ertek;
}pr;

int rendezes(const void *a, const void *b)
{
  pr *x=(pr*)a;
  pr *y=(pr*)b;

  if(x->ertek < y->ertek) return 1;
  if(x->ertek > y->ertek) return -1;
  return strcmp(x->fejl, y->fejl);

}


int main()
{int i,db;

  struct program *programok;

  programok=(struct program*)malloc(sizeof(struct program)*200);

  db=0;
  i=0;

  while(scanf("%s %s %f", programok[i].nev, programok[i].fejl, &programok[i].ertek)>-1)
  {
    i++;
    db++;
  }

  qsort(programok, db, sizeof(struct program), rendezes);

if(db==1 || db==2)
{
  for(i=0;i<db;i++)
  printf("%s %s %.1f\n", programok[i].nev, programok[i].fejl, programok[i].ertek);


}
else  for(i=0;i<3;i++)
    {
    printf("%s %s %.1f\n", programok[i].nev, programok[i].fejl, programok[i].ertek);

    }

    free(programok);

    return 0;

}