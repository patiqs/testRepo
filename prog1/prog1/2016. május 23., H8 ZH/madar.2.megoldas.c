#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char lsor[4000];
	
int main(int argc, char *argv[])
{
	FILE *fin;
	char sor[1000];
	char lsor[10000];
	int h, w, i, j, sum=0;
	
	fin = fopen(argv[1], "r");
	
	while(fgets(sor,1000,fin) != NULL)
	{	
		memset(lsor,0,4000);
		sscanf(sor,"%d %d", &h, &w);
		
		for(i=0;i<h;i++)
		{
			fgets(sor,1000,fin);
			strcat(lsor,sor);
		}
		
		for(i=65;i<91;i++)
		{
			for(j=0;j<4000;j++)
			{
				if(lsor[j] == i)
				{
					sum++;
					break;
				}
			}
		}
					
		printf("%d\n", sum);
		sum=0;
	}
	
	fclose(fin);
	
	return EXIT_SUCCESS;
}
