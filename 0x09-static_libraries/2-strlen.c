#include "main.h"

/**
 * _strlen - looks for the size of a string
 * @s: string
 *Return: length of string
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
