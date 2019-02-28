#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char c,jelen[51],mentett[51];
  int db=0,i=0,max=0,jelenlegi=0;

  while(scanf("%c",&c)>-1 && c!=';')
    mentett[i++]=c;

    mentett[i]='\0';

  while(scanf("%c",&c)>-1 && c!='\n')
    {
      if(c==';') jelenlegi++;
    }
    max=jelenlegi;

  i=0;
  db=0;

  while(scanf("%c",&c)>-1 && c!=EOF )
  {
    if(c!=';' && db<1)
     {
      jelen[i++]=c;
    }

    if(c==';') db++;


    if(c=='\n'){
        if(db-1>max)
        {
          jelen[i]='\0';
          strcpy(mentett,jelen);
          max=db-1;
        }
        db=0;
        i=0;
          }

  }


z:  printf("%s\n",mentett);

  return 0;
}