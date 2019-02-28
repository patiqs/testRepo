#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct szuper
{
  char vnev[35];
  char knev[35];
  char code[10];
  char szak[12];
  float atlag;
} sz;

int
rendez (const void *a, const void *b)
{
  sz *x = (sz *) a;
  sz *y = (sz *) b;

  if (x->atlag < y->atlag)
    return 1;

  if (x->atlag > y->atlag)
    return -1;

  return strcmp (x->code, y->code);

}

int
main ()
{
 struct szuper *szaki;

 szaki=(struct szuper*)malloc(sizeof(struct szuper)*1000);

  int i = 0;
  int count = 0,ki=0;
  char akt[10];


  scanf ("%s", akt);

  while (scanf
         ("%s %s %s %s %f", szaki[i].vnev, szaki[i].knev, szaki[i].code,
          szaki[i].szak, &szaki[i].atlag) > -1)
    {
      i++;
      count++;
    }


  qsort (szaki, count, sizeof (struct szuper), rendez);

  if (count<=3)
    {
      for (i = 0; i < count; i++)
        {
            {
              printf ("%s %s %s %.1f\n", szaki[i].vnev, szaki[i].knev,
                      szaki[i].code, szaki[i].atlag);
            }
        }
    }


else  for (i = 0; i < count; i++)
      {
        if (strcmp(akt, szaki[i].szak)==0 && ki<3)
          {
            printf ("%s %s %s %.1f\n", szaki[i].vnev, szaki[i].knev,
                    szaki[i].code, szaki[i].atlag);
                    ki++;
          }
      }

  free(szaki);
  return 0;

}