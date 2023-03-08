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

int check_palindrome(char *s, int l, int i);

/**
 * check_palindrome - checks of string is palindrome
 * @s : string
 * @l : length of string
 * @i : index of string
 *
 * Return: 1 if palidrome
 * 0 if not palindrome
 */

int check_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check_palindrome(s, l, i + 1));
	return (0);
}

/**
 * is_palindrome - confirms string is palindrome
 * @s : string
 *
 * Return: 1 if palindrome
 * 0 if not palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen_recursion(s);

	if(!*s)
		return 1;
	return (check_palindrome(s, l, i));
}
