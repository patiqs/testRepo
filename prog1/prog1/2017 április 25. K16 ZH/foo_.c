#include <stdio.h>

int foo(int be)
{
    int tmp,szam=0;
    tmp = be;
    enum egy{VAN, NINCS}STAT = NINCS;
    while(tmp!=0)
    {
        if(tmp%2==1)
        {
            szam++;
        }
        else
        {
            szam=0;
        }
        tmp=tmp/2;
        if (szam==2)
            STAT = VAN;
    }
    
    if(STAT == VAN)
        return 1;
    else
        return 0;
}
