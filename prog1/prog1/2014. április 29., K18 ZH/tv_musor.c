#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct musor
{
  char nev[30];
  char ado[30];
  char nap[10];
  int ora;
  int perc;
} m;

int hasonlit (const void *a, const void *b)
{
  m *x=(m*)a;
  m *y=(m*)b;

 if(x->ora*60+x->perc < y->ora*60+y->perc)
   return 0;

 if(x->ora*60+x->perc > y->ora*60+y->perc)
   return 1;

 if(x->ora*60+x->perc == y->ora*60+y->perc)
   return strcmp(x->ado, y->ado);
}


int
main ()
{
  struct musor *tvmusor;
  char aktnap[10];
  int i, elemszam;



  elemszam = 0;
  scanf ("%s", aktnap);


  tvmusor = (struct musor *) malloc (sizeof (struct musor) * 400);

  i = 0;
  while (scanf("%s %s %s %d:%d", tvmusor[i].nev, tvmusor[i].ado, tvmusor[i].nap,
          &tvmusor[i].ora, &tvmusor[i].perc) > -1)
    {
      elemszam++;
      i++;
    }

qsort(tvmusor, elemszam, sizeof(struct musor), hasonlit);

  for (i = 0; i < elemszam; i++)
    {
      if(strcmp(aktnap, tvmusor[i].nap)==0)
      {
      printf ("%s ", tvmusor[i].nev);
      printf ("%s ", tvmusor[i].ado);
      printf ("%.2d:%.2d\n", tvmusor[i].ora, tvmusor[i].perc);
      }
    }







  free (tvmusor);



  return 0;
}