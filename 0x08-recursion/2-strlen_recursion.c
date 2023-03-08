#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s : string literal
 *
 * return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
		return (1);
	return (i + _strlen_recursion(s + 1));
}
