#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo(char *be[],int db)
{
	int x,hely;
	char sor[100];
	//strcpy(sor,be[1]);
	if(db>1)
	{
		for(x=0;x<db-1;x++)
		{
			strcpy(sor,be[x+1]);
			if(strcmp(sor,be[x])<0)
			{
				strcpy(sor,be[x]);
				break;
			}

		}
	}
	else
	{
		strcpy(sor,be[0]);
	}
	
	x = strlen(sor);
	char *c = (char *)malloc(x+1);
	strcpy(c,sor);
	
	return c;
}
