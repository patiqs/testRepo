#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct allatok
{
  char allat[40];
  int kalor;
};

int
main (int argc, char *argv[])
{
  FILE *f = fopen (argv[1], "r");
  struct allatok *tomb;
  char c;
  int sorok = 0, hossz = 0, maxhossz = 0, db = 0, maxkal = 0, i;
  int db2 = 0;
  char *sor;
  char *p;

  while ((c = fgetc (f)) != EOF)
    {
      sorok++;
      fseek (f, -1, SEEK_CUR);
      hossz = 0;
      while ((c = fgetc (f)) != EOF && c != '\n')
        hossz++;

      if (hossz > maxhossz)
        maxhossz = hossz;
    }
  tomb = malloc (sorok * sizeof (struct allatok));
  sor = malloc ((maxhossz + 1) * sizeof (char));
  rewind (f);
  while ((c = fgetc (f)) != EOF)
    {
      fseek (f, -1, SEEK_CUR);
      db = 0;
      while ((c = fgetc (f)) != EOF && c != '\n')
        {
          sor[db] = c;
          db++;
        }
      sor[db] = '\0';

      p = strtok (sor, ";");
      strcpy (tomb[db2].allat, p);
      p = strtok (NULL, ";");
      while (p != NULL)
        {
          if (isdigit (p[0]))
            tomb[db2].kalor = atoi (p);
          p = strtok (NULL, ";");
        }
      db2++;
    }
  fclose (f);

  for (i = 0; i < db2; i++)
    if (tomb[i].kalor > maxkal)
      maxkal = tomb[i].kalor;
  printf ("%d\n", maxkal);

  for (i = 0; i < db2; i++)
    if (maxkal == tomb[i].kalor)
      puts (tomb[i].allat);

  return 0;
}