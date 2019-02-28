#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int szam,hossz,x,y,meret;
	char szo[50];
	enum{VAN,NINCS}stat=NINCS;
	while(scanf("%d %s",&szam,&szo)!=EOF)
	{
		stat=NINCS;
		hossz = strlen(szo);
		for(x=0;x<hossz;x++)
		{
			meret=1;
			for(y=x+1;y<x+szam;y++)
			{
				if(szo[x] == szo[y])
				{
					meret++;
				}
				 
			}
			if(meret >= szam )
			{
				stat=VAN;
			}
			
		}
		if(stat == VAN)
		{
			printf("Good\n");
		}
		else
		{
			printf("Bad\n");
		}
	}
	
	
	
}
