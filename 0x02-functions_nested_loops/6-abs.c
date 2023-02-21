#include "main.h"

/**
 * _abs -gets absolute value
 * @n: input value
 *
 * Description: changes a number to its abolute value
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n + (-2 * n);
		return (n);
	}
}
