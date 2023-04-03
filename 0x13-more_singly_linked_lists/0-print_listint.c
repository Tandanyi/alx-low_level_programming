#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
