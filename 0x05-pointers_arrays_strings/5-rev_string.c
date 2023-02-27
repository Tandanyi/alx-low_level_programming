#include "main.h"

/**
 * rev_string - prints reverse string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int c, i, j;
	char *str, temp;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	str = s;

	for (i = 0; i < (c - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
