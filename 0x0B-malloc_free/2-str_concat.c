#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - combines twostrings in new mem space
 * @s1 - first string
 * @s2 - second string
 *
 * Return: pointer to new memspace is successfull
 * null if empty or failure
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int n;
	int size;

	size = strlen(s1) + strlen(s2);
	newstr = (char * ) malloc(sizeof(char) * size);
	if (newstr == NULL)
		return (NULL);
	else if(s1 == NULL && s2 == NULL)
		return (NULL);
	else
		for (n = 0; n < size; n++)
			newstr[n] = *s1 + *s2;
	return (newstr);

}

