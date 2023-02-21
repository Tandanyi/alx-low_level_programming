#include "main.h"

/**
 * print_last_digit- prints the last digit
 * @n: input value
 *
 * Description: prints the last digit of a number
 * Return: new n
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
