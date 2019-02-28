#include <stdio.h>

char foo(char *s)
{
int i,min=s[0];

for(i=0 ; s[i] ; i++)
	if(s[i]<min)
	min=s[i];

return min;
}