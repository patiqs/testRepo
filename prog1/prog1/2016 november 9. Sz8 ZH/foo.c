#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char kitomb[100];

char *foo(char kitomb[100], char *be)
{
    //char kitomb[100];
    int kic=0,nag=0,egy=0,meret,x;
    char kics[100],nagy[100],egye[100];
    
    strcpy(kitomb,be);
    meret=strlen(kitomb);
    for(x=0;x<meret;x++)
    {
        if(kitomb[x] >=65 && kitomb[x] <=90)
        {
            nagy[nag] = kitomb[x];
            nag++;
        }
        else if(kitomb[x] >=97 && kitomb[x] <=122)
        {
            kics[kic] = kitomb[x];
            kic++;
        }
        else 
        {
            egye[egy] = kitomb[x];
            egy++;
        }
    }
    nagy[nag]='\0';
    kics[kic]='\0';
    egye[egy]='\0';
    strcat(nagy,egye);
    strcat(nagy,kics);
    strcpy(kitomb,nagy);
    //ki = kitomb;
    //p = kitomb;//ki = be;
    //printf("*%s*\n",kitomb);
    //printf("*%s*\n",ki);
    //printf("%p\n",ki);
    return kitomb;
   
}
