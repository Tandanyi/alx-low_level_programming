#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: input of letter
 *
 * Description: checks if given letter is lowercase
 * Return: 0 if uppercase
 * : 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
