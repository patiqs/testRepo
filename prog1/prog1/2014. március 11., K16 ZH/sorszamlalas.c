#include <stdio.h>
#include <string.h>

int main()
{
    char line[40], sor[40];
    int z=0;
    if(fgets(sor, 35, stdin)!=NULL) z=z+1;


    while(fgets(line, 35, stdin)!=NULL)
    {
        z=z+1;

        if(strcmp(line,sor)==0) break;
    }

   printf("%d\n",z);
    return 0;
}