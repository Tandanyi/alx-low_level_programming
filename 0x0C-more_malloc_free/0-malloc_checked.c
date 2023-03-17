#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b : size of memory
 * 
 * Return: pointer to the memory
 * if fails, status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
