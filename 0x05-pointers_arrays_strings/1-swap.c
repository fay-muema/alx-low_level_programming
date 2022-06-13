#include "main.h"

/**
 * swap_int - where the swap happens
 * @a: integer intialized to it
 * @b: initialized to another integer
 * Return: returns 0
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp =  a;
	a = b;
	b = temp;
}
