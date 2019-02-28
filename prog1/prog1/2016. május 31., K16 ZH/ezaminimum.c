#include<stdio.h>
#include<string.h>
typedef struct sor{
int min;
int sorszam;
}SOR;
int main()
{
    char sor[10000];
    SOR t[60];
    int i=0,j,minimum=500000;
    char *p;
    while(fgets(sor,1000,stdin)!=NULL)
    {
        p=strtok(sor," ");

        p=strtok(NULL," ");;

        t[i].min=atoi(p);

        while(p!=NULL)
        {
            if(t[i].min>atoi(p))
                t[i].min=atoi(p);
            t[i].sorszam=i;
                p=strtok(NULL," ");

        }

        if(t[i].min<minimum)
         minimum=t[i].min;

        i++;
    }
    for(j=0;j<i;j++)
    {

        if(t[j].min==minimum)
        printf("%d\n",t[j].sorszam+1);}
    return 0;
}
