#include <stdio.h>

/**
 * main- prints letters
 * Description: prints letters except q and e
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
