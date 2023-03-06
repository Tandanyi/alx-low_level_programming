#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
