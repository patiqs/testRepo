#include <stdio.h>

int main()
{
    char sor[14];
    int huszasok,harmincasok,hetvenesek;

    huszasok=0;
    harmincasok=0;
    hetvenesek=0;

    while(fgets(sor, 14, stdin)!=NULL)
    {
        if(sor[0]=='0' && sor[1]=='6' && sor[2]=='2' && sor[3]=='0') huszasok=huszasok+1;
        if(sor[0]=='0' && sor[1]=='6' && sor[2]=='3' && sor[3]=='0') harmincasok=harmincasok+1;
        if(sor[0]=='0' && sor[1]=='6' && sor[2]=='7' && sor[3]=='0') hetvenesek=hetvenesek+1;

    }
    printf("%d %d %d\n",huszasok,harmincasok,hetvenesek);
    return 0;
}