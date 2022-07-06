#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints a name as is
 *@name: name of the person
 *@f: function  pointer
 *Return: Alwaays returns 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

