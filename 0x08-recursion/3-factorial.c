#include "main.h"

/**
 * factorial - gets factorial of number
 * @n : number input
 *
 * Return: factorial n
 */

int factorial(int n)
{
	if( n == 0)
		return(1);
	return (n * factorial(n - 1));
}
