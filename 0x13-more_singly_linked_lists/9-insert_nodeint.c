#include "lists.h"

/**
 * insert_nodeint_at_index - inserts var at partcular node
 * @head : pointer to first node
 * @idx : index where node is added
 * @n : node to be added
 *
 * Return: address of new node
 * Null if not successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *org;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	/*when index is at the start*/
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/*otherwise*/
	org = *head;
	while (org && i < idx - 1)
	{
		org = org->next;
		i++;
	}

	/*check if idx exists*/
	if (!org)
	{
		free(new);
		return (NULL);
	}

	new->next = org->next;
	org->next = new;
	return (new);
}
