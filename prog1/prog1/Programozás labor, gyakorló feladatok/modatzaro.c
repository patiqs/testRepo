#include<stdio.h>
#include<string.h>
int main()
{
    char sor[200];
    int h,igaz=1;
    fgets(sor,200,stdin);
    h=strlen(sor);
    if(sor[h-2]=='.' || sor[h-2]=='!' || sor[h-2]=='?')
            printf("%s",sor);
    if(sor[h-2]=='!' && sor[h-3]=='!' && sor[h-4]=='!')
        igaz=0;
    while(igaz)
    {
        memset(sor,'\0',200);
        fgets(sor,200,stdin);
          h=strlen(sor);
        if(sor[h-2]=='.' || sor[h-2]=='!' || sor[h-2]=='?')
            printf("%s",sor);
    if(sor[h-2]=='!' && sor[h-3]=='!' && sor[h-4]=='!')
        igaz=0;
    }
    return 0;
}
