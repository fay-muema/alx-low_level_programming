#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name_as_is - prints a name as is
 *@name: name of the person
 *Return: Alwaays returns 0
 */

void print_name_as_is(char *name)
{
	printf("hello, my name is %s\n", name);
}

