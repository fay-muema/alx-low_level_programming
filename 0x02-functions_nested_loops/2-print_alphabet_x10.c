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

	for (i = 0; i <= '9'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
