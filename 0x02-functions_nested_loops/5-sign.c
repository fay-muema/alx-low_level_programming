#include "main.h"

/**
 * print_sign - prints the output of the sign
 *
 * @n: is the initialized integer
 *
 * Return: returns 0 and 1 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('o');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
