#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line
 * @n: number of times
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
