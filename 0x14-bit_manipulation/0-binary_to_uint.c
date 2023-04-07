#include "main.h"
/**
 * power - finds the power of a number
 * @x : number
 * @y : number raised
 *
 * Return: x raised to y
 */

unsigned int power(unsigned int x, int y)
{
	if (y == 0)
		return (1);
	x = x * power(x, y-1);
	return (x);
}

/**
 * binary_to_uint - changes binary to int
 * @b : pointer to binary number
 *
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base10 = 0;
	int i = 0, j;

	if (!b)
		return (0);
	/*finding the sze*/
	while (b[i] != '\0')
	{
		if (b[i] != 49 && b[i] != 48)
			return (0);
		i++;
	}
	i--;

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == 49)
			base10 = base10 + power(2, i);
		i--;
	}
	return base10;
}
