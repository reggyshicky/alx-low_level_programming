#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted arr using JS
 * @array: pointer to the array to search
 * @size: size of the array to search
 * @value: value to search in an array
 * Return: index of the searched value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, stepsize;
	size_t i;

	if (array == NULL)
		return (-1);
	stepsize = sqrt(size);
	start = 0, end = stepsize;

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start = end;
		end = end + stepsize;
	}

	if (end >= size)
		end = size - 1;
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
