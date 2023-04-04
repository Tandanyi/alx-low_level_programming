#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head- pointer to the start of the list
 *
 */

void free_listint2(listint_t **head)
{
        listint_t *temp;
	listint_t *pointer;
	pointer = *head;

	if (head == NULL)
		return;

        while (pointer != NULL)
       	{
		temp = pointer;
		pointer = pointer->next;
		free(temp);
	}
	*head = NULL;
}