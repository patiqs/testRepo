//https://progcont.hu/progcont/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	int szam, i, j, k;
	while (1)
	{
		scanf_s("%d", &szam);
		if (szam == 0)
		{
			break;
		}

		for (i = 0; i < szam; i++)
		{
			for (j = 0; j < szam; ++j)
			{
				if (j >= i) {
					putchar('*');
				}
				else {
					putchar(' ');
				}
			}

			putchar('\n');
		}
	}
	return (EXIT_SUCCESS);
}