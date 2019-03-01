// pozitiv_szamok_szama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int szam, db=0, i=0, n;
	scanf_s("%d", &n);

	while (i < n) {
		scanf_s("%d", &szam);
		if (szam > 0) {
			db++;
		}
		i++;
	}
	printf("%d\n", db);
	
	return EXIT_SUCCESS;
}
