#include<stdio.h>
#include<string.h>
int main()
{
    int x,elso,utolso,i;
    scanf("%d",&x);
    while(x)
    {
        scanf("%d",&elso);
        for(i=0;i<x-1;i++)
            scanf("%d",&utolso);
        if(elso==utolso || x==1)
            puts("YES");
        else puts("NO");
        scanf("%d",&x);
    }
    return 0;
}
