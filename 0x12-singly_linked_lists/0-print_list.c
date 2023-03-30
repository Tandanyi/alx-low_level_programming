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
	size_t len = 0;
	
	if(h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h != NULL)
		{
			len++;
			printf("[%d] %s\n",h->len, h->str);
			h = h -> next;
		}
	}
	return(len);

}
