#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,min;

  min=atoi(argv[1]);

  for(i=2;i<argc;i++)
    if(min>atoi(argv[i])) min=atoi(argv[i]);

  printf("%d\n",min);

  return 0;
}