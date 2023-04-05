#include "lists.h"

/**
 * tester - ckecks if index given is more than list count
 * @index: index given
 * @head: start of list
 *
 * Return: 0 if less
 * 1 if more
 */

int tester(unsigned int index, listint_t *head);
int tester(unsigned int index, listint_t *head)
{
	unsigned int count = 0;
	listint_t *tester;

	tester = head;
	while (tester)
	{
		tester = tester->next;
		count++;
	}
	if (count <= index)
		return (1);
	else
		return (0);
}

/**
 * delete_nodeint_at_index - deletes at given index
 * @head : pointer to start of node
 * @index: wherenode should be deleted
 *
 * Return: 1 if success
 * -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *before;

	if (!head || !*head)
		return (-1);
	/*check if index is more than list count*/

	if (tester(index, *head) == 1)
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
	before = *head;
	for (i = 0; i < index - 1; i++)
	{
		before = before->next;
		if (before == NULL)
			return (-1);
	}

	/*assigns pointer to previous list to the next one*/
	temp = before->next;/*set temp to nth node*/
	before->next = temp->next;/*set pointer to next pointer of temp*/

	free(temp);
	return (1);
}
