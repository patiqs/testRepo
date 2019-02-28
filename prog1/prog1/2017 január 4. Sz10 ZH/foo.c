#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *foo(char *besor)
{
    
    char sort[100];
    char *szo,*kez;
    int kezdet=0;
    strcpy(sort,besor);
    int meret = strlen(sort);
    szo = sort;
    kez = strstr(sort,"BUG");
    kezdet = kez - szo;
    while (kezdet > -1 && kezdet < 1000 )
    {
        memmove(kez,kez+3,meret-kezdet-2);
        meret = strlen(sort);
        szo = sort;
        kez = strstr(sort,"BUG");
        kezdet = kez -szo;
    }
    sort[meret]='\0';
   char *ki = (char *)malloc(meret+1);
   strcpy(ki,sort);
   return ki;
}
