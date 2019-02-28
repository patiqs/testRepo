#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minutes( char *s)
{
    char ido1[5],ido2[5],sor[20], *token;

    int h1,p1,h2,osszeg1,osszeg2,p2,kulonbseg;

    kulonbseg=0;

    token=strtok(s, "-");
    strcpy(ido1, token);

    token=strtok(NULL, "-");
    strcpy(ido2, token);


    token=strtok(s, ".");
    h1=atoi(token);
    token=strtok(NULL, "");
    p1=atoi(token);

    token=strtok(ido2, ".");
    h2=atoi(token);
    token=strtok(NULL, "");
    p2=atoi(token);

    osszeg1=h1*60+p1;
    osszeg2=h2*60+p2;

    kulonbseg=(osszeg2-osszeg1);

    return kulonbseg;
}