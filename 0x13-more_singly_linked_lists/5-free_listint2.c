#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the start of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;


	if (!head || !*head)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
