#include <stdlib.h>
#include <string.h>

int foo(char *be,int min)
{
    char tomb[1000];
    int meret,x,db,ki=0;
    strcpy(tomb,be);
    meret=strlen(tomb);
    for(x=0;x<meret;x++)
    {
        if(tomb[x] == '!')
        {
            if (db > min)
            {
                ki++;
            }
            db=0;
        }
        else if (tomb[x]>=97 && tomb[x]<=122)
        {
            db++;
        }
    }
    
    
return ki;
}