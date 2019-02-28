#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int n;
    scanf("%d\n",&n);
    char line[10000];
    int prim=0;
    int index=0;
    int szam;
    gets(line);
    char *tok;
    tok=strtok(line," ");
    while(tok!=NULL)
    {
        szam=atoi(tok);
        index++;
        int seged=n;
        int i;
        for(; (i=seged%szam); seged=szam,szam=i)
            ;
        if(szam==1)
            prim++;
        tok=strtok(NULL," ");
    }

    if(prim==index)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
