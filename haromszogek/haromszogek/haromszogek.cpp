// haromszogek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main(int argc, char** argv)
{
	int szam, i, j, k;
	while (1)
	{
		scanf_s("%d", &szam);
		if (szam == 0)
			break;

		for (i = 0; i < szam; i++)
		{
			for (j = 0; j < i; j++)
				printf(" ");
			for (k = szam; k > i; k--)
				printf("*");


			putchar('\n');
		}
	}
	return (EXIT_SUCCESS);
}