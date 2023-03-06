#include "main.h"

/**
 * _strchr - locates a char in string
 * @s : string
 * @c : char
 *
 * Return: pointer to 1st occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
