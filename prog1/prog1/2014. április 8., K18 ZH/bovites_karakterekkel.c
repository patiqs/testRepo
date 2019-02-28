#include <string.h>
#include <stdlib.h>

char *insert( char *str, char kar, int poz )
{
  char *vissza;
  int i,hossz;

  hossz=strlen(str);
  int uj_meret=hossz+2;

  vissza=(char*)calloc(uj_meret,sizeof(char));

  int index=0;

  if(poz==0)
    {
      vissza[0]=kar;
      strcat(vissza,str);

      hossz=strlen(vissza);

      vissza[hossz]='\0';
      return vissza;
    }

  if( poz>0 && poz<hossz)
  {
    for(i=0;i<poz;i++)
    {
      vissza[index++]=str[i];
    }

    vissza[index++]=kar;

    for(i=poz;i<hossz;i++)
    {
      vissza[index++]=str[i];
    }

    hossz=strlen(vissza);
    vissza[hossz]='\0';

  return vissza;
  }

  if(poz>=hossz)
  {
    strcat(vissza,str);

    hossz=strlen(vissza);

    vissza[hossz]=kar;
    hossz=strlen(vissza);

    str[hossz]='\0';
    return vissza;
  }

}