#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int db,szam,x,y,elso,maso,seg,van;
enum {AZ,NEM} boole = AZ;

fibos(int s)
{
	van=0;
	elso=1;
	maso=2;
	for(y=0;y < 26;y++)
	{
		if((elso+maso)==s)
		{
			van++;
		}
		seg=elso;
		elso=maso;
		maso=maso+seg;		
		
	}
	if(van < 1)
	{
		boole = NEM;
	}
}

int main()
{

	scanf("%d",&db);
	while( db != 0 )
	{
		boole = AZ;
		for(x=0;x<db;x++)
		{
			scanf("%d",&szam);
			if (szam > 2 )
			{
				fibos(szam);
			}
		}
		if(boole == AZ)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		scanf("%d",&db);
	}
	
	return 0;
}
