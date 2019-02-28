#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int db,szam,oszt=0,x;
	enum {PRIM,NEM} allap = PRIM;
	scanf("%d",&db);
	while( db != 0 )
	{
		allap=PRIM;
		for(x=0;x<db;x++)
		{
			oszt=0;
			scanf("%d",&szam);
			if(szam > 1)
			{
				//printf("IF\n");
				oszt=szam-1;
				while(szam%oszt!=0)
				{
					//printf("%d %d\n",szam,oszt);
					oszt--;
				} 
			}
			else
			{
				szam=0;
			}
			if(oszt!=1)
			{
				allap = NEM;
			}
			
		}
		//printf("%d %d\n",szam,oszt);
		if(allap == NEM)
		{
			printf("NO\n");
		}
		else if (allap == PRIM)
		{
			printf("YES\n");
		}
		scanf("%d",&db);
	}
	return 0;
}
