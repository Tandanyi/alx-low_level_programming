#include "main.h"

/**
 * leet - encode a sing
 * @s: sing
 * Return: encoded sing `s`
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = j + '0';

			}
		}

		i++;
	}

	return (s);
}
