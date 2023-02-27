#include "main.h"

/**
 * puts2- prints string
 * @str: string literal
 * Return: nothing
 */

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
