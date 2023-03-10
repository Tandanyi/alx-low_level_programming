#include "main.h"

/**
 * _isupper - checks uppercase letters
 * @c: input value of letter
 * Description: checks if letter given is uppercase
 * Return: 1 if uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
