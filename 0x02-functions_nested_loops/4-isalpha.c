#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input of letter
 *
 * Description: checks if given what is given is a letter
 * Return: 1 if letter
 * : 0 if other
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
