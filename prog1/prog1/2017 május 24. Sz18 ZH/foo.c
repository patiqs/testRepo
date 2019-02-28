#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(char *be, char *ki)
{
  FILE *fbe, *fki;
  char aa[100],bb[100];
  char ch1,ch2;
  enum azon{IGEN,NEM} azonos=IGEN; 
  strcpy(aa,be);
  strcpy(bb,ki);
  
  fbe = fopen(aa, "r");
  fki = fopen(bb, "r");
  
  while((ch1 = fgetc(fbe)) != EOF)
  {
    ch2=fgetc(fki);
    if(ch1 != ch2)
    {
      azonos=NEM;
    }
  }
  
  if(azonos==IGEN)
    return 1;
  else
   return 0;
  
  
   
}
