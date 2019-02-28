#include <stdio.h>
#include <stdlib.h>

int main()
{
	long db,min,tem,max,szam,tomb[155],sorok[155],x,y,t=0,ssz;
	//for(y=0;y<5;y++)
	while(scanf("%d",&db)!=EOF)
	{
		//scanf("%ld",&db);
		for(x=0;x<db;x++)
		{
			if(x==0)
			{
				scanf("%ld",&szam);
				min=szam;
			}
			else
			{
				scanf("%ld",&szam);
				if(szam<min)
				{
					min=szam;
				}
			}
		}
		tomb[t]=min;
		t++;
		
	}
	for(x=0;x<t;x++)
	{
		sorok[x]=x+1;
	}
	
	for(x=0;x<t;x++)
	{
		max=tomb[x];
		ssz=x;
		for(y=x;y<t;y++)
		{
			if(max<tomb[y])
			{
				max=tomb[y];
				ssz=y;
			}
		}
		tem=tomb[x];
		tomb[x]=tomb[ssz];
		tomb[ssz]=tem;
		tem=sorok[x];
		sorok[x]=sorok[ssz];
		sorok[ssz]=tem;
	}
	
	for(x=0;x<t;x++)
	{
		if(x==0)
		{
			printf("%d",sorok[x]);
		}
		else
		{
			printf(" %d",sorok[x]);
		}
	}
	putchar('\n');
	return 0;
}
