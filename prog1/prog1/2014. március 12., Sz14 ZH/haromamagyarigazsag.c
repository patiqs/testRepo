#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int
main ()
{
  char sor[100];
  int hossz, jdb;

  jdb = 0;
  while (scanf ("%s", sor) > -1)
    {
      hossz = strlen (sor);

      if (hossz > 10)
        printf (">\n");
      if (hossz < 10)
        printf ("<\n");
      if (hossz == 10)
        printf ("=\n");

      if (strcmp (sor, "justice") == 0)
        jdb++;

      if (jdb == 3)
        return 0;
    }
  return 0;
}