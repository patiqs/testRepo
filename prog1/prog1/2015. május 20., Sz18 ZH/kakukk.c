#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;

  if(argc==1) return 0;

  for(i=1;i<argc;i++)
    if(strcmp(argv[i],"kakukktojas")==0)
      printf("%d\n",i);

  return 0;
}