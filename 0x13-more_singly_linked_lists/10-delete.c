#include "lists.h"
/**
 * tester - checks if index given is more than list count
 * @index: index given
 * @head: start of list
 *
 * Return: 0 if less
 * 1 if more
 */
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
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to pointer to start of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *before;
	if (head == NULL || *head == NULL)
		return (-1);
	if (tester(index, *head) == 1)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	before = *head;
	for (i = 0; i < index - 1; i++)
	{
		before = before->next;
		if (before == NULL)
			return (-1);
	}
	temp = before->next;
	before->next = temp->next;
	free(temp);
	return (1);
}
