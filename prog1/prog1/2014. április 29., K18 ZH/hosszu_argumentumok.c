#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rendez(const void *a, const void *b)
{
  const int *ia = (const int *)a;
  const int *ib = (const int *)b;

     return *ia  - *ib;
}

int main(int argc, char *argv[])
{
  int i,x,tomb[argc],kulso,hossz,alaphossz;


  alaphossz=1;

  for(i=1;i<argc;i++)
  {
    tomb[i]=strlen(argv[i]);
    }

  qsort(tomb,argc,sizeof(int),rendez);

  for(x=0;x<argc;x++)
    for(i=1;i<argc;i++)
      {
        if(tomb[x]==strlen(argv[i]))
          printf("%s\n",argv[i]);
      }


  return 0;
}