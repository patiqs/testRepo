#include<string.h>
char *swap(char *s)
{
    char *p;
    char k[2000];
    strcpy(k,s);
    p=(char*)calloc(2000,sizeof(char));
    char *token1,*token2;
    token1=strtok(k,";");
    token2=strtok(NULL,"\n");
    strcat(p,token2);
    strcat(p,";");
    strcat(p,token1);
    return p;
}
