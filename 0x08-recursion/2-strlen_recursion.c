#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s : string literal
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
