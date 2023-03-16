#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the integers
 * Return: pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
