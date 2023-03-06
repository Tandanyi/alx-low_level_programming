#include "main.h"

/**
 * _memcpy - copies to another char
 * @src : source
 * @dest : destination
 * @n : number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
