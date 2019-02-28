#include <stdio.h>

int main()
{
    int fej,lab, emberek, kutyak;

    while(scanf("%d %d",&fej,&lab)>-1)
    {

        kutyak = (0.5)*lab - fej;

        emberek = fej - kutyak;
        printf("%d %d\n",emberek,kutyak);
    }
    return 0;
}