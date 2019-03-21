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
	int kt;
	
	if (x == 0 | y == 0) return 0;
	
	kt = -1;
	if (x < 0 && y < 0) {
		while (kt > -100000)
		{
			if (kt%x == 0 && kt%y == 0)
				break;
			else
				kt--;
		}
	}
	return kt;

	kt = 1;
	if (x > 0 && y > 0)
	{
		while (kt < 10000)
		{

			if (kt%x == 0 && kt%y == 0)
				break;
			else
				kt++;
		}
	}
	return kt;
}