#define FLAG
#include "lists.h"
#include <stdint.h>

/**
 * print_listint_safe- prints a linked list
 * @head: pointer to start of the list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *pointer = (listint_t *)head;
	int count = 0;
	int index = ((uintptr_t)pointer) % hash_table_size;
	int hash_table_size = 1024;
	listint_t **table = NULL;
		
	table = calloc(hash_table_size, sizeof(listint_t *));

	if (!table)
		exit(98);

	if (!pointer)
		exit(98);
	while (pointer)
	{
		printf("[%p] %d\n", (void *)&(pointer->n), pointer->n);

		/*if pointer was already printed*/
		if (table[index] == pointer)
			break;
		if (pointer->visited)
			break;

		table[index] = pointer;
		pointer->visited = 1;

		pointer = pointer->next;
		count++;
	}

	free(table);
	return (count);
}
