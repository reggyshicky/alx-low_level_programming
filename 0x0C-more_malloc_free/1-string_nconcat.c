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

	unsigned int len = n, i;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (i = 0; s1[i]; i++)
		len++;

	str = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; s1[i]; i++)
	{
		str[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];
	str[len] = '\0';

	return (str);
}


