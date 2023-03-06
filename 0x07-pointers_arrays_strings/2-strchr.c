#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: string to locate from
 * @c: character to be located
 * Return: ret
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);
	return (ret);
}
