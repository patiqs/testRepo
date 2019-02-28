#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char szerzo[31];
    char cim[51];
    int ev;
}OP;

int hasonlit(const void *a, const void *b)
{
 OP *A = (int *)a;
 OP *B = (int *)b;

 if(A->ev > B->ev)
    return 1;
 if(A->ev < B->ev)
    return -1;
 if(A->ev == B->ev)
    return 0;
}

int main(int argc, char *argv[])
{
    FILE *a;
    FILE *b;
    OP s;
    int max;
    int db = 0;
    int i;
    int j = 0;

    a = fopen(argv[1], "rb");
    b = fopen(argv[2], "wb");

    while(fread(&s, sizeof(OP), 1, a))
        db++;

    OP tmp[db];

    rewind(a);
    while((fread(&s, sizeof(OP), 1, a)))
		{
		    strcpy(tmp[j].szerzo,s.szerzo);
		    strcpy(tmp[j].cim,s.cim);
		    tmp[j].ev = s.ev;

		    j++;
		}

    qsort(tmp, db, sizeof(OP), hasonlit);

    max = tmp[0].ev;
    for(i = 0; i < db; i++)
        if(tmp[i].ev == max)
            fwrite(&tmp[i],sizeof(OP),1,b);

    fclose(a);
    fclose(b);

    return 0;
}
