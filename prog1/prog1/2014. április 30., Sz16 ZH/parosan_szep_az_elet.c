#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,kulso,talalat;

  for(kulso=1;kulso<argc;kulso++)
  {
    talalat=0;

    for(i=1;i<argc;i++)
    {
      if(strcmp(argv[kulso], argv[i])==0) talalat++;
    }

    if(talalat%2!=0)
      {
        printf("NO\n");
        return 0;
      }
  }

  printf("YES\n");


  return 0;
}