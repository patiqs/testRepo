#include<stdio.h>
#include<string.h>
int main()
{
    char sor[20];
    while(fgets(sor,20,stdin)!=NULL)
    {
        if((strlen(sor)-1)==9)
            printf("%c%c-%c%c%c-%c%c-%c%c\n",sor[0],sor[1],sor[2],sor[3],sor[4],sor[5],sor[6],sor[7],sor[8]);
        else if(sor[0]=='1')
            printf("%c-%c%c%c-%c%c-%c%c\n",sor[0],sor[1],sor[2],sor[3],sor[4],sor[5],sor[6],sor[7]);
        else printf("%c%c-%c%c%c-%c%c%c\n",sor[0],sor[1],sor[2],sor[3],sor[4],sor[5],sor[6],sor[7]);
    }
    return 0;
}
