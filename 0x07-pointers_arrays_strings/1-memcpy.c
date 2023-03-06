#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: destination
 * @src: source
 * @n: size of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
