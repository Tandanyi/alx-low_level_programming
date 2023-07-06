#include "main.h"

/**
 * get_bit - gets the value fo a bit at a certain index
 * @n : number given
 * @index : index
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int *number;
	unsigned int i, j = n;

	number = malloc(sizeof(int) * 32);
	if (!number)
		return (-1);
	/*check if 0*/
	if (n == 0)
		return (-1);
	for (i = 0; j > 0; i++)
	{
		number[i] = j % 2;
		j = j / 2;
	}
	if (i <= index)
	{
		return (-1);
	}

	return (number[index]);


}
