#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - counts contents of a linked list
 * @h : list
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);

}
