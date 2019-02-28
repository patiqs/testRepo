#include<stdio.h>
#include<string.h>
int foo(FILE *f)
{
    int y=1;
    int elozo=-1;
    char sor[10000],*p;
    while(fgets(sor,10000,f))
    {
        p=strtok(sor,";");
        p=strtok(NULL,";\n");
        if(atoi(p)>elozo)
            elozo=atoi(p);
        else y=0;
    }
    return y;
}
