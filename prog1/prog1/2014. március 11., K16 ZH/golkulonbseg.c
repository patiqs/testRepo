#include <stdio.h>

int main()
{ int x,y,x_result,y_result,max_golkul;

    x=0;
    y=0;
    x_result=0;
    y_result=0;
    max_golkul=0;

    scanf("%d:%d",&x,&y);
    x_result=x_result+x;
    y_result=y_result+y;
    max_golkul=x-y;

    while(scanf("%d : %d",&x,&y)>-1)
    {
        x_result=x_result+x;
        y_result=y_result+y;

        if(max_golkul<x-y) max_golkul=x-y;
    }
    printf("%d:%d\n",x_result,y_result);
    printf("%d\n", max_golkul);

    return 0;
}