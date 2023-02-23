#include "main.h"

/**
 * more_numbers - prints 0 - 14
 * Description- prints 0 -14 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	char i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}
		}
		_putchar('\n');
	}
}
