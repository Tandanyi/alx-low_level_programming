#include "main.h"

/**
 * print_binary - converts prints a binary number
 * @n : number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;

	if (n == 0)
	{
		printf("0");
	}
	while (bit <= n)
	{
		bit <<= 1;
	}
	bit >>= 1;

	while (bit > 0)
	{
		if (bit <= n)
		{
			printf("1");
			n = n - bit;
		}
		else
			printf("0");
		bit >>= 1;
	}
}
