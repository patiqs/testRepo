#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char sor[5010], *token;
  int min,max,jelenlegi,perdb,i,hossz;


  while(fgets(sor,5010,stdin))
  {

    min=0;
    max=0;
    perdb=0;
    hossz=strlen(sor);

    for(i=0;i<hossz;i++)
      if(sor[i]=='/') perdb++;

    if(perdb==1)
    {
    max=0;
    min=0;
    goto z;
      }
  else
  {
    token=strtok(sor,"/");

    min=strlen(token);
    max=strlen(token);

    for(i=0;i<perdb-2;i++)
    {
      token=strtok(NULL,"/");

      jelenlegi=strlen(token);

      if(jelenlegi<min) min=jelenlegi;
      if(jelenlegi>max) max=jelenlegi;
    }

    }




z:    printf("%d %d\n",max,min);
  }



  return 0;
}