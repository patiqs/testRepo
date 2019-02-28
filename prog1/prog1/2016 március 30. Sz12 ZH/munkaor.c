#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int beo,bep,vego=0,vegp=0,diff,marad;
	char sor[100],*po,*pp,temp[10];
	while (scanf("%s",&sor)!=EOF)
	{
		
		diff=strcmp(sor,"END");
		if (diff!=0)
		{
			po = strtok(sor, ".");
			strcpy(temp, po);
			beo = atoi(temp);
			//printf("%s %d\n",temp,beo);
			pp = strtok(NULL, "");
			strcpy(temp, pp);
			bep = atoi(temp);
			//printf("%s %d\n",temp,bep);
			
			//be = atof(sor);
			vego = vego+beo;
			vegp = vegp+bep;
		}
		else
		{
			marad=vegp%60;
			vegp=vegp/60;
			vego=vego+vegp;
			printf("%d.",vego);
			if(marad<10)
			{
				putchar('0');
			}
			printf("%d\n",marad);
			vego=0;
			vegp=0;
		}
	}

return EXIT_SUCCESS;
}
