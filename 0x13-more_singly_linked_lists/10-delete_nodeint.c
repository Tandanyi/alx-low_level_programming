#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at given index
 * @head : pointer to start of node
 * @index: wherenode should be deleted
 * Returns: 1 if siccess
 * -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (!head || !*head)
		return (-1);
	
	/*when index is 0*/
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/*set pointer to index*/
	while (*head && i < index - 1)
	{
		*head = (*head)->next;
		i++;
	}
	if (!head || !(*head)->next)
		return(-1);
	temp = (*head)->next;
	*head = (*head)->next;
	free(temp);
	return(1);
}
