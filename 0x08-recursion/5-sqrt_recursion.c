#include "main.h"
/**
 * nat_root - finds natural root of number
 * @n : number
 * @i : divider
 *
 * Return: i
 */
int nat_root(int n, int i);

int nat_root(int n, int i)
{
	if (n / i == i)
		return (i);
	if (i == 0)
		return (-1);
	nat_root(n, i--);
}		
/**
 * _sqrt_recursion - finds square root of a number
 * @n : number
 *
 * Return: root of n
 */

int _sqrt_recursion(int n)
{
	int i = n / 2 ;

	/*remove -tve numbers*/
	if (n < 0)
		return (-1);
	return (nat_root(n,i));
		

}
