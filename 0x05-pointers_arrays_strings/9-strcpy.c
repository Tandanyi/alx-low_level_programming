#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string to another string
 * @src : source
 * @dest : where string will be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
