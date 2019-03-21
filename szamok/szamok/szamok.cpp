#include "pch.h"
#include <iostream>

int main()
{
	int szam;

	scanf_s("%d", &szam);

	while (1)
	{
		if (szam != 0)
			break;
		else
			printf("%d\n", szam);
	}
	printf("%d\n", szam);
}