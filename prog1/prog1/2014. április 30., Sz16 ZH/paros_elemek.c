#include <stdio.h>
#include <stdlib.h>


int *even_elements(int *eredeti_tomb, int elemszam)
{
  int i,*uj, paros_darabszam, atvitt,hol_jarok;

  paros_darabszam=0;

  for(i=0;i<elemszam;i++)
    if(eredeti_tomb[i]%2==0) paros_darabszam++;


  uj=(int *)calloc(paros_darabszam+1,sizeof(int));

  uj[0]=paros_darabszam;

  hol_jarok=1;

  atvitt=0;

  for(i=0;i<elemszam;i++)
    if((eredeti_tomb[i]%2==0) && (atvitt<paros_darabszam))
    {
      uj[hol_jarok]=eredeti_tomb[i];
      hol_jarok++;
      atvitt++;
    }


  return uj;
}