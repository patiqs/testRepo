#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *foo(char *be)
{
    int x,y=0,meret;
    char sor[100],ki[100];
    strcpy(sor,be);
    meret = strlen(sor);
    for (x = 0;x<meret;x++)
    {
        ki[y]=sor[x];
        if (sor[x]=='a')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='a';
        }
        else if (sor[x]=='e')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='e';
        }
        else if (sor[x]=='i')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='i';
        }
                else if (sor[x]=='o')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='o';
        }
                else if (sor[x]=='u')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='u';
        }
        else if (sor[x]=='A')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='a';
        }
        else if (sor[x]=='E')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='e';
        }
        else if (sor[x]=='I')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='i';
        }
                else if (sor[x]=='O')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='o';
        }
                else if (sor[x]=='U')
        {
            y++;
            ki[y]='v';
            y++;
            ki[y]='u';
        }
        y++;
        
    }
    ki[y]='\0';
    meret = strlen(ki);
    char *kip = (char *)malloc(meret +1); 
    strcpy(kip, ki);
    
    
    return kip;
}
