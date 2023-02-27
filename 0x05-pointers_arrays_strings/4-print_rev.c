#include "main.h"

/**
 * print_rev - prints string on reverse
 * @s: string literal
 * Return: nothing
 */

void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	while (l > 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
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
