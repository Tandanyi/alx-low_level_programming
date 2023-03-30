#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds lists to the end 
 * @head : start of list
 * @str : list
 *
 * Return: NULL if fail
 * content of new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *temp, *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dup;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
