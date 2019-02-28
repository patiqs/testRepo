#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct szavak{
	int sor;
	int osz;
	char irany;
	char szo[100];
}SZOK;

int hasonlito(const void *a, const void *b)
{
	SZOK *pa = (SZOK *)a;
	SZOK *pb = (SZOK *)b;

	if(pa->sor < pb->sor)
		return -1;
	if(pa->sor > pb->sor)
		return 1;
		
	if(pa->osz < pb->osz)
		return -1;
	if(pa->osz > pb->osz)
		return 1;	

	if (pa->irany == 'V')
		return -1;
	if (pa->irany == 'F')
		return 1;
		
	return 0;
}

int main()
{
	enum {UJ,NEM}szavak = UJ;
	int so,os,x,y,temps,tempo,szoszam=0,karakter=0;
	scanf("%d %d",&so,&os);
	SZOK sz[so*os];
	char tomb[so][os],c,sor[100];
	for(x=0;x<so;x++)
	{
		scanf("%s",&sor);
		for(y=0;y<os;y++)
		{
			tomb[x][y]=sor[y];
		}
	}

	for(x=0;x<so;x++)
	{
		for(y=0;y<os;y++)
		{
			if(tomb[x][y]=='*'||tomb[x][y]=='\n')
			{
				if(karakter>1)
				{
					sz[szoszam].szo[karakter]='\0';
					szoszam++;
				}
				karakter=0;
				szavak=UJ;
			}
			else
			{
				if(szavak==UJ)
				{
					szavak=NEM;
					sz[szoszam].sor=x+1;
					sz[szoszam].osz=y+1;
					sz[szoszam].irany='V';
				}
				sz[szoszam].szo[karakter] = tomb[x][y];
				karakter++;
			}
		}
		if(karakter>1)
		{
			sz[szoszam].szo[karakter]='\0';
			szoszam++;
		}
		karakter=0;
		szavak=UJ;
	}
	
	for(x=0;x<os;x++)
	{
		for(y=0;y<so;y++)
		{
			if(tomb[y][x]=='*')
			{
				if(karakter>1)
				{
					sz[szoszam].szo[karakter]='\0';
					szoszam++;
				}
				karakter=0;
				szavak=UJ;
			}
			else
			{
				if(szavak==UJ)
				{
					szavak=NEM;
					sz[szoszam].sor=y+1;
					sz[szoszam].osz=x+1;
					sz[szoszam].irany='F';
				}
				sz[szoszam].szo[karakter] = tomb[y][x];
				karakter++;
			}
		}
		if(karakter>1)
		{
			sz[szoszam].szo[karakter]='\0';
			szoszam++;
		}
		karakter=0;
		szavak=UJ;
	}
	
	qsort (sz, szoszam,sizeof(*sz),hasonlito);
	
	for(x=0;x<szoszam;x++)
	{
		printf("%d;%d;%c;%s\n",sz[x].sor,sz[x].osz,sz[x].irany,sz[x].szo);
	}

	
	return 0;
}
