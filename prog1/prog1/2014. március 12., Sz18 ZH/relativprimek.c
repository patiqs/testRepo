#include <stdio.h>

int main()
{
    int x, y, i,osztok;

    while(scanf("%d %d",&x,&y)>-1)
    {
        osztok=0;

        if(x==1 && y==1) osztok=0;

        if(x==y) {
                    for(i=1;i<=x;i=i+1)
                    {
                        if(x%i==0 && y%i==0) osztok++;
                    }

                }

        if(x>y){
                for(i=1;i<=x;i=i+1)
                {
                    if(x%i==0 && y%i==0) osztok++;
                }
                }

        if(y>x){
                for(i=1;i<=y;i=i+1)
                {
                    if(x%i==0 && y%i==0) osztok++;
                }
                }
        if(osztok>1) printf("NO\n");
        if (osztok==1) printf("YES\n");
        if(osztok==0) printf("YES\n");
    }

    return 0;
}