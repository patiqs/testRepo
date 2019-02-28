#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,hossz,lakcim;
    char *token,nev[120],varos[120],iranyitoszam[20],fizetes[20],sor[120];

    while(fgets(sor, 120, stdin)!=NULL)
    {
        token=strtok(sor, ";");
        strcpy(nev, token);
        token=strtok(NULL, ";");
        strcpy(varos, token);
        token=strtok(NULL, ";");
        strcpy(iranyitoszam, token);
        token=strtok(NULL, ";");
        strcpy(fizetes, token);
        if(strcmp(iranyitoszam,"4032")==0) printf("%s\n",nev);
    }

    return 0;
}