#include<stdio.h>
#include<string.h>
int main()
{
    char *p,sor[20];
    int ora,perc;
    while(fgets(sor,20,stdin)!=NULL)
    {
        p=strtok(sor,".");
        ora=atoi(p);
        p=strtok(NULL,".");
        p[strlen(p)-1]='\0';
        if(ora==0)
            printf("12.%sam\n",p);
        else if (ora<12)
            printf("%d.%sam\n",ora,p);
        else if(ora==12)
            printf("12.%spm\n",p);
        else printf("%d.%spm\n",ora-12,p);

    }
    return 0;
}
