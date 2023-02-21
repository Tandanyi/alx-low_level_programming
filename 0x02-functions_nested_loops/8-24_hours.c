#include "main.h"

/**
 * jack_bauer - prints the minutes of the day
 * Description: prints the time of the day
 */

void jack_bauer(void)
{	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar("%02d", h);
			_putchar("%02d", m);
			_putchar('\n')
		}
	}
}
