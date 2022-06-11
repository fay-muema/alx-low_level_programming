#include "main.h"

/**
 * more_numbers - this function prints the results
 * Return: returns 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
