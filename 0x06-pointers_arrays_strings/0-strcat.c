#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: string to concatenate
 * @src: string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
