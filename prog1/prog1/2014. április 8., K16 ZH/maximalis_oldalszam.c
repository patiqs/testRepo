#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
  char *token,*knev,*cim,*old,*sz,sor[1000],maxcim[10000];
  int jel,max=0;

  while(gets(sor)!=NULL)
  {
    sz=strtok(sor,";");

    cim=strtok(NULL,";");

    old=strtok(NULL,";");

    jel=atoi(old);

    if(jel>max)
    {
      strcpy(maxcim,cim);
      max=jel;
    }
  }
  printf("%s\n",maxcim);

  return 0;
}