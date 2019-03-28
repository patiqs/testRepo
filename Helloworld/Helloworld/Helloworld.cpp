//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>
void kulonbozoSzamok(const char* source);

int main()
{
	kulonbozoSzamok("1 3");
	kulonbozoSzamok("3 4 9 6");
	kulonbozoSzamok("3 14 9 14");
	kulonbozoSzamok("3 7 3 3");
	kulonbozoSzamok("3 81 81 2");
	kulonbozoSzamok("4 34 57 57 57");

  return EXIT_SUCCESS;
}

void kulonbozoSzamok(const char* source) {
	char destination[100];

	int n = sscanf(source, "%s", &destination);

	printf(destination);
}