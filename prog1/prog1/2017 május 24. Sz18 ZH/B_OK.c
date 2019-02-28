#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct szamok{
  int dar;
  char fajl[100];
}SZAM;

int ossze(const void *a, const void *b)
{
    SZAM *pa = (SZAM *)a;
    SZAM *pb = (SZAM *)b;
    
    if(pa->dar > pb->dar)
      return -1;
    if (pa->dar < pb->dar)
      return 1;
    
    return strcmp(pa->fajl,pb->fajl);
}

int main(int argc, char *argv[])
{
	FILE *fin;
	SZAM sza[100];
	int ch,x,chszam=0;
	char sor;
  
	for(x=0;x<argc-1;x++)
	{
	    fin = fopen(argv[x+1], "r");
	
		while((ch = fgetc(fin)) != EOF)
			chszam++;
	    sza[x].dar=chszam;
	    chszam=0;
	    strcpy(sza[x].fajl,argv[x+1]);
	    
	    fclose(fin);  
	}
	qsort(sza, argc-1, sizeof(*sza), ossze);
  
	for(x=0;x<argc-1;x++)
		printf("%s: %d\n",sza[x].fajl,sza[x].dar);
	return 0;
}
