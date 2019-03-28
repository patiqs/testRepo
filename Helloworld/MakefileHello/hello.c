//https://progcont.hu/progcont/
#include <stdio.h>
#include <stdlib.h>

void kulonbozoSzamok(char* source);

int main()
{
	//kulonbozoSzamok("1 3");
	//kulonbozoSzamok("3 4 9 6");
	//kulonbozoSzamok("3 14 9 14");
	//kulonbozoSzamok("3 7 3 3");
	//kulonbozoSzamok("3 81 81 2");
	//kulonbozoSzamok("3 57 57 57");
	//return (EXIT_SUCCESS);

	int x, szam, i, j, kulonbozo = 0, van = 0;
	while (scanf_s("%d", &x) != EOF)
	{
		int tomb[100];
		for (i = 0; i < x; i++)
		{
			scanf_s("%d", &szam);
			tomb[i] = szam;
		}

		for (i = 1; i < x; i++)
		{
			szam = tomb[i];
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

void kulonbozoSzamok(char* source) {
	char destination[100];
	sscanf(source, "%s", &destination);

	printf(destination);
}
