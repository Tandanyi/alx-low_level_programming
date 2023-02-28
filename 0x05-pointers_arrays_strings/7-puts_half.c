#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int l;

	l = _strlen(str);

	if (l % 2 == 1)
	{
		for (l = l / 2 - 1; str[l] != '\0'; l++)
		{
			_putchar(str[l]);
		}
			_putchar('\n');
	}
	else
	{
		for (l = l / 2; str[l] != '\0'; l++)
		{
			_putchar(str[l]);
		}
		_putchar('\n');


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
