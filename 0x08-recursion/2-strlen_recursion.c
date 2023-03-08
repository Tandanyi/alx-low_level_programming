#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s : string literal
 *
 * return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (1);
	return (_strlen_recursion(s) + _strlen_recursion(s + 1));
}
