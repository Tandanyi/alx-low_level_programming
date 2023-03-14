#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a copy of a string to a new mem space
 * @str: string
 *
 * return: null if str is null
 * 	: pointer to copy of str
 * 	: null if insufficient memory avalable
 */

char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int a;
	int b;

	if (str == NULL)
		return (NULL);
	b = strlen(str);
	newstr = (char *)malloc(b * sizeof(char));
	if (newstr != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
			newstr[a] = str[a];
	}
	else
	{
		return (NULL);
	}
	newstr[a] = '\0';
	return (newstr);
}
