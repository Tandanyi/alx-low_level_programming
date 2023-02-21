#include <stdio.h>
#include "main.h"
/**
 * printstring- function prototype
 * Description: function prototype of main.h function
 * Return: 0
 */
int printstring(void);

/**
 * main - prints _putchar
 * Description :calls function printstring
 * prints "_putchar"
 * Return: 0
 */

int main(void)
{
	printstring();
	return (0);
}

/**
 * printstring - prints _putchar
 * Description :declares a string
 * prints "_putchar"
 *
 * Return: 0
 */

int printstring(void)
{
	char str[] = "_putchar";
	int size;

	for (size = 0; str[size] != '\0'; size++)
	{
		putchar(str[size]);
	}
		putchar('\n');
		return (0);
}
