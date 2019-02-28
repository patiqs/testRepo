#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int max,jel,i;

  max=atoi(argv[1]);

  for(i=2;i<argc;i++)
    {
      jel=atoi(argv[i]);
      if(max<jel) max=jel;
    }

    printf("%d\n",max);
  return 0;
}