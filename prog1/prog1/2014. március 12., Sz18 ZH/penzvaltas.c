#include <stdio.h>

int main()
{
    int ertek,osszeg;
    char szo[5];

    osszeg=0;

    while(scanf("%d %s",&ertek,szo)>-1 && ertek>0)
    {
        osszeg=osszeg+ertek;
    }

    printf("%d HUF\n",osszeg*226);

    return 0;
}