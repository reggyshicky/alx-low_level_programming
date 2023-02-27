#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: string to be returned
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
