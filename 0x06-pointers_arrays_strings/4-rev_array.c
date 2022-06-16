#include "main.h"
/**
 * reverse_array - reverses the arrays
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */


void reverse_array(int *a, int n)
{
	int b;
	int c;
	int d;

	{
		for (b = 0; b < n - 1; b++)
		{
			for (c = b + 1; c > 0; c--)
			{
				d = *(a + c);
				*(a + c) = *(a + (c - 1));
				*(a + (c - 1)) = d;
			}
		}
	}
}
