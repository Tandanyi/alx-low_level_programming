#include "lists.h"

/**
 * free listint - frees a list
 * @head- pointer to the start of the list
 *
 */

void free_listint(listint_t *head)
{
        listint_t *temp;

        while (head != NULL)
       	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
