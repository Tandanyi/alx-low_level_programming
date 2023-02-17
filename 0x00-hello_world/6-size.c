#include <stdio.h>
/**
 * main - prints sizes of variables
 * Return: 0
 */
int main(void)
{
/*declare variables of their types*/
	char char_type;
	int int_type;
	long int l_int;
	long long int ll_int;
	float float_type;
/*get size*/
	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll_int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
		return (0);
}
