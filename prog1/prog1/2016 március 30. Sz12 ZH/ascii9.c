#include <stdio.h>

int main()
{
	int teszt;
	int y,x,z,mg,sz;
	scanf("%d", &teszt);
	int mag[teszt],szel[teszt];
	for(x = 0; x < teszt; x++)
	{
		scanf("%d %d",&mag[x], &szel[x]);
	}
	for(x = 0; x < teszt; x++)
	{
		mg = mag[x];
		sz = szel[x];
		if(x > 0)
		{
			putchar('\n');					
		}			
		for(z= 0; z < mg; z++)
		{
			if(z == 0 || z ==mg/2 )
			{
				for(y = 0; y < sz; y++)
				{
					putchar('*');
				}
				putchar('\n');
			}
			else if(z < mg/2)
			{
				putchar('*');
				for(y = 1; y < sz-1; y++)
				{
					putchar(' ');
				}
				putchar('*');
				putchar('\n');

				
//				putchar('*');
//				putchar('\n');
			}
			else if(z == mg-1)
			{
				for(y = 0; y < sz; y++)
				{
					for(y = 0; y < sz; y++)
					{
					putchar('*');
					}
				}
			}
			else if(z > mg/2)
			{
				//putchar('*');
				for(y = 0; y < sz-1; y++)
				{
					putchar(' ');
				}
				putchar('*');
				putchar('\n');
			}
		}
		putchar('\n');	
	}
	return 0;
}
