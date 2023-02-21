#include "main.h"

/**
 * print_sign - determines the sign of a number
 * @n: number being determined
 *
 * Description: determines whether a number is positive or negative
 * Return:0 -when nuber is 0
 * 1 -when number is positive
 * -1 -when number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{	_putchar(0);
		return (0);
	}
}
