#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char sor[310],nev[100], *token;
  int szam,max,min,osszeg;


  while(fgets(sor,300,stdin))
  {
  osszeg=0;

  token=strtok(sor,"#");
  strcpy(nev, token);

  token=strtok(NULL,"#");

  szam=atoi(token);
  max=szam;
  min=szam;

  osszeg=max;


  while(token=strtok(NULL,"#"))
  {
    szam=atoi(token);

    if(szam>max) max=szam;
    if(szam<min) min=szam;
    osszeg=osszeg+szam;
  }
  osszeg=osszeg-min-max;



  printf("%s: %d\n",nev,osszeg);


  }

  return 0;
}