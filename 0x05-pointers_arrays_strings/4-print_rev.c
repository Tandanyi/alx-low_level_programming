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
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
