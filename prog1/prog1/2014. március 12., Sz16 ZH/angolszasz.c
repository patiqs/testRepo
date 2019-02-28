#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int ora, perc;
  char idoszak[4];

  while (scanf ("%d.%d%s", &ora, &perc, idoszak) > -1)
    {
      if (ora == 0 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 1 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 2 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 3 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 4 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 5 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 6 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 7 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 8 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 9 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 10 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 11 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora, perc);
      if (ora == 12 && strcmp (idoszak, "am") == 0)
        printf ("%d.%.2d\n", ora - 12, perc);

      if (ora == 0 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 1 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 2 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 3 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 4 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 5 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 6 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 7 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 8 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 9 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 10 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 11 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora + 12, perc);
      if (ora == 12 && strcmp (idoszak, "pm") == 0)
        printf ("%d.%.2d\n", ora, perc);


    }

  return 0;
}