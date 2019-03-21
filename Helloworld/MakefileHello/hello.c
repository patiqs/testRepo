//https://progcont.hu/progcont/
#include <stdio.h>
#include <stdlib.h>

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
	}

	return EXIT_SUCCESS;
}

void foo(char * destination, const char * source)
{
	while (*source)
	{
		if (isdigit(*source))
		{
			(*destination++) = *source;
		}
		source++;
	}
	*destination = 0;
}