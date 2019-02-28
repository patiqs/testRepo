#include <stdio.h>

int main() 
{
	char ch,muv;
	int a,b,x=0;
	enum {KEZD, VEGE} szam = VEGE;
	
	ch = getchar();
	while(ch != EOF && ch != 'x' && ch != '\n')
	{
		//printf("K");
		if(ch == '(' && szam == VEGE)
		{
			szam = KEZD;
		//	printf("1");
		}
			
		else if(ch == ')' && szam == KEZD)
		{
			szam = VEGE;
			x++;
		//	printf("2");
		}
		else if(ch == '+')
		{
			muv=ch;
			a=x;
			x=0;
		//	printf("3");
		}
		ch = getchar();
	}
	
	//printf("4");
	a = a+x;
	printf("%d\n", a);
	return 0;	
}
