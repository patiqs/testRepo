#include<stdio.h>
#include<string.h>
int main()
{

    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    while(a!=0 && b!=0 && c!=0 && d!=0)
    {
        if(a/b < c/d)
            puts("<");
        else if(a/b > c/d)
            puts(">");
        else puts("=");
         scanf("%f %f %f %f",&a,&b,&c,&d);
    }
    return 0;
}
