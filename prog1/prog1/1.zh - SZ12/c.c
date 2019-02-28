#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int value;
  int i;
  char szoveg[60];
  int x;
  while(scanf("%d %s",&x,szoveg)!=EOF)
  {
      value=1;   
      for(i=0;i<x;i++)
      {
	if(szoveg[i]!=szoveg[strlen(szoveg)-x+i])
	  value=0;
      }
	
      if(value)
	puts("Good");
      else
	puts("Bad");
  }

  
  return EXIT_SUCCESS;
}
