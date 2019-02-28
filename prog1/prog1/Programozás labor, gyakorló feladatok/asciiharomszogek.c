#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x, a, i, j, k, l;
scanf("%d", &x);
for(i=0; i<x; i++)
	{
	scanf("%d", &a);
	char t[a][a];
	for(j=0; j<a; j++)
		for(k=0; k<=j; k++)
			if(k==0 || j==a-1 || k==j)
				t[j][k]='*';
			else
				t[j][k]=' ';
	if(i!=0)
		puts("");
	for(j=0; j<a; j++)
		{
		for(k=0; k<=j; k++)
			printf("%c", t[j][k]);
		puts("");
		}	
	}
return 0;
}
