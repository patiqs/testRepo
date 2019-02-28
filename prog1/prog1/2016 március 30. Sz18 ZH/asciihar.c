#include <stdio.h>

int main()
{
	int db,x,y,z;
	scanf("%d", &db);
	int szam[db];
	for(x = 0; x < db;x++)
	{
		scanf("%d",&szam[x]);
	}
	
	for(x = 0; x < db;x++)
	{
		if(x != 0)
		{
			putchar('\n');
		}
		for(y = 0;y < szam[x];y++)
		{
			if(y == 0)
			{
				putchar('*');
			}
			else if(y == (szam[x] -1))
			{
				for(z = 0;z < szam[x];z++)
				{
					putchar('*');
				}
			}
			else if(y < (szam[x]-1))
			{
				putchar('*');
				for(z = (szam[x]-2) ;z> (szam[x]-1-y);z--)
				{
					putchar(' ');
				}
				
				putchar('*');
			}
			putchar('\n');
		}
	}
}
