#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a given position
 * @head : start of list
 * @index : index required
 *
 * Return: null if index does not exist
 * nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index)
	{
		if(head == NULL && i < index)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);

}
