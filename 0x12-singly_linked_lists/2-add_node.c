#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add node- adds a list tothe beginning of list
 * @head - start of list
 * @str - new list
 *
 * Return: null if failed
 * new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dup;
	int len;

	for (len = 0; str[len];)
	{
		len++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(temp);
		return (NULL);
	}
	
	temp->str = dup;
	temp->next = *head;
	temp->len = len + 1;
	
	*head = temp;

	return(temp);
}
