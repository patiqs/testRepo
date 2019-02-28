#include<stdio.h>
#include<string.h>
int main()
{
    int i,relativ,c,d;
    char *p,sor[1000],*a,*b;
    while(p=fgets(sor,1000,stdin)!=NULL)
    {
        relativ=0;
        a=strtok(sor," ");
        b=strtok(NULL," ");
        c=atoi(a);
        d=atoi(b);
        for(i=c;i>0;i--)
        {
            if(c%i==0 && d%i==0 && i!=1)
                relativ=1;
        }
        if(relativ)
            puts("NO");
        else puts("YES");
    }
    return 0;
}
