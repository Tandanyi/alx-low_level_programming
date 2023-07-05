#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main- calls function to calculate
 * @argc: argument count
 * @argv: argument vector
 *
 * return: 0 when calculation success
 * 98 when no of arguments are wrong
 * 99 when result is null
 * 100 when result is 100
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
		exit(98);
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	
	result = get_op_func(argv[2](a,b));

	if(!result)
	{
		printf("Error\n");
		exit(99);
	}
	if(result == 100)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
	return 0;
}
