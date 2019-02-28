#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_separated_number( char *str)
{
  int hossz,i;

  hossz=strlen(str);

  if(hossz==0) return 0;



  for(i=0;i<hossz;i++)
  {
    if(isalpha(str[i]) ) return 0;
  }

  if(str[0]=='.' ) return 0;

  for(i=hossz-4;i>0;i=i-4)
  {
    if(str[i]!='.') return 0;
  }



}