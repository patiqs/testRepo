// parosszamok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int meddig, szam = 1;
	
	scanf_s("%d", &meddig);
	
	while (szam <= meddig) {
		if (szam % 2 == 0) {
			printf("%d\n", szam);
		}
		szam++;
	}

	return 0;
}
