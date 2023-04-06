#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary no. to a unsigned int(non -ve)
 * @b: pointer to the string that contains the binary number
 * Return: 0 if NULL or if it is not 0 -r a 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length; /*length of the string b*/
	unsigned int r = 0; /*counter*/
	unsigned int sum_dec = 0; /*the final added decimal no*/
	unsigned int number; /*the base number we get the power of*/

	if (b == NULL)
	{
		return (0);
	}

	if (strspn(b, "01") != strlen(b)) /*checks if the b only consists 0 and 1*/
	{
		return (0);
	}

	length = strlen(b);
	number = b[r] - '0'; /*converts the no. from the string to a numerical*/

	for (r = 0; r < length; r++)
	{
		sum_dec = sum_dec + number * pow(2, length - r - 1); /*from the rightmost*/
	}
	return (sum_dec);
}
