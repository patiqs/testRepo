#include <stdio.h>

int main()
{
	char sor[50];
	int x,szam,meret,min;
	while(scanf("%s",&sor)!=EOF)
	{
		 szam=0;
		 min=0;
		 meret=strlen(sor);
		 for(x=0;x<meret;x++)
		 {
		 	if(sor[x] > min)
		 	{
		 		szam++;
		 		min=sor[x];
			}
		 }
		 printf("%d\n",szam);
	}
}
