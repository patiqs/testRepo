#include <stdio.h>

int main()
{
	int mag,max=0,db=0,hazsor[1000],s=0,latszik=0,x;
	char ch,sor[300];
	ch = getchar();
	while(ch != EOF && ch != '0')
	{
		if(ch == '\n')
		{
			hazsor[db] = latszik;
			latszik=0;
			max = 0;
			mag = 0;
			db++;
		}
		else
		{
			sor[s] = ch;
			s++;
			mag = ch;
		}
		
		
		if (max < mag )
		{
			max = mag;
			latszik++;
		}
		
		
		ch = getchar();
	}
	
	if (s > 0 && latszik > 0)
	{
		hazsor[db] = latszik;
		db++;
	}
	
	
	
	for(x=0;x<db;x++)
	{
		if(x == 0)
		{
			printf("%d",hazsor[x]);
		}
		else
		{
			putchar('\n');
			printf("%d",hazsor[x]);
		}
	}
	putchar('\n');
	//printf("%d",db);
	return 0;
}
