#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: the string containg the chars to match in s
 * Return: j,number of bytes/number of charcters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;

	j = strspn(s, accept);
	return (j);
}
