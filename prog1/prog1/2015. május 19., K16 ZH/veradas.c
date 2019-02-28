#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char **argv)
{
    int max = 0, i = 0, darab = 0, a;
    char nev[500];
    char c;
    FILE *f;
    f=fopen(argv[1],"r");
    for(;;)
    {
        a = 0;
        i = 0;
        darab = 0;
        while((c = fgetc(f)) != EOF)
        {
            if(c == '\n')
            {
                break;
            }
            if(c == ';')
                darab++;
            a = 1;
        }
        if(a == 0)
            break;
        if(darab > max)
        {
            max = darab;
        }
    }
    rewind(f);
    printf("%d\n",max-1);
    for(;;)
    {
        a = 0;
        i = 0;
        darab = 0;
        while( (c = fgetc(f)) != EOF )
        {
            if(c == '\n')
            {
                break;
            }
            if(c != ';' && darab == 0)
                {
                    nev[i] = c;
                    i++;
                }
            if(c == ';')
                darab++;
            a=1;
        }
        if(a == 0)
            break;
        nev[i] = '\0';
        if(darab == max)
        {
            fprintf(stdout, "%s\n", nev);
        }
    }
    return 0;
}