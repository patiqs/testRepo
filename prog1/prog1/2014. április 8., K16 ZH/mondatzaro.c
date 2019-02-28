#include <stdio.h>
#include <stdlib.h>
 
 
int punctuation( char *str )
{
    int i=0, count=0,j;
    while (str[i] != '\0')
    {
        if((str[i] == '.' || str[i] == '!' || str[i] == '?') && isalpha(str[i-1]) )
        {
            j = i+1;
            while( str[j] == '.' || str[j] == '!' || str[j] == '?' )
                j++;
            if(str[j] == ' ' || str[j] == '\0')
            {
                count++;
                i=j;
            }else i++;
 
        }else i++;
    }
    return count;
}