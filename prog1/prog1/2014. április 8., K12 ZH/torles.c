#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *delete( char *s1, char *s2)
{
char *uj;
int i,hossz;

uj=(char*)calloc(sizeof(char),100);

hossz=strlen(s1);
if(strstr(s1,s2)!=NULL)
{
    for(i=0;i<hossz;i=i+1)
    if(strstr(s1,s2)==&s1[i]) break;

    strncpy(uj, s1, i);

    i+=strlen(s2);
    strcat(uj, s1+i);

}
    else strcpy(uj, s1);

return uj;
}