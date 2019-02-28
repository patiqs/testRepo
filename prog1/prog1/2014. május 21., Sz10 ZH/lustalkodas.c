#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *f;
  char sor[205],*token;
  float max,jelenlegi;

  f=fopen(argv[1],"r");

  while(fgets(sor,205,f))
  {
    token=strtok(sor,";");
    max=atof(token);

    while(token=strtok(NULL,";"))
    {
      jelenlegi=atof(token);
      if(jelenlegi>max) max=jelenlegi;
    }


    printf("%.2f\n",max);
  }

  fclose(f);

  return 0;
}