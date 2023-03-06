#include "main.h"

/**
 * _strspn - gets length of substring
 * @s : source
 * @accept : a substring of characters
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a = 0;
	int b;

	while (*s)
	{
		i = 0;
		b = a;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				a++;
			i++;
		}
		if (b == a)
			break;
		s++;
	}
	return (a);
}
