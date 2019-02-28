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
		//	printf("%d\n",strlen(be[x])-strlen(be[x+1]));
			hely = strlen(be[x])-strlen(be[x+1]);
		//	printf("%d\n",hely);
			if(hely<=0)
			{
				//printf("..in..\n");
				strcpy(sor,be[x]);
				break;
			}
			else
			{
				strcpy(sor,be[x+1]);
			}
		}
	}
	
	else if(db==1)
	{
		strcpy(sor,be[0]);
	}
	
	char *c = (char *)malloc(strlen(sor)+1);	
	strcpy(c,sor);
	return c;
}

