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
	int kt=0;

	while (kt<10000)
	{
		kt++;
	}

	return kt;
}