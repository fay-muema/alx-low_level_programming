#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet  ten times in lowecase
 *
 * Return: always returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
