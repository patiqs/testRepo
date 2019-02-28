#include "pch.h"
#include <iostream>

int lnko(int x, int y);
int lkkt(int x, int y);

int main()
{
	_ASSERT_EXPR(lkkt(5, 15) == 15, L"5, 15");
	_ASSERT_EXPR(lkkt(15, 5) == 15, L"15, 5");
	_ASSERT_EXPR(lkkt(20, 20) == 20, L"20 20");
	_ASSERT_EXPR(lkkt(0, 0) == 0, L"0 0");
	_ASSERT_EXPR(lkkt(1, 1) == 1, L"1 1");
	_ASSERT_EXPR(lkkt(3, 7) == 21, L"3 7");
	_ASSERT_EXPR(lkkt(-5, -15) == -15, L"-5 -15");


	return EXIT_SUCCESS;
}


int lkkt(int x, int y) 
{
	int kt = 1;

	if (x == 0 | y == 0) return 0;

	if (x < 0 | y < 0) 
	{
		kt = -1;
		do
		{
			if ((kt % x == 0) & (kt % y == 0))
				break;

			kt--;
		} while (kt > -100);
	}
	do 
	{
		if ((kt % x == 0) & (kt % y == 0))
			break;

		kt++;
	} while(kt < 100);

	printf("%d\n", kt);

	return kt;
}