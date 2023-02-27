#include "main.h"

/**
 * swap_int - swaps values of two variables
 * @a: first pointer
 * @b: second pointer
 * Description:the pointers swap the values of the variables
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
