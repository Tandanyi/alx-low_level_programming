#include "main.h"

/**
 * _strncat - adds a string to another string
 * @dest: destination
 * @src: source of string
 * @n: number of bytes
 * Return: dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		if (i == n)
		{
			break;
		}
	}
	return (dest);
}
