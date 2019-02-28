#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasonlito(const void *a, const void *b)
{
	char **pa = (char **)a;
    char **pb = (char **)b;

	int diff;
	int meret_a=strlen(*pa);
	int meret_b=strlen(*pb);
	diff = meret_b-meret_a;
	if(diff!=0)
		return diff;

    return strcmp(*pa,*pb);
}

char **foo(char *be[], int db)
{
	int egyenlo=0;
	int x;
	char *pt[db];
	char **ki=(char **)calloc(db,sizeof(char*));
	//char **ki=(char **)malloc(db*sizeof(char*));

	for(x=0;x<db;x++)
		ki[x]= be[x];
		
	qsort(ki, db, sizeof(*ki), hasonlito);
	int meret= strlen(ki[0]);
	
	for(x=0;x<db;x++)
		if (strlen(ki[x])==meret)
			egyenlo++;
	
	ki[egyenlo]=NULL;
	return ki;
}
