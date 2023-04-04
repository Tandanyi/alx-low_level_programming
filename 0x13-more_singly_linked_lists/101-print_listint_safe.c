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
	listint_t *pointer = (listint_t *)head;
	int count = 0;
	int hash_table_size = 1024;
	listint_t **hash_table = calloc(hash_table_size, sizeof(listint_t *));
	int hash_index = ((uintptr_t)pointer) % hash_table_size;

	if (!hash_table)
		exit(98);

	if (!pointer)
		exit(98);
	while (pointer)
	{
		printf("[%p] %d\n",(void *)&(pointer->n), pointer->n);
		/*if pointer was already printed*/
		if (hash_table[hash_index] == pointer)
			break;
		if (pointer->visited)
			break;
		hash_table[hash_index] = pointer;
		pointer->visited = 1;

		pointer = pointer->next;
		count++;
	}
	return (count);
}
