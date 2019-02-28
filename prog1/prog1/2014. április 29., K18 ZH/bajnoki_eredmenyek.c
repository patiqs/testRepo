#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char sor[500], nev[100], nev2[100], *token;
    int szam1, szam2, i,pont;

    while(fgets(sor,500,stdin))
    {
        pont=0;

        token=strtok(sor,"[]");

        strcpy(nev,token);



        while(token=strtok(NULL,"-"))
        {

                szam1=atoi(token);
                token=strtok(NULL,";");
                szam2=atoi(token);
                if(szam1>szam2) pont=pont+3;
                if(szam1<szam2) pont=pont+0;
                if(szam1==szam2) pont=pont+1;

        }

        printf("%s: %d\n", nev, pont );
}

return 0;
}