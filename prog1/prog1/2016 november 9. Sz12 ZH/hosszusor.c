#include <stdio.h>

int main()
{
	int db=0,sor=0,x,max;
	int tomb[50];
	char ch;
	ch = getchar();
	enum {VOLT, NEM} ELSO = NEM;
	while (ch != EOF)
	//while (ch != EOF && ch != '/')
	{
		if (ch != '\n')
		{
			db++;
		}
		else
		{
			tomb[sor]=db;
			db=0;
			sor++;
		}
		ch = getchar();
	}
	tomb[sor]=db;
	db=0;
	sor++;
	
	max = tomb[0];
	for(x = 1; x < sor;x++)
	{
		if(tomb[x] > max)
		{
			max = tomb[x];
		}
	}
	printf("%d", max);
	putchar('\n');

	
	for(x =0; x< sor;x++)
	{
		if (tomb[x] == max)
		{
			if(ELSO == NEM)
			{
				printf("%d", x+1);
				ELSO = VOLT;
			}
			else
			{
				printf(" %d", x+1);
			}
			
		}
		
	}
	putchar('\n');
}
