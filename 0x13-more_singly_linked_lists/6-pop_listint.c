#include "lists.h"

/**
 * pop_listint - Deletes the head node of the list
 * @head: Pointer to the address of the head of the list
 * Return: if linked list empty - 0, otherwise head node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
