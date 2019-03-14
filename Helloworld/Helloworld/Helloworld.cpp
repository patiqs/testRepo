//https://progcont.hu/progcont/
#include "pch.h"
#include <iostream>

bool isPoker(const char * souce);

int main()
{
	printf("%c\n",	isPoker("HT HJ HQ HK HA"));
	printf("%c\n",	isPoker("C4 C5 C6 C7 C8"));
	printf("%c\n",	isPoker("SK HK CK DK S3"));
	printf("%c\n",	isPoker("HT ST DT SA CA"));
	printf("%c\n",	isPoker("C8 S8 S7 D8 H8"));
	printf("%c\n",	isPoker("HJ DJ SJ D4 CJ"));

	return EXIT_SUCCESS;
}

bool isPoker(const char * souce)
{
	char first = souce[1];
	char second = souce[4];
	char third = souce[7];
	char fourth = souce[10];
	char fifth = souce[13];

	if (first != second && first != third && second != third) return false;
	if (first != second && first != fourth && second != fourth) return false;
	if (first != second && first != fifth && second != fifth) return false;
	if (first == second && second != third && fourth != first && fourth != third) return false;
	/*
	.
	.
	.
	20 cases
	*/

	char pageKindOne = 0;
	char pagekindTwo = 0;

	pageKindOne = pagekindTwo = first;
	if (pageKindOne != second) pagekindTwo = second;
	//if (!(third == pageKindOne || third == pagekindTwo)) return false;
	if (third != pageKindOne && third != pagekindTwo) return false;
	if (fourth == pageKindOne) return false;

	for (int i = 1; i<5 ; ++i) 
	{
		printf("%c\n", souce[i*3+1]);
	}
	return false;
}

bool isNotPoker(const char * souce)
{
	
}