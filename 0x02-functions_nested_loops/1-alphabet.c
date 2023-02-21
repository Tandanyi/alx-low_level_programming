#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description:  defines how lowercase letters will be printed
 * Return: 0
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
}
