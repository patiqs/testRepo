#include<stdio.h>
#include<string.h>
int main(int argv,char *argc[])
{
    int i,szam,h,j;
    for(i=1;i<argv;i++)
    {
        szam=atoi(argc[i]);
        h=0;
        for(j=1;j<=szam/3;j++)
            if((szam-j*3)>=0)
        {
            szam-=j*3;
            h++;
        }
        printf("%d\n",h);

    }

    return 0;
}
