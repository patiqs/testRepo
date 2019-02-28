#include <stdio.h>
#include <stdlib.h>

int *reverse( int *tomb, int meret)
{
    int i, j, *vissza;

    vissza=(int*)malloc(meret*sizeof(int));

    for(i=0;i<meret;i++)
        vissza[meret-i-1]=tomb[i];

    return &vissza[0];

}