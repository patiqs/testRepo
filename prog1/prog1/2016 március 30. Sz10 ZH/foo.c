#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int foo(char *besor,int min,int max)
{
    int meret,x,db,krater=0;
    char tomb[1000];
    strcpy(tomb,besor);
    meret = strlen(tomb);
    for(x=0;x<meret;x++)
    {
        if (tomb[x] == '.')
        {
            db++;            
        } 
        else if (tomb[x] == '-')
        {
            if ( db >= min && db <= max )
            {
                krater++;
            }
            db=0;
        }
    }
    
    
    
    return krater;
}