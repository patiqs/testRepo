#include<stdio.h>
int main()
{
    int i[5],j,k,l,sum=0,sum2;
    for(k=0;k<5;k++)
        scanf("%d",&i[k]);
    for(k=0;k<5;k++)
    {
        sum2=0;
        for(l=k;l<5;l++)
        {
            sum2+=i[l]-5;
        }
        sum+=i[k]*sum2;
    }
    printf("%d\n",sum);


    return 0;
}
