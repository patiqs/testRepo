#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int rendez (const void *a, const void *b)
{
  int *ia = (int *) a;
  int *ib = (int *) b;
  int osszehasonlitas = 0;

  osszehasonlitas++;
  if (*ia < *ib)
    return 1;
  if (*ia == *ib)
    return 0;

  return -1;
}

int
main (int argc, char *argv[])
{
  FILE *f;
  char c[301], nev[51], *token;
  int db,i,max, pont[300],talalt_max;

  f = fopen (argv[1], "r");

  while (fgets (c, 301, f))
  {
      token = strtok (c, "|");
      strcpy (nev, token);

      db = 0;
      while (token = strtok (NULL, "|"))
             {
             pont[db] = atoi (token);
             db++;

             }
    qsort(pont,db,sizeof(int),rendez);

    talalt_max=1;

    max=pont[0];

    for(i=1;i<db;i++)
     if(max>pont[i] && talalt_max<3)
      {
       max=pont[i];
       talalt_max++;
      }

    if(db==1 || db==2) max=0;

    printf("%d\n",max);
     }

  fclose(f);
  return 0;
}