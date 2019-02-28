#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int i,hossz, kozep, kulso,egyezes;


  for(kulso=1;kulso<argc;kulso++)
  {
    hossz=strlen(argv[kulso]);

    kozep=hossz/2;
    egyezes=0;

    for(i=0;i<kozep;i++)
      if(argv[kulso][i]==argv[kulso][hossz-1-i]) egyezes++;

    if(egyezes!=kozep)
    { printf("NO\n");
      return 0;
    }

  }


  printf("YES\n");

  return 0;
}