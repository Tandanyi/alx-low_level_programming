#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - combines twostrings in new mem space
 * @s1 : first string
 * @s2 : second string
 *
 * Return: pointer to new memspace is successfull
 * null if empty or failure
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j, k;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	newstr = malloc(sizeof(char) * (i + j + 1));

	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newstr[k] = s1[k];

	size = j;
	for (j = 0; j <= size; k++, j++)
		newstr[k] = s2[j];
	return (newstr);

}

