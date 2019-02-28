#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int max,szam;
	scanf("%d",&max);
	enum {IGEN,NEM} boole = IGEN;
	while(scanf("%d",&szam) != EOF )
	{
		if (szam > max)
		{
			max = szam;
		}
		else
		{
			boole = NEM;
		}		
	}
	if (boole == IGEN)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
	
	return 0;
}
