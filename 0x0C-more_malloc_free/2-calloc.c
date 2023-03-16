#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no. of elements in an array
 * @size: size bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
	free(ptr);
}

