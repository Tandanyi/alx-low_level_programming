#include "main.h"

/**
 * _memcpy - copies to another char
 * @src : source
 * @dest : destination
 * @n : number of bytes to be copied
 *
 * Return: t
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int a;
	char *t = dest;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (t);
}
