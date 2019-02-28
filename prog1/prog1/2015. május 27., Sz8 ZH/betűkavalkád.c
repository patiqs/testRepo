#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int two_eggs(char *szo1, char *szo2)
{
  char *talalat;
  int i,hossz;

  hossz=strlen(szo1);

  for(i=0;i<hossz;i++)
  {
    talalat=strchr(szo2,szo1[i]);
    if(talalat==NULL) return 0;
  }

  hossz=strlen(szo2);

  for(i=0;i<hossz;i++)
  {
    talalat=strchr(szo1,szo2[i]);
    if(talalat==NULL) return 0;
  }

  return 1;
}