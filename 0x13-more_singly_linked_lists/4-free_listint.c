#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a list
 * @head: pointer to the head of list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
