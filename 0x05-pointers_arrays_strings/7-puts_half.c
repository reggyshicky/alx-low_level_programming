#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i = 0;

	int len;

	int j;

	len = strlen(str);
	if ((len % 2) == 0)
	{
		j = len / 2;
	}
	else
	{
		j = (len + 1) / 2;
	}
	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
