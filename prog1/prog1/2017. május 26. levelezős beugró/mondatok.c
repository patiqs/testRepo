#include <stdio.h>
#include <stdlib.h>

void nagybetu(char *fo, char *tomb[], int N)
{
	FILE *fout;
	fout = fopen(fo,"w");
	int i,j;
	for(i=0;i<N;i++)
	{
		if(tomb[i][(strlen(tomb[i])-1)] == '.' || tomb[i][(strlen(tomb[i])-1)] == '?' || tomb[i][(strlen(tomb[i])-1)] == '!')
		{
			for(j=0;j<=(strlen(tomb[i])-1);j++)
			{
				fprintf(fout,"%c",toupper(tomb[i][j]));
			}
			fprintf(fout,"\n");
		}
	}
	fclose(fout);		
}
