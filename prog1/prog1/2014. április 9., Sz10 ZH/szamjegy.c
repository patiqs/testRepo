#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_separated_number( char *s)
{
    int hossz,i,pontokhelye;

    hossz=strlen(s);
    if(hossz==0) return 0;
    for(i=0;i<hossz;i=i+1)
    {
        if(isalnum(s[i]) && s[i]=='.') return 0;
    }
    if(hossz==2 && isalnum(s[0]) && s[1]=='.' ) return 0;

    for(i=hossz-4;i>=0;i=i-4)
    {
        if(s[i]!='.') return 0;
    }
    if(s[0]=='.') return 0;
    for(i=0;i<hossz;i=i+1)
    if(isalpha(s[i])) return 0;
    return 1;
}