#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - determines if random var is positive or negative
 *Description:gets random var and see if is is -tve or +tve
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if var is positive print positive else negative*/
	if (n > 0)
		{printf("%d is positive\n", n);
		}
		else if (n == 0)
		{printf("%d is zero\n", n);
		}
		else
		{printf("%d is negative\n", n);
		}
		return (0);
}
