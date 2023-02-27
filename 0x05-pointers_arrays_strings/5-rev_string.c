#include "main.h"

/**
 * rev_string - prints reverse string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int k, i, j;
	char *str, temp;

	while (k >= 0)
	{
		if (s[k] == '\0')
			break;
		k++;
	}
	str = s;

	for (i = 0; i < (k - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
