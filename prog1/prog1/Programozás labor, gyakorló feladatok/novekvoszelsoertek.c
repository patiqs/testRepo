#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x, a, i, j, tmp, min, max, darab=0;
int sorszam[51]={0}, kulonbseg[51]={0}; 

for(i=0; i<50; i++)
	sorszam[i]=i+1;

while(scanf("%d", &x)!=EOF)
	{
	for(i=0; i<x; i++)
		{
		scanf("%d", &a);
		if(i==0)
			min=max=a;
		if (a<min)
			min=a;
		if(a>max)
			max=a;	
		}
	kulonbseg[darab]=max+min;
	darab++;
	}
for(i=0; i<darab; i++)
	for(j=0; j<darab; j++)
		if(kulonbseg[i]<kulonbseg[j])
			{
			tmp=kulonbseg[i];
			kulonbseg[i]=kulonbseg[j];
			kulonbseg[j]=tmp;
			tmp=sorszam[i];
			sorszam[i]=sorszam[j];
			sorszam[j]=tmp;
			}
for(i=0; i<darab; i++)
	for(j=0; j<darab; j++)
		if(kulonbseg[i]==kulonbseg[j] && sorszam[i]<sorszam[j])
			{
			tmp=sorszam[i];
			sorszam[i]=sorszam[j];
			sorszam[j]=tmp;
			}

for(i=0; i<darab; i++)
	if(i==0)
		printf("%d", sorszam[i]);
	else
		printf(" %d", sorszam[i]);
putchar('\n');
return 0;
}
