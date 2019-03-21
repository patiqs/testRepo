//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>
void isPoker(const char * source);

int main()
{
	isPoker("SK HK CK DK S3");	
	isPoker("HT HJ HQ HK HA");
	isPoker("C4 C5 C6 C7 C8");
	isPoker("HT ST DT SA CA");
	isPoker("C8 S8 S7 D8 H8");
	isPoker("HJ DJ SJ D4 CJ");

	//char source[100], destination[100];

	//while (fgets(source, 100, stdin) != NULL)
	//{
	//	if (source[strlen(source) - 1] == '\n')
	//		source[strlen(source) - 1] = '\0';
	//	foo(destination, source);
	//	printf("%s\n", destination);
	//	if (source[0] == 'x') break;
	//}

	return EXIT_SUCCESS;
}

void isPoker(const char * source)
{
	printf("%s\n", source);
	char lapok[][2] = { {0,0}, {0,0} ,{0,0}, {0,0} ,{0,0} ,{0,0} }; //Lap t�pus - mennyis�g k�tdimenzi�s t�mb
	
	for (int i = 0; i < 5; ++i)
	{
		char lap = source[i * 3 + 1];
		printf("lap:%c -> ", lap);

		for (int j = 0; j < 5; ++j)
		{
			if (lapok[j][0] != lap && lapok[j][0] == 0) {
				lapok[j][0] = lap;
				lapok[j][1] = 1;
				printf("%c:%d ", lapok[j][0], lapok[j][1]);
				break;
			}
			if (lapok[j][0] == lap)
			{
				lapok[j][1]++;
				printf("%c:%d ", lapok[j][0], lapok[j][1]);
				break;
			}

			printf("%c:%d ", lapok[j][0], lapok[j][1]);
		}

		printf("\n");
	}

	bool poker = false;
	for (int i = 0; i < 5; ++i)
	{
		if (lapok[i][1] == 4) poker = true;
	}

	if (poker)
		printf("poker\n");
	else
		printf("nem poker\n");

	printf("\n");
}