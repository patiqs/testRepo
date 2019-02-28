#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char eloado[30],cim[100],sor[140],keresett[30];
    char* token;
    int pp,mm,max,jelenmax,sorszam;

    fgets(sor, 140, stdin);
        token=strtok(sor, ";");
        sorszam=atoi(token);
        token=strtok(NULL, ";");
        strcpy(eloado,token);
        token=strtok(NULL, ";");
        strcpy(cim, token);
        token=strtok(NULL, ":");
        pp=atoi(token);
        token=strtok(NULL, "");
        mm=atoi(token);
        max=pp*60+mm;

    while(fgets(sor, 140, stdin)!=NULL)
    {
        token=strtok(sor, ";");
        sorszam=atoi(token);
        token=strtok(NULL, ";");
        strcpy(eloado,token);
        token=strtok(NULL, ";");
        strcpy(cim, token);
        token=strtok(NULL, ":");
        pp=atoi(token);
        token=strtok(NULL, "");
        mm=atoi(token);
        jelenmax=pp*60+mm;
        if(jelenmax>max) {max=jelenmax;
                        strcpy(keresett,eloado);
                        }

    }
    printf("%s\n",keresett);

    return 0;
}