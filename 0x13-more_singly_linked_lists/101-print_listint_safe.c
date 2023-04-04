#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list, once
 * @head: points to the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *r; /*traverses..pointer that moves one node at a time*/
	const listint_t *s; /*pointer that moves two nodes at a time*/
	/*r and s are used to detect loops, if we detect a loop we exit*/
	size_t counter = 0;

	r = head;
	s = head;

	while (r != NULL)
	{
		printf("[%p] %d\n", (void *)r, r->n);
		counter++;

		r = r->next;

		if (r >= s)
		{
			printf("-> [%p] %d\n", (void *)r, r->n);
			exit(98);
		}

		if (r == NULL)
			break;
		s = s->next;
		r = r->next;

		if (r >= s)
		{
			printf("-> [%p] %d\n", (void *)r, r->n);
			exit(98);
		}
	}
	return (counter);
}

