// kulonbozoszamok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main(int argc, char** argv) {
	int x, szam, i, j, kulonbozo = 0, van = 0;
	while (scanf_s("%d", &x) != EOF)
	{
		int tomb[100];
		for (i = 0; i < x; i++)
		{
			scanf_s("%d", &szam);
			tomb[i] = szam;
			van = 0;
			for (j = 0; j < i; j++)
			{
				if (tomb[i] == tomb[j])
					van = 1;
			}
			if (van == 0)
				kulonbozo++;
		}
		printf("%d\n", kulonbozo);
		kulonbozo = 0;
	}
	return (EXIT_SUCCESS);
}