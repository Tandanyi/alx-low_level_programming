#include "main.h"

/**
 * _memset - adds b to memory n times
 * @b : value being added
 * @s : pointer to where b is added
 * @n : number of times b is added
 *
 * Return: t
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	char *t = s;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (t);
}
