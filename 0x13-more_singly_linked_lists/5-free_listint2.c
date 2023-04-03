#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees linked list and sets head to null
 * @head: header pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr; /*pointer to traverse*/
	listint_t *next; /*keeps track of the next nodes*/

	ptr = *head;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}

