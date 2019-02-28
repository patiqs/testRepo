#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int szam;
    char line[51];
    while(scanf("%d %s",&szam,line)!=EOF)
    {
        char eleje[51],vege[51];
        int k=0,l=0;
        int i;
        for(i=0;i<szam;i++)
        {
            eleje[k]=line[i];
            k++;
        }
        eleje[k]='\0';
        for(i=strlen(line)-szam;i<strlen(line);i++)
        {
            vege[l]=line[i];
            l++;
        }
        vege[l]='\0';

        if(strcmp(eleje,vege)==0)
            printf("Good\n");
        else
            printf("Bad\n");
    }

return 0;
}
