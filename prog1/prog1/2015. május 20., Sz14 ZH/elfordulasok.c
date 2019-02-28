#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,osszeg=0;

  if(argc==1) return 0;

  for(i=1;i<argc;i++)
    if(strcmp(argv[i],argv[1])==0) osszeg++;


    printf("%d\n",osszeg);

  return 0;
}