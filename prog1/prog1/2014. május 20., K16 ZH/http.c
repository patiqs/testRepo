#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv)
  {
  char line[1001], cim[1001], nev[1001], maxnev[1001], *token;
  int ertek, maxertek;
  FILE *file1;

  file1 = fopen(argv[1], "r");
  while(fgets(line, 1001, file1))
    {
    strtok(line, "?");
    strcpy(maxnev, strtok(NULL, "="));
    maxertek = atoi(strtok(NULL, "&"));
    while ( (token = strtok(NULL, "=")) != NULL )
      {
      strcpy(nev, token);
      ertek = atoi(strtok(NULL, "&"));

      if (ertek>maxertek)
        {
        maxertek = ertek;
        strcpy(maxnev, nev);
        }
      }
    puts(maxnev);
    }
    fclose(file1);
  return 0;
  }