#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tomb[30][10], sor[40], *token;
    int i=0,j=0,szum;

    while(gets(sor))
        strcpy(tomb[i++], strtok(sor, ";"));

    qsort(tomb, i, sizeof(tomb[0]), strcmp);

    while(j<i)
    {
        szum=1;
        while(!strcmp(tomb[j], tomb[j+1]))
            szum++,j++;
        printf("%s: %d\n", tomb[j++],szum);
    }
    return 0;
}
