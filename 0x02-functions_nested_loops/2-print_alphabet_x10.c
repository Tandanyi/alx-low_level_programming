#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints letters
 * Description - prints letters 10 times
 * Return - nothing
 */

void print_alphabet_x10(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
	{	for (l = 'a'; l <= 'z'; l++)
		{
			putchar(l);
		}
		putchar('\n');
	}

}
