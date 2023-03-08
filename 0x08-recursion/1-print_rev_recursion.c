#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s : string literal
 *
 * return: void
 */

void _print_rev_recursion(char *s)
{
	int a = 0;
	
	if (*s == s[a])
	{
		while (*s != '\0')
			s++;
	}
	_putchar(*s);
	_print_rev_recursion(s--);
}

