#include <stdio.h>

int s=0,y=0;
char ch = '0',sor[61] = {';'};

beolvas(int ss)
{
	int kezd = ss;
	while(ch != '\n')
	{
		ch = getchar();
		sor[ss] = ch;
		ss++;
		if (ch == ';')
		{
			beolvas(ss);
			putchar('\n');
		}
	}
	for (y = kezd; y < ss-1;y++)
	{
		printf("%c", sor[y]);
	}
}

int main()
{

	beolvas(s);
	putchar('\n');
	return 0;
}
