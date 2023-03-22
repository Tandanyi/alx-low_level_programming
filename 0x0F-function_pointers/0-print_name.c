#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name of a string
 * @name : string literal
 * @f : function pointer
 */

void print_name(char *name, void(*f)(char *))
{
	if ((name != NULL) && (*f != NULL))
		f(name);
}
