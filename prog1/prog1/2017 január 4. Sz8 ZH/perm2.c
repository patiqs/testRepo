#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int osszehas(const void *a, const void *b)
{
	int *pa = (int *)a;
  	int *pb = (int *)b;
  
  	if ( *pa < *pb )
    	return -1;
  	else if (*pa == *pb)
    	return 0;
  	else 
    	return 1;
}

int main(int argc, char *argv[])
{
	enum {VAN, NINCS}sor=NINCS;
	enum {PERM, NEM}permu=PERM;
	int tomb[1000]={0},x;
	int db = argc-1;
	if (db >= 2)
	{

	for(x=0;x<db;x++)
	{
		tomb[x]=atoi(argv[x+1]);
	}
		
	qsort (tomb,db,sizeof(int),osszehas);
		
	for(x=0;x<db;x++)
	{
		if(tomb[x]!=(x+1))
		permu = NEM;
	}

	if (permu==PERM)
		printf("YES\n");
	else
		printf("NO\n");

	}
	else
	{
		printf("NO\n");
	}
	return 0;
}


