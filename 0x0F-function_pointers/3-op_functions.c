#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum
 * @a: input
 * @b:input
 * 
 * Returns: sum
 */
int op_add(int a,int b)
{
	return(a + b);
}

/**
 * op_sub - subraction
 * @a: input
 * @b:input
 *
 * Returns: subtraction
 */

int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - multiplies
 * @a: input
 * @b: input
 *
 * Returns: multiplication
 */

int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_div
 * @a: input
 * @b: input
 *
 * Returns: division
 */
int op_div(int a, int b)
{
	if (b == 0)
		exit(100);
	return(a / b);
}
/**
 * op_mod
 * @a: input
 * @b: input
 *
 * Returns: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
		exit(100);
	return(a % b);
}
