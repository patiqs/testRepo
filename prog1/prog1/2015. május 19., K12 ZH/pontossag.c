#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float osszeg=0;
  int i;

  for(i=1;i<argc;i++)
    osszeg+= atof(argv[i]);

  printf("%.2f\n",osszeg/(argc-1));

  return 0;
}