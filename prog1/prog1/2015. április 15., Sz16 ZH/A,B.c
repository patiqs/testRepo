#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rendez(const void *a, const void *b)
{
 char *x = (char*)a;
 char *y = (char*)b;

  if(*x<*y) return -1;
  if(*x>*y) return 1;
 return 0;
}

int first_character(char *szo)
{
   int i,hossz;

   hossz=strlen(szo);
  
  for(i=0;i<hossz;i++)
    szo[i]=toupper(szo[i]);

   qsort(szo,hossz,sizeof(char),rendez);


   for(i=0;i<hossz;i++)
     if(isalpha(szo[i]))
     {
      return szo[i];
     }

  return '0';
}