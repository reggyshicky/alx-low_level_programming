#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints elements of a linked list
 * @h: header pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
