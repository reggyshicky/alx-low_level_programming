#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints elements of a list
 * @h: pointer that points to the first node
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int counter = 0; /*counts number nodes/elements*/

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
