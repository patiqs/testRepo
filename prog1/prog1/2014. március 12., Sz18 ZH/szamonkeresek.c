#include <stdio.h>

int main()
{
    int max,jelmax,i,N,szam;

    max=0;
    scanf("%d",&N);
    for(i=1;i<=N;i=i+1)
    {
        scanf("%d",&szam);
        max=max+szam;
    }
    jelmax=0;
    while(scanf("%d",&N)>-1 && N!=0)
    {
        jelmax=0;
        for(i=1;i<=N;i=i+1)
        {
            scanf("%d",&szam);
            jelmax=jelmax+szam;
        }
        if(jelmax>max) max=jelmax;
    }
    printf("%d\n",max);
    return 0;
}