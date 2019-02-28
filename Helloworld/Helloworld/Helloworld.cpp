#include "pch.h"
#include <iostream>

int lnko(int x, int y);
int lkkt(int x, int y);

int main()
{
	int a, b;
	int eredmeny;

	scanf_s("%d %d", &a, &b);

	eredmeny = lnko(a, b);
	printf("%d\n", eredmeny);

	eredmeny = lkkt(a, b);
	printf("%d\n", eredmeny);


	return EXIT_SUCCESS;
}

int lnko(int x, int y)
{
	while (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
	}

	return x;
}

int lkkt(int x, int y)
{
	int kt;
	
	for (kt = 1; kt < 10000000; ++kt) {
		if (kt % x == 0 && kt % y == 0) 
			return kt;
	}

	return kt;
}