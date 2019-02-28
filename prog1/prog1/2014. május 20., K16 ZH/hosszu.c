#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *longcopy( char *s[], int sor, int oszlop)
{
	int i,j, index, hossz,maxhossz,k;
	char *p;


	maxhossz=strlen(s[0]);

	index=0;	
	
	for(i=1; i<sor*oszlop; i++)
			{
			hossz=strlen(s[i]);
			if(hossz>maxhossz){
					 maxhossz=hossz; 
					 index=i;
					}
			}					

	p=(char*)malloc(strlen(s[index])+1);
	
	strcpy(p, s[index]);
	
			
return p;
}