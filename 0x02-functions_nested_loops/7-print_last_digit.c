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
	int o;

	if (n < 0)
	{
		o = -1 * (n % 10);
		_putchar(o + '0');
		return (o);
	}
	else
	{
		o = n % 10;
		_putchar(o + '0');
		return (o);

}
