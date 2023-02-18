#include <stdio.h>
/**
 * main - Two combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1;

	while (j <= 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(j + '0');
		putchar('\n');
		if (j == 9)
		{
			i++;
			j = i + 1;
		}
		else
		{
			j++;
		}
	}
	return (0);
}

