#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	float be,veg=0,diff;
	char sor[100];
	while (scanf("%s",&sor)!=EOF)
	{
		diff=strcmp(sor,"END");
		if (diff!=0)
		{
			be = atof(sor);
			veg = veg+be;
		}
		else
		{
			printf("%.2f\n", veg);
			veg=0;
		}
	}

return EXIT_SUCCESS;
}
