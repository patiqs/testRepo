//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>

void foo(char * destination, const char * source);

int main()
{
	char source[100], destination[100];

	while (fgets(source, 100, stdin) != NULL)
	{
		if (source[strlen(source) - 1] == '\n')
			source[strlen(source) - 1] = '\0';
		foo(destination, source);
		printf("%s\n", destination);
		if (source[0] == 'x') break;
	}

	return EXIT_SUCCESS;
}

void foo(char * destination, const char * source)
{
	int len = strlen(source);
	for (int i = 0; i < len; ++i)
	{
		if (isdigit(source[i]))
		{
			*destination = source[i];
			++destination;
		}
	}
	*destination = 0;
}