#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *f;
  char *token,sor[1000],jelenlegi[35],mentett[35];
  int max,jelenmax;

  f=fopen(argv[1],"r");

  fgets(sor,1000,f);
  token=strtok(sor,";");
  token=strtok(NULL,";");
  strcpy(mentett,token);

  max=0;

  token=strtok(NULL,";");

  token=strtok(NULL,":");
  max=atoi(token)*60;

  token=strtok(NULL,":");
  max=max+atoi(token);


  while(fgets(sor,1000,f))
  {
    jelenmax=0;
    token=strtok(sor,";");
    token=strtok(NULL,";");

    strcpy(jelenlegi,token);

    token=strtok(NULL,";");
    token=strtok(NULL,":");

    jelenmax=atoi(token)*60;

    token=strtok(NULL,":");
    jelenmax=jelenmax+atoi(token);


    if(max<jelenmax)
    {
      strcpy(mentett,jelenlegi);
      max=jelenmax;
    }

  }

  printf("%s\n",mentett);

  return 0;
}