#include "main.h"

/**
 * _memset - adds b to memory n times
 * @b : value being added
 * @s : pointer to where b is added
 * @n : number of times b is added
 *
 * Return :pointer s
 */

char *_memset( char *s, char b, unsigned int n)
{
	unsigned int a;

	for(a = 0; a <= n; a++)
	{
		s[a] = b;
	}
	return (s);
}
