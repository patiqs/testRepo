//https://progcont.hu/progcont/
#include <stdio.h>
#include <stdlib.h>

void isPoker(const char * source);

int main()
{
	isPoker("HT HJ HQ HK HA");
	isPoker("C4 C5 C6 C7 C8");
	isPoker("SK HK CK DK S3");
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
	for (int i = 0; i < 5; ++i)
	{
		printf("%c ", source[i * 3 + 1]);
	}
	printf("\n");

}