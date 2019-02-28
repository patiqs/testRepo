#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,sum=0;
    char p[1000];
    scanf("%d %s",&x,&p);
    while(x>-1)
    {
        sum+=x;
        memset(p,'\0',1000);
        scanf("%d %s",&x,&p);
    }
    y=sum*226;
    printf("%d HUF\n",y);
    return 0;
}
