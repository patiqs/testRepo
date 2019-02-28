#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int osszeg=0,i;

  for(i=1;i<argc;i++)
  {
    if(atoi(argv[i])>0) osszeg+=atoi(argv[i]);

  }


  printf("%d\n",osszeg);

  return 0;
}