#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int szam;
  int ido;
  int i;
  int hossz=0;
  int csiga=0;
  int teknos=0;
  scanf("%d",&ido);
  for(i=0;i<ido;i++)
  {
    scanf("%d",&szam);
    teknos+=szam;    
  }
  for(i=0;i<ido;i++)
  {
    scanf("%d",&szam);
    csiga+=szam; 
  }
  
  if(teknos>csiga)
  {
    hossz=teknos+teknos;
    printf("%d\n",hossz);
    puts("TURTLE");
  }
  else if(teknos<csiga)
  {
    hossz=csiga+csiga;
    printf("%d\n",hossz);
    puts("SNAIL");
  }
  else
  {
    hossz=teknos+teknos;
    printf("%d\n",hossz);
    puts("DRAW");
  }
  
  
  
  
  return EXIT_SUCCESS;
}
