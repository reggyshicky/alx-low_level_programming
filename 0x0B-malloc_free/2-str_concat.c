#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: pointer on a new allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len;

	char *str;

	int i, j; /*indexing for s1 and s2*/

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}
	len = (strlen(s1) + strlen(s2) + 1);
	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			str[i] = s2[j];
			i++;
		}
		str[i + 1] = '\0';
	}
	return (str);
}
