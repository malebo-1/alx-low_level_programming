#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 * @head: Pointer to address of the head of the list
 * @n: An integer
 * Return: if function fails NULL, otherwise address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->i = n;
	new->next = *head;

	*head = new;
	return (new);
}
