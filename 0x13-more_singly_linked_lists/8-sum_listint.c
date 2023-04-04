#include "lists.h"

/**
 * sum_listint - adds elements of a list
 * @head: list
 *
 * Return: number of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
