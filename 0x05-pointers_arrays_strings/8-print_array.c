#include "main.h"
#include <stdio.h>

/**
 * print_array - prints some parts of an array
 * @a : pointer of array
 * @n : number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (a[i] = 0; i < n; i++)
	{
		printf("%d ,", a[i]);
	}
}
