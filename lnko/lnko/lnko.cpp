#include "pch.h"
#include <iostream>

int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	printf("%d\n", a);
}