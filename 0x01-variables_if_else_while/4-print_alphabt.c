#include <stdio.h>

/**
 * main- prints letters
 * Description: prints letters except q and e
 * Return: 0
 */

int main(void)
{
	char l;

	if (l != ('q' || 'e'))
	{
		for (l = 'a'; l >= 'z'; l++)
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
