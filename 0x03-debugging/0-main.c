#include "main.h"
/**
 * positive_or_negative - testing positive or negative
 * @i: int to check
 * Return: 0 success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positve\n", i);
	}
}
