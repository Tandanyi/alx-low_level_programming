#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head : start of node
 * @n : new node
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int new_n;

		temp = malloc(sizeof(listint_t));
		if (!temp)
			return (NULL);

		new_n = n;

		temp->next = *head;
		temp->n = new_n;
		*head = temp;

		return (temp);
}
