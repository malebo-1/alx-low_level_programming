#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a singly linked list
 * @h: pointer to the header of the listint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
