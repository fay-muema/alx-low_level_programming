#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - exectutes a function.
 *@array: input integer array.
 *@size: size of the array
 *@action: this is the pointer to the fumction
 *
 * Return: there is no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
