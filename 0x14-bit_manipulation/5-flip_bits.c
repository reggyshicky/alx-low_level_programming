#include "main.h"
/**
 * flip_bits - returns no of bits needed to flip to get from one no. to another
 * @n: the integer to be flipped
 * @m: the integer to flip n to
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter_bits = 0; /*variable to rep flipped bits*/
	unsigned long int xor; /*variable to perform XOR*/

	xor = n ^ m;

	if (X_O_R > 0)
	{
		counter_bits = counter_bits + (X_O_R & 1);
		X_O_R >>= 1; /*discard the right most bit*/
	}
	return (counter_bits);
}

