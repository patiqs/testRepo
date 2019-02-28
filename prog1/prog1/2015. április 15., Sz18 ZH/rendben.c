#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i,eset,t,ok;
  char elso[32],vizsgalt[32];

  scanf("%d",&eset);
  ok=0;

  if(eset==0) return 0;

  scanf("%s",elso);

  for(t=1;t<eset;t++)
  {
    scanf("%s",vizsgalt);


//    printf("elso : %s ||vizsgált:| %s\n",elso, vizsgalt);


    if(strcmp(elso,vizsgalt)<0)
    {
      ok++;
      strcpy(elso,vizsgalt);
    }

    strcpy(elso,vizsgalt);
  }

  if(ok+1==eset || ok==0 ) printf("Ordered\n");
  else printf("Unordered\n");



  return 0;
}