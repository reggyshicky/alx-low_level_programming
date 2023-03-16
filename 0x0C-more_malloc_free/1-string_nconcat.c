#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: size of string to concatenate
 * Return: pointer of new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int len1;

	unsigned int len2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = strlen(s1);

	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	str = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	strncpy(str, s1, len1);
	strncpy(str + len1, s2, n);

	str[len1 + n] = '\0';

	return (str);
}


