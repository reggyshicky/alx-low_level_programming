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
	unsigned int len_s1;

	unsigned int len_s2;

	char *new_str;

	if (s1 == 0)
	{
		s1 = " ";
	}
	if (s2 == 0)
	{
		s2 = " ";
	}
	len_s1 = strlen(s1);

	len_s2 = strlen(s2);

	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}

