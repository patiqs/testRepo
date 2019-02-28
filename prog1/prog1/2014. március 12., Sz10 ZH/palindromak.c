#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char sor[32],uj[32];
  int i,hossz,fele;

  while(fgets(sor,32,stdin)!=NULL){
      hossz=strlen(sor)-1;
      fele=hossz/2;

      sor[hossz]='\0';

      int x=1,egyezes=0;

  if(hossz%2==0)
  {
      for(i=fele;i<hossz;i++)
      {
      if(sor[fele-(x)]==sor[i] ) egyezes++;
        x=x+1;
      }
  }

  if(hossz%2==1)
  {

    for(i=fele+1;i<hossz;i++)
    {
      if(sor[(fele)-(x)]==sor[i] ) egyezes++;
      x=x+1;
    }


  }

      if(egyezes==fele) break;

      printf("%s %d\n",sor,hossz);

  }




  return 0;
}