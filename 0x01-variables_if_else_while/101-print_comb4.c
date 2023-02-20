#include <stdio.h>

/**
 * main- main function
 * Description: prints combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int n, n2, n3;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '1'; n2 <= '9'; n2++)
		{
			for (n3 = '2'; n3 <= '9'; n3++)
			{
				putchar(n);
				putchar(n2);
				putchar(n3);
				if (n != '8' || n2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
