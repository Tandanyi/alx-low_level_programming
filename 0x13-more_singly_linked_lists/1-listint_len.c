#include "lists.h"

/**
 * listint_len - finds the length of a list
 * @h : head of list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
