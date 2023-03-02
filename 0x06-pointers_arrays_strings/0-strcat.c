#include "main.h"

/**
 * _strcat - adds a string to another string
 * @dest: destination
 * @src: source of string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	dest[i] = '\0';
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
}
