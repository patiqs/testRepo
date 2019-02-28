#include <stdio.h>

int main()
{
	int szamok[3],tmp,x;
	while(scanf("%d %d %d",&szamok[0],&szamok[1],&szamok[2])!= EOF)
	{
		for(x=1;x<3;x++)
		{
			if(szamok[0] < szamok[x])
			{
				tmp=szamok[0];
				szamok[0]=szamok[x];
				szamok[x]=tmp;
			}
		}
		
		if((szamok[0]*szamok[0])==(szamok[1]*szamok[1]+szamok[2]*szamok[2]))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}
