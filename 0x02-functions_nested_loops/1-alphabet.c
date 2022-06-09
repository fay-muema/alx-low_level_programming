#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lowercase
 *
 * Return: always returns o
 */

void print_alphabet(void)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
