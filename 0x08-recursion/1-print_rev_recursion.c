#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s : string literal
 *
 * return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
		return;
	_print_rev_recursion(s++);
	_putchar(*s);
}

