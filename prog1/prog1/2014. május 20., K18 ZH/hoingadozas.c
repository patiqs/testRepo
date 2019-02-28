#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  FILE *f;
  char sor[1005],telepulesnev[35],*token;
  int min,max,jelenlegi_elem;

  f=fopen(argv[1],"r");

  while(fgets(sor,1005,f))
  {
    token=strtok(sor,":");
    strcpy(telepulesnev,token);

    token=strtok(NULL,",");
    max=atoi(token);
    min=atoi(token);

    while(token=strtok(NULL,","))
    {
      jelenlegi_elem=atoi(token);

      if(max<jelenlegi_elem) max=jelenlegi_elem;
      if(min>jelenlegi_elem) min=jelenlegi_elem;
    }

   printf("%s: %d\n",telepulesnev,max-min);
  }

  close(f);

  return 0;
}