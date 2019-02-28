#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{   char line[101];
    int hossz,i;

    while(fgets(line, 100, stdin)!=NULL)
        {
        hossz=strlen(line);

        if(line[hossz-2]=='.') printf("%s",line);
        if(line[hossz-2]=='!') printf("%s",line);
        if(line[hossz-2]=='?') printf("%s",line);


        }




    return 0;
}