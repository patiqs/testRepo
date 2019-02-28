#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct kereszt{
	char sort[100];
}KERE;


int main()
{
	
	
	int so,osz,x,y,sdb=0,odb=0,szam=0;
	scanf("%d %d",&so,&osz);
	KERE k[so];
//	char *tomb[so];
//	char sor[100];
	for(x=0;x<so;x++)
	{
		scanf("%s",&k[x].sort);
		//strcpy(k[x].sort,sor);
	}
	
	for(x=0;x<so;x++)
	{
		szam=0;
		for(y=0;y<osz;y++)
		{
			if(k[x].sort[y]== 42)
			{
				szam=0;
			}
			else
			{
				szam++;
			}
			if(szam==2)
			{
				sdb++;
			}
		}
	}
	
	for(x=0;x<osz;x++)
	{
		szam=0;
		for(y=0;y<so;y++)
		{
			if(k[y].sort[x]== 42)
			{
				szam=0;
			}
			else
			{
				szam++;
			}
			if(szam==2)
			{
				odb++;
			}
		}
	}
	
	
	printf("%d %d\n",sdb,odb);
	
	return 0;
}
