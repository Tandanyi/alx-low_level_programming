#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - calls calc functions
 * @s : function pointer
 *
 * Return: result of operation
 */

int (*get_op_func)(char *s))(int, int)
{
	op_t.ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op_t.ops[i])
	{	
		if (s != ops[i])
			return (NULL);
		i++
	}
	return (ops[i].f);
}
