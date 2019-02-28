#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int szam,meret,x,db;
    char ch,sor[51];
    while(scanf("%d %s",&szam,&sor)!= EOF)
    {
        int tomb[128]={0};
        int db=0;
        meret=strlen(sor);
        //printf("%s\n",sor);
        for(x=0;x<meret;x++)
        {
            tomb[sor[x]]=1;
        }

        for(x=97;x<123;x++)
        {


                //printf("%d\n",x);
				db+=tomb[x];

        }

        /*for(x=96;x<123;x++)
        {
        	printf("%d\n",x);
        }
        printf("\n");
        printf("%d\n",db);*/

        if(db==szam)
        {
            printf("Good\n");
        }
        else if(db<szam)
        {
            printf("Bad\n");
        }
        else if(db>szam)
        {
            printf("Average\n");
        }
    }

    return 0;
}
