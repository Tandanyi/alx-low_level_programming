#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- compares last digit
 * Description: gets last digit
 * compares to 5,6 and 0
 * Return:0
 */

int main(void)
{
	int n;
	int mod = n % 10;
	char *s = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (mod > 5 && !0)
	{
		printf("%s %d is %d and is greater than 5 \n", s, n, mod);
	}
	else if (mod < 6 && !0)
	{
		printf("%s %d is %d and is less than 6  and not 0\n", s, n, mod);
	}
	else if (mod == 0)
	{
		printf("%s %d is %d and is 0\n", s, n, mod);
	}
	return (0);
}
