#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - performs a function for every var
 * @array : array if intergers
 * @size : size of array
 * @action : function pointer
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL && size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
