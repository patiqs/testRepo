#include "pch.h"
#include <iostream>

int main()
{
	char source[100];
	//int des[100];
	fgets(source, 100, stdin);

	//printf("%s\n", source);

	char *p = NULL;
	p = source;

	while(*p)
		if (isdigit(*p))
		{
			char des = (char)strtod(p, &p);
			printf("%d", des);
		}
		else
			p++;

	return EXIT_SUCCESS;
}