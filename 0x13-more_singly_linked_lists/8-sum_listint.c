#include "lists.h"

/**
 * sum_listint - Calculates sum of the data (n) of a list
 * @head: Pointer to the head of the lst
 * Return: if list is empty 0, otherwise sum of all data
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
