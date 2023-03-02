#include "main.h"

/**
 * leet - encode a string
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
		
			}
		}

		i++;
	}

	return (str);
}
