#include<stdio.h>
#include<string.h>
typedef struct sorok
{
    int hossz;
    int sorszam;
}SOROK;
int main()
{
    int i=1,max=0,volt=1,db=0;
    SOROK t[50];
    char sor[25];
    while(fgets(sor,25,stdin)!=NULL)
    {
        t[i].hossz=strlen(sor);
        t[i].sorszam=i;
        if(max<strlen(sor))
            max=strlen(sor);
        db++;
        i++;
    }
    printf("%d\n",max-1);

    for(i=0;i<=db;i++)
    {
        if(volt)
        if(t[i].hossz==max)
            {
                printf("%d",t[i].sorszam);
                volt=0;i++;
            }
        if(volt==0 && t[i].hossz==max)
            printf(" %d",t[i].sorszam);
    }
    printf("\n");
    return 0;
}
