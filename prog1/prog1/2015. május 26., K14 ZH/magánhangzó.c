#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int last_vowel(char *szo)
{
  int i,hossz;
  
  hossz=strlen(szo);
  
  for(i=hossz-1;i>-1;i--)
    {
      if(szo[i]=='a' || szo[i]=='e' || szo[i]=='i' || szo[i]=='o' || szo[i]=='u') return szo[i];
    if(szo[i]=='A' || szo[i]=='E' || szo[i]=='I' || szo[i]=='O' || szo[i]=='U')  return szo[i];
    
    }
     
     
  return '=';
}