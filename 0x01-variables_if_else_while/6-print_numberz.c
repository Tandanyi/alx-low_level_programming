#include <stdio.h>

/**
 * main - prints number
 * Description: prints numbers in base 10
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
