#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			o = m * n;

			if (o > 9)
			{
				_putchar(o / 10 + '0');
				_putchar(o % 10 + '0');
			}
			else if (n != 0)
			{
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(o + '0');
			}

			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
