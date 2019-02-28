#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int foo(FILE *be)
{
  int db=0;

  char elozo,jelenlegi;


  while(1)
  {
    jelenlegi=fgetc(be);

    if(jelenlegi=='\n')
    {
      if(elozo=='?' || elozo=='!' || elozo=='.') db++;
      elozo=jelenlegi;
    }

    if(jelenlegi!='\n' && jelenlegi!=EOF)
    {
      elozo=jelenlegi;
    }

    if(jelenlegi==EOF)
    {
      if(elozo=='?' || elozo=='!' || elozo=='.') db++;
      break;
    }

    }
  return db;
}