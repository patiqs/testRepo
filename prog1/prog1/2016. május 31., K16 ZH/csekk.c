#include<stdio.h>
#include<string.h>
int main()
{
    char sor[10000],*p;
    int db=0;
    while(fgets(sor,10000,stdin)!=NULL)
    {
        db=0;
        while(strncmp(sor,"END",3)!=0)
        {
            if(isalnum(sor[0]))
                {
                    p=sor;
                    if(atoi(p)>5000)
                    db++;
                }
           else
                if(sor[0]=='.')
                db++;
                fgets(sor,100,stdin);
        }
        printf("%d\n",db);

    }
    return 0;
}
