#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct AUTO{															//AUTO struct létrehozása
	char orszag[5];
	char rendszam[11];
	char marka[20];
	int darab;
}AUTO;

char sor[50];
AUTO tomb[21];
AUTO group[21];


int hasonlito(const AUTO *a, const AUTO *b)										//qsort hasonlitoja
{
	return strcmp(a->marka, b->marka);
}

 int main()
 {
	char *p;
	int db = 0, index = 0, i, j, bennevan = 0;
	
	while((p = fgets(sor,50,stdin)) != NULL)				//sorok felvitele a "tomb" tombbe
	{
		p = strtok(sor, ";");
		strcpy(tomb[db].orszag, p);
		
		p = strtok(NULL, ";");
		strcpy(tomb[db].rendszam, p);
		
		p = strtok(NULL, "\n");
		strcpy(tomb[db].marka, p);
		
		db++; 		
	}
 	
 	for(i=0;i<db;i++)															//minden marka felvitele 1x a "group" tombbe + darab számlálás
 	{
 		if(i == 0)																//ha nincs benne a "group" tombbe
 		{
 			group[index] = tomb[i];	
 			group[index].darab = 1;
			index++;
		}
		
		if(i != 0)
		{
			for(j=0;j<db;j++)													//ha benne van a "group" tombben, akkor darab novelese
			{
				if(!strcmp(tomb[i].marka, group[j].marka))
				{
					bennevan++;
					group[j].darab++;
				}
			}
			if(bennevan == 0)													//ha nincs benne, akkor felvétel a "group" tombbe
			{
				group[index] = tomb[i];
				group[index].darab = 1;
				index++;
			}
		}
		bennevan = 0;
	}
 	
 	
 	qsort(group,index,sizeof(AUTO),hasonlito);
 	
 	
 	for(i=0;i<index;i++)														//kiiratas
 		printf("%s: %d\n", group[i].marka, group[i].darab);
 	
 	
	return EXIT_SUCCESS;
 }
