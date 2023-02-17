#include <stdio.h>

/**
 * main - printing alphabets
 * Description: prints lowercase and uppercase alphabets
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
