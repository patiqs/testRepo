#include<stdio.h>
#include<string.h>
int foo(FILE *f)
{
    int y=1,db=0;
    int elozo=-1;
    ELEMENT t[1000];
    char sor[1000],*p;
    while(fread(&t[db],sizeof(ELEMENT),1,f)>0)
    {
        if(t[db].age>elozo)
            elozo=atoi(p);
        else y=0;
        db++;
    }
    return y;
}
