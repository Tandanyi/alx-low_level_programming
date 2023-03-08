#include "main.h"

/**
 * factorial - gets factorial of number
 * @n : number input
 *
 * Return: factorial n
 * -1 when n is negative
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
