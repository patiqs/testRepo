#include <stdio.h>
#include <string.h>

int main()
{
   char sor[20];
   int i, hossz;

   while(gets(sor)!=NULL)
   {
       if(strcmp(sor,"THE END")==0) return 0;
       hossz=strlen(sor)-1;

       for(i=hossz;i>-1;i=i-1)
       if (sor[i]!='\n'){
        printf("%c",sor[i]);
       }

    printf("\n");
   }
    return 0;
}