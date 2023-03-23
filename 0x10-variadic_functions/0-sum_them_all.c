#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds variables
 * @n: variable count
 *
 * Return: result of sum
 * 0 when n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		j += va_arg(arg, int);
	}

	va_end(arg);
	return (j);
}
