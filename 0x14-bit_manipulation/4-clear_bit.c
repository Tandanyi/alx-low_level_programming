#include "main.h"

/**
 * clear_bit - clears value of a bit index to 1
 * @n : A pointer to the bit
 * @index : index given
 *
 * Return: -1 if an error occurs
 * 1 if successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
