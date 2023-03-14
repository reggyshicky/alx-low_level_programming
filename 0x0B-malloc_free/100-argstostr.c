#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - a pointer that concatenates strings
 * @ac: number of arguments
 * @av: the array of arguments
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0; /*length of the conc string*/

	int i;

	char *result, *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len = total_len + (strlen(av[i] + 1));
	}
	result = (char *)malloc(sizeof(char) * total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	p = result;
	for (i = 0; i < ac; i++)
	{
		strcpy(p, av[i]);
		p += strlen(av[i]);
		*p = '\n';
		p++;
	}
	*p = '\0';

	return (result);
}

