#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int kor,hossz,teki=0,csiga=0,x;
	scanf("%d",&kor);
	for(x = 0;x<kor;x++)
	{
		scanf("%d",&hossz);
		teki= teki+hossz;
	}
	for(x = 0;x<kor;x++)
	{
		scanf("%d",&hossz);
		csiga=csiga + hossz;
	}

	if (csiga > teki)
	{
		printf("%d\n",csiga*2);
		printf("SNAIL\n");
	}
	else if (csiga < teki)
	{
		printf("%d\n",teki*2);
		printf("TURTLE\n");
	}
	else
	{
		printf("%d\n",csiga*2);
		printf("DRAW\n");

	}
	
	return 0;
}
