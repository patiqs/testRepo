#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasonlito(const void *a, const void *b)
{
    char **pa = (char **)a;
    char **pb = (char **)b;

    return strcmp(*pa,*pb);
}

char **foo(char *be[], int db)
{
	int x;
	char *pt[db];
	char **ki=(char **)calloc(db,sizeof(char*));
	//char **ki=(char **)malloc(db*sizeof(char*));
	
	for(x=0;x<db;x++)
		ki[x]= be[x];

	qsort(ki, db, sizeof(*ki), hasonlito);

//	for(x=0;x<db;x++)
//		printf("%s\n",pt[x]);

	
//	ki=pt;
	return ki;
}

