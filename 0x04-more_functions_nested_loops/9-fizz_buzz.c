#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz
 * Description: prints 0-100.
 * multiples of three replaced with fizz
 * multiples of 5 replaced with buzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
