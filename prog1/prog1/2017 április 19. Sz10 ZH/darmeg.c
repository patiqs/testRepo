#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int szam,meret,x,y;
	char sor[50];
	enum{VAN,NINCS}stat=NINCS;
	while(scanf("%d %s",&szam,&sor)!= EOF)
	{
		stat=NINCS;
		meret=strlen(sor);
		int db[256]={0};
		for(x=0;x<(meret);x++)
		{
			y=sor[x];
			//printf("%d\n",y);
			db[y]++;
		}
		for(x=0;x<256;x++)
		{
			//printf("x:%d db[x]:%d\n",x,db[x]);
			if(szam==db[x])
			{
				stat=VAN;
				break;
			}
		}
		
		
		
		if(stat==VAN)
		{
			printf("Good\n");
		}
		else
		{
			printf("Bad\n");
		}
	}
	return 0;
}
