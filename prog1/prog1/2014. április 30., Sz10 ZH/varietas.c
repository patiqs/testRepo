#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j,kulso,hossz,egyezes;

  for(kulso=1;kulso<argc;kulso++)
  {
    hossz=strlen(argv[kulso]);

    egyezes=0;

    for(i=0;i<hossz;i++)
      for(j=0;j<hossz;j++)
        if(argv[kulso][i]==argv[kulso][j])
          egyezes++;

    if(egyezes==hossz)
      printf("%s\n",argv[kulso]);
  }

  return 0;
}