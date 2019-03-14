//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>

void foo(char *, const char *);

int main()
{
	char source[100], destination[100];
	destination[99] = 0;
	//const char src[] = "ABCDEF";
	//printf("%s\n", src);

	//const char * p = src; // Equivalent to &src[0]; (implicit conversion)
	////const char* p =  &src[1]; 

	//for (int i = 0; i<strlen(src); ++i) {
	//	printf("array: %c\n", src[i]);
	//	const char* q = p + i;
	//	printf("ptr  : %c\n", *q);
	//	printf("imptr: %c\n", p[i]); //pointer to a memory offset by i
	//	++p;
	//}

	foo(destination, "A1B2C3");
	foo(&destination[0], "ABC123");
	//foo(destination, src);
//	foo(destination, &src[0]);
	foo(destination, "A1B2C3dfds9999999999");

	printf("%s\n", destination);

	int a = 1;
	int b = 0;
	for (int i = 0; b<100; ++a) {
		b = a * 2;
	}

	return EXIT_SUCCESS;
}

void foo(char * destination, const char * souce)
{
	int len = lenOfStr(souce);
	for (int i = 0; i<len ; ++i) 
	{
		printf("%c\n", souce[i]);
		printf("%c\n", *(souce + i));
		*destination = 'a';
	}
}

int lenOfStr(const char* str) {
	
}