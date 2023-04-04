#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list, even with a loop
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			exit(98);
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	while (head != slow)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	printf("[%p] %d\n", (void *)head, head->n);
	count++;
	return (count);
}

