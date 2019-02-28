#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char foo(char *ch)
{
   int x,tomb[256]={0},meret,cx;
   char cc,elso;
   meret = strlen(ch);
   for(x=0;x<meret;x++)
   {
       cc=ch[x];
       cx=ch[x];
       tomb[cx]++;
       //printf("t:%d\n",tomb[cx]);
   }
    for(x=32;x<256;x++)
   {
       if(tomb[x]>0)
       {
           elso=x;
           break;
       }
   }
   //printf("t:%d\n",elso);   
    //char cx='A';
return elso;
}