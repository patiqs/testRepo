//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>

void foo(char *, const char *);

int main()
{
	char d[100];// , *s[] = { "alma Debrecen korte", "alma korte" };
	foo(d, "alma Debrecen korte");
	printf("*%s*\n", d);
	foo(d, "alma korte");
	printf("*%s*\n", d);
	return EXIT_SUCCESS;


	return (EXIT_SUCCESS);
}

void foo(char * destination, const char *source) {
	const char *i = source;
	while (*i != 0) {
		printf("%s\n", i);
		++i;
	}

}