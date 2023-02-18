#include <stdio.h>

/**
 * main-main function
 * Description: prints all characters in base 16
 * Return: 0
 */

int main(void)
{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
