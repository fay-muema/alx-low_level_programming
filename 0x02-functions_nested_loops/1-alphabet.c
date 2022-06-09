#include "main.h"

/**
 * print_alphabet - prints alhabets in lowercase
 *
 * Return: Always returns 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
