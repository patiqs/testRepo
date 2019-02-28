#include <stdio.h>

int main()
{
    int x, y;
    char op[3];

    while(scanf("%d %s %d",&x,op,&y)>-1 && (x!=0 || y!=0))
    {
        if(y==0 || x==0) return 0;
        if(strcmp(op,"+")==0) printf("%d\n",x+y);
        if(strcmp(op,"-")==0) printf("%d\n",x-y);
        if(strcmp(op,"%")==0) printf("%d\n",x%y);
        if(strcmp(op,"*")==0) printf("%d\n",x*y);
        if(strcmp(op,"/")==0) printf("%d\n",x/y);
    }

    return 0;
}