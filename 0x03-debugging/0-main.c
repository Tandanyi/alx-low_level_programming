#include "main.h"

/**
 * main - tests main.c
 * Description: tests whether the function in main.c gives a correct output
 * Return: 0 when correct
 * 1 when wrong
 */

int main(void)
{
	int r;
	int i = 0;

	r = positive_or_negative(i);
	if (r == "0 is zero")
	{
		return (0);
	}
	else if (r != "0 is zero")
	{
		return (1);
	}
}
