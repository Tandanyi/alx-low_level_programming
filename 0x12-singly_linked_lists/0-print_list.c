#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints out  the contents of a linked list
 * @h : list
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);

}
