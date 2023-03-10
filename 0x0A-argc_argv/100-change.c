#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: size of array
 * @argv: array
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int change;

	int cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
		printf("0\n");
	while (change >= 25)
	{
		change = change - 25;
		cents = cents + 1;
	}
	while (change >= 10)
	{
		change = change - 10;
		cents = cents + 1;
	}
	while (change >= 5)
	{
		change = change - 5;
		cents = cents + 1;
	}
	while (change >= 2)
	{
		change = change - 2;
		cents = cents + 1;
	}
	while (change >= 1)
	{
		change = change - 1;
		cents = cents + 1;
	}
	printf("%d\n", cents);
	return (0);
}
