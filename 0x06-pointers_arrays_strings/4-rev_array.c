#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = 0;
	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		j = a[n - i - 1];
	}
}
