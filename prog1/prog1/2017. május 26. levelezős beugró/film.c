#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char filmcim[101];
	int hossz;	


}ADAT;	

int hasonlit(const void *a,const void *b)
{
	ADAT *x=(ADAT*)a;
	ADAT *y=(ADAT*)b;
	if(x->hossz > y->hossz) return -1;
	if(x->hossz < y->hossz) return 1;
	if(x->hossz == y->hossz) return 0;
}


int main(int argc,char *argv[])
{
	FILE *f;
	f=fopen(argv[1],"r");
	char sor[1001],*tok;
	ADAT film[1000];
	int i=0,j,pontos=0,ment=1;
	while(fgets(sor,1001,f))
	{
		for(j=0; j<strlen(sor); j++)
			if(sor[j]==';') pontos++;

		tok=strtok(sor,";");
		if(pontos==1)
		{
			strcpy(film[i].filmcim,tok);
			tok=strtok(NULL,"\n");
			film[i].hossz=atoi(tok);
	
		}
				else
				{	
					while(tok=strtok(NULL,";"))
					{
						if(ment==pontos-1) strcpy(film[i].filmcim,tok);
						if(ment==pontos) film[i].hossz=atoi(tok);
						ment++;
					}

				} 

		i++;
		pontos=0;
		ment=1;
	}
	qsort(film,i,sizeof(ADAT),hasonlit);
	
		printf("%s\n",film[0].filmcim);

		
	
	fclose(f);

	return 0;
}