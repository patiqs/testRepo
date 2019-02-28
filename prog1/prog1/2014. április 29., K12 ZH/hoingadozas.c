#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main ()
{
  char s1[1020], s[31];

  int i, sum = 0, min, max;

  char *pch;


  while (scanf ("%s %s", s, s1)>-1 )
    {
      sum = 0;
      pch = strtok (s1, ",");

      i = atoi (pch);
//      printf("%d ",i);

      max = i;
      min = i;

      while (pch=strtok(NULL,","))
        {



          i = atoi (pch);

          if (max < i)
            max = i;

          if (min > i && i != 0)
            min = i;

        }

      if (min < 0)
        printf ("%s %d\n", s, (-max + min) * -1);
      else
        printf ("%s %d\n", s, max - min);

    }




  return 0;
}