#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates string s1 with nth of s2
 * @s1: string 1
 * @s2: string 2
 *  @n: size to take from s2
 *
 * Return: poiter to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int s1Len, s2Len;
	unsigned int i, I;
	char nul = '\0';
	int total;

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;

	s1Len = strlen(s1);
	s2Len = strlen(s2);

	if (n >= s2Len)
		total = s2Len + s1Len;
	else
		total = s1Len + n;
	a = malloc(total + 1);
	if (a == NULL)
		return (NULL);
	i = 0, I = 0;
	while (s1[i] != '\0')
		a[i++] = s1[i++];
	while (s2[i] != '\0' && n-- != 0)
		a[i++] = s2[I++];
	a[i] = '\0';
	return (a);
}
