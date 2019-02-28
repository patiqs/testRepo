#include <string.h>
#include <stdio.h>


int main()
{
    int hossz, i, spacek;
    char sor[52];


    while(fgets(sor, 51, stdin)!=NULL)
        {
            spacek=1;
            hossz=strlen(sor);

            if(hossz-1==0) return 0;

            for(i=0;i<=hossz;i=i+1)
            {
                if(sor[i]==' ') spacek++;
            }
            if(spacek!=0) printf("%d\n", spacek);
        }

    return 0;
}