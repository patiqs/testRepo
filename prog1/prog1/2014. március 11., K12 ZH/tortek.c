#include <stdio.h>
#include <string.h>

int main()
{   float x1,x2,y1,y2;
    float x,y;

    x1=0;
    x2=0;
    y1=0;
    y2=0;
    while(scanf("%f %f %f %f", &x1,&x2,&y1,&y2)>-1 && (x1!=0 && x2!=0 && y1!=0 && y2!=0) )
    {
       x=x1/x2;
       y=y1/y2;

       if(x>y) printf(">\n");
       if(x<y) printf("<\n");
       if(x==y) printf("=\n");
    }
    return 0;
}