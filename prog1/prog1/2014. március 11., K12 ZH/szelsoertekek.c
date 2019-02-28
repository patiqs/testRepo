#include <stdio.h>

int main()
{
    int N,i,elso,max;


    while(scanf("%d",&N)>-1 && N!=0){
            scanf("%d",&elso);

            if(N==0) break;

            if(N==1) {
                        max=elso;
                        goto z;
                    }

            for(i=1;i<=N-1;i=i+1)
            {
                scanf("%d",&max);

            }
z:        if(max==elso) printf("YES\n");
            else printf("NO\n");
        }
    return 0;
}