#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct FILM{
	char cim[110];
	int hossz;
	int sorsz;
}FILM;

int hasonlito(const void *a, const void *b)
{
FILM *pa=(FILM*)a;
FILM *pb=(FILM*)b;

if(pa->hossz < pb->hossz)
	return 1;
else if(pa->hossz > pb->hossz)
	return -1;
else
	return 0;
}

int main(int argc, char *argv[])
{
int i, j, vesszo, c, k;
char sor[1010], *token, seged[1010];
FILM t[50];
FILE *f;
f=fopen(argv[1], "r");
c=0;
while(fgets(sor, 1010, f)!=NULL)
	{
	for(i=0; i<strlen(sor); i++)
		if(sor[i]=='\n')
			sor[i]='\0';
			
	vesszo=0;
	for(i=0; i<strlen(sor); i++)
		if(sor[i]==';')
			vesszo++;
			
	if(vesszo==1)
		{
		for(i=0; i<strlen(sor); i++)
			if(sor[i]==';')
				break;
		strcpy(t[c].cim, sor);

		for(i=0; i<strlen(t[c].cim); i++)
			if(t[c].cim[i]==';')
				{
				t[c].cim[i]='\0';
				break;
				}
		for(i=0; i<strlen(sor); i++)
			{
			if(sor[i]==';')
				{
				sor[i]=' ';
				break;
				}
			sor[i]=' ';
			}

		t[c].hossz=atoi(sor);
		t[c].sorsz=c;
		c++;
		}
	else
		{
		j=0;
		//strcpy(t[c].cim, "sa");
		for(i=0; i<strlen(sor); i++)//első vessző
			if(sor[i]==';')
				break;
		
		for(k=i+1; k<strlen(sor); k++)//második vessző
			if(sor[k]==';')
				break;

		for(i=i+1; i<k; i++)//vesszok közöttbemásol
			{
			t[c].cim[j]=sor[i];
			j++;
			}
		t[c].cim[j]='\0';

		for(i=0; i<strlen(sor); i++)
			{
			if(sor[i]==';')
				{
				sor[i]=' ';
				break;
				}
			sor[i]=' ';
			}
		for(i=0; i<strlen(sor); i++)
			{
			if(sor[i]==';')
				{
				sor[i]=' ';
				break;
				}
			sor[i]=' ';
			}
		t[c].hossz=atoi(sor);//minden karaktert
		t[c].sorsz=c; 
		c++;
		}

	}
fclose(f);
qsort(t, c, sizeof(FILM), hasonlito);
printf("%s", t[0].cim);
putchar('\n');
return 0;
}
