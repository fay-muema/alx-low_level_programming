#include "function_pointers.h"

/**
 *int_index - the function searches for array
 *@array: inputs integer array
 *@size: size of array
 *@cmp: pointerto the function to compare values
 *Return: returns -1 if size <=0 otherwise 1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}

