#include <stdio.h>

int kez=0,szam=0,szo=1,x,max,y;
int elso[60]={0};
int sor[61];
char ch='0'; 

lekerdez(int sza)
{
	while(ch != EOF)
	{
		ch = getchar();
		sor[sza] = ch;
		sza++;
		if (ch ==';' || ch == '\n')
		{
			elso[szo] = sza;
			szo++;
			lekerdez(sza);
		}
	}
}

int main()
{
	lekerdez(szam);
	max = elso[1] - elso[0];
	for(x = 1; x < szo;x++)
	{
		if((elso[x+1]-elso[x]) > max)
		{
			max = elso[x+1]-elso[x];
		}	
	}
	for(x = 0; x < szo;x++)
	{
		if((elso[x+1]-elso[x]) == max)
		{
			for(y = elso[x]; y < elso[x+1]-1;y++)
			{
				printf("%c", sor[y]);
			}
			putchar('\n');
		}
	}	
	return 0;
}
