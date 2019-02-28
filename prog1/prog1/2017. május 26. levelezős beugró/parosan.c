#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int i, db, pozitiv=1;
	char *p;
	char sor[10000];
	while((p=fgets(sor,10000,stdin))!=NULL)
	{
		p = strtok(sor, " \n");
		db=atoi(p);
		if(db == 0)
			break;
		
		for(i=0;i<db;i++)
		{
			p = strtok(NULL, " \n");
			
			if((atoi(p) % 2) != 0)
			{
				pozitiv = 0;
			}
		}
		
		if(pozitiv == 1)
			printf("YES\n");
		else
			printf("NO\n");
		
		pozitiv = 1;
	}
	
	return EXIT_SUCCESS;
}
