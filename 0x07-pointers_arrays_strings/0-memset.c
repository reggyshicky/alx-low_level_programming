#include "main.h"
#include <string.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block of memory
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
