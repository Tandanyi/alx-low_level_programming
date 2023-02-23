#include "main.h"

/**
 * print_more_numbers - prints 0 - 14
 * Description- prints 0 -14 10 times
 * Return: nothing
 */

void print_more_numbers(void)
{
	int i;
	int j;

	for(j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
