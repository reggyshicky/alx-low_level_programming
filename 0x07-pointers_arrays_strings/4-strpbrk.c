#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: contains the char to be matched in s
 * Return: p which is the pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = strpbrk(s, accept);
	return (p);
}
