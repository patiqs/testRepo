#include <stdio.h>
#include <stdlib.h>

int foo(int t[], int s, int o)
{
  int *tomb,i,*egyezes;

  tomb=calloc(o,sizeof(int));
  egyezes=calloc(o,sizeof(int));

  for(i=0;i<o;i++)
    tomb[i]=t[i];


  for(i=0;i<o;i++)
    egyezes[i]=1;


  for(i=o;i<o*s;i++)
  {
      if(tomb[i%o]==t[i]) egyezes[i%o]++;
  }


  for(i=0;i<o;i++)
   {
    if(egyezes[i]==s) return 1;
    }

  return 0;
}