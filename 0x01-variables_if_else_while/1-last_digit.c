#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int Lastdigt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastdigt = n % 10;
	if (Lastdigt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigt);
	else if (Lastdigt == 0)
		printf("Last digit of %d is %d and is 0\n", n, Lastdigt);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigt);
	return (0);
}
