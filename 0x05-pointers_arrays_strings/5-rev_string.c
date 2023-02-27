#include "main.h"

/**
 * rev_string - prints reverse string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char k;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}

}

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
