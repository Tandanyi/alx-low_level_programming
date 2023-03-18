#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - makes an array with numbers
 * @min: start number
 * @max: max num
 *
 * Return: pointer to arr or null
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0, I = 0;
	int sum;

	if (min > max)
		return (NULL);
	sum = max - min;
	a = malloc(sizeof(int) * (sum + 1));
	if (a == NULL)
		return (NULL);
		I = min;
	while (i <= sum)
		a[i++] = I++;
	return (a);
}
