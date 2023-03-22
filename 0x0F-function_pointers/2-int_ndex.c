#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array : array
 * @size : sze of array
 * @cmp : function pointer
 *
 * Return : int_index returns the index of the first element when success
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	if (size <= 0)
		return -1;
	for (*array; *array != array[size]; array++)
	{
		if (cmp(*array) != 0)
			return *array;
	}
	return -1;
}
