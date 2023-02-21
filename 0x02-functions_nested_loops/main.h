#include <stdio.h>
/**
 * printstring - prints _putchar
 * Description :declares a string
 * prints "_putchar"
 * Return: 0
 */
int printstring(void)
{
	char str[] = "_putchar";
	int size;

	for (size = '0'; str[size] != 0 ; size ++)
	{
		putchar(str[size]);
	}
		putchar('\n');
		return (0);
}
