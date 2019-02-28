#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct KAJA{									//KAJA struct létrehozása
  char nev[50];
  char hozza[250];	
  int vesszo;
}KAJA;



int hasonlito(const KAJA *a, const KAJA *b)
{
	return strcmp(a->nev, b->nev);
}



char sor[300];
KAJA tomb[100];
KAJA rendezett[100];




int main(int argc, char *argv[])
{
	char *p;
	char *pointer;
	FILE *fin;
	int darab=0, i, j, maxvesszo = 100, index = 0;
	
	fin = fopen(argv[1],"r");
	
	
	
	
	while((p = fgets(sor,300,fin)) != NULL)				//sorok eltarolasa a "tomb" tombbe
	{
		p = strtok(sor, ":");
		strcpy(tomb[darab].nev, p);
		
		p = strtok(NULL, "\n");
		strcpy(tomb[darab].hozza, p);
		
		tomb[darab].vesszo = 0;
		
	    darab++;
	}
	
	
	
	
	for(i=0;i<darab;i++)								//vesszok megszamolasa
	{
		pointer = tomb[i].hozza;
		while(*pointer != '\0')
		{
			if(*pointer == ',')
				tomb[i].vesszo++;
			pointer++;
		}
		if(tomb[i].vesszo < maxvesszo)
			maxvesszo = tomb[i].vesszo;
	}		
	
	
	
	
	for(i=0;i<darab;i++)								//Maxvesszohosszu sorok athelyezese a "rendezett" tombbe
	{
		if(tomb[i].vesszo == maxvesszo)
		{
			rendezett[index] = tomb[i];
			index++;
		}
	}
	
	
	
	
	qsort(rendezett, index, sizeof(KAJA), hasonlito);
	
	for(i=0;i<index;i++)
		printf("%s\n", rendezett[i].nev);
		
		
		
	//for(i=0;i<darab;i++)
	//	printf("%d_db_vesszo\t%s:\t%s\n", tomb[i].vesszo, tomb[i].nev, tomb[i].hozza);
		
		
		
	return EXIT_SUCCESS;
}
