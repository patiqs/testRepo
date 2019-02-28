#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x=0, i, hossz;
char str[101];
do
	{
	gets(str);
	hossz=strlen(str);
	if(str[hossz-1]=='.' || str[hossz-1]=='?' || str[hossz-1]=='!')
		puts(str);
	}
while(str[hossz-3]!='!' || str[hossz-2]!='!' || str[hossz-1]!='!');
return 0;
}
