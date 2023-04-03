#include "lists.h"

/**
 * add_nodeint_end - add node at the of list
 *@head: start of list
 *@n: node added
 *
 * Return: NULL if failed
 * address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	last = *head;

	if (*head == NULL)
		*head = temp;

	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = temp;
	}
	return (temp);

}
