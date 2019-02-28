#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int minimal_occurrence(char *szo)
{
  int hossz,i,j,min,jel;

  min=0;
  hossz=strlen(szo);

  if(hossz==0) return 0;

  for(i=0;i<hossz;i++)
    if(szo[0]==szo[i]) min++;

  for(i=1;i<hossz;i++)
    {
    jel=0;

    for(j=0;j<hossz;j++)
      if(szo[i]==szo[j]) jel++;

    if(min>jel) min=jel;
      }

   return min;
}