#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s - string literal
 *
 */

void _puts_recursion( char *s)
{
	_putchar(s[0]);
	if (*s != '\0')
		_puts_recursion(*s++);
}
