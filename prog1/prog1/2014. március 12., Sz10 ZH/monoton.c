#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, szam, monno, moncsok, a, i;
    scanf("%d", &n);
    while(n!=0)
    {
        monno=0;
        moncsok=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a);
            if(i==0);
            else
            {
                if(szam<=a) monno=monno+1;
                if(szam>=a) moncsok=moncsok+1;
            }
            szam=a;
        }

        if(monno==n-1 || moncsok==n-1) printf("monoton\n");
        else printf("nem monoton\n");
        scanf("%d", &n);
    }
    return 0;
}