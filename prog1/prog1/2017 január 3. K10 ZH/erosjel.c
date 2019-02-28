#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int veg[500]={0},ero=0,szam=0,kicsi=0,nagy=0,egyeb=0,sor=0,db=0,x,y;
	char ch;
	ch = getchar();
	while (ch != EOF)
	//while (ch != EOF && ch != '*' )
	{
		if(ch == '\n')
		{
			if(db > 5)
			{
				db = 1;
			}
			else
			{
				db=0;
			}
			
			y=(((szam+kicsi)+nagy)+egyeb)+db;
			szam=0;
			kicsi=0;
			nagy=0;
			egyeb=0;
			sor++;
			db=0;
					if(y > 4)
					{
						printf("GOOD\n");
					}
					else
					{
						printf("BAD\n");
					}
						
					}
		else
		{
			int sza= ch;
			db++;
			if(sza <= 57 && sza >= 48)
				{
					szam = 1;
				}
			else if(sza <= 90 && sza >= 65)
			{
				nagy = 1;
			}
			else if(sza <= 122 && sza >= 97)
			{
				kicsi = 1;
			}
			else
			{
				egyeb = 1;
			}
		}
		ch= getchar();
	} 
	if (db > 0 )
	{
		if(db > 5)
		{
			db = 1;
		}
		else
		{
			db=0;
		}
		y=(((szam+kicsi)+nagy)+egyeb)+db;
		sor++;
		if(y > 4)
		{
			printf("GOOD\n");
		}
		else
		{
			printf("BAD\n");
		}
	}
	//printf("sor%d\n", veg[0]);
/*	printf("sor%d\n",sor);
	for(x=0;x<sor;x++)
	{
		//printf("sor%d\n", veg[x]);
		if(veg[x] > 4)
		{
			printf("GOOD\n");
		}
		else
		{
			printf("BAD\n");
		}
	}*/
	
	return 0;
}
