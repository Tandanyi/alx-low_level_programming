#include "main.h"

/**
 * _pow_recursion - gets the value of a number raised to y
 * @x : number
 * @y : raised power
 *
 * Return: x power y
 */

int _pow_recursion(int y, int x)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y-1));
}
