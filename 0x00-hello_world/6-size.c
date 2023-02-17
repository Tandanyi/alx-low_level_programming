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
	printf("Size of a char:", sizeof(char_type),"\n",
		"Size of an int:", sizeof(int_type),"\n",
		"Size of a long int:", sizeof(l_int),"\n",
		"Size of a long long int:", sizeof(ll_int),"\n",
		"Size of a float: ",sizeof(float_type),"\n");
		return (0);
}
