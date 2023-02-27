#include "main.h"

/**
 * _puts- prints string
 * @str: string literal
 * Return: nothing
 */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
