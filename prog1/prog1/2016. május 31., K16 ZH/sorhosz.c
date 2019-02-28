#include<stdio.h>
#include<string.h>
typedef struct sorok{
char sor[2000];
int hossz;
}SOROK;
int has(const void *a,const void *b)
{
    SOROK *pa=(SOROK *)a;
    SOROK *pb=(SOROK *)b;

    if(pa->hossz<pb->hossz)
        return -1;
    if(pa->hossz>pb->hossz)
        return 1;
    return -1;
}
int main(int argc,char *argv[])
{
    FILE *f=fopen(argv[1],"r");
    int i=0,j;
    char sor[2000],*p;
    SOROK t[1000];
    while((p=fgets(sor,2000,f))!=NULL)
    {
        strcpy(t[i].sor,p);
        t[i].hossz=strlen(p);
        i++;
    }
    qsort(t,i,sizeof(SOROK),has);
    for(j=0;j<i;j++)
            printf("%s",t[j].sor);
    return 0;
}
