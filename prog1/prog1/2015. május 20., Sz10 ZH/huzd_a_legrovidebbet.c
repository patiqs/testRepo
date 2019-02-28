#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,hossz,min;

  if(argc==1) return 0;

  min=strlen(argv[1]);

  for(i=2;i<argc;i++)
    if(strlen(argv[i])<min) min=strlen(argv[i]);

  for(i=1;i<argc;i++)
    if(strlen(argv[i])==min)
        {
          printf("%s\n",argv[i]);
        }

  return 0;
}