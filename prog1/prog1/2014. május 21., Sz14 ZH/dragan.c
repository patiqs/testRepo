#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char sor[1000],nev[100], *token;
  int min=1000,szam;

  FILE *f;

  f=fopen(argv[1],"r");

  while(fgets(sor,1000,f))
  {
    token=strtok(sor,";");
    strcpy(nev,token);

    token=strtok(NULL,";");
    token=strtok(NULL,";");
    szam=atoi(token);

    if(szam>min) printf("%s\n",nev);

  }



  return 0;
}