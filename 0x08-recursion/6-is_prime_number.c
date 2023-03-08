#include "main.h"

/**
 * prime - detects if input is prime number
 * @n : input
 * @i : iterator
 * Return: 1 if prime
 * 0 if not prime
 */

int prime(int n, int i);
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - detects if input is prime number
 * @n : input
 * Return: 1 if prime
 * 0 if not prime
 */

int is_prime_number(int n)
{
	if(n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return(prime(n, 2));
}
