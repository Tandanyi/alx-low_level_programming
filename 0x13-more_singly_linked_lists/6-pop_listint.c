#include "lists.h"

/**
 * pop_listint - frees a list
 * @head: pointer to the start of the list
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
