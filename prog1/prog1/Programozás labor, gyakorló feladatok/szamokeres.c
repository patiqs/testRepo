#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long max=0,sum=0,i,n,db=0,x;
    char *p,sor[100000];
    scanf("%d",&x);
    while(x)
   {
       sum=0;
       fgets(sor,100000,stdin);
       p=strtok(sor," ");
       db++;
        while(p!=NULL)
            {
                 sum+=atoi(p);
                p=strtok(NULL," ");

            }
            if(sum>max)
                max=sum;
                scanf("%d",&x);
   }
   if(db)
    printf("%ld",max);
    return 0;
}
