#include "main.h"

/**
 * print_line - prints a line
 * @n: input length
 *
 * Description: prints a line according to n value
 * if n is 0 print only new line
 * Return- nothing
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (n == 0)
		{
			break;
		}
		_putchar(95);
	}
	_putchar('\n');
}
