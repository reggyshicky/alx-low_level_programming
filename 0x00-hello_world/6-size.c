#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char: %zu byte(s)\n", sizeof(char));
	printf("The size of an int: %zu byte(s)\n", sizeof(int));
	printf("The size of a long int: %zu byte(s)\n", sizeof(long));
	printf("The size of long long int: %zu byte(s)\n", sizeof(long long));
	printf("The size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}

