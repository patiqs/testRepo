#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char **t, int elemszam, int n)
{
   int max,i,akt_hossz;

   max=strlen(t[0]);

   for(i=1;i<elemszam;i++)
         if(strlen(t[i])>max) max=strlen(t[i]);

   if(max>n) return ;

   char **vissza=(char**)calloc(elemszam,sizeof(char*));

   for(i=0;i<elemszam;i++)
   {
      vissza[i]=(char*)calloc(n,sizeof(char*));
   }

   int index=0,kul,k;

   for(i=0;i<elemszam;i++)
   {
      kul =n-strlen(t[i]);

         for(k=0;k<kul;k++)
            strcat(vissza[index],".");

         strcat(vissza[index],t[i]);
         index++;
   }

   for(i=0;i<elemszam;i++)
   {
      t[i]=vissza[i];
   }



}