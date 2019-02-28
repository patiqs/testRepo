#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ido;
    scanf("%d",&ido);
    int i;
    int t[ido];
    int s[ido];
    int szum_t=0,szum_s=0;
    for(i=0; i<ido; i++)
    {
        scanf("%d",&t[i]);
        szum_t+=t[i];
    }
    for(i=0; i<ido; i++)
    {
        scanf("%d",&s[i]);
        szum_s+=s[i];
    }
    int hossz;
    if(szum_t>szum_s)
        printf("%d\nTURTLE\n",szum_t*2);
    else if(szum_s>szum_t)
        printf("%d\nSNAIL\n",szum_s*2);
    else
        printf("%d\nDRAW\n",szum_t*2);


    return 0;
}
