#include "pch.h"
#include <iostream>

void foo(char *, const char *);

int main()
{
	char source[100], destination[100];
	while (fgets(source, 100, stdin) != NULL)
	{
		if (source[strlen(source) - 1] == '\n')
			source[strlen(source) - 1] = '\0';
		foo(destination, source);
		printf("%s\n", destination);
	}
	return EXIT_SUCCESS;
}

void foo(char * destination, const char * source)
{
	for (int i = 0; strlen(source); ++i)
	{
		if (isdigit(*source))
		{
			*destination = *source;
		}
		source++;
	}
	*destination = 0;
}