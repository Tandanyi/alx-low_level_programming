#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of c
 * @c : strin literal
 * @size : size of c
 *
 * Return: pointer to c or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(sizeof(char) * size);
	for (n = 0; n <= size; n++)
	{
		str[n] = c;
	}
		return (str);
	free(str);
}
