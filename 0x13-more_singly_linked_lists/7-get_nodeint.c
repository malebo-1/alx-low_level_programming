#include "lists.h"

/**
 * get_nodeint_at_index - locates a node of a singly linked list
 * @head: Pointer to the head of the list
 * @index: The node to locate, indice start at 0
 * Return: if node doesn't exist NULL, otherwise locate node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
