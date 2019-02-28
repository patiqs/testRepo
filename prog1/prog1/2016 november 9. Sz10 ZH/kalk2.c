#include<stdio.h>
#include<string.h>
int main()
{
    char sor[10000];
    int i,db=0;
    fgets(sor,10000,stdin);
    for(i=0;i<strlen(sor);i++)
        if(sor[i]=='(')
           db++;
    printf("%d\n",db);
    return 0;
}
