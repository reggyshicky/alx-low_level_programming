#include "main.h"
#include <stdio.h>
/**
 * print_square - prints square
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	if (i <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

