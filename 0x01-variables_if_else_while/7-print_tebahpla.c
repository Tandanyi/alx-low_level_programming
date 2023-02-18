#include <stdio.h>

/**
 * main - printing alphabets
 * Description: prints lowercase alphabets
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
