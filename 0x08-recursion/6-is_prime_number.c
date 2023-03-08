#include "main.h"

/**
 * is_prime - detects if a number is prime
 * @n: input
 * @i: iterator
 * Return: 1 if n is prime. 0 if n is not prime
 */
int is_prime( int n, int i);

int is_prime( int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - detects if a number is prime
 * @n: input
 * Return: 1 if n is prime
 *  0 if n is not prime
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
