#include "lists.h"
#include <stdint.h>

/**
 * print_listin_safe- prints a linked list
 * @head: pointer to start of the list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *pointer = head;
	int count = 0;

	if (!pointer)
		exit(98);
	while (pointer)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		count++;
	}
	return (count);
}
