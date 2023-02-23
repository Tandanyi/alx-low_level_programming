#include "main.h"

/**
 * _isdigit - checksfor single digit
 * @c: input digit
 * description : checks whether number is a digit (0-9)
 * Return: 1 if a digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
