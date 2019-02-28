#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *insert( char *s1, char *s2, int poz)
{
  char *vissza;
  int index=0;
  int h1,i,h2;

  h1=strlen(s1);
  h2=strlen(s2);
  int szum=h1+h2+1;

  vissza=(char*)calloc(szum,sizeof(char));


  if(poz>=h1)
  {
    strcat(vissza,s1);
    strcat(vissza,s2);
    vissza[h1+h2]='\0';
  }
  else
  {
    for(i=0;i<poz;i++)
      {
        vissza[index]=s1[i];
        index++;
      }

   strcat(vissza,s2);
   index=strlen(vissza);

   for(i=poz;i<h1;i++)
   {
     vissza[index]=s1[i];
     index++;
   }


  }

  return vissza;
}