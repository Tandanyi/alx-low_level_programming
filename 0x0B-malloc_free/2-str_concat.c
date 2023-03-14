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
	{
		while (n = 0, s1[n] != '\0')
		{
			newstr[n] = s1[n];
			n++;
		}
		for (; n < size; n++)
			newstr[n] = s2[n];
		}
	return (newstr);

}

