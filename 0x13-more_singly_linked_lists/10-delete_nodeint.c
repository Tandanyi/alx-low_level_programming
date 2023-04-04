#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at given index
 * @head : pointer to start of node
 * @index: wherenode should be deleted
 * Returns: 1 if siccess
 * -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *before, *tester;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);
	/*check if index is more than list count*/
	tester= *head;
	while(tester)
	{
		tester = tester->next;
		count++;
	}
	if (count < index)
		return (-1);

	/*when index is 0*/
	if (index == 0)
	{
		temp = *head;
		*head = (*head) ->next;
		free(temp);
		return (1);
	}

	/*set pointer to index*/
	while (*head && i < index - 1)
	{
		*head = (*head)->next;
		i++;
		}

	/*checks for null pointer*/
	if (!head && !(*head)->next)
		return(-1);

	/*assigns pointer to previous list to the next one*/
	before = *head; /*set pointer before to previous node*/

	temp =before->next;/*set temp to nth node*/

	before->next = temp->next;/*set next pointer of before to next pointer of temp*/


	free(temp);
	return(1);
}
