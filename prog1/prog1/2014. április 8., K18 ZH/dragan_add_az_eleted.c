#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ertek;
    char *token, sor[100],etel[100],alapanyagok[100];


    while(fgets(sor, 100, stdin)!=NULL)
    {
        token=strtok(sor, ";");
        strcpy(etel, token);
        token=strtok(NULL, ";");
        strcpy(alapanyagok, token);
        token=strtok(NULL, ";");
        ertek=atoi(token);
        if(ertek>1000) printf("%s\n",etel);
    }


    return 0;
}