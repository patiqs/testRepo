//https://progcont.hu/progcont/100207/exercises.html?pid=201063
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char sor[100000];

int main(int argc, char *argv[])
{
	FILE *fin;
	
	int hossz, yes=1, i;
	
	
	
	for(i=1;i<argc;i++)
	{
		fin = fopen(argv[i], "r");
		fgets(sor,100000,fin);
		
		
		if(i == 0)
			hossz = strlen(sor);
			
		
		if(i != 0)
		{
			if(strlen(sor)>hossz)
				hossz = strlen(sor);
			else
				yes = 0;
		}
	
	
		fclose(fin);
	}
	
	
	if(yes == 0)
		printf("NO\n");
	else
		printf("YES\n");
	
	return EXIT_SUCCESS;
}
