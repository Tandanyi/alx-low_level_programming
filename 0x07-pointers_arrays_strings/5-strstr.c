#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack - source
 * @needle - occurence of string in source
 *
 * Returns: pointer haystack if string is found
 * 	null if not found
 */

char *_strstr(char *haystack, char *needle)

	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
