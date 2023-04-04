#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list, once
 * @head: points to the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0; /*keeps tracks of the nodes in the list*/
	size_t i = 0;
	const listint_t *r;
	const listint_t *s;

	r = head;
	s = head;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head == head->next)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			n++;
			break;
		}
		head = head->next;
		while (i < n && s)
		{
			if (head == s)
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				if (head != head->next)
					n++;
				return (n);
			}
			s = s->next;
			i++;
		}
		s = r;
		i = 0;
		n++;
	}
	return (n);
}
