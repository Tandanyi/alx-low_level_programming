#include "main.h"

/**
 * flip_bits - returns number of bits that need to be flipped
 * @n : number variable
 * @m : number variable
 *
 * Return: count of numbers to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int filter;

	filter = n ^ m;
	while (filter > 0)
	{
		count++;
		filter &= (filter - 1);
	}
	return (count);

}
