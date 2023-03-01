#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: number of bytes for SRC
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	int dest_len = strlen(dest);

	/*move dest pointer to the end dest string*/
	dest = dest + dest_len;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (result);
}
