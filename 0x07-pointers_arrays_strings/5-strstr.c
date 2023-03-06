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
{
	char *occurance, *tempNeedle;

	if (!*needle)		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack)
				return (occurance);
		}
		haystack++;
	}
	return ('\0');
}
