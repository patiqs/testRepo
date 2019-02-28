#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int i;
        int t[n];
        int no=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&t[i]);
            if(t[i]==1)
                no++;
            int j;
            for(j=1; j<t[i]; j++)
            {
                if(j!=1 && j!=t[i])
                    if(t[i]%j==0)
                    {
                        no++;
                    }
            }
        }
        if(no==0)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
