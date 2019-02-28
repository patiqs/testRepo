#include <stdio.h>

int main()
{
	int db=0,sorsz=0,sorok=0,min,x,y,max,ss;
	int tomb[51], minok[50]  = {0},sors[50];
	
	char ch;
	char sor[50];
	ch = getchar();
	enum boolean {FALSE , TRUE} status = FALSE;
	while (ch != EOF && ch != 'x')
	{
		//if(ch=='x')
		//break;
		if(ch != '\n')
		{
			if(ch != ' ')
			{
				sor[db] = ch;
				db++;
				status = FALSE;
			}
			else
			{
				sor[db]='\0';
				tomb[sorsz] = atoi(sor);
				sorsz++;
				db=0;
			}
			
		}
		else
		{
			sor[db]='\0';
			tomb[sorsz] = atoi(sor);
			sorsz=0;
			db=0;
			for(x = 2;x < tomb[0];x++)
			{
				if(tomb[x] < tomb[1])
				{	
					min = tomb[x];
					tomb[x] = tomb[1];
					tomb[1] = min;
				}
				
			}
			minok[sorok] = tomb[1];
			sorok++;
			status = TRUE;
		}

		
		ch = getchar();
	}
	
	if (status != TRUE)
	{
		sor[db]='\0';
		tomb[sorsz] = atoi(sor);
		sorsz=0;
		db=0;
		for(x = 2;x < tomb[0];x++)
		{
			if(tomb[x] < tomb[1])
			{	
				min = tomb[x];
				tomb[x] = tomb[1];
				tomb[1] = min;
			}
		}
		minok[sorok] = tomb[1];
		sorok++;
	}
	
	
	
	
	for(x = 0;x < sorok;x++)
	{
		sor[x]= x+1;
	}
	
	for(x = 0;x < sorok;x++)
	{
		
		for(y = x+1;y < sorok;y++ )
		{
			if(minok[y] <= minok[x])
			{			
				max = minok[y];
				minok[y] = minok[x];
				minok[x] = max;
				ss = sor[y];
				sor[y] = sor[x];
				sor[x]=ss;
				
							
			}
			
		}
	}
	
	for (x = 0; x < sorok; x++)
	{
		if(x == 0)
		{
			printf("%d",sor[x]);
		}
		else
		{
			printf(" %d",sor[x]);
		}
		
	}
	putchar('\n');
	return 0;
}
