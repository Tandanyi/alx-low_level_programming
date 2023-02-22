#include <stdio.h>

/**
 * main - main
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{	
			total += j;
			printf("%d\n", total);
		}
		k = j;
		j += i;
		i = k;
	}
	return (0);
}
